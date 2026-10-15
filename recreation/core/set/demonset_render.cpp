#include "core/set/demonset.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrglprimitivequad.h"

#include <span>

namespace nocturne::core {

// The original skipped the set while the game suppressed set geometry, drew the polygons
// env-mapped in the game's env-map modes and lit flat colour per pixel first when the set asked;
// those arrive with the in-game code that turns them on.
// nocedit 0x00570770
void CDemonSet::renderPrimitiveBatch(std::span<const platform::SMRGLPrimitiveQuad> primitives,
                                     int render_flags) {
    renderer_.renderQuadBatch(primitives, render_flags);
}

} // namespace nocturne::core
