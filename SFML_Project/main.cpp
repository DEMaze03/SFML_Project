/* CSCI 200: Lab 6A: L6A - SFML: Bob Ross
 *
 * Author: Daylon Maze
 *     
 * main.cpp used to draw a certain speedy rodent
 */

#include <SFML/Graphics.hpp>
using namespace sf;

#include <iostream>
using namespace std;

int main() {
    // create a window
    RenderWindow window( VideoMode(640, 640), "Celerrimus Erinaceinae" );

    // create an event object once to store future events
    Event event;

    // while the window is open
    while( window.isOpen() ) {
        // clear any existing contents
        window.clear();

        // BEGIN DRAWING HERE

         Font myFont;
        if( !myFont.loadFromFile( "data/arial.ttf" ) )
            return -1;
        // place in drawing section
        Text label;
        label.setFont( myFont );
        label.setString( "Eggman has stolen the Chaos Emeralds for \n the last and final time" );
        label.setPosition( 10, 520 );
        label.setFillColor( Color::White );
        window.draw( label );

        CircleShape face;
        face.setPosition( 160, 160 );
        face.setRadius( 150 );
        face.setFillColor( Color::Blue );
        window.draw( face );

        CircleShape triangle1(75,3);
        triangle1.setPosition(520,180);
        triangle1.setRotation(90.f);
        triangle1.setFillColor(Color::Blue);
        window.draw(triangle1);

        CircleShape triangle2(75,3);
        triangle2.setPosition(520,250);
        triangle2.setRotation(90.f);
        triangle2.setFillColor(Color::Blue);
        window.draw(triangle2);

        CircleShape triangle3(75,3);
        triangle3.setPosition(520,300);
        triangle3.setRotation(90.f);
        triangle3.setFillColor(Color::Blue);
        window.draw(triangle3);

        CircleShape triangle4(40,3);
        triangle4.setPosition(350,150);
        triangle4.setRotation(20.f);
        triangle4.setFillColor(Color(210, 180, 140));
        window.draw(triangle4);

        CircleShape triangle5(40,3);
        triangle5.setPosition(150,180);
        triangle5.setRotation(-40.f);
        triangle5.setFillColor(Color::Blue);
        window.draw(triangle5);

        CircleShape eye1(40);
        eye1.setPosition(345,270);
        eye1.setRotation(110.f);
        eye1.setScale(1.7f, 1);
        eye1.setFillColor(Color::White);
        window.draw(eye1);

        CircleShape iris1(40);
        iris1.setPosition(305,270);
        iris1.setRotation(90.f);
        iris1.setScale(0.8f, 0.5f);
        iris1.setFillColor(Color::Black);
        window.draw(iris1);

        CircleShape eye2(40);
        eye2.setPosition(225,250);
        eye2.setRotation(70.f);
        eye2.setScale(1.7f, 1);
        eye2.setFillColor(Color::White);
        window.draw(eye2);

        CircleShape iris2(40);
        iris2.setPosition(225,270);
        iris2.setRotation(90.f);
        iris2.setScale(0.8f, 0.5f);
        iris2.setFillColor(Color::Black);
        window.draw(iris2);

        CircleShape cheek(60);
        cheek.setPosition(300,330);
        cheek.setFillColor(Color(210, 180, 140));
        window.draw(cheek);

        CircleShape mouth(50);
        mouth.setPosition(190,330);
        mouth.setRotation(20.f);
        mouth.setScale(2.f, 1);
        mouth.setFillColor(Color(210, 180, 140));
        window.draw(mouth);

        CircleShape nose(40);
        nose.setPosition(150,360);
        nose.setRotation(20.f);
        nose.setScale(0.8f, 0.5f);
        nose.setOutlineThickness(1);
        nose.setOutlineColor(Color::White);
        nose.setFillColor(Color::Black);
        window.draw(nose);

       

        //  END  DRAWING HERE

        // display the current contents of the window
        window.display();

        // BEGIN EVENT HANDLING HERE
        // check if any events happened since the last time checked
        while( window.pollEvent(event) ) {
            // if event type corresponds to pressing window X
            if(event.type == Event::Closed) {
                // tell the window to close
                window.close();
            }
        }
    }

    return 0;
}