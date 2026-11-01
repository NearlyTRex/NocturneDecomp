#pragma once

#include "common/fwd.h"
#include "platform/fwd.h"
#include "platform/gl/glapi.h"
#include "platform/gl/glprogram.h"
#include "platform/gl/glquad.h"
#include "platform/upscaler.h"

#include <array>
#include <memory>

namespace nocturne::platform::gl {

// Draws a frame into the viewport through the chosen upscaler, when the viewport is the larger
// and the filter's program builds; otherwise as Standard does, nearest at a whole multiple and
// bilinear between. Each program is built the first time it is asked for, and one that fails is
// logged and not tried again.
class CGlUpscaler {
public:
    CGlUpscaler(const SGlApi &gl, const CGlQuad &quad, ILog &log);

    // The frame's texture, on unit 0 and sampled as the filter reads it, into the current GL
    // viewport, which is `viewport` in the window.
    void draw(GLuint texture, EQuadRows rows, common::SExtent frame,
              const common::SViewport &viewport, EUpscaler upscaler, int sharpness_percent);

private:
    struct SProgram {
        std::unique_ptr<CGlProgram> program;
        bool tried = false;
    };

    [[nodiscard]] const CGlProgram *getProgram(EUpscaler upscaler);
    void setSampling(GLuint texture, GLint filter) const;

    const SGlApi &gl_;
    const CGlQuad &quad_;
    ILog &log_;
    std::array<SProgram, kUpscalerCount> programs_;
};

} // namespace nocturne::platform::gl
