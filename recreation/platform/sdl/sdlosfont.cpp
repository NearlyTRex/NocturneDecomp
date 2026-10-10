#include "platform/sdl/sdlosfont.h"

#include "common/text/windows1252.h"
#include "common/video/framebuffer.h"

#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <cstddef>
#include <span>
#include <string>

namespace nocturne::platform::sdl {
namespace {

struct SSurfaceDeleter {
    void operator()(SDL_Surface *surface) const {
        SDL_DestroySurface(surface);
    }
};

} // namespace

void CSdlOsFont::SFontDeleter::operator()(TTF_Font *font) const {
    TTF_CloseFont(font);
}

CSdlOsFont::CSdlOsFont(TTF_Font *font) : font_(font) {}

common::SExtent CSdlOsFont::measureText(std::string_view text) {
    const std::string utf8 = common::windows1252ToUtf8(text);
    common::SExtent size;
    TTF_GetStringSize(font_.get(), utf8.data(), utf8.size(), &size.width, &size.height);
    return size;
}

STextMask CSdlOsFont::renderText(std::string_view text) {
    const std::string utf8 = common::windows1252ToUtf8(text);
    // Solid is unblended: index 0 is the background and 1 the glyphs.
    const std::unique_ptr<SDL_Surface, SSurfaceDeleter> surface(
        TTF_RenderText_Solid(font_.get(), utf8.data(), utf8.size(), SDL_Color{255, 255, 255, 255}));
    if (!surface) {
        return {};
    }
    const std::span pixels(static_cast<const std::byte *>(surface->pixels),
                           static_cast<std::size_t>(surface->pitch) *
                               static_cast<std::size_t>(surface->h));
    return {.size = {.width = surface->w, .height = surface->h},
            .coverage = common::packRows(pixels, surface->w, surface->h, surface->pitch)};
}

} // namespace nocturne::platform::sdl
