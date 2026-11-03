#include "platform/gl/glantialiasshaders.h"

#include "platform/antialias.h"

#include <array>
#include <cstddef>

namespace nocturne::platform::gl {
namespace {

// FXAA, after Timothy Lottes' Fast Approximate Anti-Aliasing in its single-step console form.
// Four bilinear samples at the pixel's corners and the pixel itself give the local luma range;
// a range under the edge threshold is left alone, so flat areas and the backdrops' soft
// gradients come through as they are. Across an edge the corners' luma difference gives its
// direction, and the pixel takes two samples along it (a), or four (b) where b stays inside the
// local range: the wider blend, unless it reaches past the edge into another surface. Alpha is
// the pixel's own.
constexpr const char *kFxaa =
    "#version 150 core\n"
    "uniform sampler2D u_tex;\n"
    "uniform vec2  u_src;\n"
    "in  vec2 v_uv;\n"
    "out vec4 o_color;\n"
    "const float kEdgeMin = 1.0 / 32.0;\n"
    "const float kEdgeRel = 1.0 / 8.0;\n"
    "const float kReduceMul = 1.0 / 8.0;\n"
    "const float kReduceMin = 1.0 / 128.0;\n"
    "const float kSpanMax = 8.0;\n"
    "float luma(vec3 c) { return dot(c, vec3(0.299, 0.587, 0.114)); }\n"
    "vec3 at(vec2 uv) { return texture(u_tex, uv).rgb; }\n"
    "void main() {\n"
    "    vec2 texel = 1.0 / u_src;\n"
    "    vec4 centre = texture(u_tex, v_uv);\n"
    "    float nw = luma(at(v_uv + vec2(-0.5, -0.5) * texel));\n"
    "    float ne = luma(at(v_uv + vec2( 0.5, -0.5) * texel));\n"
    "    float sw = luma(at(v_uv + vec2(-0.5,  0.5) * texel));\n"
    "    float se = luma(at(v_uv + vec2( 0.5,  0.5) * texel));\n"
    "    float m = luma(centre.rgb);\n"
    "    float lo = min(m, min(min(nw, ne), min(sw, se)));\n"
    "    float hi = max(m, max(max(nw, ne), max(sw, se)));\n"
    "    if (hi - lo < max(kEdgeMin, hi * kEdgeRel)) {\n"
    "        o_color = centre;\n"
    "        return;\n"
    "    }\n"
    "    vec2 dir = vec2(-((nw + ne) - (sw + se)), (nw + sw) - (ne + se));\n"
    "    float reduce = max((nw + ne + sw + se) * 0.25 * kReduceMul, kReduceMin);\n"
    "    float scale = 1.0 / (min(abs(dir.x), abs(dir.y)) + reduce);\n"
    "    dir = clamp(dir * scale, vec2(-kSpanMax), vec2(kSpanMax)) * texel;\n"
    "    vec3 a = 0.5 * (at(v_uv + dir * (1.0 / 3.0 - 0.5)) +\n"
    "                    at(v_uv + dir * (2.0 / 3.0 - 0.5)));\n"
    "    vec3 b = a * 0.5 + 0.25 * (at(v_uv - dir * 0.5) + at(v_uv + dir * 0.5));\n"
    "    float lb = luma(b);\n"
    "    o_color = vec4((lb < lo || lb > hi) ? a : b, centre.a);\n"
    "}\n";

// By EAntialias.
constexpr std::array<const char *, kAntialiasCount> kSources{nullptr, kFxaa};

} // namespace

const char *getAntialiasFragmentSource(EAntialias antialias) {
    return kSources.at(static_cast<std::size_t>(antialias));
}

} // namespace nocturne::platform::gl
