#include "platform/sdl/sdlclipboard.h"

#include "platform/sdl/sdlfree.h"

#include <SDL3/SDL.h>

namespace nocturne::platform::sdl {

std::string CSdlClipboard::getClipboardText() {
    // Empty, not null, when there is no text.
    const SdlOwned<char> text(SDL_GetClipboardText());
    return text.get();
}

void CSdlClipboard::setClipboardText(std::string_view text_data) {
    SDL_SetClipboardText(std::string(text_data).c_str());
}

} // namespace nocturne::platform::sdl
