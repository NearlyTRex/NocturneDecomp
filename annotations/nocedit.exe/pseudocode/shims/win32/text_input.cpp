// =============================================================================
// TEXT INPUT — see text_input.h
// =============================================================================

#include "win32/text_input.h"

#include <SDL.h>

namespace {

int s_depth = 0;
bool s_started = false;

} // namespace

extern "C" void nocturne_text_input_begin(void) {
    if (s_depth++ == 0 && !SDL_IsTextInputActive()) {
        SDL_StartTextInput();
        s_started = true;
    }
}

extern "C" void nocturne_text_input_end(void) {
    if (s_depth == 0)
        return;
    if (--s_depth == 0 && s_started) {
        SDL_StopTextInput();
        s_started = false;
    }
}
