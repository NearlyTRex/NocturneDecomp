#include "platform/gl/glrenderer.h"

#include "platform/gl/gldevice.h"

#include <cstddef>
#include <stdexcept>

namespace nocturne::platform::gl {
namespace {

int result(bool succeeded) {
    return succeeded ? 1 : 0;
}

} // namespace

CGlRenderer::CGlRenderer(const SGlApi &gl, IGlFramePresenter &presenter)
    : gl_(gl), presenter_(presenter) {}

CGlRenderer::~CGlRenderer() = default;

int CGlRenderer::init(CExternalRendererBridge *bridge) {
    if (bridge != nullptr) {
        bridge_ = *bridge;
    }
    record_.reset();
    if (hasDevice()) {
        return 1;
    }
    try {
        device_ = std::make_unique<CGlDevice>(gl_, presenter_);
    } catch (const std::runtime_error &) {
        return 0;
    }
    device_->getPipeline().setFogColor(fog_colour_[0], fog_colour_[1], fog_colour_[2]);
    return 1;
}

void CGlRenderer::kill() {
    device_.reset();
    record_.reset();
    texture_object_ = 0;
    expanded_ = {};
}

int CGlRenderer::selectCard(int /*card_index*/) {
    return 1;
}

// One card: the context the display already has. The engine is handed pointers to strings
// that outlive it rather than buffers to copy into.
int CGlRenderer::buildCardList(int *out_card_count, char **out_driver_names, char **out_card_names,
                               int *out_vendor_ids, int *out_device_ids) {
    if (card_name_.empty()) {
        const GLubyte *reported = gl_.GetString(GL_RENDERER);
        for (const GLubyte *c = reported; c != nullptr && *c != 0; ++c) {
            card_name_.push_back(static_cast<char>(*c));
        }
        if (card_name_.empty()) {
            card_name_ = driver_name_;
        }
    }
    if (out_card_count != nullptr) {
        *out_card_count = 1;
    }
    if (out_driver_names != nullptr) {
        *out_driver_names = driver_name_.data();
    }
    if (out_card_names != nullptr) {
        *out_card_names = card_name_.data();
    }
    if (out_vendor_ids != nullptr) {
        *out_vendor_ids = 0;
    }
    if (out_device_ids != nullptr) {
        *out_device_ids = 0;
    }
    return 1;
}

// The engine sizes its texture cache from this. GL reports no portable figure, so the answer
// is one large enough not to constrain it.
int CGlRenderer::getVideoMemory(int *total_memory, int *available_memory, int *memory_type) {
    constexpr int kMemory = 256 * 1024 * 1024;
    if (total_memory != nullptr) {
        *total_memory = kMemory;
    }
    if (available_memory != nullptr) {
        *available_memory = kMemory;
    }
    if (memory_type != nullptr) {
        *memory_type = 0;
    }
    return 1;
}

int CGlRenderer::setVideoMode2(int width, int height, int bits_per_pixel,
                               void **screen_buffer_array) {
    if (!hasDevice()) {
        return 0;
    }
    // A new target rebuilds what is bound, so a record of it would skip the next bind.
    record_.reset();
    texture_object_ = 0;
    std::span<void *> scanlines;
    if (screen_buffer_array != nullptr && height > 0) {
        scanlines = std::span(screen_buffer_array, static_cast<std::size_t>(height));
    }
    return result(device_->setMode(width, height, bits_per_pixel, scanlines));
}

int CGlRenderer::restoreVideoMode() {
    return 1;
}

int CGlRenderer::lockFrame() {
    return result(hasDevice() && device_->lockFrame());
}

int CGlRenderer::unlockFrame() {
    return result(hasDevice() && device_->unlockFrame());
}

int CGlRenderer::lockHoldBuffer() {
    return result(hasDevice() && device_->lockHoldBuffer());
}

int CGlRenderer::unlockHoldBuffer() {
    return result(hasDevice() && device_->unlockHoldBuffer());
}

int CGlRenderer::toggle() {
    if (!hasDevice()) {
        return 0;
    }
    device_->present();
    return 1;
}

int CGlRenderer::sync() {
    if (!hasDevice()) {
        return 0;
    }
    device_->flush();
    return 1;
}

int CGlRenderer::beginScene() {
    return result(hasDevice() && device_->beginScene());
}

int CGlRenderer::endScene() {
    return result(hasDevice() && device_->endScene());
}

int CGlRenderer::clear() {
    if (!hasDevice()) {
        return 0;
    }
    device_->clearColor();
    return 1;
}

int CGlRenderer::clearZBuffer() {
    if (!hasDevice()) {
        return 0;
    }
    device_->clearDepth();
    return 1;
}

// Right and bottom are inclusive, as the original's blit rectangle adds one to each; trigl
// cleared a row and a column short.
int CGlRenderer::clearZBox(int left, int right, int top, int bottom) {
    if (!hasDevice()) {
        return 0;
    }
    device_->clearDepthBox({.left = left, .top = top, .right = right + 1, .bottom = bottom + 1});
    return 1;
}

int CGlRenderer::masterZBuffer(int slot) {
    return result(hasDevice() && device_->saveDepth(slot));
}

// The rectangle is in the target's space even while the engine submits geometry in the hold
// buffer's, so it is not scaled.
int CGlRenderer::restoreZBuffer(int slot, int left, int top, int right, int bottom) {
    return result(hasDevice() &&
                  device_->restoreDepth(
                      slot, {.left = left, .top = top, .right = right + 1, .bottom = bottom + 1}));
}

int CGlRenderer::setFogColor(int red, int green, int blue) {
    constexpr float kFull = 255.0F;
    fog_colour_ = {static_cast<float>(red) / kFull, static_cast<float>(green) / kFull,
                   static_cast<float>(blue) / kFull};
    if (hasDevice()) {
        device_->getPipeline().setFogColor(fog_colour_[0], fog_colour_[1], fog_colour_[2]);
    }
    return 1;
}

int CGlRenderer::setMipMapLevel(int /*mipmap_level*/) {
    return 1;
}

// The engine batches particles and lines itself and draws them on its CPU path; the shipped
// renderer answers to these and draws nothing.
int CGlRenderer::addParticle(void * /*particle_data*/, int /*particle_type*/) {
    return 1;
}

int CGlRenderer::flushParticleList() {
    return 1;
}

int CGlRenderer::add3dLine(void * /*start_point*/, void * /*end_point*/, int /*line_style*/) {
    return 1;
}

int CGlRenderer::flushLineList() {
    return 1;
}

// A pass only changes how a bind samples, so the record goes and the next draw binds again.
void CGlRenderer::beginReflectionPass() {
    if (hasDevice()) {
        device_->beginReflectionPass();
    }
    record_.reset();
}

void CGlRenderer::endReflectionPass() {
    if (hasDevice()) {
        device_->endReflectionPass();
    }
    record_.reset();
}

int CGlRenderer::readBridge(int *CExternalRendererBridge::*member, int fallback) const {
    if (!bridge_ || (*bridge_).*member == nullptr) {
        return fallback;
    }
    return *((*bridge_).*member);
}

bool CGlRenderer::hasDevice() const {
    return device_ != nullptr;
}

} // namespace nocturne::platform::gl
