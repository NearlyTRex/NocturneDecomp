// =============================================================================
// TRIGL DEVICE — the frame, the CPU image beside it, and which one is newer
// =============================================================================
//
// The engine draws 3D through the device and 2D straight into a CPU image it
// addresses by row pointers. The device's job is to keep the two agreeing: read
// the target back into the image only when the target has something the image
// does not, upload the image when the engine is done with it, and swap the
// engine's rows to the 640x480 hold buffer and back. Each case opens the device
// against the recorder and the stand-in presenter and closes it again, so they
// do not share a mode.

#include "gl_present_support.h"
#include "gl_recorder.h"
#include "nocturne_test.h"
#include "renderer/trigl_batch.h"
#include "renderer/trigl_device.h"
#include "renderer/trigl_gl.h"

#include <cstddef>
#include <cstring>
#include <vector>

namespace {

using gl_present_support::presenter;

gl_recorder::State &start() {
    gl_recorder::install();
    presenter.reset();
    return gl_recorder::state();
}

// Opened at a mode, with the engine's own row array handed over.
struct Opened {
    std::vector<void *> rows;

    explicit Opened(int width = 64, int height = 32, int bpp = 16) : rows((size_t)height, nullptr) {
        CHECK_EQ(nocturne_trigl_device_open(), 1);
        CHECK_EQ(nocturne_trigl_device_set_mode(width, height, bpp, rows.data()), 1);
        gl_recorder::state().calls.clear();
    }
    ~Opened() {
        nocturne_trigl_device_close();
    }
};

// One triangle in the batch, so a flush has something to draw.
void queue_triangle() {
    NocturneTriglScreenVertex *at =
        nocturne_trigl_batch_add_polygon(nocturne_trigl_device_batch(), 3);
    memset(at, 0, 3 * sizeof(*at));
}

GLuint APIENTRY no_shader(GLenum) {
    return 0;
}

} // namespace

// -----------------------------------------------------------------------------
// Opening and the mode
// -----------------------------------------------------------------------------

NOCTURNE_TEST(without_a_context_or_a_renderer_the_device_stays_shut) {
    start();
    presenter.context = 0;
    CHECK_EQ(nocturne_trigl_device_open(), 0);
    CHECK(nocturne_trigl_device_batch() == nullptr);

    // The renderer's own setup failing is the same answer. It is not tried
    // again until the device is closed.
    start();
    gl.CreateShader = no_shader;
    CHECK_EQ(nocturne_trigl_device_open(), 0);
    nocturne_trigl_device_close();
}

NOCTURNE_TEST(opening_twice_is_the_same_device) {
    start();
    CHECK_EQ(nocturne_trigl_device_open(), 1);
    NocturneTriglBatch *batch = nocturne_trigl_device_batch();
    CHECK(batch != nullptr);
    CHECK_EQ(nocturne_trigl_device_open(), 1);
    CHECK(nocturne_trigl_device_batch() == batch);
    nocturne_trigl_device_close();
    CHECK(nocturne_trigl_device_batch() == nullptr);
}

NOCTURNE_TEST(the_bridge_is_kept_for_whoever_asks) {
    struct CExternalRendererBridge *bridge = (struct CExternalRendererBridge *)&bridge;
    nocturne_trigl_device_set_bridge(bridge);
    CHECK(nocturne_trigl_device_bridge() == bridge);
    nocturne_trigl_device_set_bridge(nullptr);
}

NOCTURNE_TEST(a_mode_is_refused_without_a_device_a_size_a_depth_or_a_target) {
    start();
    CHECK_EQ(nocturne_trigl_device_set_mode(64, 32, 16, nullptr), 0);
    CHECK_EQ(nocturne_trigl_device_open(), 1);
    CHECK_EQ(nocturne_trigl_device_set_mode(0, 32, 16, nullptr), 0);
    CHECK_EQ(nocturne_trigl_device_set_mode(64, 0, 16, nullptr), 0);
    CHECK_EQ(nocturne_trigl_device_set_mode(64, 32, 8, nullptr), 0);
    presenter.target_bind = 0;
    CHECK_EQ(nocturne_trigl_device_set_mode(64, 32, 16, nullptr), 0);
    CHECK_EQ(nocturne_trigl_device_width(), 0);
    nocturne_trigl_device_close();
}

