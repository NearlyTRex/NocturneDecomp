// =============================================================================
// UPSCALE SHADERS — implementation
// =============================================================================
//
// See upscale_shaders.h for the interface every shader here is written to.

#include "gl/upscale_shaders.h"

#include "gl/upscaler.h"
#include "shim_config.h"

#if NOCTURNE_GL_PRESENT

#include "gl/gl_api.h"

namespace {

// -----------------------------------------------------------------------------
// FSR: an edge-aware upscale and a contrast-adaptive sharpen in one draw
// -----------------------------------------------------------------------------
//
// After AMD FidelityFX Super Resolution 1: EASU, which weights the twelve texels
// around a point with a lanczos-like kernel stretched along the local edge, and
// RCAS, which sharpens as far as the neighbourhood's contrast allows without
// clipping. The reference runs RCAS as a second pass over EASU's output; here
// its four neighbours are bilinear samples one output pixel away, which keeps it
// one draw into the window with no target of its own. EASU reads with
// texelFetch, so only RCAS sees the texture's filter, which the caller sets to
// linear. The sharpness runs RCAS from a quarter of its strength to all of it,
// squared so the finer steps are at the soft end.
//
// FidelityFX Super Resolution 1 is
//   Copyright (c) 2021 Advanced Micro Devices, Inc. All rights reserved.
//
//   Permission is hereby granted, free of charge, to any person obtaining a
//   copy of this software and associated documentation files (the "Software"),
//   to deal in the Software without restriction, including without limitation
//   the rights to use, copy, modify, merge, publish, distribute, sublicense,
//   and/or sell copies of the Software, and to permit persons to whom the
//   Software is furnished to do so, subject to the following conditions: The
//   above copyright notice and this permission notice shall be included in all
//   copies or substantial portions of the Software.
//
//   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//   DEALINGS IN THE SOFTWARE.
const char kFsr[] = NOCTURNE_GLSL_VERSION
    "uniform sampler2D u_tex;\n"
    "uniform vec2  u_src;\n"
    "uniform float u_sharp;\n"
    "in  vec2 v_uv;\n"
    "out vec4 o_color;\n"
    "vec3 fetch(ivec2 p) {\n"
    "    return texelFetch(u_tex, clamp(p, ivec2(0), ivec2(u_src) - ivec2(1)), 0).rgb;\n"
    "}\n"
    "float luma(vec3 c) { return c.b * 0.5 + (c.r * 0.5 + c.g); }\n"
    // One of the four bilinear corners' say in the edge's direction and length.
    "void easuSet(inout vec2 dir, inout float len, float w,\n"
    "             float lA, float lB, float lC, float lD, float lE) {\n"
    "    float lenX = max(abs(lD - lC), abs(lC - lB));\n"
    "    float dirX = lD - lB;\n"
    "    dir.x += dirX * w;\n"
    "    lenX = clamp(abs(dirX) / max(lenX, 1e-6), 0.0, 1.0);\n"
    "    len += lenX * lenX * w;\n"
    "    float lenY = max(abs(lE - lC), abs(lC - lA));\n"
    "    float dirY = lE - lA;\n"
    "    dir.y += dirY * w;\n"
    "    lenY = clamp(abs(dirY) / max(lenY, 1e-6), 0.0, 1.0);\n"
    "    len += lenY * lenY * w;\n"
    "}\n"
    // One texel's weight under the kernel rotated onto the edge.
    "void easuTap(inout vec3 aC, inout float aW, vec2 off, vec2 dir, vec2 len,\n"
    "             float lob, float clp, vec3 c) {\n"
    "    vec2 v = vec2(off.x * dir.x + off.y * dir.y, off.x * -dir.y + off.y * dir.x) * len;\n"
    "    float d2 = min(dot(v, v), clp);\n"
    "    float wB = 0.4 * d2 - 1.0;\n"
    "    float wA = lob * d2 - 1.0;\n"
    "    wB *= wB;\n"
    "    wA *= wA;\n"
    "    float w = (1.5625 * wB - 0.5625) * wA;\n"
    "    aC += c * w;\n"
    "    aW += w;\n"
    "}\n"
    "vec3 easu(vec2 uv) {\n"
    "    vec2 pp = uv * u_src - 0.5;\n"
    "    vec2 fpf = floor(pp);\n"
    "    ivec2 fp = ivec2(fpf);\n"
    "    pp -= fpf;\n"
    // The texels around f, the nearest:  b c
    //                                  e f g h
    //                                  i j k l
    //                                    n o
    "    vec3 b = fetch(fp + ivec2( 0,-1)), c = fetch(fp + ivec2( 1,-1));\n"
    "    vec3 e = fetch(fp + ivec2(-1, 0)), f = fetch(fp);\n"
    "    vec3 g = fetch(fp + ivec2( 1, 0)), h = fetch(fp + ivec2( 2, 0));\n"
    "    vec3 i = fetch(fp + ivec2(-1, 1)), j = fetch(fp + ivec2( 0, 1));\n"
    "    vec3 k = fetch(fp + ivec2( 1, 1)), l = fetch(fp + ivec2( 2, 1));\n"
    "    vec3 n = fetch(fp + ivec2( 0, 2)), o = fetch(fp + ivec2( 1, 2));\n"
    "    float bL = luma(b), cL = luma(c), eL = luma(e), fL = luma(f), gL = luma(g);\n"
    "    float hL = luma(h), iL = luma(i), jL = luma(j), kL = luma(k), lL = luma(l);\n"
    "    float nL = luma(n), oL = luma(o);\n"
    "    vec2 dir = vec2(0.0);\n"
    "    float len = 0.0;\n"
    "    easuSet(dir, len, (1.0 - pp.x) * (1.0 - pp.y), bL, eL, fL, gL, jL);\n"
    "    easuSet(dir, len,        pp.x  * (1.0 - pp.y), cL, fL, gL, hL, kL);\n"
    "    easuSet(dir, len, (1.0 - pp.x) *        pp.y,  fL, iL, jL, kL, nL);\n"
    "    easuSet(dir, len,        pp.x  *        pp.y,  gL, jL, kL, lL, oL);\n"
    "    float dirR = dot(dir, dir);\n"
    "    bool level = dirR < (1.0 / 32768.0);\n" // no edge to follow
    "    dir = level ? vec2(1.0, dir.y) : dir * inversesqrt(dirR);\n"
    "    len = 0.25 * len * len;\n"
    "    float stretch = dot(dir, dir) / max(abs(dir.x), abs(dir.y));\n"
    "    vec2 len2 = vec2(1.0 + (stretch - 1.0) * len, 1.0 - 0.5 * len);\n"
    "    float lob = 0.5 - 0.29 * len;\n"
    "    float clp = 1.0 / lob;\n"
    "    vec3 aC = vec3(0.0);\n"
    "    float aW = 0.0;\n"
    "    easuTap(aC, aW, vec2( 0.0,-1.0) - pp, dir, len2, lob, clp, b);\n"
    "    easuTap(aC, aW, vec2( 1.0,-1.0) - pp, dir, len2, lob, clp, c);\n"
    "    easuTap(aC, aW, vec2(-1.0, 1.0) - pp, dir, len2, lob, clp, i);\n"
    "    easuTap(aC, aW, vec2( 0.0, 1.0) - pp, dir, len2, lob, clp, j);\n"
    "    easuTap(aC, aW, vec2( 0.0, 0.0) - pp, dir, len2, lob, clp, f);\n"
    "    easuTap(aC, aW, vec2(-1.0, 0.0) - pp, dir, len2, lob, clp, e);\n"
    "    easuTap(aC, aW, vec2( 1.0, 1.0) - pp, dir, len2, lob, clp, k);\n"
    "    easuTap(aC, aW, vec2( 2.0, 1.0) - pp, dir, len2, lob, clp, l);\n"
    "    easuTap(aC, aW, vec2( 2.0, 0.0) - pp, dir, len2, lob, clp, h);\n"
    "    easuTap(aC, aW, vec2( 1.0, 0.0) - pp, dir, len2, lob, clp, g);\n"
    "    easuTap(aC, aW, vec2( 1.0, 2.0) - pp, dir, len2, lob, clp, o);\n"
    "    easuTap(aC, aW, vec2( 0.0, 2.0) - pp, dir, len2, lob, clp, n);\n"
    // No ringing: kept inside the four nearest texels' range.
    "    vec3 lo = min(min(f, g), min(j, k));\n"
    "    vec3 hi = max(max(f, g), max(j, k));\n"
    "    return clamp(aC / aW, lo, hi);\n"
    "}\n"
    "void main() {\n"
    "    float sharp = 0.25 + 0.75 * u_sharp * u_sharp;\n"
    "    vec3 e = easu(v_uv);\n"
    "    vec2 px = vec2(abs(dFdx(v_uv.x)), abs(dFdy(v_uv.y)));\n" // one output pixel
    "    vec3 b = texture(u_tex, v_uv + vec2(0.0, -px.y)).rgb;\n"
    "    vec3 d = texture(u_tex, v_uv + vec2(-px.x, 0.0)).rgb;\n"
    "    vec3 f = texture(u_tex, v_uv + vec2( px.x, 0.0)).rgb;\n"
    "    vec3 h = texture(u_tex, v_uv + vec2(0.0,  px.y)).rgb;\n"
    "    vec3 mn = min(min(b, d), min(f, h));\n"
    "    vec3 mx = max(max(b, d), max(f, h));\n"
    "    vec3 hitMin = mn / (4.0 * max(mx, vec3(1e-4)));\n"
    "    vec3 hitMax = (vec3(1.0) - mx) / min(4.0 * mn - vec3(4.0), vec3(-1e-4));\n"
    "    vec3 lobeRGB = max(-hitMin, hitMax);\n"
    "    float lobe = max(-0.1875, min(max(lobeRGB.r, max(lobeRGB.g, lobeRGB.b)), 0.0)) * sharp;\n"
    "    o_color = vec4(clamp((lobe * (b + d + f + h) + e) / (4.0 * lobe + 1.0), 0.0, 1.0), 1.0);\n"
    "}\n";

// -----------------------------------------------------------------------------
// Lanczos: windowed-sinc resampling
// -----------------------------------------------------------------------------
//
// Lanczos-2, the sixteen texels around the point weighted by
// sinc(x) * sinc(x / 2) along each axis, and kept inside the range of the four
// nearest so the kernel's negative lobes sharpen edges without ringing round
// them. Textbook resampling; nothing to tune.
const char kLanczos[] = NOCTURNE_GLSL_VERSION
    "uniform sampler2D u_tex;\n"
    "uniform vec2  u_src;\n"
    "in  vec2 v_uv;\n"
    "out vec4 o_color;\n"
    "vec3 fetch(ivec2 p) {\n"
    "    return texelFetch(u_tex, clamp(p, ivec2(0), ivec2(u_src) - ivec2(1)), 0).rgb;\n"
    "}\n"
    "float lanczos2(float x) {\n"
    "    x = abs(x);\n"
    "    if (x < 1e-5) return 1.0;\n"
    "    if (x >= 2.0) return 0.0;\n"
    "    float px = 3.14159265 * x;\n"
    "    return 2.0 * sin(px) * sin(0.5 * px) / (px * px);\n"
    "}\n"
    "void main() {\n"
    "    vec2 pp = v_uv * u_src - 0.5;\n"
    "    vec2 fpf = floor(pp);\n"
    "    ivec2 fp = ivec2(fpf);\n"
    "    vec2 f = pp - fpf;\n"
    "    float wx[4];\n"
    "    float wy[4];\n"
    "    float sx = 0.0;\n"
    "    float sy = 0.0;\n"
    "    for (int i = 0; i < 4; ++i) {\n"
    "        wx[i] = lanczos2(f.x - float(i - 1));\n"
    "        wy[i] = lanczos2(f.y - float(i - 1));\n"
    "        sx += wx[i];\n"
    "        sy += wy[i];\n"
    "    }\n"
    "    vec3 acc = vec3(0.0);\n"
    "    for (int j = 0; j < 4; ++j) {\n"
    "        for (int i = 0; i < 4; ++i) {\n"
    "            acc += fetch(fp + ivec2(i - 1, j - 1)) * (wx[i] * wy[j]);\n"
    "        }\n"
    "    }\n"
    "    acc /= sx * sy;\n"
    "    vec3 a = fetch(fp), b = fetch(fp + ivec2(1, 0));\n"
    "    vec3 c = fetch(fp + ivec2(0, 1)), d = fetch(fp + ivec2(1, 1));\n"
    "    vec3 lo = min(min(a, b), min(c, d));\n"
    "    vec3 hi = max(max(a, b), max(c, d));\n"
    "    o_color = vec4(clamp(acc, lo, hi), 1.0);\n"
    "}\n";

// -----------------------------------------------------------------------------
// GSR: Snapdragon Game Super Resolution 1
// -----------------------------------------------------------------------------
//
// The reference's RGBA mode: the bilinear sample, corrected where the twelve
// texels around it show an edge, by a lanczos-weighted estimate of the green
// channel (standing in for brightness) clamped to the nearest four's range and
// to a small step. The reference reads its twelve texels as four gathers;
// texelFetch at the same four 2x2 footprints reads them on GL 3.2 and ES 3.0,
// which have no textureGather. The sharpness sets its edge sharpness, from 1 to
// 3, the reference's 2 at the middle.
//
// Snapdragon Game Super Resolution is
//   Copyright (c) 2025, Qualcomm Innovation Center, Inc. All rights reserved.
//   SPDX-License-Identifier: BSD-3-Clause
//
//   Redistribution and use in source and binary forms, with or without
//   modification, are permitted provided that the following conditions are
//   met:
//
//   1. Redistributions of source code must retain the above copyright notice,
//      this list of conditions and the following disclaimer.
//
//   2. Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//
//   3. Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from
//      this software without specific prior written permission.
//
//   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//   POSSIBILITY OF SUCH DAMAGE.
const char kGsr[] = NOCTURNE_GLSL_VERSION
    "uniform sampler2D u_tex;\n"
    "uniform vec2  u_src;\n"
    "uniform float u_sharp;\n"
    "in  vec2 v_uv;\n"
    "out vec4 o_color;\n"
    "float g(ivec2 p) {\n"
    "    return texelFetch(u_tex, clamp(p, ivec2(0), ivec2(u_src) - ivec2(1)), 0).g;\n"
    "}\n"
    "float fastLanczos2(float x) {\n"
    "    float wA = x - 4.0;\n"
    "    float wB = x * wA - wA;\n"
    "    wA *= wA;\n"
    "    return wB * wA;\n"
    "}\n"
    "vec2 weightY(float dx, float dy, float c, float std) {\n"
    "    float x = ((dx * dx) + (dy * dy)) * 0.55 + clamp(abs(c) * std, 0.0, 1.0);\n"
    "    float w = fastLanczos2(x);\n"
    "    return vec2(w, w * c);\n"
    "}\n"
    "void main() {\n"
    "    float edgeSharpness = 1.0 + 2.0 * u_sharp;\n"
    "    vec4 color = vec4(textureLod(u_tex, v_uv, 0.0).rgb, 0.0);\n"
    "    vec2 pp = v_uv * u_src - 0.5;\n"
    "    vec2 fpf = floor(pp);\n"
    "    ivec2 b = ivec2(fpf);\n"
    "    vec2 pl = pp - fpf;\n"
    // The reference's gathers, in gather order (x: low u high v, y: high u high
    // v, z: high u low v, w: low u low v), as texels from the one below-left.
    "    vec4 left = vec4(g(b + ivec2(-1, 1)), g(b + ivec2(0, 1)), g(b), g(b + ivec2(-1, 0)));\n"
    "    float edgeVote = abs(left.z - left.y) + abs(color.g - left.y) + abs(color.g - left.z);\n"
    "    if (edgeVote > 8.0 / 255.0) {\n"
    "        vec4 right = vec4(g(b + ivec2(1, 1)), g(b + ivec2(2, 1)), g(b + ivec2(2, 0)),\n"
    "                          g(b + ivec2(1, 0)));\n"
    "        vec4 upDown = vec4(g(b + ivec2(0, -1)), g(b + ivec2(1, -1)), g(b + ivec2(1, 2)),\n"
    "                           g(b + ivec2(0, 2)));\n"
    "        float mean = (left.y + left.z + right.x + right.w) * 0.25;\n"
    "        left -= vec4(mean);\n"
    "        right -= vec4(mean);\n"
    "        upDown -= vec4(mean);\n"
    "        color.w = color.g - mean;\n"
    "        float sum = abs(left.x) + abs(left.y) + abs(left.z) + abs(left.w)\n"
    "                  + abs(right.x) + abs(right.y) + abs(right.z) + abs(right.w)\n"
    "                  + abs(upDown.x) + abs(upDown.y) + abs(upDown.z) + abs(upDown.w);\n"
    "        float std = 2.181818 / sum;\n"
    "        vec2 aWY = weightY(pl.x, pl.y + 1.0, upDown.x, std);\n"
    "        aWY += weightY(pl.x - 1.0, pl.y + 1.0, upDown.y, std);\n"
    "        aWY += weightY(pl.x - 1.0, pl.y - 2.0, upDown.z, std);\n"
    "        aWY += weightY(pl.x, pl.y - 2.0, upDown.w, std);\n"
    "        aWY += weightY(pl.x + 1.0, pl.y - 1.0, left.x, std);\n"
    "        aWY += weightY(pl.x, pl.y - 1.0, left.y, std);\n"
    "        aWY += weightY(pl.x, pl.y, left.z, std);\n"
    "        aWY += weightY(pl.x + 1.0, pl.y, left.w, std);\n"
    "        aWY += weightY(pl.x - 1.0, pl.y - 1.0, right.x, std);\n"
    "        aWY += weightY(pl.x - 2.0, pl.y - 1.0, right.y, std);\n"
    "        aWY += weightY(pl.x - 2.0, pl.y, right.z, std);\n"
    "        aWY += weightY(pl.x - 1.0, pl.y, right.w, std);\n"
    "        float finalY = aWY.y / aWY.x;\n"
    "        float maxY = max(max(left.y, left.z), max(right.x, right.w));\n"
    "        float minY = min(min(left.y, left.z), min(right.x, right.w));\n"
    "        finalY = clamp(edgeSharpness * finalY, minY, maxY);\n"
    "        float deltaY = clamp(finalY - color.w, -23.0 / 255.0, 23.0 / 255.0);\n"
    "        color.rgb = clamp(color.rgb + vec3(deltaY), 0.0, 1.0);\n"
    "    }\n"
    "    o_color = vec4(color.rgb, 1.0);\n"
    "}\n";

// -----------------------------------------------------------------------------
// NIS: NVIDIA Image Scaling
// -----------------------------------------------------------------------------
//
// The SDK's scaler: a 6-tap polyphase filter over the brightness of the 6x6
// texels around the point, blended with four directional filters by how
// strongly the neighbourhood runs at 0, 45, 90 and 135 degrees, each with an
// unsharp mask held back by local contrast; the result moves the bilinear
// colour by its change in brightness. The SDK runs as a compute shader sharing
// a tile of brightness and edge directions across a 32x24 block; here each
// pixel reads its own 6x6 and derives the four edge directions it needs, which
// is the same arithmetic for every pixel. The sharpness maps through the SDK's
// own NVScalerUpdateConfig, and the two filter banks are its coef_scale and
// coef_usm, as 64 phases of 6 taps.
//
// NVIDIA Image Scaling SDK v1.0.3 is
//   Copyright (c) 2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
//   Permission is hereby granted, free of charge, to any person obtaining a
//   copy of this software and associated documentation files (the
//   "Software"), to deal in the Software without restriction, including
//   without limitation the rights to use, copy, modify, merge, publish,
//   distribute, sublicense, and / or sell copies of the Software, and to
//   permit persons to whom the Software is furnished to do so, subject to the
//   following conditions:
//
//   The above copyright notice and this permission notice shall be included
//   in all copies or substantial portions of the Software.
//
//   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//   DEALINGS IN THE SOFTWARE.
const char kNis[] = NOCTURNE_GLSL_VERSION
    "uniform sampler2D u_tex;\n"
    "uniform vec2  u_src;\n"
    "uniform float u_sharp;\n"
    "in  vec2 v_uv;\n"
    "out vec4 o_color;\n"
    "const float kDetectRatio = 2.0 * 1127.0 / 1024.0;\n"
    "const float kDetectThres = 64.0 / 1024.0;\n"
    "const float kMinContrastRatio = 2.0;\n"
    "const float kRatioNorm = 1.0 / (10.0 - 2.0);\n"
    "const float kContrastBoost = 1.0;\n"
    "const float kEps = 1.0 / 255.0;\n"
    "const float kSharpStartY = 0.45;\n"
    "const float kSharpScaleY = 1.0 / (0.9 - 0.45);\n"
    "const float kCoefScaler[384] = float[384](\n"
    "    0.0, 0.0, 1.0000, 0.0, 0.0, 0.0, 0.0029, -0.0127, 1.0000, 0.0132, -0.0034, 0.0,\n"
    "    0.0063, -0.0249, 0.9985, 0.0269, -0.0068, 0.0, 0.0088, -0.0361, 0.9956, 0.0415, -0.0103, "
    "0.0005,\n"
    "    0.0117, -0.0474, 0.9932, 0.0562, -0.0142, 0.0005, 0.0142, -0.0576, 0.9897, 0.0713, "
    "-0.0181, 0.0005,\n"
    "    0.0166, -0.0674, 0.9844, 0.0874, -0.0220, 0.0010, 0.0186, -0.0762, 0.9785, 0.1040, "
    "-0.0264, 0.0015,\n"
    "    0.0205, -0.0850, 0.9727, 0.1206, -0.0308, 0.0020, 0.0225, -0.0928, 0.9648, 0.1382, "
    "-0.0352, 0.0024,\n"
    "    0.0239, -0.1006, 0.9575, 0.1558, -0.0396, 0.0029, 0.0254, -0.1074, 0.9487, 0.1738, "
    "-0.0439, 0.0034,\n"
    "    0.0264, -0.1138, 0.9390, 0.1929, -0.0488, 0.0044, 0.0278, -0.1191, 0.9282, 0.2119, "
    "-0.0537, 0.0049,\n"
    "    0.0288, -0.1245, 0.9170, 0.2310, -0.0581, 0.0059, 0.0293, -0.1294, 0.9058, 0.2510, "
    "-0.0630, 0.0063,\n"
    "    0.0303, -0.1333, 0.8926, 0.2710, -0.0679, 0.0073, 0.0308, -0.1367, 0.8789, 0.2915, "
    "-0.0728, 0.0083,\n"
    "    0.0308, -0.1401, 0.8657, 0.3120, -0.0776, 0.0093, 0.0313, -0.1426, 0.8506, 0.3330, "
    "-0.0825, 0.0103,\n"
    "    0.0313, -0.1445, 0.8354, 0.3540, -0.0874, 0.0112, 0.0313, -0.1460, 0.8193, 0.3755, "
    "-0.0923, 0.0122,\n"
    "    0.0313, -0.1470, 0.8022, 0.3965, -0.0967, 0.0137, 0.0308, -0.1479, 0.7856, 0.4185, "
    "-0.1016, 0.0146,\n"
    "    0.0303, -0.1479, 0.7681, 0.4399, -0.1060, 0.0156, 0.0298, -0.1479, 0.7505, 0.4614, "
    "-0.1104, 0.0166,\n"
    "    0.0293, -0.1470, 0.7314, 0.4829, -0.1147, 0.0181, 0.0288, -0.1460, 0.7119, 0.5049, "
    "-0.1187, 0.0190,\n"
    "    0.0278, -0.1445, 0.6929, 0.5264, -0.1226, 0.0200, 0.0273, -0.1431, 0.6724, 0.5479, "
    "-0.1260, 0.0215,\n"
    "    0.0264, -0.1411, 0.6528, 0.5693, -0.1299, 0.0225, 0.0254, -0.1387, 0.6323, 0.5903, "
    "-0.1328, 0.0234,\n"
    "    0.0244, -0.1357, 0.6113, 0.6113, -0.1357, 0.0244, 0.0234, -0.1328, 0.5903, 0.6323, "
    "-0.1387, 0.0254,\n"
    "    0.0225, -0.1299, 0.5693, 0.6528, -0.1411, 0.0264, 0.0215, -0.1260, 0.5479, 0.6724, "
    "-0.1431, 0.0273,\n"
    "    0.0200, -0.1226, 0.5264, 0.6929, -0.1445, 0.0278, 0.0190, -0.1187, 0.5049, 0.7119, "
    "-0.1460, 0.0288,\n"
    "    0.0181, -0.1147, 0.4829, 0.7314, -0.1470, 0.0293, 0.0166, -0.1104, 0.4614, 0.7505, "
    "-0.1479, 0.0298,\n"
    "    0.0156, -0.1060, 0.4399, 0.7681, -0.1479, 0.0303, 0.0146, -0.1016, 0.4185, 0.7856, "
    "-0.1479, 0.0308,\n"
    "    0.0137, -0.0967, 0.3965, 0.8022, -0.1470, 0.0313, 0.0122, -0.0923, 0.3755, 0.8193, "
    "-0.1460, 0.0313,\n"
    "    0.0112, -0.0874, 0.3540, 0.8354, -0.1445, 0.0313, 0.0103, -0.0825, 0.3330, 0.8506, "
    "-0.1426, 0.0313,\n"
    "    0.0093, -0.0776, 0.3120, 0.8657, -0.1401, 0.0308, 0.0083, -0.0728, 0.2915, 0.8789, "
    "-0.1367, 0.0308,\n"
    "    0.0073, -0.0679, 0.2710, 0.8926, -0.1333, 0.0303, 0.0063, -0.0630, 0.2510, 0.9058, "
    "-0.1294, 0.0293,\n"
    "    0.0059, -0.0581, 0.2310, 0.9170, -0.1245, 0.0288, 0.0049, -0.0537, 0.2119, 0.9282, "
    "-0.1191, 0.0278,\n"
    "    0.0044, -0.0488, 0.1929, 0.9390, -0.1138, 0.0264, 0.0034, -0.0439, 0.1738, 0.9487, "
    "-0.1074, 0.0254,\n"
    "    0.0029, -0.0396, 0.1558, 0.9575, -0.1006, 0.0239, 0.0024, -0.0352, 0.1382, 0.9648, "
    "-0.0928, 0.0225,\n"
    "    0.0020, -0.0308, 0.1206, 0.9727, -0.0850, 0.0205, 0.0015, -0.0264, 0.1040, 0.9785, "
    "-0.0762, 0.0186,\n"
    "    0.0010, -0.0220, 0.0874, 0.9844, -0.0674, 0.0166, 0.0005, -0.0181, 0.0713, 0.9897, "
    "-0.0576, 0.0142,\n"
    "    0.0005, -0.0142, 0.0562, 0.9932, -0.0474, 0.0117, 0.0005, -0.0103, 0.0415, 0.9956, "
    "-0.0361, 0.0088,\n"
    "    0.0, -0.0068, 0.0269, 0.9985, -0.0249, 0.0063, 0.0, -0.0034, 0.0132, 1.0000, -0.0127, "
    "0.0029\n"
    ");\n"
    "const float kCoefUsm[384] = float[384](\n"
    "    0.0, -0.6001, 1.2002, -0.6001, 0.0, 0.0, 0.0029, -0.6084, 1.1987, -0.5903, -0.0029, 0.0,\n"
    "    0.0049, -0.6147, 1.1958, -0.5791, -0.0068, 0.0005, 0.0073, -0.6196, 1.1890, -0.5659, "
    "-0.0103, 0.0,\n"
    "    0.0093, -0.6235, 1.1802, -0.5513, -0.0151, 0.0, 0.0112, -0.6265, 1.1699, -0.5352, "
    "-0.0195, 0.0005,\n"
    "    0.0122, -0.6270, 1.1582, -0.5181, -0.0259, 0.0005, 0.0142, -0.6284, 1.1455, -0.5005, "
    "-0.0317, 0.0005,\n"
    "    0.0156, -0.6265, 1.1274, -0.4790, -0.0386, 0.0005, 0.0166, -0.6235, 1.1089, -0.4570, "
    "-0.0454, 0.0010,\n"
    "    0.0176, -0.6187, 1.0879, -0.4346, -0.0532, 0.0010, 0.0181, -0.6138, 1.0659, -0.4102, "
    "-0.0615, 0.0015,\n"
    "    0.0190, -0.6069, 1.0405, -0.3843, -0.0698, 0.0015, 0.0195, -0.6006, 1.0161, -0.3574, "
    "-0.0796, 0.0020,\n"
    "    0.0200, -0.5928, 0.9893, -0.3286, -0.0898, 0.0024, 0.0200, -0.5820, 0.9580, -0.2988, "
    "-0.1001, 0.0029,\n"
    "    0.0200, -0.5728, 0.9292, -0.2690, -0.1104, 0.0034, 0.0200, -0.5620, 0.8975, -0.2368, "
    "-0.1226, 0.0039,\n"
    "    0.0205, -0.5498, 0.8643, -0.2046, -0.1343, 0.0044, 0.0200, -0.5371, 0.8301, -0.1709, "
    "-0.1465, 0.0049,\n"
    "    0.0195, -0.5239, 0.7944, -0.1367, -0.1587, 0.0054, 0.0195, -0.5107, 0.7598, -0.1021, "
    "-0.1724, 0.0059,\n"
    "    0.0190, -0.4966, 0.7231, -0.0649, -0.1865, 0.0063, 0.0186, -0.4819, 0.6846, -0.0288, "
    "-0.1997, 0.0068,\n"
    "    0.0186, -0.4668, 0.6460, 0.0093, -0.2144, 0.0073, 0.0176, -0.4507, 0.6055, 0.0479, "
    "-0.2290, 0.0083,\n"
    "    0.0171, -0.4370, 0.5693, 0.0859, -0.2446, 0.0088, 0.0161, -0.4199, 0.5283, 0.1255, "
    "-0.2598, 0.0098,\n"
    "    0.0161, -0.4048, 0.4883, 0.1655, -0.2754, 0.0103, 0.0151, -0.3887, 0.4497, 0.2041, "
    "-0.2910, 0.0107,\n"
    "    0.0142, -0.3711, 0.4072, 0.2446, -0.3066, 0.0117, 0.0137, -0.3555, 0.3672, 0.2852, "
    "-0.3228, 0.0122,\n"
    "    0.0132, -0.3394, 0.3262, 0.3262, -0.3394, 0.0132, 0.0122, -0.3228, 0.2852, 0.3672, "
    "-0.3555, 0.0137,\n"
    "    0.0117, -0.3066, 0.2446, 0.4072, -0.3711, 0.0142, 0.0107, -0.2910, 0.2041, 0.4497, "
    "-0.3887, 0.0151,\n"
    "    0.0103, -0.2754, 0.1655, 0.4883, -0.4048, 0.0161, 0.0098, -0.2598, 0.1255, 0.5283, "
    "-0.4199, 0.0161,\n"
    "    0.0088, -0.2446, 0.0859, 0.5693, -0.4370, 0.0171, 0.0083, -0.2290, 0.0479, 0.6055, "
    "-0.4507, 0.0176,\n"
    "    0.0073, -0.2144, 0.0093, 0.6460, -0.4668, 0.0186, 0.0068, -0.1997, -0.0288, 0.6846, "
    "-0.4819, 0.0186,\n"
    "    0.0063, -0.1865, -0.0649, 0.7231, -0.4966, 0.0190, 0.0059, -0.1724, -0.1021, 0.7598, "
    "-0.5107, 0.0195,\n"
    "    0.0054, -0.1587, -0.1367, 0.7944, -0.5239, 0.0195, 0.0049, -0.1465, -0.1709, 0.8301, "
    "-0.5371, 0.0200,\n"
    "    0.0044, -0.1343, -0.2046, 0.8643, -0.5498, 0.0205, 0.0039, -0.1226, -0.2368, 0.8975, "
    "-0.5620, 0.0200,\n"
    "    0.0034, -0.1104, -0.2690, 0.9292, -0.5728, 0.0200, 0.0029, -0.1001, -0.2988, 0.9580, "
    "-0.5820, 0.0200,\n"
    "    0.0024, -0.0898, -0.3286, 0.9893, -0.5928, 0.0200, 0.0020, -0.0796, -0.3574, 1.0161, "
    "-0.6006, 0.0195,\n"
    "    0.0015, -0.0698, -0.3843, 1.0405, -0.6069, 0.0190, 0.0015, -0.0615, -0.4102, 1.0659, "
    "-0.6138, 0.0181,\n"
    "    0.0010, -0.0532, -0.4346, 1.0879, -0.6187, 0.0176, 0.0010, -0.0454, -0.4570, 1.1089, "
    "-0.6235, 0.0166,\n"
    "    0.0005, -0.0386, -0.4790, 1.1274, -0.6265, 0.0156, 0.0005, -0.0317, -0.5005, 1.1455, "
    "-0.6284, 0.0142,\n"
    "    0.0005, -0.0259, -0.5181, 1.1582, -0.6270, 0.0122, 0.0005, -0.0195, -0.5352, 1.1699, "
    "-0.6265, 0.0112,\n"
    "    0.0, -0.0151, -0.5513, 1.1802, -0.6235, 0.0093, 0.0, -0.0103, -0.5659, 1.1890, -0.6196, "
    "0.0073,\n"
    "    0.0005, -0.0068, -0.5791, 1.1958, -0.6147, 0.0049, 0.0, -0.0029, -0.5903, 1.1987, "
    "-0.6084, 0.0029\n"
    ");\n"
    // Set from the sharpness at the start of main, as NVScalerUpdateConfig does.
    "float kSharpStrengthMin;\n"
    "float kSharpStrengthScale;\n"
    "float kSharpLimitMin;\n"
    "float kSharpLimitScale;\n"
    // The 6x6 brightness around the point, row by row.
    "float p[36];\n"
    "float P(int i, int j) { return p[i * 6 + j]; }\n"
    "float lumaAt(ivec2 q) {\n"
    "    vec3 c = texelFetch(u_tex, clamp(q, ivec2(0), ivec2(u_src) - ivec2(1)), 0).rgb;\n"
    "    return dot(c, vec3(0.2126, 0.7152, 0.0722));\n"
    "}\n"
    // The SDK's GetEdgeMap, over the 3x3 from (i, j).
    "vec4 edgeMap(int i, int j) {\n"
    "    float g0 = abs(P(i, j) + P(i, j + 1) + P(i, j + 2)\n"
    "                   - P(i + 2, j) - P(i + 2, j + 1) - P(i + 2, j + 2));\n"
    "    float g45 = abs(P(i + 1, j) + P(i, j) + P(i, j + 1)\n"
    "                    - P(i + 2, j + 1) - P(i + 2, j + 2) - P(i + 1, j + 2));\n"
    "    float g90 = abs(P(i, j) + P(i + 1, j) + P(i + 2, j)\n"
    "                    - P(i, j + 2) - P(i + 1, j + 2) - P(i + 2, j + 2));\n"
    "    float g135 = abs(P(i + 1, j) + P(i + 2, j) + P(i + 2, j + 1)\n"
    "                     - P(i, j + 1) - P(i, j + 2) - P(i + 1, j + 2));\n"
    "    float g090Max = max(g0, g90);\n"
    "    float g090Min = min(g0, g90);\n"
    "    float g45135Max = max(g45, g135);\n"
    "    float g45135Min = min(g45, g135);\n"
    "    if (g090Max + g45135Max == 0.0) return vec4(0.0);\n"
    "    float e090 = min(g090Max / (g090Max + g45135Max), 1.0);\n"
    "    float e45135 = 1.0 - e090;\n"
    "    bool c090 = (g090Max > g090Min * kDetectRatio) && (g090Max > kDetectThres)\n"
    "                && (g090Max > g45135Min);\n"
    "    bool c45135 = (g45135Max > g45135Min * kDetectRatio) && (g45135Max > kDetectThres)\n"
    "                  && (g45135Max > g090Min);\n"
    "    bool cg090 = g090Max == g0;\n"
    "    bool cg45135 = g45135Max == g45;\n"
    "    float fe090 = (c090 && c45135) ? e090 : 1.0;\n"
    "    float fe45135 = (c090 && c45135) ? e45135 : 1.0;\n"
    "    return vec4((c090 && cg090) ? fe090 : 0.0, (c090 && !cg090) ? fe090 : 0.0,\n"
    "                (c45135 && cg45135) ? fe45135 : 0.0, (c45135 && !cg45135) ? fe45135 : 0.0);\n"
    "}\n"
    "float calcLTI(float p0, float p1, float p2, float p3, float p4, float p5, int ph) {\n"
    "    bool selector = ph <= 32;\n"
    "    float sel = selector ? p0 : p3;\n"
    "    float aMin = min(min(p1, p2), sel);\n"
    "    float aMax = max(max(p1, p2), sel);\n"
    "    sel = selector ? p2 : p5;\n"
    "    float bMin = min(min(p3, p4), sel);\n"
    "    float bMax = max(max(p3, p4), sel);\n"
    "    float aCont = aMax - aMin;\n"
    "    float bCont = bMax - bMin;\n"
    "    float contRatio = max(aCont, bCont) / (min(aCont, bCont) + kEps);\n"
    "    return (1.0 - clamp((contRatio - kMinContrastRatio) * kRatioNorm, 0.0, 1.0))\n"
    "           * kContrastBoost;\n"
    "}\n"
    "float evalPoly6(float pxl[6], int ph) {\n"
    "    float y = 0.0;\n"
    "    float yUsm = 0.0;\n"
    "    for (int i = 0; i < 6; ++i) {\n"
    "        y += kCoefScaler[ph * 6 + i] * pxl[i];\n"
    "        yUsm += kCoefUsm[ph * 6 + i] * pxl[i];\n"
    "    }\n"
    "    float yScale = 1.0 - clamp((y - kSharpStartY) * kSharpScaleY, 0.0, 1.0);\n"
    "    yUsm *= yScale * kSharpStrengthScale + kSharpStrengthMin;\n"
    "    float yLimit = (yScale * kSharpLimitScale + kSharpLimitMin) * y;\n"
    "    yUsm = min(yLimit, max(-yLimit, yUsm));\n"
    "    yUsm *= calcLTI(pxl[0], pxl[1], pxl[2], pxl[3], pxl[4], pxl[5], ph);\n"
    "    return y + yUsm;\n"
    "}\n"
    "float filterNormal(int fxInt, int fyInt) {\n"
    "    float h = 0.0;\n"
    "    for (int j = 0; j < 6; ++j) {\n"
    "        float v = 0.0;\n"
    "        for (int i = 0; i < 6; ++i) v += P(i, j) * kCoefScaler[fyInt * 6 + i];\n"
    "        h += v * kCoefScaler[fxInt * 6 + j];\n"
    "    }\n"
    "    return h;\n"
    "}\n"
    "float addDirFilters(float fx, float fy, int fxInt, int fyInt, vec4 w) {\n"
    "    float f = 0.0;\n"
    "    float pxl[6];\n"
    "    if (w.x > 0.0) {\n"
    "        for (int i = 0; i < 6; ++i) pxl[i] = mix(P(i, 2), P(i, 3), fx);\n"
    "        f += evalPoly6(pxl, fyInt) * w.x;\n"
    "    }\n"
    "    if (w.y > 0.0) {\n"
    "        for (int i = 0; i < 6; ++i) pxl[i] = mix(P(2, i), P(3, i), fy);\n"
    "        f += evalPoly6(pxl, fxInt) * w.y;\n"
    "    }\n"
    "    if (w.z > 0.0) {\n"
    "        float b45 = 0.5 + 0.5 * (fx - fy);\n"
    "        float t[7];\n"
    "        t[1] = mix(P(2, 1), P(1, 2), b45);\n"
    "        t[3] = mix(P(3, 2), P(2, 3), b45);\n"
    "        t[5] = mix(P(4, 3), P(3, 4), b45);\n"
    "        b45 -= 0.5;\n"
    "        bool up = b45 >= 0.0;\n"
    "        t[0] = mix(P(1, 1), up ? P(0, 2) : P(2, 0), abs(b45));\n"
    "        t[2] = mix(P(2, 2), up ? P(1, 3) : P(3, 1), abs(b45));\n"
    "        t[4] = mix(P(3, 3), up ? P(2, 4) : P(4, 2), abs(b45));\n"
    "        t[6] = mix(P(4, 4), up ? P(3, 5) : P(5, 3), abs(b45));\n"
    "        float p45 = fx + fy;\n"
    "        int o = 0;\n"
    "        if (p45 >= 1.0) {\n"
    "            o = 1;\n"
    "            p45 -= 1.0;\n"
    "        }\n"
    "        for (int i = 0; i < 6; ++i) pxl[i] = t[i + o];\n"
    "        f += evalPoly6(pxl, int(p45 * 64.0)) * w.z;\n"
    "    }\n"
    "    if (w.w > 0.0) {\n"
    "        float b135 = 0.5 * (fx + fy);\n"
    "        float t[7];\n"
    "        t[1] = mix(P(3, 1), P(4, 2), b135);\n"
    "        t[3] = mix(P(2, 2), P(3, 3), b135);\n"
    "        t[5] = mix(P(1, 3), P(2, 4), b135);\n"
    "        b135 -= 0.5;\n"
    "        bool up = b135 >= 0.0;\n"
    "        t[0] = mix(P(4, 1), up ? P(5, 2) : P(3, 0), abs(b135));\n"
    "        t[2] = mix(P(3, 2), up ? P(4, 3) : P(2, 1), abs(b135));\n"
    "        t[4] = mix(P(2, 3), up ? P(3, 4) : P(1, 2), abs(b135));\n"
    "        t[6] = mix(P(1, 4), up ? P(2, 5) : P(0, 3), abs(b135));\n"
    "        float p135 = 1.0 + (fx - fy);\n"
    "        int o = 0;\n"
    "        if (p135 >= 1.0) {\n"
    "            o = 1;\n"
    "            p135 -= 1.0;\n"
    "        }\n"
    "        for (int i = 0; i < 6; ++i) pxl[i] = t[i + o];\n"
    "        f += evalPoly6(pxl, int(p135 * 64.0)) * w.w;\n"
    "    }\n"
    "    return f;\n"
    "}\n"
    "void main() {\n"
    "    float s = clamp(u_sharp, 0.0, 1.0) - 0.5;\n"
    "    float maxScale = s >= 0.0 ? 1.25 : 1.75;\n"
    "    float minScale = s >= 0.0 ? 1.25 : 1.0;\n"
    "    float limitScale = s >= 0.0 ? 1.25 : 1.0;\n"
    "    kSharpStrengthMin = max(0.0, 0.4 + s * minScale * 1.2);\n"
    "    kSharpStrengthScale = 1.6 + s * maxScale * 1.8 - kSharpStrengthMin;\n"
    "    kSharpLimitMin = max(0.1, 0.14 + s * limitScale * 0.32);\n"
    "    kSharpLimitScale = 0.5 + s * limitScale * 0.6 - kSharpLimitMin;\n"
    "    vec2 src = v_uv * u_src - 0.5;\n"
    "    vec2 fl = floor(src);\n"
    "    vec2 fr = src - fl;\n"
    "    ivec2 base = ivec2(fl) - ivec2(2);\n"
    "    for (int i = 0; i < 6; ++i)\n"
    "        for (int j = 0; j < 6; ++j) p[i * 6 + j] = lumaAt(base + ivec2(j, i));\n"
    "    int fxInt = int(fr.x * 64.0);\n"
    "    int fyInt = int(fr.y * 64.0);\n"
    "    vec4 w = mix(mix(edgeMap(1, 1), edgeMap(1, 2), fr.x),\n"
    "                 mix(edgeMap(2, 1), edgeMap(2, 2), fr.x), fr.y);\n"
    "    float baseWeight = 1.0 - w.x - w.y - w.z - w.w;\n"
    "    float opY = filterNormal(fxInt, fyInt) * baseWeight\n"
    "                + addDirFilters(fr.x, fr.y, fxInt, fyInt, w);\n"
    "    vec4 op = texture(u_tex, v_uv);\n"
    "    float y = dot(op.rgb, vec3(0.2126, 0.7152, 0.0722));\n"
    "    o_color = vec4(clamp(op.rgb + vec3(opY - y), 0.0, 1.0), 1.0);\n"
    "}\n";

// -----------------------------------------------------------------------------
// xBR: Hyllian's xBR-lv2
// -----------------------------------------------------------------------------
//
// Edge-directed pixel-art scaling: each output pixel compares the 21 texels
// around its source texel for edges at 30, 45 and 60 degrees and blends across
// the ones it finds, so stair-steps become smooth lines. Its settings are the
// reference's defaults (corner C, smooth tips, the three-times blend widths,
// small details off). The reference computes its sample offsets in the vertex
// shader for a libretro pipeline; here they are worked out per fragment from
// the same coordinates. It compares texels exactly, so its source is read
// unfiltered.
//
// xBR-lv2 is
//   Copyright (C) 2011-2016 Hyllian - sergiogdb@gmail.com
//
//   Permission is hereby granted, free of charge, to any person obtaining a
//   copy of this software and associated documentation files (the
//   "Software"), to deal in the Software without restriction, including
//   without limitation the rights to use, copy, modify, merge, publish,
//   distribute, sublicense, and/or sell copies of the Software, and to permit
//   persons to whom the Software is furnished to do so, subject to the
//   following conditions:
//
//   The above copyright notice and this permission notice shall be included
//   in all copies or substantial portions of the Software.
//
//   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//   DEALINGS IN THE SOFTWARE.
//
//   Incorporates some of the ideas from SABR shader. Thanks to Joshua Street.
const char kXbr[] = NOCTURNE_GLSL_VERSION
    "uniform sampler2D u_tex;\n"
    "uniform vec2  u_src;\n"
    "in  vec2 v_uv;\n"
    "out vec4 o_color;\n"
    "const float XBR_SCALE = 3.0;\n"
    "const float XBR_EQ_THRESHOLD = 15.0;\n"
    "const float XBR_LV2_COEFFICIENT = 2.0;\n"
    "const vec3 rgbw = vec3(14.352, 28.176, 5.472);\n"
    "const vec4 delta = vec4(1.0 / XBR_SCALE);\n"
    "const vec4 delta_l = vec4(0.5 / XBR_SCALE, 1.0 / XBR_SCALE, 0.5 / XBR_SCALE, 1.0 / "
    "XBR_SCALE);\n"
    "const vec4 delta_u = vec4(1.0 / XBR_SCALE, 0.5 / XBR_SCALE, 1.0 / XBR_SCALE, 0.5 / "
    "XBR_SCALE);\n"
    "const vec4 Ao = vec4( 1.0, -1.0, -1.0, 1.0);\n"
    "const vec4 Bo = vec4( 1.0,  1.0, -1.0,-1.0);\n"
    "const vec4 Co = vec4( 1.5,  0.5, -0.5, 0.5);\n"
    "const vec4 Ax = vec4( 1.0, -1.0, -1.0, 1.0);\n"
    "const vec4 Bx = vec4( 0.5,  2.0, -0.5,-2.0);\n"
    "const vec4 Cx = vec4( 1.0,  1.0, -0.5, 0.0);\n"
    "const vec4 Ay = vec4( 1.0, -1.0, -1.0, 1.0);\n"
    "const vec4 By = vec4( 2.0,  0.5, -2.0,-0.5);\n"
    "const vec4 Cy = vec4( 2.0,  0.0, -1.0, 0.5);\n"
    "const vec4 Ci = vec4(0.25, 0.25, 0.25, 0.25);\n"
    "vec4 df(vec4 A, vec4 B) { return abs(A - B); }\n"
    "vec4 diff(vec4 A, vec4 B) { return vec4(notEqual(A, B)); }\n"
    "vec4 eq(vec4 A, vec4 B) { return step(df(A, B), vec4(XBR_EQ_THRESHOLD)); }\n"
    "vec4 neq(vec4 A, vec4 B) { return vec4(1.0) - eq(A, B); }\n"
    "vec4 wd(vec4 a, vec4 b, vec4 c, vec4 d, vec4 e, vec4 f, vec4 g, vec4 h) {\n"
    "    return df(a, b) + df(a, c) + df(d, e) + df(d, f) + 4.0 * df(g, h);\n"
    "}\n"
    "float c_df(vec3 c1, vec3 c2) {\n"
    "    vec3 d = abs(c1 - c2);\n"
    "    return d.r + d.g + d.b;\n"
    "}\n"
    "vec3 tex(vec2 uv) { return texture(u_tex, uv).rgb; }\n"
    "void main() {\n"
    "    float dx = 1.0 / u_src.x;\n"
    "    float dy = 1.0 / u_src.y;\n"
    "    vec2 texCoord = v_uv;\n"
    "    texCoord.x *= 1.00000001;\n"
    "    vec4 t1 = v_uv.xxxy + vec4(-dx, 0.0, dx, -2.0 * dy);\n" // A1 B1 C1
    "    vec4 t2 = v_uv.xxxy + vec4(-dx, 0.0, dx, -dy);\n"       //  A  B  C
    "    vec4 t3 = v_uv.xxxy + vec4(-dx, 0.0, dx, 0.0);\n"       //  D  E  F
    "    vec4 t4 = v_uv.xxxy + vec4(-dx, 0.0, dx, dy);\n"        //  G  H  I
    "    vec4 t5 = v_uv.xxxy + vec4(-dx, 0.0, dx, 2.0 * dy);\n"  // G5 H5 I5
    "    vec4 t6 = v_uv.xyyy + vec4(-2.0 * dx, -dy, 0.0, dy);\n" // A0 D0 G0
    "    vec4 t7 = v_uv.xyyy + vec4(2.0 * dx, -dy, 0.0, dy);\n"  // C4 F4 I4
    "    vec2 fp = fract(texCoord * u_src);\n"
    "    vec3 A1 = tex(t1.xw), B1 = tex(t1.yw), C1 = tex(t1.zw);\n"
    "    vec3 A = tex(t2.xw), B = tex(t2.yw), C = tex(t2.zw);\n"
    "    vec3 D = tex(t3.xw), E = tex(t3.yw), F = tex(t3.zw);\n"
    "    vec3 G = tex(t4.xw), H = tex(t4.yw), I = tex(t4.zw);\n"
    "    vec3 G5 = tex(t5.xw), H5 = tex(t5.yw), I5 = tex(t5.zw);\n"
    "    vec3 A0 = tex(t6.xy), D0 = tex(t6.xz), G0 = tex(t6.xw);\n"
    "    vec3 C4 = tex(t7.xy), F4 = tex(t7.xz), I4 = tex(t7.xw);\n"
    "    vec4 b = vec4(dot(B, rgbw), dot(D, rgbw), dot(H, rgbw), dot(F, rgbw));\n"
    "    vec4 c = vec4(dot(C, rgbw), dot(A, rgbw), dot(G, rgbw), dot(I, rgbw));\n"
    "    vec4 d = b.yzwx;\n"
    "    vec4 e = vec4(dot(E, rgbw));\n"
    "    vec4 f = b.wxyz;\n"
    "    vec4 g = c.zwxy;\n"
    "    vec4 h = b.zwxy;\n"
    "    vec4 i = c.wxyz;\n"
    "    vec4 i4 = vec4(dot(I4, rgbw), dot(C1, rgbw), dot(A0, rgbw), dot(G5, rgbw));\n"
    "    vec4 i5 = vec4(dot(I5, rgbw), dot(C4, rgbw), dot(A1, rgbw), dot(G0, rgbw));\n"
    "    vec4 h5 = vec4(dot(H5, rgbw), dot(F4, rgbw), dot(B1, rgbw), dot(D0, rgbw));\n"
    "    vec4 f4 = h5.yzwx;\n"
    "    vec4 fx = Ao * fp.y + Bo * fp.x;\n"
    "    vec4 fx_l = Ax * fp.y + Bx * fp.x;\n"
    "    vec4 fx_u = Ay * fp.y + By * fp.x;\n"
    "    vec4 irlv0 = diff(e, f) * diff(e, h);\n"
    "    vec4 irlv1 = irlv0 * (neq(f, b) * neq(f, c) + neq(h, d) * neq(h, g)\n"
    "                          + eq(e, i) * (neq(f, f4) * neq(f, i4) + neq(h, h5) * neq(h, i5))\n"
    "                          + eq(e, g) + eq(e, c));\n"
    "    vec4 irlv2l = diff(e, g) * diff(d, g);\n"
    "    vec4 irlv2u = diff(e, c) * diff(b, c);\n"
    "    vec4 fx45i = clamp((fx + delta - Co - Ci) / (2.0 * delta), 0.0, 1.0);\n"
    "    vec4 fx45 = clamp((fx + delta - Co) / (2.0 * delta), 0.0, 1.0);\n"
    "    vec4 fx30 = clamp((fx_l + delta_l - Cx) / (2.0 * delta_l), 0.0, 1.0);\n"
    "    vec4 fx60 = clamp((fx_u + delta_u - Cy) / (2.0 * delta_u), 0.0, 1.0);\n"
    "    vec4 wd1 = wd(e, c, g, i, h5, f4, h, f);\n"
    "    vec4 wd2 = wd(h, d, i5, f, i4, b, e, i);\n"
    "    vec4 edri = step(wd1, wd2) * irlv0;\n"
    "    vec4 edr = step(wd1 + vec4(0.1), wd2) * step(vec4(0.5), irlv1);\n"
    "    vec4 edr_l = step(XBR_LV2_COEFFICIENT * df(f, g), df(h, c)) * irlv2l * edr;\n"
    "    vec4 edr_u = step(XBR_LV2_COEFFICIENT * df(h, c), df(f, g)) * irlv2u * edr;\n"
    "    fx45 = edr * fx45;\n"
    "    fx30 = edr_l * fx30;\n"
    "    fx60 = edr_u * fx60;\n"
    "    fx45i = edri * fx45i;\n"
    "    vec4 px = step(df(e, f), df(e, h));\n"
    "    vec4 maximos = max(max(fx30, fx60), max(fx45, fx45i));\n"
    "    vec3 res1 = E;\n"
    "    res1 = mix(res1, mix(H, F, px.x), maximos.x);\n"
    "    res1 = mix(res1, mix(B, D, px.z), maximos.z);\n"
    "    vec3 res2 = E;\n"
    "    res2 = mix(res2, mix(F, B, px.y), maximos.y);\n"
    "    res2 = mix(res2, mix(D, H, px.w), maximos.w);\n"
    "    vec3 res = mix(res1, res2, step(c_df(E, res1), c_df(E, res2)));\n"
    "    o_color = vec4(res, 1.0);\n"
    "}\n";

} // namespace

extern "C" const char *nocturne_upscale_fragment_source(int mode) {
    switch (mode) {
    case NOCTURNE_UPSCALER_FSR:
        return kFsr;
    case NOCTURNE_UPSCALER_LANCZOS:
        return kLanczos;
    case NOCTURNE_UPSCALER_GSR:
        return kGsr;
    case NOCTURNE_UPSCALER_NIS:
        return kNis;
    case NOCTURNE_UPSCALER_XBR:
        return kXbr;
    default: // Standard, or no such filter
        return nullptr;
    }
}

extern "C" int nocturne_upscale_wants_nearest(int mode) {
    return mode == NOCTURNE_UPSCALER_XBR;
}

#else // !NOCTURNE_GL_PRESENT

extern "C" const char *nocturne_upscale_fragment_source(int) {
    return nullptr;
}

extern "C" int nocturne_upscale_wants_nearest(int) {
    return 0;
}

#endif // NOCTURNE_GL_PRESENT
