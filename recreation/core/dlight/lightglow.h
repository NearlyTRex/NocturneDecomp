#pragma once

#include "platform/mrgltexturebasic.h"

#include <array>
#include <cstddef>

namespace nocturne::core {

// The textures lights glow with: the fuzz about a light, a headlight's beam, and the sprites a
// light's flare is drawn with, the last two cramped.
struct SLightGlowTextures {
    static constexpr std::size_t kSpriteCount = 9;

    platform::SMRGLTextureBasic fuzz{.texture_name = "LITEFUZZ.RAW"};
    platform::SMRGLTextureBasic headlight{.texture_name = "HEADLITE.RAW"};
    std::array<platform::SMRGLTextureBasic, kSpriteCount> sprites{{
        {.texture_name = "SUN06.RAW"},
        {.texture_name = "SUN07.RAW"},
        {.texture_name = "SUN09.RAW"},
        {.texture_name = "SUNCRAM.RAW"},
        {.texture_name = "SUN11.RAW"},
        {.texture_name = "SUN12.RAW"},
        {.texture_name = "SUN13.RAW"},
        {.texture_name = "SUNCRAM.RAW"},
        {.texture_name = "SUNCRAM.RAW"},
    }};
};

} // namespace nocturne::core
