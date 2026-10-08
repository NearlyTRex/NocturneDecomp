#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
void resetRestoreMemoryAllocator();
void captureLightTextures();
void renderConeLightGeometry(CVector3f *position, CVector3f *rotation, float fov, float falloff);

} // namespace nocturne::core
