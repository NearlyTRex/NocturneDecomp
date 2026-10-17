#pragma once

#include "engine/fwd.h"
#include "engine/polygonstate.h"
#include "platform/fwd.h"

#include <span>

namespace nocturne::engine {

// Each writes the vertex where the edge from v1, inside, to v2, past the plane, meets it, and
// carries the colour, alpha and texture coordinates along; the advanced ones carry green and blue
// too. Fields one does not carry keep what output held.
// Right clips at x equal to the depth, left at minus it, top at y equal to it, bottom at minus it.
void interpolateVertexRightClip(const platform::SRenderVertex &v1,
                                const platform::SRenderVertex &v2, platform::SRenderVertex &output);
void interpolateVertexLeftClip(const platform::SRenderVertex &v1, const platform::SRenderVertex &v2,
                               platform::SRenderVertex &output);
void interpolateVertexTopClip(const platform::SRenderVertex &v1, const platform::SRenderVertex &v2,
                              platform::SRenderVertex &output);
void interpolateVertexBottomClip(const platform::SRenderVertex &v1,
                                 const platform::SRenderVertex &v2,
                                 platform::SRenderVertex &output);
// Clips at the depth far_distance, keeping what is nearer.
void interpolateVertexFarClip(const platform::SRenderVertex &v1, const platform::SRenderVertex &v2,
                              int far_distance, platform::SRenderVertex &output);
void interpolateVertexRightClipAdvanced(const platform::SRenderVertex &v1,
                                        const platform::SRenderVertex &v2,
                                        platform::SRenderVertex &output);
void interpolateVertexLeftClipAdvanced(const platform::SRenderVertex &v1,
                                       const platform::SRenderVertex &v2,
                                       platform::SRenderVertex &output);
void interpolateVertexTopClipAdvanced(const platform::SRenderVertex &v1,
                                      const platform::SRenderVertex &v2,
                                      platform::SRenderVertex &output);
void interpolateVertexBottomClipAdvanced(const platform::SRenderVertex &v1,
                                         const platform::SRenderVertex &v2,
                                         platform::SRenderVertex &output);
// Both rasterise the polygon the indices pick as it is while vertex processing is off. Otherwise
// one wholly past a side is dropped, one wholly in view may go to the hardware renderer, and one
// across a side is clipped to the view's four sides and pulled onto it.

// The far plane clips too, and the hardware renderer takes a polygon only with textures on.
void clipAndRasterize(std::span<platform::SRenderVertex> vertex_buffer,
                      std::span<const int> vertex_indices, const SPolygonState &state, CPrim &prim,
                      CSpecial &special, const C3d &three_d, const SCurrentTexture &texture);
// Clips green and blue too, for the advanced rasterisers, and the hardware renderer takes a
// polygon in view whether textures are on or not.
void clipPolygonToViewport(std::span<platform::SRenderVertex> vertex_buffer,
                           std::span<const int> vertex_indices, const SPolygonState &state,
                           CPrim &prim, CSpecial &special, const C3d &three_d,
                           const SCurrentTexture &texture);

} // namespace nocturne::engine
