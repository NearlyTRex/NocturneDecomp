#pragma once

#include "platform/fwd.h"

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
void clipAndRasterize(int vertex_count, int *vertex_indices);
void clipPolygonToViewport(int vertex_count, int *vertex_indices);

} // namespace nocturne::engine
