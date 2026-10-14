#include "engine/clipper/clipper.h"

#include "common/math/fixed.h"
#include "engine/clipper/clipplane.h"
#include "platform/rendervertex.h"

namespace nocturne::engine {
namespace {

using common::interpolateFraction31;
using platform::SRenderVertex;

void carryColorAndTexture(const SRenderVertex &v1, const SRenderVertex &v2, int fraction,
                          SRenderVertex &output) {
    output.r = interpolateFraction31(v1.r, v2.r, fraction);
    output.a = interpolateFraction31(v1.a, v2.a, fraction);
    output.u = interpolateFraction31(v1.u, v2.u, fraction);
    output.v = interpolateFraction31(v1.v, v2.v, fraction);
}

void carryEverything(const SRenderVertex &v1, const SRenderVertex &v2, int fraction,
                     SRenderVertex &output) {
    carryColorAndTexture(v1, v2, fraction, output);
    output.g = interpolateFraction31(v1.g, v2.g, fraction);
    output.b = interpolateFraction31(v1.b, v2.b, fraction);
}

void clipBasic(const SRenderVertex &v1, const SRenderVertex &v2, const SFrustumPlane &plane,
               SRenderVertex &output) {
    carryColorAndTexture(
        v1, v2,
        clipEdgeToPlane(v1.projected_vertex, v2.projected_vertex, plane, output.projected_vertex),
        output);
}

void clipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2, const SFrustumPlane &plane,
                  SRenderVertex &output) {
    carryEverything(
        v1, v2,
        clipEdgeToPlane(v1.projected_vertex, v2.projected_vertex, plane, output.projected_vertex),
        output);
}

} // namespace

// nocedit 0x00435a00
void interpolateVertexLeftClip(const SRenderVertex &v1, const SRenderVertex &v2,
                               SRenderVertex &output) {
    clipBasic(v1, v2, kPositiveXPlane, output);
}

// nocedit 0x00435b00
void interpolateVertexRightClip(const SRenderVertex &v1, const SRenderVertex &v2,
                                SRenderVertex &output) {
    clipBasic(v1, v2, kNegativeXPlane, output);
}

// nocedit 0x00435c00
void interpolateVertexBottomClip(const SRenderVertex &v1, const SRenderVertex &v2,
                                 SRenderVertex &output) {
    clipBasic(v1, v2, kPositiveYPlane, output);
}

// nocedit 0x00435d00
void interpolateVertexTopClip(const SRenderVertex &v1, const SRenderVertex &v2,
                              SRenderVertex &output) {
    clipBasic(v1, v2, kNegativeYPlane, output);
}

// The original read the near distance from clipper.c's global.
// nocedit 0x00435e00
void interpolateVertexNearClip(const SRenderVertex &v1, const SRenderVertex &v2, int near_distance,
                               SRenderVertex &output) {
    const platform::SProjectedVertex &p1 = v1.projected_vertex;
    const platform::SProjectedVertex &p2 = v2.projected_vertex;
    const int fraction =
        common::clipFraction(common::wrappingSubtract(near_distance, p1.transformed_z),
                             common::wrappingSubtract(p2.transformed_z, p1.transformed_z));
    platform::SProjectedVertex &out = output.projected_vertex;
    out.transformed_z = interpolateFraction31(p1.transformed_z, p2.transformed_z, fraction);
    out.transformed_y = interpolateFraction31(p1.transformed_y, p2.transformed_y, fraction);
    out.transformed_x = interpolateFraction31(p1.transformed_x, p2.transformed_x, fraction);
    out.screen_x = -1;
    carryColorAndTexture(v1, v2, fraction, output);
}

// nocedit 0x00437230
void interpolateVertexLeftClipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2,
                                       SRenderVertex &output) {
    clipAdvanced(v1, v2, kPositiveXPlane, output);
}

// nocedit 0x00437360
void interpolateVertexRightClipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2,
                                        SRenderVertex &output) {
    clipAdvanced(v1, v2, kNegativeXPlane, output);
}

// nocedit 0x00437490
void interpolateVertexBottomClipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2,
                                         SRenderVertex &output) {
    clipAdvanced(v1, v2, kPositiveYPlane, output);
}

// nocedit 0x004375c0
void interpolateVertexTopClipAdvanced(const SRenderVertex &v1, const SRenderVertex &v2,
                                      SRenderVertex &output) {
    clipAdvanced(v1, v2, kNegativeYPlane, output);
}

} // namespace nocturne::engine
