#pragma once

#include "platform/gl/glapi.h"

#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <map>
#include <ostream>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::platform::gl {

// One call as it reached GL. Pointer arguments are kept apart from the values: pointer is
// what a texture or pixel call was handed, data a copy of what a buffer call uploaded.
struct SGlCall {
    std::string name;
    std::vector<double> args;
    const void *pointer = nullptr;
    std::vector<std::byte> data;

    // Name and values only, so an expected sequence can be written without the payloads.
    bool operator==(const SGlCall &other) const {
        return name == other.name && args == other.args;
    }
};

inline void PrintTo(const SGlCall &call, std::ostream *out) {
    *out << call.name << '(';
    for (std::size_t i = 0; i < call.args.size(); ++i) {
        *out << (i == 0 ? "" : ", ") << call.args[i];
    }
    *out << ')';
}

// The bytes a name argument carried, as the recorder keeps them in data.
inline std::vector<std::byte> textBytes(std::string_view text) {
    const auto bytes = std::as_bytes(std::span(text));
    return {bytes.begin(), bytes.end()};
}

template <typename... Args>
SGlCall glCall(std::string name, Args... args) {
    SGlCall call;
    call.name = std::move(name);
    call.args = {static_cast<double>(args)...};
    return call;
}

// Fills an SGlApi with stubs that record each call instead of drawing, so what a class says to
// GL, and in what order, is asserted without a context. Names come from one counter starting
// at 1, since 0 means none throughout GL. One recorder is live at a time.
class CGlRecorder {
public:
    CGlRecorder() {
        live() = this;
        install();
    }
    ~CGlRecorder() {
        live() = nullptr;
    }
    CGlRecorder(const CGlRecorder &) = delete;
    CGlRecorder &operator=(const CGlRecorder &) = delete;

    [[nodiscard]] const SGlApi &getApi() const {
        return api_;
    }
    [[nodiscard]] const std::vector<SGlCall> &getCalls() const {
        return calls_;
    }
    [[nodiscard]] std::vector<SGlCall> getCalls(std::string_view name) const {
        std::vector<SGlCall> named;
        std::ranges::copy_if(calls_, std::back_inserter(named),
                             [name](const SGlCall &call) { return call.name == name; });
        return named;
    }
    [[nodiscard]] std::size_t count(std::string_view name) const {
        return static_cast<std::size_t>(std::ranges::count_if(
            calls_, [name](const SGlCall &call) { return call.name == name; }));
    }
    void clear() {
        calls_.clear();
    }
    // The next name GenTextures and the others will hand out.
    [[nodiscard]] GLuint peekName() const {
        return next_name_;
    }

    // Shader stages of this type fail to compile; 0 compiles everything.
    GLenum failing_stage = 0;
    bool link_fails = false;
    std::string info_log = "driver log";
    GLenum framebuffer_status = GL_FRAMEBUFFER_COMPLETE;
    // What ReadPixels writes, bottom row first as GL returns it.
    std::vector<std::byte> read_pixels;
    // What GetString answers for GL_RENDERER; null as a driver that answers nothing.
    static constexpr std::array<GLubyte, 5> kRendererName = {'T', 'e', 's', 't', '\0'};
    const GLubyte *renderer_name = kRendererName.data();

private:
    static CGlRecorder *&live() {
        static CGlRecorder *recorder = nullptr;
        return recorder;
    }
    static CGlRecorder &self() {
        return *live();
    }
    template <typename... Args>
    static SGlCall &note(const char *name, Args... args) {
        return self().calls_.emplace_back(glCall(name, args...));
    }
    static double offset(const void *pointer) {
        return static_cast<double>(std::bit_cast<std::uintptr_t>(pointer));
    }
    static void generate(const char *name, GLsizei count, GLuint *names) {
        for (GLsizei i = 0; i < count; ++i) {
            names[i] = self().next_name_++;
        }
        note(name, count, names[0]);
    }
    static void erase(const char *name, GLsizei count, const GLuint *names) {
        note(name, count, names[0]);
    }
    static void copyData(SGlCall &call, const void *data, GLsizeiptr size) {
        if (data != nullptr) {
            const auto *bytes = static_cast<const std::byte *>(data);
            call.data.assign(bytes, bytes + size);
        }
    }