// The engine addresses the frame by the rows it was handed, so those are the
// image's own rows, a pitch apart.
NOCTURNE_TEST(a_mode_hands_the_engine_one_pointer_per_row) {
    start();
    Opened device(64, 32, 16);
    CHECK_EQ(nocturne_trigl_device_width(), 64);
    CHECK_EQ(nocturne_trigl_device_height(), 32);
    CHECK_EQ(nocturne_trigl_device_bpp(), 16);
    CHECK(device.rows[0] != nullptr);
    CHECK_EQ((char *)device.rows[31] - (char *)device.rows[0], (ptrdiff_t)(31 * 64 * 2));
}

// Re-asserting the mode keeps the textures; moving it drops them, since the
// engine reloads its images around a change and a name may come back as
// another picture. A mode can also be set with no array of the engine's.
NOCTURNE_TEST(only_a_mode_that_moved_drops_the_textures) {
    gl_recorder::State &s = start();
    Opened device(64, 32, 16);
    const std::vector<unsigned> pixels(64 * 64, 0xff000000u);
    nocturne_trigl_gl_texture("wall", 64, pixels.data(), 64, 0);
    CHECK(nocturne_trigl_gl_texture_cached("wall", 64) != 0);

    CHECK_EQ(nocturne_trigl_device_set_mode(64, 32, 16, device.rows.data()), 1);
    CHECK(nocturne_trigl_gl_texture_cached("wall", 64) != 0);
    CHECK_EQ(s.count("DeleteTextures"), 0);

    // The height alone moving is a move.
    CHECK_EQ(nocturne_trigl_device_set_mode(64, 48, 16, nullptr), 1);
    CHECK(nocturne_trigl_gl_texture_cached("wall", 64) == 0);

    nocturne_trigl_gl_texture("wall", 64, pixels.data(), 0, 0);
    CHECK_EQ(nocturne_trigl_device_set_mode(64, 48, 32, nullptr), 1);
    CHECK(nocturne_trigl_gl_texture_cached("wall", 64) == 0);
}

// Open with no mode yet there is no image to lock and no hold buffer.
NOCTURNE_TEST(before_a_mode_there_is_nothing_to_lock) {
    start();
    CHECK_EQ(nocturne_trigl_device_open(), 1);
    CHECK_EQ(nocturne_trigl_device_lock_frame(), 0);
    CHECK_EQ(nocturne_trigl_device_lock_hold_buffer(), 0);
    CHECK_EQ(nocturne_trigl_device_unlock_hold_buffer(), 0);
    nocturne_trigl_device_close();
}

// -----------------------------------------------------------------------------
// Scenes and the batch
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_scene_is_begun_once_and_ended_once) {
    start();
    CHECK_EQ(nocturne_trigl_device_begin_scene(), 0);
    Opened device;
    CHECK_EQ(nocturne_trigl_device_begin_scene(), 1);
    CHECK_EQ(nocturne_trigl_device_in_scene(), 1);
    CHECK_EQ(nocturne_trigl_device_begin_scene(), 0);
    CHECK_EQ(nocturne_trigl_device_end_scene(), 1);
    CHECK_EQ(nocturne_trigl_device_in_scene(), 0);
    CHECK_EQ(nocturne_trigl_device_end_scene(), 0);
}

NOCTURNE_TEST(a_flush_draws_only_what_is_queued) {
    gl_recorder::State &s = start();
    Opened device;
    nocturne_trigl_device_flush();
    CHECK_EQ(s.count("DrawElements"), 0);
    queue_triangle();
    nocturne_trigl_device_flush();
    CHECK_EQ(s.count("DrawElements"), 1);
    CHECK_EQ(nocturne_trigl_device_batch()->index_count, 0);
}

// -----------------------------------------------------------------------------
// Locking the frame: the read-back happens only when the target is ahead
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_frame_with_nothing_drawn_is_locked_without_a_read) {
    gl_recorder::State &s = start();
    CHECK_EQ(nocturne_trigl_device_lock_frame(), 0);
    Opened device;
    CHECK_EQ(nocturne_trigl_device_unlock_frame(), 0);
    CHECK_EQ(nocturne_trigl_device_lock_frame(), 1);
    CHECK_EQ(nocturne_trigl_device_frame_locked(), 1);
    CHECK_EQ(s.count("ReadPixels"), 0);
}

