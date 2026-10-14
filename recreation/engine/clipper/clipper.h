#pragma once

#include "platform/fwd.h"

namespace nocturne::engine {

// Each writes the vertex where the edge from v1, inside, to v2, past the plane, meets it, and
// carries the colour, alpha and texture coordinates along; the advanced ones carry green and blue
// too. Fields one does not carry keep what output held.
// Left clips at x equal to the depth, right at minus it, bottom at y equal to it, top at minus it.
void interpolateVertexLeftClip(const platform::SRenderVertex &v1, const platform::SRenderVertex &v2,
                               platform::SRenderVertex &output);
void interpolateVertexRightClip(const platform::SRenderVertex &v1,
                                const platform::SRenderVertex &v2, platform::SRenderVertex &output);
void interpolateVertexBottomClip(const platform::SRenderVertex &v1,
                                 const platform::SRenderVertex &v2,
                                 platform::SRenderVertex &output);
void interpolateVertexTopClip(const platform::SRenderVertex &v1, const platform::SRenderVertex &v2,
                              platform::SRenderVertex &output);
// Clips at the depth near_distance.
void interpolateVertexNearClip(const platform::SRenderVertex &v1, const platform::SRenderVertex &v2,
                               int near_distance, platform::SRenderVertex &output);
void interpolateVertexLeftClipAdvanced(const platform::SRenderVertex &v1,
                                       const platform::SRenderVertex &v2,
                                       platform::SRenderVertex &output);
void interpolateVertexRightClipAdvanced(const platform::SRenderVertex &v1,
                                        const platform::SRenderVertex &v2,
                                        platform::SRenderVertex &output);
void interpolateVertexBottomClipAdvanced(const platform::SRenderVertex &v1,
                                         const platform::SRenderVertex &v2,
                                         platform::SRenderVertex &output);
void interpolateVertexTopClipAdvanced(const platform::SRenderVertex &v1,
                                      const platform::SRenderVertex &v2,
                                      platform::SRenderVertex &output);
void clipAndRasterize(int vertex_count, int *vertex_indices);
void clipPolygonToViewport(int vertex_count, int *vertex_indices);

} // namespace nocturne::engine
