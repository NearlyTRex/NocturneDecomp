// =============================================================================
// Polygons into an indexed triangle list
// =============================================================================
//
// The fan indices are checked against the engine's own arithmetic, and the
// geometric property they are supposed to have — every triangle keeps vertex 0
// and walks the remaining edge — is checked directly, because index arithmetic
// that is wrong by one still produces triangles and still draws something.

#include "tests/nocturne_test.h"
#include "renderer/trigl_batch.h"

#include <string>
#include <vector>

namespace {

// The index loop of APIDLLdrawPolygon2, in its own form.
std::vector<unsigned short> oracle_fan(int base, int vertex_count) {
    std::vector<unsigned short> out;
    const int triangles = vertex_count - 2;
    if (triangles <= 0) return out;
    for (int i = 0; i < triangles; ++i) {
        out.push_back((unsigned short)base);
        out.push_back((unsigned short)(base + 1 + i));
        out.push_back((unsigned short)(base + 2 + i));
    }
    return out;
}

struct Storage {
    std::vector<NocturneTriglScreenVertex> vertices;
    std::vector<unsigned short> indices;
    NocturneTriglBatch batch;

    Storage(int vcap, int icap) : vertices(vcap), indices(icap) {
        batch.vertices        = vertices.data();
        batch.indices         = indices.data();
        batch.vertex_capacity = vcap;
        batch.index_capacity  = icap;
        nocturne_trigl_batch_reset(&batch);
    }
};

}  // namespace

NOCTURNE_TEST(fan_indices_match_the_engine) {
    Storage s(4096, 8192);
    int base = 0;
    for (int n = 1; n <= 24; ++n) {
        const std::string at = "polygon of " + std::to_string(n);
        const int before = s.batch.index_count;
        NocturneTriglScreenVertex *slot = nocturne_trigl_batch_add_polygon(&s.batch, n);
        CHECK_AT(slot == s.vertices.data() + base, at);

        const std::vector<unsigned short> want = oracle_fan(base, n);
        CHECK_EQ_AT((int)(s.batch.index_count - before), (int)want.size(), at);
        for (size_t i = 0; i < want.size(); ++i) {
            CHECK_EQ_AT(s.indices[before + (int)i], want[i],
                        at + " index " + std::to_string(i));
        }
        base += n;
        CHECK_EQ_AT(s.batch.vertex_count, base, at);
    }
}

// The property the arithmetic is for, checked without reference to how it is
// written: a fan keeps vertex 0 and every triangle shares an edge with the next.
NOCTURNE_TEST(every_triangle_keeps_the_first_vertex) {
    Storage s(4096, 8192);
    const int n = 9;
    nocturne_trigl_batch_add_polygon(&s.batch, n);

    CHECK_EQ(s.batch.index_count, (n - 2) * 3);
    for (int t = 0; t < n - 2; ++t) {
        const unsigned short a = s.indices[t * 3 + 0];
        const unsigned short b = s.indices[t * 3 + 1];
        const unsigned short c = s.indices[t * 3 + 2];
        const std::string at = "triangle " + std::to_string(t);
        CHECK_EQ_AT(a, 0, at);
        CHECK_EQ_AT(c, (unsigned short)(b + 1), at);
        CHECK_AT(b < n && c < n, at + " stays inside the polygon");
        if (t > 0) {
            // Shares its second vertex with the previous triangle's third.
            CHECK_EQ_AT(b, s.indices[(t - 1) * 3 + 2], at + " shares an edge");
        }
    }
}

// Fewer than three vertices is not a triangle, but the vertices are still
// consumed — the engine advances its buffer for them.
NOCTURNE_TEST(degenerate_polygons_take_slots_and_emit_nothing) {
    Storage s(64, 64);
    for (int n = 1; n <= 2; ++n) {
        const int before_v = s.batch.vertex_count;
        const int before_i = s.batch.index_count;
        CHECK(nocturne_trigl_batch_add_polygon(&s.batch, n) != nullptr);
        CHECK_EQ(s.batch.vertex_count, before_v + n);
        CHECK_EQ(s.batch.index_count, before_i);
    }
    // And nothing at all for a polygon with no vertices.
    CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 0) == nullptr);
}

// A batch that cannot take a polygon refuses it whole rather than part of it,
// so the caller can draw and retry without having half-written anything.
NOCTURNE_TEST(a_refused_polygon_leaves_the_batch_untouched) {
    Storage s(10, 64);
    CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 8) != nullptr);
    const int v = s.batch.vertex_count;
    const int i = s.batch.index_count;

    CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 5) == nullptr);
    CHECK_EQ(s.batch.vertex_count, v);
    CHECK_EQ(s.batch.index_count, i);

    // Exactly filling it is allowed.
    CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 2) != nullptr);
    CHECK_EQ(s.batch.vertex_count, 10);

    nocturne_trigl_batch_reset(&s.batch);
    CHECK_EQ(s.batch.vertex_count, 0);
    CHECK_EQ(s.batch.index_count, 0);
    CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 5) != nullptr);
}

// Index capacity binds independently of vertex capacity: a long run of
// triangle-heavy polygons exhausts indices first.
NOCTURNE_TEST(index_capacity_binds_on_its_own) {
    Storage s(4096, 6);
    CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 4) != nullptr);   // 2 triangles
    CHECK_EQ(s.batch.index_count, 6);
    CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 3) == nullptr);
    // But a polygon that needs no indices still fits.
    CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 2) != nullptr);
}

NOCTURNE_TEST(flush_is_signalled_before_the_batch_is_actually_full) {
    Storage s(128, 4096);
    CHECK_EQ(nocturne_trigl_batch_should_flush(&s.batch), 0);
    while (!nocturne_trigl_batch_should_flush(&s.batch)) {
        CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 4) != nullptr);
    }
    // Signalled with room to spare, so the polygon that trips it is not also
    // the one that gets refused.
    CHECK(s.batch.vertex_count < s.batch.vertex_capacity);
    CHECK(nocturne_trigl_batch_add_polygon(&s.batch, 4) != nullptr);
}

NOCTURNE_TEST(rhw_scale_is_the_largest_depth) {
    const int depths[] = { 400, 1200, 800, 90 };
    CHECK_EQ(nocturne_trigl_max_depth(depths, 4), 1200);

    // Not the first, not the nearest.
    const int ordered[] = { 5, 6, 7 };
    CHECK_EQ(nocturne_trigl_max_depth(ordered, 3), 7);
    const int reversed[] = { 7, 6, 5 };
    CHECK_EQ(nocturne_trigl_max_depth(reversed, 3), 7);

    const int one[] = { 42 };
    CHECK_EQ(nocturne_trigl_max_depth(one, 1), 42);
    CHECK_EQ(nocturne_trigl_max_depth(one, 0), 0);
}

NOCTURNE_TEST_MAIN()
