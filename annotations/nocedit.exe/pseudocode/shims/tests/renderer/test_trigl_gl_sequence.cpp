// =============================================================================
// TRIGL GL — ordering invariants
// =============================================================================
//
// The pure suites beside this one test answers. This one tests ORDER, because
// that is where this renderer's faults have actually been: not a function
// returning the wrong number, but a correct call made at a moment when the
// pipeline held something else.
//
// Every case below is a fault that shipped. They are written as properties of
// the call sequence rather than as "call this, expect that", so they keep
// holding when the renderer is restructured — the point is not that an upload
// calls glBindTexture twice, it is that an upload leaves the pipeline as it
// found it, however it chooses to do that.
//
// Runs against gl_recorder.h: no context, no window, no driver.

#include "nocturne_test.h"
#include "gl_recorder.h"

#include "renderer/trigl_gl.h"

#include <vector>

namespace {

// A texture's worth of pixels. The content is irrelevant — nothing rasterises.
std::vector<unsigned> image(int dimension) {
    return std::vector<unsigned>((size_t)(dimension * dimension), 0xff204060u);
}

// Brings the renderer up against the recorder and clears the log, so a test
// reads only its own calls and not the shader/VAO construction.
void begin() {
    gl_recorder::install();
    CHECK(nocturne_trigl_gl_init() == 1);
    gl_recorder::state().calls.clear();
}

void end() { nocturne_trigl_gl_shutdown(); }

unsigned bound_now() {
    return gl_recorder::state().bound_texture[0];
}

}  // namespace

// -----------------------------------------------------------------------------
// The binding bug: an upload must not be a state change.
//
// Polygons do not draw when they are submitted — they sit in the batch until
// the next draw's flush. A selectTexture that misses the cache uploads in
// between, and an upload that leaves its own binding sends that pending run out
// wearing the image just uploaded: a whole contiguous piece of one model
// covered in another's, on frames that upload, gone on the next.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(upload_leaves_the_binding_it_found) {
    begin();
    const std::vector<unsigned> pixels = image(64);

    const unsigned first = nocturne_trigl_gl_texture("first.raw", 64, pixels.data(), 0, 0);
    CHECK(first != 0);

    // Stand where a draw stands: its texture bound, its polygons pending.
    nocturne_trigl_gl_bind_texture(first);
    CHECK_EQ(bound_now(), first);

    // Now the engine names a texture it has not seen, which uploads.
    const unsigned second = nocturne_trigl_gl_texture("second.raw", 64, pixels.data(), 0, 0);
    CHECK(second != 0);
    CHECK(second != first);

    // The pending run must still be pointed at its own image.
    CHECK_EQ(bound_now(), first);
    end();
}

NOCTURNE_TEST(refreshing_a_resident_texture_leaves_the_binding_it_found) {
    begin();
    const std::vector<unsigned> pixels = image(64);

    const unsigned other = nocturne_trigl_gl_texture("other.raw", 64, pixels.data(), 0, 0);
    const unsigned target = nocturne_trigl_gl_texture("target.raw", 64, pixels.data(), 0, 0);
    nocturne_trigl_gl_bind_texture(other);

    // updateTexture's path: resident, but re-uploaded because the content moved.
    nocturne_trigl_gl_texture("target.raw", 64, pixels.data(), 0, 1);

    CHECK_EQ(bound_now(), other);
    CHECK(target != other);
    end();
}

NOCTURNE_TEST(reading_a_texture_back_leaves_the_binding_it_found) {
    begin();
    const std::vector<unsigned> pixels = image(64);
    const unsigned other = nocturne_trigl_gl_texture("other.raw", 64, pixels.data(), 0, 0);
    nocturne_trigl_gl_texture("dumped.raw", 64, pixels.data(), 0, 0);
    nocturne_trigl_gl_bind_texture(other);

    // The diagnostic dumper binds to read. It is used while a frame is held,
    // which is exactly when a stray binding would decide the next draw.
    nocturne_trigl_gl_dump_texture("dumped.raw", 64, "/dev/null");

    CHECK_EQ(bound_now(), other);
    end();
}

// -----------------------------------------------------------------------------
// The cache identifies a texture by its whole name.
//
// The shipped renderer keeps 64 characters per entry and compares them with
// strcmp. Comparing a fixed 16 makes every pair of names sharing a 16-character
// prefix one texture, and asset names share prefixes constantly.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(names_are_distinguished_past_sixteen_characters) {
    begin();
    const std::vector<unsigned> pixels = image(64);

    const unsigned a =
        nocturne_trigl_gl_texture("characters_hero_body.raw", 64, pixels.data(), 0, 0);
    const unsigned b =
        nocturne_trigl_gl_texture("characters_hero_head.raw", 64, pixels.data(), 0, 0);

    CHECK(a != 0);
    CHECK(b != 0);
    CHECK(a != b);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("characters_hero_body.raw", 64), a);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("characters_hero_head.raw", 64), b);
    end();
}

NOCTURNE_TEST(the_same_name_at_two_dimensions_is_two_textures) {
    begin();
    const std::vector<unsigned> small = image(64);
    const std::vector<unsigned> large = image(256);

    const unsigned a = nocturne_trigl_gl_texture("wall.raw", 64, small.data(), 0, 0);
    const unsigned b = nocturne_trigl_gl_texture("wall.raw", 256, large.data(), 0, 0);
    CHECK(a != b);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("wall.raw", 64), a);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("wall.raw", 256), b);
    end();
}

NOCTURNE_TEST(a_resident_texture_is_not_uploaded_again) {
    begin();
    const std::vector<unsigned> pixels = image(64);

    nocturne_trigl_gl_texture("stone.raw", 64, pixels.data(), 0, 0);
    const int after_first = gl_recorder::state().count("TexImage2D");
    nocturne_trigl_gl_texture("stone.raw", 64, pixels.data(), 0, 0);

    CHECK_EQ(gl_recorder::state().count("TexImage2D"), after_first);
    end();
}

// -----------------------------------------------------------------------------
// A texture with no mip chain has to say so, or a mip-filtered sampler finds it
// incomplete and the draw silently loses its image — no GL error, no warning.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_texture_without_a_chain_declares_one_level) {
    begin();
    const std::vector<unsigned> pixels = image(64);
    nocturne_trigl_gl_texture("flat.raw", 64, pixels.data(), 0, 0);

    bool base = false, max = false;
    for (const gl_recorder::Call &call : gl_recorder::state().calls) {
        if (call.name != "TexParameteri") continue;
        if (call.a == GL_TEXTURE_BASE_LEVEL && call.b == 0) base = true;
        if (call.a == GL_TEXTURE_MAX_LEVEL && call.b == 0) max = true;
    }
    CHECK(base);
    CHECK(max);
    CHECK_EQ(gl_recorder::state().count("GenerateMipmap"), 0);
    end();
}

// -----------------------------------------------------------------------------
// Abandoning the state record has to be observable to everything that keeps its
// own view of it. The entry points hold a second copy and decide from it whether
// a draw needs a new state and texture; without a counter to compare, a draw
// that matches that copy returns before binding anything.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(invalidating_the_state_record_is_observable) {
    begin();
    const unsigned before = nocturne_trigl_gl_state_epoch();
    nocturne_trigl_gl_invalidate_state();
    const unsigned after = nocturne_trigl_gl_state_epoch();
    CHECK(after != before);
    end();
}

NOCTURNE_TEST_MAIN()
