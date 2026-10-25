// =============================================================================
// GL PRESENT — the context, the scene target, and every frame onto the window
// =============================================================================
//
// The presenter owns the GL context. Each frame it puts the game's CPU image,
// or the scene the renderer drew into its own target, onto the window,
// letterboxed to the game's aspect, and swaps; between frames the renderer
// draws into a target that keeps its contents as DirectDraw surface memory did.
// What matters is that the context comes up or says why not, that a frame
// lands where the letterbox says and the next frame's drawing finds its target
// bound again, that a seed mid-frame leaves the pipeline as it found it, and
// that a click on the window means the same point in the game. SDL and the
// driver are stood in for (sdl_gl_support.h, the renderer's gl_recorder.h).

#include "gl/gl_api.h"
#include "gl/gl_present.h"
#include "gl/gl_version.h"
#include "nocturne_test.h"
#include "sdl_gl_support.h"
#include "shims/renderer/gl_recorder.h"

#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

extern SDL_Window *g_sdlWindow;

namespace {

using sdl_gl::stand;

// A fresh presenter, with SDL answering as `stand` was left.
void fresh() {
    nocturne_gl_shutdown();
    nocturne_gl_set_logical_size(0, 0);
    stand.reset();
    g_sdlWindow = nullptr;
}

// Up, on the stand's window, with the recorder's log cleared.
gl_recorder::State &up() {
    fresh();
    CHECK_EQ(nocturne_gl_init(sdl_gl::window()), 1);
    return gl_recorder::state();
}

// The last Viewport set: width, height, x, y.
struct Viewport {
    unsigned w, h, x, y;
};
Viewport last_viewport(const gl_recorder::State &s) {
    const gl_recorder::Call &c = s.calls[(size_t)s.index_of_last("Viewport")];
    return {c.a, c.b, c.c, c.d};
}

// The viewport the quad was drawn into.
Viewport quad_viewport(const gl_recorder::State &s) {
    const int draw = s.index_of_last("DrawArrays");
    Viewport v = {0, 0, 0, 0};
    for (int i = 0; i < draw; ++i) {
        const gl_recorder::Call &c = s.calls[(size_t)i];
        if (c.name == "Viewport")
            v = {c.a, c.b, c.c, c.d};
    }
    return v;
}

// The filter last set on a texture: GL_NEAREST or GL_LINEAR.
unsigned last_min_filter(const gl_recorder::State &s) {
    unsigned filter = 0;
    for (const gl_recorder::Call &c : s.calls) {
        if (c.name == "TexParameteri" && c.a == GL_TEXTURE_MIN_FILTER)
            filter = c.b;
    }
    return filter;
}

std::vector<unsigned char> frame(int width, int height, int bpp) {
    return std::vector<unsigned char>((size_t)width * height * (bpp / 8), 0x40);
}

void present(int width, int height, int bpp = 32) {
    std::vector<unsigned char> pixels = frame(width, height, bpp);
    nocturne_gl_present_framebuffer(pixels.data(), width, height, width * (bpp / 8), bpp);
}

GLenum APIENTRY incomplete(GLenum) {
    return GL_FRAMEBUFFER_UNSUPPORTED;
}
void APIENTRY no_texture(GLsizei n, GLuint *out) {
    for (GLsizei i = 0; i < n; ++i)
        out[i] = 0;
}

} // namespace

// -----------------------------------------------------------------------------
// The context
// -----------------------------------------------------------------------------

// Up on the window, with adaptive vsync, and the version the 3D API line
// shows; asked again for the same window, nothing more is made.
NOCTURNE_TEST(the_context_comes_up_on_the_window) {
    up();
    CHECK_EQ(nocturne_gl_is_active(), 1);
    CHECK_EQ(stand.contexts, 1);
    CHECK_EQ((int)stand.intervals.size(), 1);
    CHECK_EQ(stand.intervals[0], -1);
    CHECK_EQ(std::string(nocturne_gl_version_short()), std::string("4.6"));
    CHECK_EQ(nocturne_gl_init(sdl_gl::window()), 1);
    CHECK_EQ(stand.contexts, 1);
}

// Without adaptive vsync, plain vsync.
NOCTURNE_TEST(without_adaptive_vsync_it_is_plain_vsync) {
    fresh();
    stand.adaptive_vsync = false;
    CHECK_EQ(nocturne_gl_init(sdl_gl::window()), 1);
    CHECK_EQ((int)stand.intervals.size(), 2);
    CHECK_EQ(stand.intervals[1], 1);
}

