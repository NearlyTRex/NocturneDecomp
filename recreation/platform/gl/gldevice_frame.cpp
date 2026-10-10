#include "platform/gl/gldevice.h"

#include <algorithm>

namespace nocturne::platform::gl {

bool CGlDevice::lockFrame() {
    if (!hasMode()) {
        return false;
    }
    finishScene();
    if (target_ahead_) {
        scene_.readBack(image_, layout_, pitch_);
        target_ahead_ = false;
    }
    frame_locked_ = true;
    return true;
}

bool CGlDevice::unlockFrame() {
    if (!frame_locked_) {
        return false;
    }
    frame_locked_ = false;
    // The image is now the composite: the 3D read back at lock with the engine's 2D over it.
    scene_.upload(image_, layout_, width_, height_, pitch_);
    invalidate();
    return true;
}

bool CGlDevice::isFrameLocked() const {
    return frame_locked_;
}

bool CGlDevice::lockHoldBuffer() {
    if (!hasMode()) {
        return false;
    }
    finishScene();
    pointEngineAt(hold_rows_);
    return true;
}

bool CGlDevice::unlockHoldBuffer() {
    if (!hasMode()) {
        return false;
    }
    pointEngineAt(rows_);
    // Stretched over the whole target, as the engine's own blit from the hold buffer was.
    scene_.upload(hold_, layout_, kHoldWidth, kHoldHeight,
                  kHoldWidth * common::getBytesPerPixel(layout_));
    invalidate();
    // The stretched composite is in the target and not in the frame image.
    target_ahead_ = true;
    return true;
}

void CGlDevice::clearColor() {
    if (!hasMode()) {
        return;
    }
    flush();
    scene_.bind();
    gl_.ClearColor(0.0F, 0.0F, 0.0F, 1.0F);
    gl_.Clear(GL_COLOR_BUFFER_BIT);
    // While locked the image is the frame, and unlocking would upload it over the clear.
    if (frame_locked_) {
        std::ranges::fill(image_, std::byte{0});
        target_ahead_ = false;
        return;
    }
    target_ahead_ = true;
}

void CGlDevice::clearDepth() {
    if (!hasMode()) {
        return;
    }
    flush();
    scene_.bind();
    pipeline_.enableDepthWrite();
    gl_.ClearDepth(1.0);
    gl_.Clear(GL_DEPTH_BUFFER_BIT);
}

void CGlDevice::clearDepthBox(const SDepthRect &rect) {
    if (!hasMode() || rect.right <= rect.left || rect.bottom <= rect.top) {
        return;
    }
    flush();
    scene_.bind();
    // A clear honours the scissor, which makes it the engine's rectangle fill of the depth
    // surface.
    gl_.Enable(GL_SCISSOR_TEST);
    gl_.Scissor(rect.left, height_ - rect.bottom, rect.right - rect.left, rect.bottom - rect.top);
    pipeline_.enableDepthWrite();
    gl_.ClearDepth(1.0);
    gl_.Clear(GL_DEPTH_BUFFER_BIT);
    gl_.Disable(GL_SCISSOR_TEST);
}

} // namespace nocturne::platform::gl
