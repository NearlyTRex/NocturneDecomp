#pragma once

#include "platform/fwd.h"

namespace nocturne::platform::gl {

// The fragment program behind each anti-aliasing pass but Off, one draw over the scene's copy
// back onto the scene, written to the upscalers' interface:
//
//   uniform sampler2D u_tex;   the scene's copy, on texture unit 0, sampled bilinear
//   uniform vec2  u_src;       its size in texels
//   in  vec2 v_uv;
//   out vec4 o_color;
//
// Null for Off.
[[nodiscard]] const char *getAntialiasFragmentSource(EAntialias antialias);

} // namespace nocturne::platform::gl
