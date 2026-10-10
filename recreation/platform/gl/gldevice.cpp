#include "platform/gl/gldevice.h"

#include "platform/gl/glframepresenter.h"

#include <algorithm>
#include <optional>

namespace nocturne::platform::gl {
namespace {

std::vector<void *> makeRows(std::vector<std::byte> &pixels, int pitch, int height) {
    std::vector<void *> rows(static_cast<std::size_t>(height));
    for (std::size_t y = 0; y < rows.size(); ++y) {
        rows[y] = &pixels[y * static_cast<std::size_t>(pitch)];
    }
    return rows;
}

} // namespace

CGlDevice::CGlDevice(const SGlApi &gl, IGlFramePresenter &presenter)
    : gl_(gl), presenter_(presenter), quad_(gl), pipeline_(gl), textures_(gl), scene_(gl, quad_),
      depth_(gl), batch_(kBatchVertices, kBatchIndices) {}

bool CGlDevice::setMode(int width, int height, int bits_per_pixel, std::span<void *> scanlines) {
    const std::optional<common::EPixelLayout> layout = common::layoutForDepth(bits_per_pixel);
    if (!layout || *layout == common::EPixelLayout::Indexed8 || width <= 0 || height <= 0) {
        return false;
    }
    if (!scene_.resize(width, height)) {
        // The old target is gone, so the mode is too; the image stays allocated because the
        // engine's rows still point into it.
        in_scene_ = false;
        frame_locked_ = false;
        batch_.reset();
        return false;
    }
    // A new target was cleared with depth writes on.
    invalidate();
    const bool moved = width != width_ || height != height_ || *layout != layout_;
    layout_ = *layout;
    width_ = width;
    height_ = height;
    const int bytes = common::getBytesPerPixel(layout_);
    pitch_ = width * bytes;
    image_.assign(static_cast<std::size_t>(pitch_) * static_cast<std::size_t>(height),
                  std::byte{0});
    rows_ = makeRows(image_, pitch_, height);
    const int hold_pitch = kHoldWidth * bytes;
    hold_.assign(static_cast<std::size_t>(hold_pitch) * kHoldHeight, std::byte{0});
    hold_rows_ = makeRows(hold_, hold_pitch, kHoldHeight);
    engine_rows_ = scanlines;
    pointEngineAt(rows_);
    frame_locked_ = false;
    target_ahead_ = false;
    pipeline_.setTargetSize(width, height);
    // The engine reloads its assets around a resolution change, so a name can come back
    // naming different pixels at the same dimension. A mode re-asserted unchanged keeps them.
    if (moved) {
        textures_.release();
    }
    return true;
}

int CGlDevice::getWidth() const {
    return width_;
}

int CGlDevice::getHeight() const {
    return height_;
}

int CGlDevice::getBitsPerPixel() const {
    return hasMode() ? common::getBytesPerPixel(layout_) * 8 : 0;
}

bool CGlDevice::beginScene() {
    if (!hasMode() || in_scene_) {
        return false;
    }
    in_scene_ = true;
    return true;
}

bool CGlDevice::endScene() {
    if (!in_scene_) {
        return false;
    }
    finishScene();
    return true;
}

bool CGlDevice::isInScene() const {
    return in_scene_;
}

common::CPolygonBatch &CGlDevice::getBatch() {
    return batch_;
}

void CGlDevice::flush() {
    if (!batch_.getIndices().empty()) {
        scene_.bind();
        pipeline_.draw(batch_.getVertices(), batch_.getIndices());
        target_ahead_ = true;
    }
    batch_.reset();
}

CGlPipeline &CGlDevice::getPipeline() {
    return pipeline_;
}

CGlTextureCache &CGlDevice::getTextures() {
    return textures_;
}

void CGlDevice::beginReflectionPass() {
    ++reflection_depth_;
}

void CGlDevice::endReflectionPass() {
    reflection_depth_ = std::max(reflection_depth_ - 1, 0);
}

void CGlDevice::bindTexture(GLuint texture) {
    const bool reflection = reflection_depth_ > 0;
    pipeline_.setReflection(reflection);
    textures_.bind(texture, pipeline_.getState(), reflection);
}

bool CGlDevice::saveDepth(int slot) {
    if (!hasMode()) {
        return false;
    }
    flush();
    return depth_.save(slot, scene_.getFramebuffer(), width_, height_);
}

bool CGlDevice::restoreDepth(int slot, const SDepthRect &rect) {
    if (!hasMode()) {
        return false;
    }
    flush();
    return depth_.restore(slot, scene_.getFramebuffer(), rect, height_);
}

void CGlDevice::present() {
    if (!hasMode()) {
        return;
    }
    finishScene();
    presenter_.presentScene(scene_.getColorTexture(), width_, height_);
    invalidate();
}

void CGlDevice::finishScene() {
    flush();
    in_scene_ = false;
}

void CGlDevice::invalidate() {
    pipeline_.invalidate();
    textures_.invalidateBinding();
}

void CGlDevice::pointEngineAt(std::span<void *const> rows) {
    const std::size_t count = std::min(rows.size(), engine_rows_.size());
    std::ranges::copy(rows.first(count), engine_rows_.begin());
}

bool CGlDevice::hasMode() const {
    return scene_.getFramebuffer() != 0;
}

} // namespace nocturne::platform::gl
