#include "platform/gl/glprogram.h"

#include <array>
#include <stdexcept>
#include <string>

namespace nocturne::platform::gl {
namespace {

constexpr GLsizei kLogSize = 1024;

class CShaderStage {
public:
    CShaderStage(const SGlApi &gl, GLenum type, const char *source)
        : gl_(gl), name_(gl.CreateShader(type)) {
        gl_.ShaderSource(name_, 1, &source, nullptr);
        gl_.CompileShader(name_);
        GLint compiled = GL_FALSE;
        gl_.GetShaderiv(name_, GL_COMPILE_STATUS, &compiled);
        if (compiled == GL_FALSE) {
            std::array<GLchar, kLogSize> log{};
            gl_.GetShaderInfoLog(name_, kLogSize, nullptr, log.data());
            gl_.DeleteShader(name_);
            throw std::runtime_error(std::string("shader did not compile: ") + log.data());
        }
    }
    ~CShaderStage() {
        gl_.DeleteShader(name_);
    }
    CShaderStage(const CShaderStage &) = delete;
    CShaderStage &operator=(const CShaderStage &) = delete;

    [[nodiscard]] GLuint getName() const {
        return name_;
    }

private:
    const SGlApi &gl_;
    GLuint name_;
};

} // namespace

CGlProgram::CGlProgram(const SGlApi &gl, const char *vertex_source, const char *fragment_source,
                       std::span<const SAttributeBinding> attributes)
    : gl_(gl) {
    const CShaderStage vertex(gl_, GL_VERTEX_SHADER, vertex_source);
    const CShaderStage fragment(gl_, GL_FRAGMENT_SHADER, fragment_source);
    name_ = gl_.CreateProgram();
    gl_.AttachShader(name_, vertex.getName());
    gl_.AttachShader(name_, fragment.getName());
    for (const SAttributeBinding &attribute : attributes) {
        gl_.BindAttribLocation(name_, attribute.location, attribute.name);
    }
    gl_.LinkProgram(name_);
    GLint linked = GL_FALSE;
    gl_.GetProgramiv(name_, GL_LINK_STATUS, &linked);
    if (linked == GL_FALSE) {
        std::array<GLchar, kLogSize> log{};
        gl_.GetProgramInfoLog(name_, kLogSize, nullptr, log.data());
        gl_.DeleteProgram(name_);
        throw std::runtime_error(std::string("program did not link: ") + log.data());
    }
}

CGlProgram::~CGlProgram() {
    gl_.DeleteProgram(name_);
}

void CGlProgram::use() const {
    gl_.UseProgram(name_);
}

GLint CGlProgram::getUniformLocation(const char *name) const {
    return gl_.GetUniformLocation(name_, name);
}

} // namespace nocturne::platform::gl
