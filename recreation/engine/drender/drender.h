#pragma once

#include "engine/fwd.h"
#include "engine/polygonstate.h"
#include "platform/fwd.h"

#include <span>

namespace nocturne::engine {

using CustomScanlineFunc = void(int, SSoftwareEdge *, SSoftwareEdge *);

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