// Drawing puts the target ahead, so the lock ends the scene to land the geometry
// and reads it back; the unlock sends the image, with the 2D on it, up again.
NOCTURNE_TEST(a_frame_drawn_to_is_read_back_and_sent_up_again) {
    gl_recorder::State &s = start();
    Opened device;
    nocturne_trigl_device_begin_scene();
    queue_triangle();
    CHECK_EQ(nocturne_trigl_device_lock_frame(), 1);
    CHECK_EQ(nocturne_trigl_device_in_scene(), 0);
    CHECK(s.index_of_last("DrawElements") < s.index_of_last("ReadPixels"));
    // From the scene target's colour attachment, not the window.
    CHECK_EQ(s.value_at("ReadBuffer", s.index_of_last("ReadPixels")),
             (unsigned)GL_COLOR_ATTACHMENT0);

    const unsigned epoch = nocturne_trigl_gl_state_epoch();
    CHECK_EQ(nocturne_trigl_device_unlock_frame(), 1);
    CHECK_EQ(nocturne_trigl_device_frame_locked(), 0);
    CHECK_EQ(presenter.uploads, 1);
    CHECK(presenter.upload_pixels == device.rows[0]);
    CHECK_EQ(presenter.upload_width, 64);
    // The upload disturbs the pipeline, so the state record is dropped.
    CHECK(nocturne_trigl_gl_state_epoch() != epoch);

    // And with the two agreeing again, the next lock reads nothing.
    CHECK_EQ(nocturne_trigl_device_lock_frame(), 1);
    CHECK_EQ(s.count("ReadPixels"), 1);
}

NOCTURNE_TEST(without_a_scene_target_the_window_is_read) {
    gl_recorder::State &s = start();
    Opened device;
    presenter.target_active = 0;
    nocturne_trigl_device_clear_color();
    CHECK_EQ(nocturne_trigl_device_lock_frame(), 1);
    CHECK_EQ(s.value_at("ReadBuffer", s.index_of_last("ReadPixels")), (unsigned)GL_BACK);
}

// -----------------------------------------------------------------------------
// Clears
// -----------------------------------------------------------------------------

// Unlocked, a clear lands in the target, which is then ahead. Locked, the image
// is the frame, so it is cleared too and the two still agree.
NOCTURNE_TEST(a_colour_clear_clears_whichever_holds_the_frame) {
    gl_recorder::State &s = start();
    Opened device;
    nocturne_trigl_device_clear_color();
    CHECK_EQ(s.count("Clear"), 1);
    CHECK_EQ(nocturne_trigl_device_lock_frame(), 1);
    CHECK_EQ(s.count("ReadPixels"), 1);

    memset(device.rows[0], 0x5A, 4);
    nocturne_trigl_device_clear_color();
    CHECK_EQ(*(unsigned char *)device.rows[0], 0);
    nocturne_trigl_device_unlock_frame();
    CHECK_EQ(nocturne_trigl_device_lock_frame(), 1);
    CHECK_EQ(s.count("ReadPixels"), 1);
}

// Depth writes have to be on for a depth clear to land.
NOCTURNE_TEST(a_depth_clear_turns_writes_on_first) {
    gl_recorder::State &s = start();
    Opened device;
    nocturne_trigl_device_clear_depth();
    const int clear = s.index_of_last("Clear");
    CHECK(clear >= 0);
    CHECK_EQ(s.calls[(size_t)clear].a, (unsigned)GL_DEPTH_BUFFER_BIT);
    CHECK_EQ(s.depth_write, 1);
}

