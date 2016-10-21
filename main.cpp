#include <cmath>
#include <SFML/Graphics.hpp>

/* \file main.cpp
 *
 * \date 10/21/2016
 *
 */

int main(int argc,char* argv[]) 
{
	// Create window... 
	sf::RenderWindow window(sf::VideoMode(512,(int)(.5*sqrt(3.)*(float)512)), "Britain- by Life Art Studios--BETA");

	// Limit the frame rate
	window.setFramerateLimit(60);

	// Background image's texture
	sf::Texture texture;

	// Verify the load of star field background
	if (!texture.loadFromFile("./img/starfield.jpg"))
	{
		// Error... 
		return -1;
	}

	// Sprite for background image
	sf::Sprite background;
	background.setTexture(texture);

	// Main SFML event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();

		// Output the background sprite.
		window.draw(background);
		
		window.display();
	}

	return 0;
}
