#pragma once

#include "core/fwd.h"

namespace nocturne::core {

// deferred: the sky texture named NITESKY.RAW and the dome centred at the origin, with this
// nocedit 0x00490040
void renderSkyDome(SMRGLSkyTexture *sky_texture, char *texture_name, int brightness_factor);

} // namespace nocturne::core
