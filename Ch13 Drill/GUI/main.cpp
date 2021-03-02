/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"



int main()
{

	Simple_window win {Point{100,100}, 800, 1000, "Canvas"};

	////////////////Grid//////////////////////

	Lines grid;
	for (int i = 0; i < 900; i+=100)
	{
		grid.add(Point{0,i},Point{800,i});
		
	}

	for (int i = 0; i < 900; i+=100)
	{
		grid.add(Point{i,0},Point{i,800});
		
	}
	win.attach(grid);

	////////////////Grid//////////////////////


	////////Red Rectangle//////////////////

	Vector_ref<Rectangle> rect;


for (int i = 0; i < 8; i++)
{
	

	rect.push_back(new Rectangle{Point{i*100,i*100},100,100});
	
	
	rect[i].set_fill_color(Color::red);
	rect[i].set_color(Color::invisible);
	win.attach(rect[i]);
	
}	

////////Red Rectangle//////////////////


////////////////3 Image//////////////////


Vector_ref<Image> img;

for (int i = 1; i < 4; i++)
{
	img.push_back(new Image{Point{(i-1)*100,i*200},"img1.jpg"});
	img[i-1].set_mask(Point{100,100},200,200);
	win.attach(img[i-1]);
}



////////////////3 Image//////////////////


	
	
		
	
	

	/////////////////Moving Image////////////////
	
	Image moving{Point{0,0},"badge.jpg"};
	
	
	moving.set_mask(Point{100,100},100,100);
	win.attach(moving);
	for (int i = 0; i < 8; i++)
	{
		for (int s = 0; s < 8; s++)
		{
			win.wait_for_button();
			
			moving.move(100,0);
		
		}
		moving.move(-800,0);
		moving.move(0,100);
		
		
	}
	
	/////////////////Moving Image////////////////

    

}

