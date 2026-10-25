// =============================================================================
// MESSAGE SUPPORT — see message_support.h
// =============================================================================

#include "message_support.h"

#include <SDL.h>

namespace message_support {

std::string last;
int shown = 0;

} // namespace message_support

extern "C" int message_support_SDL_ShowSimpleMessageBox(Uint32, const char *, const char *message,
                                                        SDL_Window *) {
    message_support::last = message;
    message_support::shown++;
    return 0;
}
