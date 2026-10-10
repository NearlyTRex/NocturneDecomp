#pragma once

#include "common/fwd.h"

namespace nocturne::core {

void staticInit();
void resetRestoreMemoryAllocator();
void captureLightTextures();
void renderConeLightGeometry(common::CVector3f *position, common::CVector3f *rotation, float fov,
                             float falloff);

} // namespace nocturne::core