// No context, one that will not be made current, or no entry points: no GL,
// and nothing left behind.
NOCTURNE_TEST(a_context_that_cannot_be_had_is_no_gl) {
    for (int failure = 0; failure < 3; ++failure) {
        fresh();
        stand.create_fails = failure == 0;
        stand.make_current_fails = failure == 1;
        stand.load_fails = failure == 2;
        CHECK_EQ(nocturne_gl_init(sdl_gl::window()), 0);
        CHECK_EQ(nocturne_gl_is_active(), 0);
        CHECK_EQ(stand.contexts, 0);
    }
}

// The version is GL_VERSION's major.minor, after an ES context's prefix;
// nothing when there is no version or it does not start with one.
NOCTURNE_TEST(the_version_is_major_and_minor) {
    struct Case {
        const char *gl_version;
        const char *shown;
    };
    const Case cases[] = {
        {"4.6.0 NVIDIA 595.84", "4.6"},
        {"3.3", "3.3"},
        {"OpenGL ES 3.2 Mesa 24.0", "3.2"},
        {"1234567890.1234567890", "1234567890.1234"},
        {"Mesa 3.3", ""},
        {nullptr, ""},
    };
    for (const Case &c : cases) {
        fresh();
        stand.version = c.gl_version;
        nocturne_gl_init(sdl_gl::window());
        CHECK_AT(std::string(nocturne_gl_version_short()) == c.shown, c.shown);
    }
}

// The renderer's first use brings the context up on the game's window, when
// there is one.
NOCTURNE_TEST(first_use_brings_the_context_up_on_the_window) {
    fresh();
    CHECK_EQ(nocturne_gl_ensure_active(), 0);
    g_sdlWindow = sdl_gl::window();
    CHECK_EQ(nocturne_gl_ensure_active(), 1);
    CHECK_EQ(nocturne_gl_ensure_active(), 1);
    CHECK_EQ(stand.contexts, 1);
}

// -----------------------------------------------------------------------------
// The scene target
// -----------------------------------------------------------------------------

// Made at the size asked for, cleared once, then bound as it is; made again at
// a new size, the old one let go.
NOCTURNE_TEST(the_scene_target_is_made_once_per_size) {
    fresh();
    CHECK_EQ(nocturne_gl_scene_target_bind(640, 480), 0); // no context
    CHECK_EQ(nocturne_gl_scene_target_active(), 0);
    CHECK_EQ(nocturne_gl_scene_fbo(), 0u);
    gl_recorder::State &s = up();
    CHECK_EQ(nocturne_gl_scene_target_bind(0, 480), 0);
    CHECK_EQ(nocturne_gl_scene_target_bind(640, 0), 0);
    CHECK_EQ(nocturne_gl_scene_target_active(), 0);

    CHECK_EQ(nocturne_gl_scene_target_bind(640, 480), 1);
    CHECK_EQ(nocturne_gl_scene_target_active(), 1);
    const unsigned fbo = nocturne_gl_scene_fbo();
    CHECK(fbo != 0);
    CHECK_EQ(s.count("Clear"), 1);
    CHECK_EQ(nocturne_gl_scene_target_bind(640, 480), 1);
    CHECK_EQ(s.count("GenFramebuffers"), 1);
    CHECK_EQ(s.calls.back().name, std::string("BindFramebuffer"));
    CHECK_EQ(s.calls.back().a, fbo);

    CHECK_EQ(nocturne_gl_scene_target_bind(800, 600), 1);
    CHECK_EQ(s.count("DeleteFramebuffers"), 1);
    CHECK_EQ(s.count("GenFramebuffers"), 2);
    CHECK_EQ(nocturne_gl_scene_target_bind(800, 500), 1); // the height alone
    CHECK_EQ(s.count("GenFramebuffers"), 3);
}

// A target the driver will not complete is none, and nothing is left bound.
NOCTURNE_TEST(an_incomplete_scene_target_is_none) {
    gl_recorder::State &s = up();
    gl.CheckFramebufferStatus = incomplete;
    CHECK_EQ(nocturne_gl_scene_target_bind(640, 480), 0);
    CHECK_EQ(nocturne_gl_scene_target_active(), 0);
    CHECK_EQ(s.calls[(size_t)s.index_of_last("BindFramebuffer")].a, 0u);
    CHECK_EQ(s.count("DeleteFramebuffers"), 1);
}