// A box is scissored, in GL's bottom-up rows; an empty box clears nothing.
NOCTURNE_TEST(a_depth_box_clear_is_scissored_to_the_box) {
    gl_recorder::State &s = start();
    Opened device(64, 32, 16);
    nocturne_trigl_device_clear_depth_box(10, 10, 0, 8);
    nocturne_trigl_device_clear_depth_box(0, 8, 6, 6);
    CHECK_EQ(s.count("Clear"), 0);

    nocturne_trigl_device_clear_depth_box(4, 20, 2, 12);
    const int scissor = s.index_of_last("Scissor");
    CHECK(scissor >= 0);
    CHECK_EQ(s.calls[(size_t)scissor].a, 4u);
    CHECK_EQ(s.calls[(size_t)scissor].b, 20u);
    CHECK_EQ(s.calls[(size_t)scissor].c, 16u);
    CHECK_EQ(s.calls[(size_t)scissor].d, 10u);
    CHECK(s.index_of_last("Clear") > scissor);
    CHECK_EQ(s.scissor, 0);
}

// -----------------------------------------------------------------------------
// The hold buffer and the present
// -----------------------------------------------------------------------------

// Locking swaps the engine's rows to the hold buffer's, never more of them than
// the engine's array holds; unlocking puts the frame's back and stretches the
// hold buffer across the target, which is then ahead.
NOCTURNE_TEST(the_hold_buffer_borrows_the_engines_rows_and_gives_them_back) {
    gl_recorder::State &s = start();
    CHECK_EQ(nocturne_trigl_device_lock_hold_buffer(), 0);
    CHECK_EQ(nocturne_trigl_device_unlock_hold_buffer(), 0);
    Opened device(64, 32, 16);
    void *const frame_row = device.rows[0];
    nocturne_trigl_device_begin_scene();
    CHECK_EQ(nocturne_trigl_device_lock_hold_buffer(), 1);
    CHECK_EQ(nocturne_trigl_device_in_scene(), 0);
    CHECK(device.rows[0] != frame_row);
    CHECK_EQ((char *)device.rows[31] - (char *)device.rows[0], (ptrdiff_t)(31 * 640 * 2));

    CHECK_EQ(nocturne_trigl_device_unlock_hold_buffer(), 1);
    CHECK(device.rows[0] == frame_row);
    CHECK_EQ(presenter.upload_width, 640);
    CHECK_EQ(presenter.upload_height, 480);
    CHECK_EQ(nocturne_trigl_device_lock_frame(), 1);
    CHECK_EQ(s.count("ReadPixels"), 1);
}

// Above 480 lines, where the engine uses it, the hold buffer's 480 rows go in and
// the rest of the engine's array keeps the frame's.
NOCTURNE_TEST(a_tall_mode_lends_the_hold_buffer_its_first_480_rows) {
    start();
    Opened device(64, 600, 16);
    void *const row_480 = device.rows[480];
    CHECK_EQ(nocturne_trigl_device_lock_hold_buffer(), 1);
    CHECK_EQ((char *)device.rows[479] - (char *)device.rows[0], (ptrdiff_t)(479 * 640 * 2));
    CHECK(device.rows[480] == row_480);
    CHECK_EQ(nocturne_trigl_device_unlock_hold_buffer(), 1);
}

NOCTURNE_TEST(a_hold_buffer_without_the_engines_rows_cannot_be_locked) {
    start();
    CHECK_EQ(nocturne_trigl_device_open(), 1);
    CHECK_EQ(nocturne_trigl_device_set_mode(64, 32, 16, nullptr), 1);
    CHECK_EQ(nocturne_trigl_device_lock_hold_buffer(), 0);
    CHECK_EQ(nocturne_trigl_device_unlock_hold_buffer(), 1);
    nocturne_trigl_device_close();
}

// A present lands what is queued, ends the scene, and drops the state record,
// since the presenter turns off what it likes and puts nothing back.
NOCTURNE_TEST(a_present_lands_the_scene_and_forgets_the_pipeline) {
    gl_recorder::State &s = start();
    Opened device;
    nocturne_trigl_device_begin_scene();
    queue_triangle();
    const unsigned epoch = nocturne_trigl_gl_state_epoch();
    nocturne_trigl_device_present();
    CHECK_EQ(s.count("DrawElements"), 1);
    CHECK_EQ(presenter.presents, 1);
    CHECK_EQ(nocturne_trigl_device_in_scene(), 0);
    CHECK(nocturne_trigl_gl_state_epoch() != epoch);

    nocturne_trigl_device_present();
    CHECK_EQ(presenter.presents, 2);
}

NOCTURNE_TEST_MAIN()
