#pragma once

#include <GL/glcorearb.h>

namespace nocturne::platform::gl {

// Puts a finished hardware frame on screen. The display owns the window, the letterbox and the
// swap; the device owns the frame.
class IGlFramePresenter {
public:
    virtual ~IGlFramePresenter() = default;

    // The scene's colour texture, width by height, filled from the bottom row up. Leaves
    // whatever framebuffer, viewport and pipeline state presenting needed.
    virtual void presentScene(GLuint texture, int width, int height) = 0;
};

} // namespace nocturne::platform::gl
