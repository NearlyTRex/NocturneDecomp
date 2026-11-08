#include "platform/gl/glmasterdepth.h"

#include "platform/log.h"

#include <cstddef>

namespace nocturne::platform::gl {
namespace {

bool isSlot(int slot) {
    return slot >= 0 && slot < CGlMasterDepth::kSlots;
}

} // namespace

CGlMasterDepth::CGlMasterDepth(const SGlApi &gl, ILog &log) : gl_(gl), log_(log) {}

CGlMasterDepth::~CGlMasterDepth() {
    for (SSlot &slot : slots_) {
        destroy(slot);
    }
    destroy(held_);
}

bool CGlMasterDepth::save(int slot, GLuint scene, int width, int height) {
    if (!isSlot(slot)) {
        return false;
    }
    SSlot &saved = slots_.at(static_cast<std::size_t>(slot));
    if (!prepare(saved, scene, width, height)) {
        log_.print(ELogSubsystem::Render, "master depth slot {} incomplete at {}x{}", slot, width,
                   height);
        return false;
    }
    copy(scene, saved.framebuffer, scene, width, height);
    return true;
}

bool CGlMasterDepth::hold(GLuint scene, int width, int height) {
    if (!prepare(held_, scene, width, height)) {
        log_.print(ELogSubsystem::Render, "held depth incomplete at {}x{}", width, height);
        return false;
    }
    copy(scene, held_.framebuffer, scene, width, height);
    return true;
}

bool CGlMasterDepth::giveBack(GLuint scene, int width, int height) {
    if (held_.framebuffer == 0) {
        return false;
    }
    copy(held_.framebuffer, scene, scene, width, height);
    return true;
}

bool CGlMasterDepth::restore(int slot, GLuint scene, const SDepthRect &rect, int scene_height) {
    if (!isSlot(slot)) {
        return false;
    }
    const SSlot &saved = slots_.at(static_cast<std::size_t>(slot));
    if (saved.framebuffer == 0) {
        return false;
    }
    const GLint y0 = scene_height - rect.bottom;
    const GLint y1 = scene_height - rect.top;
    if (rect.right <= rect.left || y1 <= y0) {
        return true;
    }
    gl_.BindFramebuffer(GL_READ_FRAMEBUFFER, saved.framebuffer);
    gl_.BindFramebuffer(GL_DRAW_FRAMEBUFFER, scene);
    gl_.BlitFramebuffer(rect.left, y0, rect.right, y1, rect.left, y0, rect.right, y1,
                        GL_DEPTH_BUFFER_BIT, GL_NEAREST);
    gl_.BindFramebuffer(GL_FRAMEBUFFER, scene);
    return true;
}

bool CGlMasterDepth::prepare(SSlot &saved, GLuint scene, int width, int height) {
    if (saved.framebuffer != 0 && saved.width == width && saved.height == height) {
        return true;
    }
    destroy(saved);
    gl_.GenRenderbuffers(1, &saved.depth);
    gl_.BindRenderbuffer(GL_RENDERBUFFER, saved.depth);
    gl_.RenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, width, height);
    gl_.BindRenderbuffer(GL_RENDERBUFFER, 0);
    gl_.GenFramebuffers(1, &saved.framebuffer);
    gl_.BindFramebuffer(GL_FRAMEBUFFER, saved.framebuffer);
    gl_.FramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, saved.depth);
    // Depth only: before GL 4.1 a framebuffer whose draw or read buffer names a missing colour
    // attachment is incomplete.
    gl_.DrawBuffer(GL_NONE);
    gl_.ReadBuffer(GL_NONE);
    const bool complete = gl_.CheckFramebufferStatus(GL_FRAMEBUFFER) == GL_FRAMEBUFFER_COMPLETE;
    gl_.BindFramebuffer(GL_FRAMEBUFFER, scene);
    if (!complete) {
        destroy(saved);
        return false;
    }
    saved.width = width;
    saved.height = height;
    return true;
}

void CGlMasterDepth::copy(GLuint from, GLuint to, GLuint scene, int width, int height) const {
    gl_.BindFramebuffer(GL_READ_FRAMEBUFFER, from);
    gl_.BindFramebuffer(GL_DRAW_FRAMEBUFFER, to);
    gl_.BlitFramebuffer(0, 0, width, height, 0, 0, width, height, GL_DEPTH_BUFFER_BIT, GL_NEAREST);
    gl_.BindFramebuffer(GL_FRAMEBUFFER, scene);
}

void CGlMasterDepth::destroy(SSlot &slot) const {
    gl_.DeleteFramebuffers(1, &slot.framebuffer);
    gl_.DeleteRenderbuffers(1, &slot.depth);
    slot = SSlot{};
}

} // namespace nocturne::platform::gl
