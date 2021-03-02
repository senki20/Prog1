/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"



int main()
{

	Simple_window win {Point{100,100}, 600, 400, "Canvas"};
	win.set_label("Canvas #1");
	////////////////Grid//////////////////////

	Axis x{Axis::x,Point{20,300},280,10,"x tengely"};
	win.set_label("Canvas #2");

	win.attach(x);

	Axis y{Axis::y,Point{20,300},280,10,"y tengely"};
	y.set_color(Color::red);
	win.attach(y);
	win.set_label("Canvas #3");

	Function sine {sin,0,100,Point{20,150},1000,50,50};
	win.attach(sine);
	win.set_label("Canvas #4");


	Polygon poly;
	poly.add(Point{350,100});
	poly.add(Point{400,200});
	poly.add(Point{200,0});
	poly.set_color(Color::red);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	win.set_label("Canvas #5");


	Rectangle r {Point(200,200),100,50};
	win.attach(r);
	win.set_label("Canvas #6");

	Closed_polyline polyc;
	polyc.add(Point{100,50});
	polyc.add(Point{200,50});
	polyc.add(Point{200,100});
	polyc.add(Point{100,100});
	polyc.add(Point{50,75});
	win.attach(polyc);

	r.set_fill_color(Color::yellow);
	poly.set_style(Line_style(Line_style::dash,4));
	polyc.set_style(Line_style(Line_style::dash,2));
	poly.set_fill_color(Color::green);
	win.set_label("Canvas #7");

	Text t{Point{150,150},"Hello, Graphical World"};
	win.set_label("Canvas #8");
	win.attach(t);

	t.set_font(Font::times_bold);
	t.set_font_size(20);
	win.set_label("Canvas #9");

	Image ii{Point{100,50},"badge.jpg"};
	ii.set_mask(Point{200,200},100,100);
	win.attach(ii);

	Circle c {Point{100,200},50};
	Mark m {Point{100,200},'x'};

	win.attach(c);
	win.attach(m);

	win.wait_for_button();
    

}

