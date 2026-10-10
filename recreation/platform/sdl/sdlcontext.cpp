#include "platform/sdl/sdlcontext.h"

#include <SDL3/SDL.h>
#include <stdexcept>

namespace nocturne::platform::sdl {

CSdlContext::CSdlContext() {
    // An unfocused copy that misses a trigger's release reads it as held on refocus; the game
    // ignores the pad while unfocused instead.
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
    // mainWindowProc refuses SC_SCREENSAVE and SC_MONITORPOWER.
    SDL_SetHint(SDL_HINT_VIDEO_ALLOW_SCREENSAVER, "0");
    // Loading a mission runs long without pumping events; the window manager's ping would call
    // the game unresponsive.
    SDL_SetHint(SDL_HINT_VIDEO_X11_NET_WM_PING, "0");
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD | SDL_INIT_AUDIO)) {
        throw std::runtime_error(SDL_GetError());
    }
}

CSdlContext::~CSdlContext() {
    SDL_Quit();
}

} // namespace nocturne::platform::sdl
