#pragma once

#include "common/video/widescreen.h"
#include "platform/antialias.h"
#include "platform/fwd.h"
#include "platform/gl/glapi.h"
#include "platform/gl/glprogram.h"

#include <array>
#include <memory>

namespace nocturne::platform::gl {

class CGlQuad;

// Passes over the scene's colour in place. A framebuffer can't be read and drawn at once, so
// each pass draws from a copy of the colour kept at the scene's size. A pass changes the
// pipeline state, the viewport and the texture on unit 0, which the caller's caches must
// forget. Each program is built the first time it is asked for, and one that fails is logged
// and not tried again.
class CGlSceneFilter {
public:
    CGlSceneFilter(const SGlApi &gl, const CGlQuad &quad, ILog &log);
    ~CGlSceneFilter();
    CGlSceneFilter(const CGlSceneFilter &) = delete;
    CGlSceneFilter &operator=(const CGlSceneFilter &) = delete;

    // The scene's colour through the pass, at the scene's own pixels; depth is left alone.
    // False, with the scene as it was, for Off, without a copy, or without the pass's program.
    [[nodiscard]] bool antialias(GLuint scene, int width, int height, EAntialias antialias);
    // Part of the scene's colour redrawn, scaled, over a part of itself, with black wherever
    // the destination doesn't reach; depth is left alone. False, with the scene as it was,
    // without a copy.
    [[nodiscard]] bool reframe(GLuint scene, int width, int height,
                               const common::SSceneReframe &reframe);

private:
    struct SProgram {
        std::unique_ptr<CGlProgram> program;
        bool tried = false;
    };

    [[nodiscard]] const CGlProgram *getProgram(EAntialias antialias);
    // The copy made, or remade at a new size, and filled from the scene. Leaves the scene bound.
    [[nodiscard]] bool copyScene(GLuint scene, int width, int height);
    void destroyCopy();

    const SGlApi &gl_;
    const CGlQuad &quad_;
    ILog &log_;
    std::array<SProgram, kAntialiasCount> programs_;
    GLuint copy_framebuffer_ = 0;
    GLuint copy_color_ = 0;
    int copy_width_ = 0;
    int copy_height_ = 0;
};

} // namespace nocturne::platform::gl
