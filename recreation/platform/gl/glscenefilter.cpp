#include "platform/gl/glscenefilter.h"

#include "platform/gl/glantialiasshaders.h"
#include "platform/gl/glquad.h"
#include "platform/log.h"

#include <cstddef>
#include <stdexcept>

namespace nocturne::platform::gl {
namespace {

constexpr GLint kTextureUnit = 0;

} // namespace

CGlSceneFilter::CGlSceneFilter(const SGlApi &gl, const CGlQuad &quad, ILog &log)
    : gl_(gl), quad_(quad), log_(log) {}

CGlSceneFilter::~CGlSceneFilter() {
    destroyCopy();
}

// Both are render targets, so the copy is drawn bottom row first to land the right way up.
bool CGlSceneFilter::antialias(GLuint scene, int width, int height, EAntialias antialias) {
    if (antialias == EAntialias::Off) {
        return false;
    }
    const CGlProgram *const program = getProgram(antialias);
    if (program == nullptr || !copyScene(scene, width, height)) {
        return false;
    }
    gl_.Viewport(0, 0, width, height);
    gl_.Disable(GL_DEPTH_TEST);
    gl_.DepthMask(GL_FALSE);
    gl_.Disable(GL_BLEND);
    gl_.Disable(GL_CULL_FACE);
    gl_.ActiveTexture(GL_TEXTURE0);
    gl_.BindTexture(GL_TEXTURE_2D, copy_color_);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    program->use();
    gl_.Uniform1i(program->getUniformLocation("u_tex"), kTextureUnit);
    gl_.Uniform2f(program->getUniformLocation("u_src"), static_cast<GLfloat>(width),
                  static_cast<GLfloat>(height));
    quad_.draw(copy_color_, EQuadRows::BottomFirst, *program);
    return true;
}

// The rectangles count rows from the top; a render target's run from the bottom.
bool CGlSceneFilter::reframe(GLuint scene, int width, int height,
                             const common::SSceneReframe &reframe) {
    if (!copyScene(scene, width, height)) {
        return false;
    }
    const common::SViewport &from = reframe.source;
    const common::SViewport &to = reframe.destination;
    gl_.ClearColor(0.0F, 0.0F, 0.0F, 1.0F);
    gl_.Clear(GL_COLOR_BUFFER_BIT);
    gl_.BindFramebuffer(GL_READ_FRAMEBUFFER, copy_framebuffer_);
    gl_.BindFramebuffer(GL_DRAW_FRAMEBUFFER, scene);
    gl_.BlitFramebuffer(from.x, height - (from.y + from.height), from.x + from.width,
                        height - from.y, to.x, height - (to.y + to.height), to.x + to.width,
                        height - to.y, GL_COLOR_BUFFER_BIT, GL_LINEAR);
    gl_.BindFramebuffer(GL_FRAMEBUFFER, scene);
    return true;
}

const CGlProgram *CGlSceneFilter::getProgram(EAntialias antialias) {
    SProgram &entry = programs_.at(static_cast<std::size_t>(antialias));
    if (!entry.tried) {
        entry.tried = true;
        try {
            entry.program = quad_.makeProgram(getAntialiasFragmentSource(antialias));
        } catch (const std::runtime_error &error) {
            log_.print(ELogSubsystem::Render, "anti-aliasing {} could not build: {}",
                       static_cast<int>(antialias), error.what());
        }
    }
    return entry.program.get();
}

bool CGlSceneFilter::copyScene(GLuint scene, int width, int height) {
    if (copy_framebuffer_ == 0 || copy_width_ != width || copy_height_ != height) {
        destroyCopy();
        gl_.GenTextures(1, &copy_color_);
        gl_.BindTexture(GL_TEXTURE_2D, copy_color_);
        gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        gl_.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, GL_BGRA, GL_UNSIGNED_BYTE,
                       nullptr);
        gl_.GenFramebuffers(1, &copy_framebuffer_);
        gl_.BindFramebuffer(GL_FRAMEBUFFER, copy_framebuffer_);
        gl_.FramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, copy_color_,
                                 0);
        const bool complete = gl_.CheckFramebufferStatus(GL_FRAMEBUFFER) == GL_FRAMEBUFFER_COMPLETE;
        gl_.BindFramebuffer(GL_FRAMEBUFFER, scene);
        if (!complete) {
            destroyCopy();
            log_.print(ELogSubsystem::Render, "scene copy incomplete at {}x{}", width, height);
            return false;
        }
        copy_width_ = width;
        copy_height_ = height;
    }
    // A blit honours the scissor, which the renderer may have left on.
    gl_.Disable(GL_SCISSOR_TEST);
    gl_.BindFramebuffer(GL_READ_FRAMEBUFFER, scene);
    gl_.BindFramebuffer(GL_DRAW_FRAMEBUFFER, copy_framebuffer_);
    gl_.BlitFramebuffer(0, 0, width, height, 0, 0, width, height, GL_COLOR_BUFFER_BIT, GL_NEAREST);
    gl_.BindFramebuffer(GL_FRAMEBUFFER, scene);
    return true;
}

void CGlSceneFilter::destroyCopy() {
    gl_.DeleteFramebuffers(1, &copy_framebuffer_);
    gl_.DeleteTextures(1, &copy_color_);
    copy_framebuffer_ = 0;
    copy_color_ = 0;
    copy_width_ = 0;
    copy_height_ = 0;
}

} // namespace nocturne::platform::gl
