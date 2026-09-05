#pragma once

// =============================================================================
// TRIGL BATCH — polygons into an indexed triangle list
// =============================================================================
//
// All four of the engine's draw entry points submit convex polygons, and all
// four are triangulated the same way: a fan from the polygon's first vertex.
// This accumulates them into one vertex array and one index array, so a run of
// polygons sharing a state becomes a single draw.
//
// PURE ON PURPOSE, like the rest of the renderer core: no GL, no globals, no
// system headers. The caller owns the storage and does the drawing; what lives
// here is the index arithmetic and the capacity accounting, which is where the
// off-by-ones would be.

#include "renderer/trigl_vertex.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NocturneTriglBatch {
    NocturneTriglScreenVertex *vertices;
    unsigned short *indices;
    int vertex_capacity;
    int index_capacity;
    int vertex_count;
    int index_count;
} NocturneTriglBatch;

// Drop everything accumulated. Capacities and storage are left alone.
void nocturne_trigl_batch_reset(NocturneTriglBatch *batch);

// Reserve room for one convex polygon and emit the fan that covers it.
//
// Returns where to write the polygon's `vertex_count` vertices, or null when
// the batch has no room — the caller draws what it has, resets, and asks again.
// A polygon of fewer than three vertices still takes its vertex slots and emits
// no triangles, which is what the engine does with one.
//
// Indices are relative to the batch's own vertex array, so the caller draws the
// whole batch with one call and no base-vertex offset.
NocturneTriglScreenVertex *nocturne_trigl_batch_add_polygon(NocturneTriglBatch *batch,
                                                            int vertex_count);

// Whether the batch holds enough to be worth drawing. A caller may draw sooner
// — a state change forces it — but never later, because the next polygon may
// not fit.
int nocturne_trigl_batch_should_flush(const NocturneTriglBatch *batch);

// The reciprocal-w scale a polygon submits with: the LARGEST eye-space depth
// among its vertices, not the nearest and not the first. Every vertex of the
// polygon divides by the same one, so the reciprocal stays within a comparable
// range across the polygon and the interpolation is even across it.
int nocturne_trigl_max_depth(const int *depths, int count);

#ifdef __cplusplus
}
#endif
