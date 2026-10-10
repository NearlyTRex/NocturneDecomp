#include "platform/sdl/sdlosfontfactory.h"

#include "platform/sdl/sdlosfont.h"

#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <algorithm>
#include <array>
#include <stdexcept>

namespace nocturne::platform::sdl {
namespace {

constexpr std::array kFontFiles = {
    "/usr/share/fonts/truetype/dejavu/DejaVuSansMono.ttf",
    "/usr/share/fonts/truetype/liberation/LiberationMono-Regular.ttf",
    "/usr/share/fonts/truetype/freefont/FreeMono.ttf",
    "/usr/share/fonts/TTF/DejaVuSansMono.ttf",
    "/usr/share/fonts/dejavu-sans-mono-fonts/DejaVuSansMono.ttf",
};

} // namespace

CSdlOsFontFactory::CSdlOsFontFactory() {
    if (!TTF_Init()) {
        throw std::runtime_error(SDL_GetError());
    }
}

CSdlOsFontFactory::~CSdlOsFontFactory() {
    TTF_Quit();
}

std::unique_ptr<IOsFont> CSdlOsFontFactory::createOsFont(std::string_view /*face_name*/,
                                                         int pixel_height) {
    // SDL_ttf sizes in points at 72 dpi, which is pixels.
    const auto size = static_cast<float>(std::max(pixel_height, 1));
    for (const char *const file : kFontFiles) {
        TTF_Font *const font = TTF_OpenFont(file, size);
        if (font != nullptr) {
            return std::make_unique<CSdlOsFont>(font);
        }
    }
    return nullptr;
}

} // namespace nocturne::platform::sdl