// Shut down, the context and the target go; up again, a new target is made
// rather than the old one's name bound.
NOCTURNE_TEST(shutting_down_lets_the_scene_target_go) {
    up();
    nocturne_gl_scene_target_bind(640, 480);
    nocturne_gl_shutdown();
    CHECK_EQ(stand.contexts, 0);
    CHECK_EQ(nocturne_gl_is_active(), 0);
    CHECK_EQ(std::string(nocturne_gl_version_short()), std::string(""));
    CHECK_EQ(nocturne_gl_init(sdl_gl::window()), 1);
    gl_recorder::State &s = gl_recorder::state();
    CHECK_EQ(nocturne_gl_scene_target_bind(640, 480), 1);
    CHECK_EQ(s.count("GenFramebuffers"), 1);
}

// -----------------------------------------------------------------------------
// Presenting
// -----------------------------------------------------------------------------

// The frame fills the window at a whole multiple, sampled nearest, and is
// swapped; at a fractional scale it is letterboxed and sampled linear.
NOCTURNE_TEST(a_frame_is_letterboxed_onto_the_window_and_swapped) {
    gl_recorder::State &s = up();
    stand.drawable_width = 1280;
    stand.drawable_height = 960;
    nocturne_gl_set_logical_size(640, 480);
    present(640, 480);
    CHECK_EQ(stand.swaps, 1);
    Viewport v = quad_viewport(s);
    CHECK_EQ(v.w, 1280u);
    CHECK_EQ(v.h, 960u);
    CHECK_EQ(last_min_filter(s), (unsigned)GL_NEAREST);

    stand.drawable_width = 1920;
    stand.drawable_height = 1080;
    present(640, 480);
    v = quad_viewport(s);
    CHECK_EQ(v.w, 1440u);
    CHECK_EQ(v.h, 1080u);
    CHECK_EQ(v.x, 240u);
    CHECK_EQ(v.y, 0u);
    CHECK_EQ(last_min_filter(s), (unsigned)GL_LINEAR);
    CHECK_EQ(s.count("GenTextures"), 1); // the same texture, re-used

    // A window taller than the game has its bars above and below.
    stand.drawable_width = 640;
    stand.drawable_height = 960;
    present(640, 480);
    v = quad_viewport(s);
    CHECK_EQ(v.w, 640u);
    CHECK_EQ(v.h, 480u);
    CHECK_EQ(v.y, 240u);
}

// The time inside each swap is added up, and a shutdown does not take it back.
NOCTURNE_TEST(the_time_in_the_swap_is_added_up) {
    up();
    const unsigned long long before = nocturne_gl_swap_ticks();
    stand.swap_cost = 7;
    present(640, 480);
    present(640, 480);
    CHECK_EQ(nocturne_gl_swap_ticks() - before, 14ull);
    nocturne_gl_shutdown();
    CHECK_EQ(nocturne_gl_swap_ticks() - before, 14ull);
}

// With no game size set the frame's own decides; a minimised window, with no
// drawable, is presented 1:1.
NOCTURNE_TEST(a_frame_with_no_game_size_is_its_own_size) {
    gl_recorder::State &s = up();
    stand.drawable_width = 640;
    stand.drawable_height = 480;
    present(320, 240);
    Viewport v = quad_viewport(s);
    CHECK_EQ(v.w, 640u);
    stand.drawable_width = 0;
    stand.drawable_height = 0;
    present(320, 240);
    v = quad_viewport(s);
    CHECK_EQ(v.w, 320u);
}

// The frame texture follows the frame: another size or depth re-specifies it,
// a pitch wider than the row is honoured, and every depth the shims draw at
// is taken.
NOCTURNE_TEST(the_frame_texture_follows_the_frame) {
    gl_recorder::State &s = up();
    present(640, 480, 32);
    present(320, 240, 32);
    present(320, 200, 32); // the height alone
    present(320, 240, 16);
    present(320, 240, 24);
    CHECK_EQ(s.count("TexImage2D"), 5);
    CHECK_EQ(s.count("GenTextures"), 1);
    std::vector<unsigned char> wide((size_t)400 * 4 * 240);
    nocturne_gl_present_framebuffer(wide.data(), 320, 240, 400 * 4, 32);
    nocturne_gl_present_framebuffer(wide.data(), 320, 240, 0, 32);
    CHECK_EQ(stand.swaps, 7);
}

// Nothing to show, or no context, presents nothing; a depth the presenter
// cannot take, or a texture the driver will not make, is not drawn.
NOCTURNE_TEST(a_frame_that_cannot_be_shown_is_not) {
    fresh();
    present(640, 480);
    CHECK_EQ(stand.swaps, 0);
    up();
    nocturne_gl_present_framebuffer(nullptr, 640, 480, 0, 32);
    std::vector<unsigned char> pixels = frame(4, 4, 32);
    nocturne_gl_present_framebuffer(pixels.data(), 0, 4, 0, 32);
    nocturne_gl_present_framebuffer(pixels.data(), 4, 0, 0, 32);
    for (int i = 0; i < 300; ++i)
        nocturne_gl_present_framebuffer(pixels.data(), 4, 4, 4, 8);
    gl.GenTextures = no_texture;
    nocturne_gl_present_framebuffer(pixels.data(), 4, 4, 16, 32);
    CHECK_EQ(stand.swaps, 0);
}

