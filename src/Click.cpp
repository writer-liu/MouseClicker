#include "Click.h"
#include <iostream>
#include <SDL3/SDL.h>

using namespace std;

SDL_Keycode listen_click_key(){
    // 初始化 SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        cerr << "SDL_Init Error: " << SDL_GetError() << endl;
        return 1;
    }

    // 创建一个隐藏的窗口用于捕获键盘事件
    SDL_Window* window = SDL_CreateWindow("KeyListen", 0, 0, SDL_WINDOW_HIDDEN);

    // 检查窗口是否创建成功
    if (!window) {
        cerr << "SDL_CreateWindow Error: " << SDL_GetError() << endl;
        SDL_Quit();
        return 1;
    }

    bool running = true;
    SDL_Event event;
    SDL_Keycode last_key = 0;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                running = false;
            }
            if (event.type == SDL_EVENT_KEY_DOWN) { 
                SDL_Keycode key = event.key.keysym;
                cout << "Key down: " << SDL_GetKeyName(key) << endl;
                last_key = key;
                if (key == SDLK_ESCAPE) running = false;
            }
            if (event.type == SDL_EVENT_KEY_UP) {
                SDL_Keycode key = event.key.keysym;
                cout << "Key up: " << SDL_GetKeyName(key) << endl;
            }
        }
        SDL_Delay(10); // 防止CPU占用过高
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return last_key;

}

void start_click_key(){

}