    void install() {
        api_.ActiveTexture = [](GLenum unit) { note("ActiveTexture", unit); };
        api_.AttachShader = [](GLuint program, GLuint shader) {
            note("AttachShader", program, shader);
        };
        api_.BindAttribLocation = [](GLuint program, GLuint index, const GLchar *name) {
            note("BindAttribLocation", program, index).data = textBytes(name);
        };
        api_.BindBuffer = [](GLenum target, GLuint buffer) { note("BindBuffer", target, buffer); };
        api_.BindFramebuffer = [](GLenum target, GLuint framebuffer) {
            note("BindFramebuffer", target, framebuffer);
        };
        api_.BindRenderbuffer = [](GLenum target, GLuint renderbuffer) {
            note("BindRenderbuffer", target, renderbuffer);
        };
        api_.BindTexture = [](GLenum target, GLuint texture) {
            note("BindTexture", target, texture);
        };
        api_.BindVertexArray = [](GLuint array) { note("BindVertexArray", array); };
        api_.BlendFunc = [](GLenum source, GLenum destination) {
            note("BlendFunc", source, destination);
        };
        api_.BlitFramebuffer = [](GLint sx0, GLint sy0, GLint sx1, GLint sy1, GLint dx0, GLint dy0,
                                  GLint dx1, GLint dy1, GLbitfield mask, GLenum filter) {
            note("BlitFramebuffer", sx0, sy0, sx1, sy1, dx0, dy0, dx1, dy1, mask, filter);
        };
        api_.BufferData = [](GLenum target, GLsizeiptr size, const void *data, GLenum usage) {
            copyData(note("BufferData", target, size, usage), data, size);
        };
        api_.BufferSubData = [](GLenum target, GLintptr at, GLsizeiptr size, const void *data) {
            copyData(note("BufferSubData", target, at, size), data, size);
        };
        api_.CheckFramebufferStatus = [](GLenum target) {
            note("CheckFramebufferStatus", target);
            return self().framebuffer_status;
        };
        api_.Clear = [](GLbitfield mask) { note("Clear", mask); };
        api_.ClearColor = [](GLfloat r, GLfloat g, GLfloat b, GLfloat a) {
            note("ClearColor", r, g, b, a);
        };
        api_.ClearDepth = [](GLdouble depth) { note("ClearDepth", depth); };
        api_.CompileShader = [](GLuint shader) { note("CompileShader", shader); };
        api_.CreateProgram = []() {
            const GLuint program = self().next_name_++;
            note("CreateProgram", program);
            return program;
        };
        api_.CreateShader = [](GLenum type) {
            const GLuint shader = self().next_name_++;
            self().shader_types_[shader] = type;
            note("CreateShader", type, shader);
            return shader;
        };
        api_.DeleteBuffers = [](GLsizei n, const GLuint *names) {
            erase("DeleteBuffers", n, names);
        };
        api_.DeleteFramebuffers = [](GLsizei n, const GLuint *names) {
            erase("DeleteFramebuffers", n, names);
        };
        api_.DeleteProgram = [](GLuint program) { note("DeleteProgram", program); };
        api_.DeleteRenderbuffers = [](GLsizei n, const GLuint *names) {
            erase("DeleteRenderbuffers", n, names);
        };
        api_.DeleteShader = [](GLuint shader) { note("DeleteShader", shader); };
        api_.DeleteTextures = [](GLsizei n, const GLuint *names) {
            SGlCall &call = note("DeleteTextures", n, names[0]);
            const auto *bytes = std::bit_cast<const std::byte *>(names);
            call.data.assign(bytes, bytes + (n * sizeof(GLuint)));
        };
        api_.DeleteVertexArrays = [](GLsizei n, const GLuint *names) {
            erase("DeleteVertexArrays", n, names);
        };
        api_.DepthFunc = [](GLenum function) { note("DepthFunc", function); };
        api_.DepthMask = [](GLboolean flag) { note("DepthMask", flag); };
        api_.Disable = [](GLenum capability) { note("Disable", capability); };
        api_.DrawArrays = [](GLenum mode, GLint first, GLsizei count) {
            note("DrawArrays", mode, first, count);
        };
        api_.DrawBuffer = [](GLenum buffer) { note("DrawBuffer", buffer); };
        api_.DrawElements = [](GLenum mode, GLsizei count, GLenum type, const void *indices) {
            note("DrawElements", mode, count, type, offset(indices));
        };
        api_.Enable = [](GLenum capability) { note("Enable", capability); };
        api_.EnableVertexAttribArray = [](GLuint index) { note("EnableVertexAttribArray", index); };
        api_.FramebufferRenderbuffer = [](GLenum target, GLenum attachment, GLenum kind,
                                          GLuint renderbuffer) {
            note("FramebufferRenderbuffer", target, attachment, kind, renderbuffer);
        };
        api_.FramebufferTexture2D = [](GLenum target, GLenum attachment, GLenum kind,
                                       GLuint texture, GLint level) {
            note("FramebufferTexture2D", target, attachment, kind, texture, level);
        };
        api_.GenBuffers = [](GLsizei n, GLuint *names) { generate("GenBuffers", n, names); };
        api_.GenerateMipmap = [](GLenum target) { note("GenerateMipmap", target); };
        api_.GenFramebuffers = [](GLsizei n, GLuint *names) {
            generate("GenFramebuffers", n, names);
        };
        api_.GenRenderbuffers = [](GLsizei n, GLuint *names) {
            generate("GenRenderbuffers", n, names);
        };
        api_.GenTextures = [](GLsizei n, GLuint *names) { generate("GenTextures", n, names); };
        api_.GenVertexArrays = [](GLsizei n, GLuint *names) {
            generate("GenVertexArrays", n, names);
        };
        api_.GetProgramInfoLog = [](GLuint program, GLsizei size, GLsizei *, GLchar *log) {
            note("GetProgramInfoLog", program, size);
            copyLog(size, log);
        };
        api_.GetProgramiv = [](GLuint program, GLenum name, GLint *value) {
            note("GetProgramiv", program, name);
            *value = self().link_fails ? GL_FALSE : GL_TRUE;
        };
        api_.GetShaderInfoLog = [](GLuint shader, GLsizei size, GLsizei *, GLchar *log) {
            note("GetShaderInfoLog", shader, size);
            copyLog(size, log);
        };
        api_.GetShaderiv = [](GLuint shader, GLenum name, GLint *value) {
            note("GetShaderiv", shader, name);
            *value = self().shader_types_[shader] == self().failing_stage ? GL_FALSE : GL_TRUE;
        };
        api_.GetString = [](GLenum name) {
            note("GetString", name);
            return name == GL_RENDERER ? self().renderer_name : nullptr;
        };
        api_.GetUniformLocation = [](GLuint program, const GLchar *name) {
            auto &locations = self().uniform_locations_;
            const auto location =
                locations.try_emplace(name, static_cast<GLint>(locations.size())).first->second;
            note("GetUniformLocation", program, location).data = textBytes(name);
            return location;
        };
        api_.LinkProgram = [](GLuint program) { note("LinkProgram", program); };
        api_.PixelStorei = [](GLenum name, GLint value) { note("PixelStorei", name, value); };
        api_.PolygonOffset = [](GLfloat factor, GLfloat units) {
            note("PolygonOffset", factor, units);
        };
        api_.ReadBuffer = [](GLenum buffer) { note("ReadBuffer", buffer); };
        api_.ReadPixels = [](GLint x, GLint y, GLsizei width, GLsizei height, GLenum format,
                             GLenum type, void *pixels) {
            note("ReadPixels", x, y, width, height, format, type).pointer = pixels;
            const std::vector<std::byte> &source = self().read_pixels;
            std::memcpy(pixels, source.data(), source.size());
        };
        api_.RenderbufferStorage = [](GLenum target, GLenum format, GLsizei width, GLsizei height) {
            note("RenderbufferStorage", target, format, width, height);
        };
        api_.Scissor = [](GLint x, GLint y, GLsizei width, GLsizei height) {
            note("Scissor", x, y, width, height);
        };
        api_.ShaderSource = [](GLuint shader, GLsizei count, const GLchar *const *, const GLint *) {
            note("ShaderSource", shader, count);
        };
        api_.TexImage2D = [](GLenum target, GLint level, GLint internal, GLsizei width,
                             GLsizei height, GLint border, GLenum format, GLenum type,
                             const void *pixels) {
            note("TexImage2D", target, level, internal, width, height, border, format, type)
                .pointer = pixels;
        };
        api_.TexParameteri = [](GLenum target, GLenum name, GLint value) {
            note("TexParameteri", target, name, value);
        };
        api_.TexSubImage2D = [](GLenum target, GLint level, GLint x, GLint y, GLsizei width,
                                GLsizei height, GLenum format, GLenum type, const void *pixels) {
            note("TexSubImage2D", target, level, x, y, width, height, format, type).pointer =
                pixels;
        };
        api_.Uniform1i = [](GLint location, GLint value) { note("Uniform1i", location, value); };
        api_.Uniform3f = [](GLint location, GLfloat x, GLfloat y, GLfloat z) {
            note("Uniform3f", location, x, y, z);
        };
        api_.UniformMatrix4fv = [](GLint location, GLsizei count, GLboolean transpose,
                                   const GLfloat *value) {
            SGlCall &call = note("UniformMatrix4fv", location, count, transpose);
            call.args.insert(call.args.end(), value, value + 16);
        };
        api_.UseProgram = [](GLuint program) { note("UseProgram", program); };
        api_.VertexAttribPointer = [](GLuint index, GLint size, GLenum type, GLboolean normalized,
                                      GLsizei stride, const void *pointer) {
            note("VertexAttribPointer", index, size, type, normalized, stride, offset(pointer));
        };
        api_.Viewport = [](GLint x, GLint y, GLsizei width, GLsizei height) {
            note("Viewport", x, y, width, height);
        };
    }

    static void copyLog(GLsizei size, GLchar *log) {
        const std::string &text = self().info_log;
        const std::size_t length = std::min(text.size(), static_cast<std::size_t>(size) - 1);
        std::memcpy(log, text.data(), length);
        log[length] = '\0';
    }

    SGlApi api_;
    std::vector<SGlCall> calls_;
    GLuint next_name_ = 1;
    std::map<GLuint, GLenum> shader_types_;
    std::map<std::string, GLint, std::less<>> uniform_locations_;
};

} // namespace nocturne::platform::gl
