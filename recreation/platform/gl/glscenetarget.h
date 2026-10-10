#pragma once

#include "common/fwd.h"
#include "platform/gl/glapi.h"

#include <cstddef>
#include <span>

namespace nocturne::platform::gl {

class CGlQuad;

// The colour and depth the hardware renders into, kept from frame to frame as DirectDraw
// surface memory is; GL's default framebuffer loses both at every swap.
class CGlSceneTarget {
public:
    CGlSceneTarget(const SGlApi &gl, const CGlQuad &quad);
    ~CGlSceneTarget();
    CGlSceneTarget(const CGlSceneTarget &) = delete;
    CGlSceneTarget &operator=(const CGlSceneTarget &) = delete;

    // Sizes the target and binds it. A new size starts black at the far depth; the same size
    // keeps what is there. False when GL cannot complete the target.
    [[nodiscard]] bool resize(int width, int height);
    void bind() const;
    [[nodiscard]] GLuint getFramebuffer() const;
    // GL fills it from the bottom row up.
    [[nodiscard]] GLuint getColorTexture() const;

    // The colour into a top-down image of the target's size, rows pitch bytes apart.
    void readBack(std::span<std::byte> pixels, common::EPixelLayout layout, int pitch) const;
    // A top-down image drawn over the whole colour, stretched when its size differs. Depth is
    // left alone: a master depth restore precedes this and must survive it. Changes the
    // pipeline state, the viewport and the texture on unit 0.
    void upload(std::span<const std::byte> pixels, common::EPixelLayout layout, int width,
                int height, int pitch);

private:
    void destroy();

    const SGlApi &gl_;
    const CGlQuad &quad_;
    GLuint framebuffer_ = 0;
    GLuint color_ = 0;
    GLuint depth_ = 0;
    int width_ = 0;
    int height_ = 0;
    GLuint upload_texture_ = 0;
    // What the upload texture was last specified as, so a same-sized upload only replaces
    // its contents.
    GLint upload_width_ = 0;
    GLint upload_height_ = 0;
    GLenum upload_type_ = 0;
};

} // namespace nocturne::platform::gl
