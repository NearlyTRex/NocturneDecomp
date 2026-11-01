#pragma once

#include "platform/fwd.h"

namespace nocturne::platform::gl {

// The fragment program behind each upscaler but Standard, one draw from the frame onto the
// window. Each is written to the same interface, so a new filter is one program and one row:
//
//   uniform sampler2D u_tex;   the frame, on texture unit 0
//   uniform vec2  u_src;       its size in texels
//   uniform float u_sharp;     the sharpness, 0 to 1, read only by the filters that sharpen
//   in  vec2 v_uv;             the quad's, already the right way up
//   out vec4 o_color;
//
// The four ported programs, FSR 1, Snapdragon GSR 1, NVIDIA Image Scaling and xBR-lv2, carry
// their own licence notices; Lanczos is textbook.
[[nodiscard]] const char *getUpscaleFragmentSource(EUpscaler upscaler);
// Whether the filter reads its texels unfiltered: xBR, which compares texels and blends
// between them itself. The others fetch texels directly or want bilinear samples.
[[nodiscard]] bool getUpscaleWantsNearest(EUpscaler upscaler);

} // namespace nocturne::platform::gl
