// TimeBom.cpp : Defines the entry point for the application.
//

#include "TimeBom.h"

class sceneprep {
public:
	int finddir() {
		std::cout << ""; //placeholder
	}
};

class Save {
public:
	void save() {
		std::cout << ""; //Placeholder
	}
public:
	std::string load() {
		std::cout << ""; //placeholder
	}
};

class Render {
public:
	int decidel() {
		//decides where and how to draw, starts with poly's, than draws finer detail
		std::cout << ""; //placeholder.. surprise!
	}
public:
	int effects(std::string ef) { //Anti-alaising, RTX, etx;
		std::cout << "";
	}
};

class Logic {
public:
	void tick() {
		std::cout << "Placeholder" << std::endl;
		//this controls AI, as well as frame based events
	}
	void biai() {
		std::cout << ""; //placeholde
	}
	class ai {
	public:
		void tick() {
			std::cout << ""; //hmm.. i wonder what this is. Placeholder, maybe?
		};
	};
};

void loop(int offput, int run, int fps) {
	Logic call;
	int c = run;
	int loop = 0;
	r = 1 / fps;
	while (c == 1) {
		call.tick();
		std::this_thread::sleep_for(std::chrono::milliseconds(r));
		loop++;
		if (loop > (fps - 1) {
			c = 2; //stops code
		}
	}
}

int pixf(int sx, int sy) {
	int r = sx * sy;
	return r;
}

int main()
{
	std::cout << "Hello CList!" << std::endl;
	int x = 1920; //temp values, v
	int y = 1080; //temp values, should read from setting file
	int size = pixf(x, y);
	int fps = 60;
	loop(1, 1, fps); //should be fast enough.
	return 0;
};
