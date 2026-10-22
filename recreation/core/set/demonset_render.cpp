#include "core/set/demonset.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrglprimitivequad.h"

#include <span>

namespace nocturne::core {

// deferred: drawing nothing while the game suppresses set geometry, with CGame's cheats and
//   game session
// deferred: the env-mapped drawing in the game's env-map render modes, with
//   renderEnvMapBatchQuad and the code that sets CGame's render_mode
// deferred: the per-pixel flat-colour pass first, with renderCustomScanline and the code that
//   sets per_pixel_lighting_enabled
// nocedit 0x00570770
void CDemonSet::renderPrimitiveBatch(std::span<const platform::SMRGLPrimitiveQuad> primitives,
                                     int render_flags) {
    owners_.renderer.renderQuadBatch(primitives, render_flags);
}

} // namespace nocturne::core
