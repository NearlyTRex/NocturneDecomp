#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "engine/fwd.h"

#include <cstddef>

namespace nocturne::core {

// The spotlights' master depths share one budget, which a camera change starts over.
void resetRestoreMemoryAllocator(SCameraTables &tables);
// Takes that many depths from the budget, and a little over, as the original's pool aligned each
// allotment; past the budget is fatal.
void getRestoreMemory(SCameraTables &tables, std::size_t pixel_count);
// Loads the headlight's and the flare sprites' textures; the fuzz is loaded as it is drawn.
void captureLightTextures(engine::CDemonRenderer &renderer, SLightGlowTextures &glow);
void renderConeLightGeometry(common::CVector3f *position, common::CVector3f *rotation, float fov,
                             float falloff);

} // namespace nocturne::core
