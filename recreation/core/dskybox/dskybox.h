#pragma once

#include "core/fwd.h"

namespace nocturne::core {

void staticInit();
void renderSkyDome(SMRGLSkyTexture *sky_texture, char *texture_name, int brightness_factor);

} // namespace nocturne::core
