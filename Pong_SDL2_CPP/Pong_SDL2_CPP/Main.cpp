#include <SDL.h>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	/* Initialisation simple */
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stdout, "Echec de l'initialisation de la SDL (%s)\n", SDL_GetError());
		return -1;
	}

	{
		/* Création de la fenêtre */
		SDL_Window* pWindow = NULL;
		pWindow = SDL_CreateWindow("Ma premiere application SDL2", SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			640,
			480,
			SDL_WINDOW_SHOWN);

		if (pWindow)
		{
			SDL_Delay(3000); /* Attendre trois secondes, que l'utilisateur voit la fenêtre */

			SDL_DestroyWindow(pWindow);
		}
		else
		{
			fprintf(stderr, "Erreur de creation de la fenetre: %s\n", SDL_GetError());
		}
	}

	SDL_Quit();

	return 0;
}