// With no quad to draw with the frame is still swapped, black, and the log
// says so at intervals rather than every frame.
NOCTURNE_TEST(without_the_quad_a_frame_is_swapped_undrawn) {
    gl_recorder::State &s = up();
    gl.CreateShader = nullptr;
    for (int i = 0; i < 600; ++i)
        present(4, 4);
    CHECK_EQ(stand.swaps, 600);
    CHECK_EQ(s.count("DrawArrays"), 0);
}

// With a scene target the window is drawn to and the target bound again for
// the next frame's drawing.
NOCTURNE_TEST(after_a_frame_the_scene_target_is_bound_again) {
    gl_recorder::State &s = up();
    nocturne_gl_scene_target_bind(640, 480);
    const unsigned fbo = nocturne_gl_scene_fbo();
    present(640, 480);
    CHECK_EQ(s.value_at("BindFramebuffer", s.index_of_last("DrawArrays")), 0u);
    CHECK_EQ(s.calls[(size_t)s.index_of_last("BindFramebuffer")].a, fbo);
    Viewport v = last_viewport(s);
    CHECK_EQ(v.w, 640u);
}

// The scene the renderer drew is put on the window bottom-up, at its own size
// when the game has set none; with no target there is nothing to put.
NOCTURNE_TEST(the_scene_is_presented_from_its_target) {
    gl_recorder::State &s = up();
    nocturne_gl_present_scene();
    CHECK_EQ(stand.swaps, 0);
    nocturne_gl_scene_target_bind(320, 240);
    nocturne_gl_present_scene();
    CHECK_EQ(stand.swaps, 1);
    CHECK_EQ(s.calls[(size_t)s.index_of_last("DrawArrays")].b, 4u); // bottom-up
    CHECK_EQ(quad_viewport(s).w, 640u);
    fresh();
    nocturne_gl_present_scene();
    CHECK_EQ(stand.swaps, 0);
}

// Seeding the scene target mid-frame draws the image into it and puts back
// every piece of pipeline state it touched, on or off as it was.
NOCTURNE_TEST(a_seed_leaves_the_pipeline_as_it_was) {
    for (int on = 0; on <= 1; ++on) {
        gl_recorder::State &s = up();
        nocturne_gl_scene_target_bind(640, 480);
        const unsigned fbo = nocturne_gl_scene_fbo();
        for (GLenum cap : {GL_DEPTH_TEST, GL_BLEND, GL_CULL_FACE, GL_SCISSOR_TEST}) {
            if (on)
                gl.Enable(cap);
            else
                gl.Disable(cap);
        }
        gl.DepthMask(on ? GL_TRUE : GL_FALSE);
        gl.Viewport(10, 20, 300, 200);
        gl.BindTexture(GL_TEXTURE_2D, 77);
        std::vector<unsigned char> pixels = frame(640, 480, 32);
        nocturne_gl_scene_upload(pixels.data(), 640, 480, 640 * 4, 32);
        CHECK_EQ(s.value_at("BindFramebuffer", s.index_of_last("DrawArrays")), fbo);
        CHECK_EQ(s.depth_test, on);
        CHECK_EQ(s.blend, on);
        CHECK_EQ(s.cull, on);
        CHECK_EQ(s.scissor, on);
        CHECK_EQ(s.depth_write, on);
        CHECK_EQ(s.bound_texture[0], 77u);
        const Viewport v = last_viewport(s);
        CHECK_EQ(v.x, 10u);
        CHECK_EQ(v.w, 300u);
        CHECK_EQ(stand.swaps, 0);
    }
}

