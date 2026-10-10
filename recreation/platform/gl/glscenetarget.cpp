#include "platform/gl/glscenetarget.h"

#include "common/video/framebuffer.h"
#include "platform/gl/glformat.h"
#include "platform/gl/glquad.h"

#include <algorithm>

namespace nocturne::platform::gl {
namespace {

void setNearestClamped(const SGlApi &gl) {
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
}

// GL reads from the bottom row up; the engine's image runs top down.
void flipRows(std::span<std::byte> pixels, int pitch, int height) {
    const auto row = static_cast<std::size_t>(pitch);
    for (int top = 0, bottom = height - 1; top < bottom; ++top, --bottom) {
        std::ranges::swap_ranges(pixels.subspan(static_cast<std::size_t>(top) * row, row),
                                 pixels.subspan(static_cast<std::size_t>(bottom) * row, row));
    }
}

} // namespace

CGlSceneTarget::CGlSceneTarget(const SGlApi &gl, const CGlQuad &quad) : gl_(gl), quad_(quad) {
    gl_.GenTextures(1, &upload_texture_);
    gl_.BindTexture(GL_TEXTURE_2D, upload_texture_);
    setNearestClamped(gl_);
}

CGlSceneTarget::~CGlSceneTarget() {
    destroy();
    gl_.DeleteTextures(1, &upload_texture_);
}

bool CGlSceneTarget::resize(int width, int height) {
    if (framebuffer_ != 0 && width == width_ && height == height_) {
        bind();
        return true;
    }
    destroy();
    gl_.GenTextures(1, &color_);
    gl_.BindTexture(GL_TEXTURE_2D, color_);
    setNearestClamped(gl_);
    gl_.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, GL_BGRA, GL_UNSIGNED_BYTE,
                   nullptr);
    gl_.GenRenderbuffers(1, &depth_);
    gl_.BindRenderbuffer(GL_RENDERBUFFER, depth_);
    gl_.RenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, width, height);
    gl_.BindRenderbuffer(GL_RENDERBUFFER, 0);
    gl_.GenFramebuffers(1, &framebuffer_);
    gl_.BindFramebuffer(GL_FRAMEBUFFER, framebuffer_);
    gl_.FramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, color_, 0);
    gl_.FramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, depth_);
    if (gl_.CheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
        gl_.BindFramebuffer(GL_FRAMEBUFFER, 0);
        destroy();
        return false;
    }
    width_ = width;
    height_ = height;
    gl_.Viewport(0, 0, width, height);
    gl_.ClearColor(0.0F, 0.0F, 0.0F, 1.0F);
    gl_.ClearDepth(1.0);
    gl_.DepthMask(GL_TRUE);
    gl_.Clear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    return true;
}

void CGlSceneTarget::bind() const {
    gl_.BindFramebuffer(GL_FRAMEBUFFER, framebuffer_);
}

GLuint CGlSceneTarget::getFramebuffer() const {
    return framebuffer_;
}

GLuint CGlSceneTarget::getColorTexture() const {
    return color_;
}

void CGlSceneTarget::readBack(std::span<std::byte> pixels, common::EPixelLayout layout,
                              int pitch) const {
    const SGlPixelFormat format = getGlPixelFormat(layout);
    bind();
    gl_.ReadBuffer(GL_COLOR_ATTACHMENT0);
    gl_.PixelStorei(GL_PACK_ALIGNMENT, 1);
    gl_.PixelStorei(GL_PACK_ROW_LENGTH, pitch / common::getBytesPerPixel(layout));
    gl_.ReadPixels(0, 0, width_, height_, format.format, format.type, pixels.data());
    gl_.PixelStorei(GL_PACK_ROW_LENGTH, 0);
    flipRows(pixels, pitch, height_);
}

void CGlSceneTarget::upload(std::span<const std::byte> pixels, common::EPixelLayout layout,
                            int width, int height, int pitch) {
    const SGlPixelFormat format = getGlPixelFormat(layout);
    gl_.ActiveTexture(GL_TEXTURE0);
    gl_.BindTexture(GL_TEXTURE_2D, upload_texture_);
    gl_.PixelStorei(GL_UNPACK_ALIGNMENT, 1);
    gl_.PixelStorei(GL_UNPACK_ROW_LENGTH, pitch / common::getBytesPerPixel(layout));
    if (width == upload_width_ && height == upload_height_ && format.type == upload_type_) {
        gl_.TexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width, height, format.format, format.type,
                          pixels.data());
    } else {
        gl_.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, format.format, format.type,
                       pixels.data());
        upload_width_ = width;
        upload_height_ = height;
        upload_type_ = format.type;
    }
    gl_.PixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    bind();
    gl_.Viewport(0, 0, width_, height_);
    gl_.Disable(GL_SCISSOR_TEST);
    gl_.Disable(GL_DEPTH_TEST);
    gl_.DepthMask(GL_FALSE);
    gl_.Disable(GL_BLEND);
    gl_.Disable(GL_CULL_FACE);
    quad_.draw(upload_texture_, EQuadRows::TopFirst);
}

void CGlSceneTarget::destroy() {
    gl_.DeleteFramebuffers(1, &framebuffer_);
    gl_.DeleteTextures(1, &color_);
    gl_.DeleteRenderbuffers(1, &depth_);
    framebuffer_ = 0;
    color_ = 0;
    depth_ = 0;
    width_ = 0;
    height_ = 0;
}

} // namespace nocturne::platform::gl
