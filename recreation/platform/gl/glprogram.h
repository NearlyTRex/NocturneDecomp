#pragma once

#include "platform/gl/glapi.h"

#include <span>

namespace nocturne::platform::gl {

// Attributes are bound before linking so every program reads its vertices from fixed
// locations, with position at 0.
struct SAttributeBinding {
    GLuint location = 0;
    const char *name = nullptr;
};

// A linked vertex and fragment program.
class CGlProgram {
public:
    // Throws std::runtime_error carrying the driver's log when a stage does not compile or
    // the program does not link.
    CGlProgram(const SGlApi &gl, const char *vertex_source, const char *fragment_source,
               std::span<const SAttributeBinding> attributes);
    ~CGlProgram();
    CGlProgram(const CGlProgram &) = delete;
    CGlProgram &operator=(const CGlProgram &) = delete;

    void use() const;
    [[nodiscard]] GLint getUniformLocation(const char *name) const;

private:
    const SGlApi &gl_;
    GLuint name_ = 0;
};

} // namespace nocturne::platform::gl