// A seed with no target, nothing, or what cannot be uploaded seeds nothing;
// with no quad it says so at intervals.
NOCTURNE_TEST(a_seed_that_cannot_be_made_is_not) {
    fresh();
    std::vector<unsigned char> pixels = frame(4, 4, 32);
    nocturne_gl_scene_upload(pixels.data(), 4, 4, 16, 32);
    gl_recorder::State &s = up();
    nocturne_gl_scene_upload(pixels.data(), 4, 4, 16, 32); // no target yet
    nocturne_gl_scene_target_bind(4, 4);
    nocturne_gl_scene_upload(nullptr, 4, 4, 16, 32);
    nocturne_gl_scene_upload(pixels.data(), 0, 4, 16, 32);
    nocturne_gl_scene_upload(pixels.data(), 4, 0, 16, 32);
    for (int i = 0; i < 300; ++i)
        nocturne_gl_scene_upload(pixels.data(), 4, 4, 4, 8);
    CHECK_EQ(s.count("TexSubImage2D"), 0);
    gl.GenTextures = no_texture;
    nocturne_gl_scene_upload(pixels.data(), 4, 4, 16, 32);
    CHECK_EQ(s.count("TexSubImage2D"), 0);

    up();
    nocturne_gl_scene_target_bind(4, 4);
    gl.CreateShader = nullptr;
    for (int i = 0; i < 600; ++i)
        nocturne_gl_scene_upload(pixels.data(), 4, 4, 16, 32);
    CHECK_EQ(gl_recorder::state().count("DrawArrays"), 0);
}

// -----------------------------------------------------------------------------
// Reading back, and the mouse
// -----------------------------------------------------------------------------

// The window is read back at its own size, from the window rather than the
// scene target, which is bound again after.
NOCTURNE_TEST(the_window_is_read_back_at_its_size) {
    fresh();
    unsigned char *rgb = nullptr;
    int w = 0, h = 0;
    CHECK_EQ(nocturne_gl_read_front(&rgb, &w, &h), -1);
    gl_recorder::State &s = up();
    stand.drawable_width = 8;
    stand.drawable_height = 6;
    CHECK_EQ(nocturne_gl_read_front(&rgb, &w, &h), 0);
    CHECK_EQ(w, 8);
    CHECK_EQ(h, 6);
    free(rgb);
    nocturne_gl_scene_target_bind(8, 6);
    const unsigned fbo = nocturne_gl_scene_fbo();
    CHECK_EQ(nocturne_gl_read_front(&rgb, &w, &h), 0);
    free(rgb);
    CHECK_EQ(s.value_at("BindFramebuffer", s.index_of_last("ReadPixels")), 0u);
    CHECK_EQ(s.calls[(size_t)s.index_of_last("BindFramebuffer")].a, fbo);
    stand.drawable_width = 0;
    CHECK_EQ(nocturne_gl_read_front(&rgb, &w, &h), -1);
    stand.drawable_width = 8;
    stand.drawable_height = 0;
    CHECK_EQ(nocturne_gl_read_front(&rgb, &w, &h), -1);
}

// A point on the window is the point in the game under it: through the window
// to drawable scale, the letterbox, and the game's size; one on a bar is the
// nearest edge.
NOCTURNE_TEST(a_point_on_the_window_is_the_point_in_the_game) {
    int x = -1, y = -1;
    fresh();
    nocturne_gl_window_to_logical(100, 50, &x, &y); // no context: as given
    CHECK_EQ(x, 100);
    CHECK_EQ(y, 50);

    up();
    nocturne_gl_set_logical_size(640, 480);
    stand.window_width = 960; // a HiDPI drawable of twice the window
    stand.window_height = 540;
    stand.drawable_width = 1920;
    stand.drawable_height = 1080;
    nocturne_gl_window_to_logical(480, 270, &x, &y); // the middle
    CHECK_EQ(x, 320);
    CHECK_EQ(y, 240);
    nocturne_gl_window_to_logical(10, 270, &x, &y); // the left bar
    CHECK_EQ(x, 0);
    nocturne_gl_window_to_logical(950, 600, &x, &y); // past the right and bottom
    CHECK_EQ(x, 639);
    CHECK_EQ(y, 479);
    nocturne_gl_window_to_logical(480, -5, &x, &y);
    CHECK_EQ(y, 0);

    // With no game size set, the drawable is the game.
    nocturne_gl_set_logical_size(0, 0);
    nocturne_gl_window_to_logical(480, 270, &x, &y);
    CHECK_EQ(x, 960);
    CHECK_EQ(y, 540);

    // A window or drawable of nothing has no mapping: as given.
    for (int empty = 0; empty < 4; ++empty) {
        stand.window_width = empty == 0 ? 0 : 960;
        stand.window_height = empty == 1 ? 0 : 540;
        stand.drawable_width = empty == 2 ? 0 : 1920;
        stand.drawable_height = empty == 3 ? 0 : 1080;
        nocturne_gl_window_to_logical(7, 9, &x, &y);
        CHECK_EQ(x, 7);
        CHECK_EQ(y, 9);
    }
}

NOCTURNE_TEST_MAIN()
