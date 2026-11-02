#pragma once

// =============================================================================
// PRESENT SUPPORT — what the stand-in presenter answers, and was handed
// =============================================================================
//
// A working presenter with a scene target, unless a test says otherwise to
// reach the paths a missing context or target takes. Put back with reset().

namespace gl_present_support {

struct Presenter {
    int context = 1;       // nocturne_gl_ensure_active
    int target_bind = 1;   // nocturne_gl_scene_target_bind
    int target_active = 1; // nocturne_gl_scene_target_active

    // The last image nocturne_gl_scene_upload was given, and how many it has been.
    int uploads = 0;
    const void *upload_pixels = nullptr;
    int upload_width = 0;
    int upload_height = 0;

    int presents = 0;

    // What nocturne_widescreen_reframe answers: whether a scene is reframed,
    // and to what.
    int widescreen = 0;
    int widescreen_rect[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    // The reframes nocturne_gl_scene_reframe was asked for, and the last one's
    // rectangles, source then destination.
    int reframes = 0;
    int reframe_rect[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    // What nocturne_gl_scene_antialias answers — whether the pass ran — how
    // many times it was asked, and how many reframes there had been when it
    // last was.
    int antialias = 0;
    int antialiased = 0;
    int reframes_before_antialias = -1;

    void reset() {
        *this = Presenter();
    }
};

extern Presenter presenter;

} // namespace gl_present_support
