#pragma once

#include "common/video/widescreen.h"
#include "platform/antialias.h"

#include <GL/glcorearb.h>
#include <optional>

namespace nocturne::platform::gl {

// Puts a finished hardware frame on screen. The display owns the window, the letterbox, the
// swap and the player's picture settings; the device owns the frame.
class IGlFramePresenter {
public:
    virtual ~IGlFramePresenter() = default;

    // The scene's colour texture, width by height, filled from the bottom row up. Leaves
    // whatever framebuffer, viewport and pipeline state presenting needed.
    virtual void presentScene(GLuint texture, int width, int height) = 0;
    // The pass the device runs over a camera's scene before the 2D lands on it.
    [[nodiscard]] virtual EAntialias getAntialias() const = 0;
    // Where that scene is redrawn on a target of this size after the pass, if anywhere.
    [[nodiscard]] virtual std::optional<common::SSceneReframe>
    getSceneReframe(int width, int height) const = 0;
};

} // namespace nocturne::platform::gl
