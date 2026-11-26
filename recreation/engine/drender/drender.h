#pragma once

#include "engine/fwd.h"
#include "engine/polygonstate.h"
#include "platform/fwd.h"

#include <span>

namespace nocturne::engine {

using CustomScanlineFunc = void(int, SSoftwareEdge *, SSoftwareEdge *);

// The shadow pass's row: depth as 16-bit pixels into the screen rows, each shifted down by 8 and
// kept where it is nearer, up to but not including the further right edge.
void drawShadowDepthRow(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge,
                        int scanline_y, IScreenDevice &screen, const C2d &two_d);
// The shadow pass's see-through row: each depth whole into the 16-bit screen rows, where the
// texel's opacity, or its colour index without an opacity map, is not zero, from the further left
// through the further right edge.
void drawShadowCutoutRow(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge,
                         int scanline_y, IScreenDevice &screen, const C2d &two_d,
                         const SCurrentTexture &texture);

int qsortByCapturedFaceDepthAscending(SFace **face_ptr_a, SFace **face_ptr_b);
int qsortByCapturedFaceDepthDescending(SFace **face_ptr_a, SFace **face_ptr_b);

// Both cull on the first three corners alone, leave the polygon to the hardware renderer when it
// draws and textures are on, and run the rows to the polygon's end unless a row stops it.

// Depth is the reciprocal, or the transformed depth with textures off; green and blue need vertex
// colour.
void renderTriangleTextured(std::span<platform::SRenderVertex> vertex_buffer,
                            std::span<const int> vertex_indices, const SPolygonState &state,
                            CSpecial &special, const C3d &three_d, const SCurrentTexture &texture);
// x and depth in 24.8 less the state's bias, after each corner on its own has the depth
// preprocessing 1 or 6 asks for.
void renderTriangleSimple(std::span<platform::SRenderVertex> vertex_buffer,
                          std::span<const int> vertex_indices, const SPolygonState &state,
                          CSpecial &special, const C3d &three_d, const SCurrentTexture &texture);

} // namespace nocturne::engine
