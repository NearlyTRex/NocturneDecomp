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

    void reset() {
        *this = Presenter();
    }
};

extern Presenter presenter;

} // namespace gl_present_support
