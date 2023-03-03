#include <gui/screen2_screen/Screen2View.hpp>
extern  int counter;
Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}
 void Screen2View::SLIDERA()
    {
        // Override and implement this function in Screen2
	counter +=20;
	slider1.setValue(counter);

    }
    void Screen2View::SLIDERE()
    {
        // Override and implement this function in Screen2
    	counter -=20;
    	slider1.setValue(counter);

        }

