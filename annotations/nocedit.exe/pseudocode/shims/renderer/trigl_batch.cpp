// =============================================================================
// TRIGL BATCH — polygons into an indexed triangle list
// =============================================================================
//
// See trigl_batch.h. No GL, no globals, no system headers.

#include "renderer/trigl_batch.h"

namespace {

// Indices are 16-bit, so a batch can address 65536 vertices at most. The engine
// draws at a lower bound than that anyway; this is the ceiling the format
// imposes, and a batch configured past it could emit an index that wraps.
const int kMaxAddressableVertices = 65536;

}  // namespace

void nocturne_trigl_batch_reset(NocturneTriglBatch *batch) {
    batch->vertex_count = 0;
    batch->index_count  = 0;
}

NocturneTriglScreenVertex *nocturne_trigl_batch_add_polygon(NocturneTriglBatch *batch,
                                                            int vertex_count) {
    if (vertex_count <= 0) return nullptr;

    const int triangles = (vertex_count >= 3) ? (vertex_count - 2) : 0;
    const int needed_indices = triangles * 3;

    int vertex_limit = batch->vertex_capacity;
    if (vertex_limit > kMaxAddressableVertices) vertex_limit = kMaxAddressableVertices;

    if (batch->vertex_count + vertex_count > vertex_limit) return nullptr;
    if (batch->index_count + needed_indices > batch->index_capacity) return nullptr;

    const unsigned short base = (unsigned short)batch->vertex_count;
    unsigned short *out = batch->indices + batch->index_count;
    for (int i = 0; i < triangles; ++i) {
        // A fan: every triangle keeps the polygon's first vertex and walks the
        // remaining edge one step at a time.
        out[0] = base;
        out[1] = (unsigned short)(base + 1 + i);
        out[2] = (unsigned short)(base + 2 + i);
        out += 3;
    }
    batch->index_count += needed_indices;

    NocturneTriglScreenVertex *slot = batch->vertices + batch->vertex_count;
    batch->vertex_count += vertex_count;
    return slot;
}

int nocturne_trigl_batch_should_flush(const NocturneTriglBatch *batch) {
    // Leave room for one more polygon of a size the engine actually submits, so
    // the common case is a draw at a batch boundary rather than a refused
    // append followed by a draw.
    const int headroom = 32;
    return (batch->vertex_count + headroom > batch->vertex_capacity) ||
           (batch->index_count + headroom * 3 > batch->index_capacity);
}

int nocturne_trigl_max_depth(const int *depths, int count) {
    if (count <= 0) return 0;
    int largest = depths[0];
    for (int i = 1; i < count; ++i) {
        if (depths[i] > largest) largest = depths[i];
    }
    return largest;
}
