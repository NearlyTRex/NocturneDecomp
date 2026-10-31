#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::core {

void resetRestoreMemoryAllocator();
// Loads the headlight's and the flare sprites' textures; the fuzz is loaded as it is drawn.
void captureLightTextures(engine::CDemonRenderer &renderer, SLightGlowTextures &glow);
void renderConeLightGeometry(common::CVector3f *position, common::CVector3f *rotation, float fov,
                             float falloff);

} // namespace nocturne::core
