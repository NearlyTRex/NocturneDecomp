#include "platform/gl/glupscaler.h"

#include "common/video/presentation.h"
#include "platform/gl/glupscaleshaders.h"
#include "platform/log.h"

#include <cstddef>
#include <stdexcept>

namespace nocturne::platform::gl {
namespace {

constexpr GLint kTextureUnit = 0;
constexpr float kPercent = 100.0F;

// Without a program: Nearest and Smooth whatever the scale, Standard and a filter that can't
// be had nearest at a whole multiple only.
GLint getPlainFilter(EUpscaler upscaler, bool whole_multiple) {
    if (upscaler == EUpscaler::Nearest) {
        return GL_NEAREST;
    }
    if (upscaler == EUpscaler::Smooth) {
        return GL_LINEAR;
    }
    return whole_multiple ? GL_NEAREST : GL_LINEAR;
}

} // namespace

CGlUpscaler::CGlUpscaler(const SGlApi &gl, const CGlQuad &quad, ILog &log)
    : gl_(gl), quad_(quad), log_(log) {}

// The filters only enlarge: a frame shown at its size or smaller takes Standard. Sampling is
// restated every frame, since a mipmap filter another texture user left behind would make this
// texture incomplete and the quad draw white.
void CGlUpscaler::draw(GLuint texture, EQuadRows rows, common::SExtent frame,
                       const common::SViewport &viewport, EUpscaler upscaler,
                       int sharpness_percent) {
    const bool enlarges = viewport.width > frame.width || viewport.height > frame.height;
    const CGlProgram *program =
        getUpscaleFragmentSource(upscaler) != nullptr && enlarges ? getProgram(upscaler) : nullptr;
    if (program == nullptr) {
        setSampling(texture, getPlainFilter(upscaler, common::isWholeMultiple(viewport, frame)));
        quad_.draw(texture, rows);
        return;
    }
    setSampling(texture, getUpscaleWantsNearest(upscaler) ? GL_NEAREST : GL_LINEAR);
    program->use();
    gl_.Uniform1i(program->getUniformLocation("u_tex"), kTextureUnit);
    gl_.Uniform2f(program->getUniformLocation("u_src"), static_cast<GLfloat>(frame.width),
                  static_cast<GLfloat>(frame.height));
    gl_.Uniform1f(program->getUniformLocation("u_sharp"),
                  static_cast<float>(sharpness_percent) / kPercent);
    quad_.draw(texture, rows, *program);
}

const CGlProgram *CGlUpscaler::getProgram(EUpscaler upscaler) {
    SProgram &entry = programs_.at(static_cast<std::size_t>(upscaler));
    if (!entry.tried) {
        entry.tried = true;
        try {
            entry.program = quad_.makeProgram(getUpscaleFragmentSource(upscaler));
        } catch (const std::runtime_error &error) {
            log_.print(ELogSubsystem::Render, "upscaler {} could not build: {}",
                       static_cast<int>(upscaler), error.what());
        }
    }
    return entry.program.get();
}

void CGlUpscaler::setSampling(GLuint texture, GLint filter) const {
    gl_.ActiveTexture(GL_TEXTURE0);
    gl_.BindTexture(GL_TEXTURE_2D, texture);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl_.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
}

} // namespace nocturne::platform::gl
