#include "core/dlight/dlight.h"

#include "core/dlight/lightglow.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrgltexturebasic.h"

namespace nocturne::core {

// deferred: each flare sprite's size and texture coordinates beside its texture, with
//   renderLightGlowSprites
// nocedit 0x00474a90
void captureLightTextures(engine::CDemonRenderer &renderer, SLightGlowTextures &glow) {
    renderer.captureTexture(glow.headlight);
    for (platform::SMRGLTextureBasic &sprite : glow.sprites) {
        renderer.captureTexture(sprite);
    }
}

} // namespace nocturne::core
