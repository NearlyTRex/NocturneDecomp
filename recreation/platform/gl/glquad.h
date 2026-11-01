#pragma once

#include "platform/gl/glapi.h"
#include "platform/gl/glprogram.h"

#include <cstdint>
#include <memory>

namespace nocturne::platform::gl {

// Which texture row lands at the top of the viewport.
enum class EQuadRows : std::uint8_t {
    // An uploaded CPU image, first row at the top.
    TopFirst,
    // A render target, which GL fills from the bottom.
    BottomFirst,
};

// A texture drawn opaque over the whole viewport. The caller owns the pipeline state and the
// texture's sampling; this binds only its own program, vertex array and the texture on unit 0.
class CGlQuad {
public:
    explicit CGlQuad(const SGlApi &gl);
    ~CGlQuad();
    CGlQuad(const CGlQuad &) = delete;
    CGlQuad &operator=(const CGlQuad &) = delete;

    void draw(GLuint texture, EQuadRows rows) const;
    // Through a program of the caller's, made by makeProgram, its uniforms already set.
    void draw(GLuint texture, EQuadRows rows, const CGlProgram &program) const;
    // A program over this quad's vertices: v_uv in, o_color out. Throws std::runtime_error
    // when it doesn't build.
    [[nodiscard]] std::unique_ptr<CGlProgram> makeProgram(const char *fragment_source) const;

private:
    const SGlApi &gl_;
    CGlProgram program_;
    GLuint vertex_buffer_ = 0;
    GLuint vertex_array_ = 0;
};

} // namespace nocturne::platform::gl
