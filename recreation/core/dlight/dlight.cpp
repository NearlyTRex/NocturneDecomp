#include "core/dlight/dlight.h"

#include "common/error/error.h"
#include "core/dcamera/cameratables.h"
#include "core/dlight/lightglow.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrgltexturebasic.h"

#include <cstddef>

namespace nocturne::core {
namespace {

// The original's static pool of depths, and what each allotment took on top for its alignment.
constexpr std::size_t kRestoreMemoryDepths = 0x300060;
constexpr std::size_t kRestoreMemoryAlignment = 8;

} // namespace

// nocedit 0x004729c0
void resetRestoreMemoryAllocator(SCameraTables &tables) {
    tables.restore_memory_used = 0;
}

// Each light keeps its master depths itself; the original took them from its pool, which this
// counts against.
// nocedit 0x00472950
void getRestoreMemory(SCameraTables &tables, std::size_t pixel_count) {
    if (pixel_count > kRestoreMemoryDepths ||
        kRestoreMemoryDepths - pixel_count < tables.restore_memory_used) {
        common::displayErrorAndQuit("getRestoreMemory - Need more static memory");
    }
    tables.restore_memory_used += pixel_count + kRestoreMemoryAlignment;
}

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
