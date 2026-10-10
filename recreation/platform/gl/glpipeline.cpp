#include "platform/gl/glpipeline.h"

#include <array>
#include <cstddef>

namespace nocturne::platform::gl {
namespace {

constexpr const char *kVertexSource = R"(#version 150 core
in vec4 a_pos;
in vec4 a_color;
in vec4 a_specular;
in vec2 a_uv;
uniform mat4 u_projection;
out vec4 v_color;
out vec4 v_specular;
out vec2 v_uv;
out vec3 v_envdir;
void main() {
    gl_Position = u_projection * a_pos;
    v_color = a_color;
    v_specular = a_specular;
    v_uv = a_uv;
    // A sphere-map coordinate is a direction less its third component, u = x + 1/2 and
    // v = 1/2 - y, each spanning a whole unit. The pair is exact only at a vertex, so the
    // direction is recovered here, where it can still be interpolated whole.
    vec2 d = vec2(a_uv.x - 0.5, 0.5 - a_uv.y);
    v_envdir = vec3(d, sqrt(max(0.0, 1.0 - min(dot(d, d), 1.0))));
}
)";

// The specular's RGB is the light level's overflow past full, added after texturing; its alpha
// is the fog factor, where 1 leaves the fragment alone. The engine sets ALPHAFUNC GREATER with
// ALPHAREF 0 once and never changes either, so the alpha test is fixed.
constexpr const char *kFragmentSource = R"(#version 150 core
uniform sampler2D u_tex;
uniform int u_tex_enabled;
uniform int u_modulate_alpha;
uniform int u_alpha_test;
uniform int u_fog_enabled;
uniform vec3 u_fog_color;
uniform int u_reflection;
in vec4 v_color;
in vec4 v_specular;
in vec2 v_uv;
in vec3 v_envdir;
out vec4 o_color;
void main() {
    vec4 c = v_color;
    if (u_tex_enabled != 0) {
        vec4 t;
        if (u_reflection != 0) {
            // Renormalised per pixel, a direction turns smoothly across triangle edges where
            // an interpolated coordinate breaks; the coarser level turns a night sky's flat
            // patches into a gradient.
            vec3 n = normalize(v_envdir);
            t = texture(u_tex, vec2(n.x + 0.5, 0.5 - n.y), 2.5);
        } else {
            t = texture(u_tex, v_uv);
        }
        c.rgb *= t.rgb;
        if (u_modulate_alpha != 0) c.a *= t.a;
    }
    c.rgb += v_specular.rgb;
    if (u_alpha_test != 0 && c.a <= 0.0) discard;
    if (u_fog_enabled != 0) {
        c.rgb = mix(u_fog_color, c.rgb, clamp(v_specular.a, 0.0, 1.0));
    }
    o_color = c;
}
)";

// Indexed by EBlendFactor.
constexpr std::array<GLenum, 4> kBlendFactors = {GL_ZERO, GL_ONE, GL_SRC_ALPHA,
                                                 GL_ONE_MINUS_SRC_ALPHA};
// Indexed by EDepthFunction.
constexpr std::array<GLenum, 2> kDepthFunctions = {GL_ALWAYS, GL_LEQUAL};

GLenum toGl(common::EBlendFactor factor) {
    return kBlendFactors.at(static_cast<std::size_t>(factor));
}

void setCapability(const SGlApi &gl, GLenum capability, bool enabled) {
    if (enabled) {
        gl.Enable(capability);
    } else {
        gl.Disable(capability);
    }
}

// A blended draw that also tests depth is laid over a surface already drawn at that depth, as
// an environment map is over a textured blade. It covers a different mesh of that surface, so
// the two interpolate slightly different depths and LEQUAL alone lets the winner alternate per
// pixel; the original speckles there.
bool isOverlay(const common::SPipelineState &state) {
    return state.blend_enabled && state.depth_test_enabled;
}

} // namespace

CGlPipeline::CGlPipeline(const SGlApi &gl)
    : gl_(gl), program_(gl, kVertexSource, kFragmentSource, kVertexAttributes), stream_(gl),
      projection_location_(program_.getUniformLocation("u_projection")),
      texture_enabled_location_(program_.getUniformLocation("u_tex_enabled")),
      modulate_alpha_location_(program_.getUniformLocation("u_modulate_alpha")),
      alpha_test_location_(program_.getUniformLocation("u_alpha_test")),
      fog_enabled_location_(program_.getUniformLocation("u_fog_enabled")),
      fog_color_location_(program_.getUniformLocation("u_fog_color")),
      reflection_location_(program_.getUniformLocation("u_reflection")) {
    program_.use();
    gl_.Uniform1i(program_.getUniformLocation("u_tex"), 0);
}

void CGlPipeline::apply(const common::SPipelineState &state) {
    const bool first = !valid_;
    applyBlend(state, first);
    applyDepth(state, first);
    program_.use();
    applyUniforms(state, first);
    state_ = state;
    valid_ = true;
}

const common::SPipelineState &CGlPipeline::getState() const {
    return state_;
}

void CGlPipeline::invalidate() {
    valid_ = false;
    ++epoch_;
}

std::uint32_t CGlPipeline::getEpoch() const {
    return epoch_;
}

void CGlPipeline::enableDepthWrite() {
    gl_.DepthMask(GL_TRUE);
    state_.depth_write_enabled = true;
}

void CGlPipeline::setTargetSize(int width, int height) {
    target_width_ = width;
    target_height_ = height;
    // Column major: x right from 0, y down from 0, depth 0..1 onto clip space's -1..1.
    const GLfloat x = 2.0F / static_cast<GLfloat>(width);
    const GLfloat y = -2.0F / static_cast<GLfloat>(height);
    // clang-format off
    const std::array<GLfloat, 16> projection = {
        x,     0.0F,  0.0F, 0.0F,
        0.0F,  y,     0.0F, 0.0F,
        0.0F,  0.0F,  2.0F, 0.0F,
        -1.0F, 1.0F, -1.0F, 1.0F,
    };
    // clang-format on
    program_.use();
    gl_.UniformMatrix4fv(projection_location_, 1, GL_FALSE, projection.data());
}

void CGlPipeline::setFogColor(float red, float green, float blue) {
    program_.use();
    gl_.Uniform3f(fog_color_location_, red, green, blue);
}

void CGlPipeline::setReflection(bool reflection) {
    if (reflection == reflection_) {
        return;
    }
    reflection_ = reflection;
    program_.use();
    gl_.Uniform1i(reflection_location_, reflection ? 1 : 0);
}

void CGlPipeline::draw(std::span<const common::SScreenVertex> vertices,
                       std::span<const std::uint16_t> indices) {
    // Stated per draw: the viewport is shared with the presenter, which leaves the window's.
    gl_.Viewport(0, 0, target_width_, target_height_);
    program_.use();
    stream_.draw(vertices, indices);
}

void CGlPipeline::applyBlend(const common::SPipelineState &state, bool first) {
    if (first || state.blend_enabled != state_.blend_enabled) {
        setCapability(gl_, GL_BLEND, state.blend_enabled);
    }
    if (first || state.source_blend != state_.source_blend ||
        state.destination_blend != state_.destination_blend) {
        gl_.BlendFunc(toGl(state.source_blend), toGl(state.destination_blend));
    }
}

void CGlPipeline::applyDepth(const common::SPipelineState &state, bool first) {
    if (first || state.depth_test_enabled != state_.depth_test_enabled) {
        setCapability(gl_, GL_DEPTH_TEST, state.depth_test_enabled);
    }
    if (first || state.depth_write_enabled != state_.depth_write_enabled) {
        gl_.DepthMask(state.depth_write_enabled ? GL_TRUE : GL_FALSE);
    }
    if (first || state.depth_function != state_.depth_function) {
        gl_.DepthFunc(kDepthFunctions.at(static_cast<std::size_t>(state.depth_function)));
    }
    // A bias of one unit toward the viewer settles the overlay's tie without changing how it
    // sorts against anything genuinely in front or behind.
    const bool overlay = isOverlay(state);
    if (first || overlay != isOverlay(state_)) {
        setCapability(gl_, GL_POLYGON_OFFSET_FILL, overlay);
        gl_.PolygonOffset(-1.0F, -1.0F);
    }
}

void CGlPipeline::applyUniforms(const common::SPipelineState &state, bool first) const {
    if (first || state.texture_enabled != state_.texture_enabled) {
        gl_.Uniform1i(texture_enabled_location_, state.texture_enabled ? 1 : 0);
    }
    if (first || state.modulate_texture_alpha != state_.modulate_texture_alpha) {
        gl_.Uniform1i(modulate_alpha_location_, state.modulate_texture_alpha ? 1 : 0);
    }
    if (first || state.alpha_test_enabled != state_.alpha_test_enabled) {
        gl_.Uniform1i(alpha_test_location_, state.alpha_test_enabled ? 1 : 0);
    }
    if (first || state.fog_enabled != state_.fog_enabled) {
        gl_.Uniform1i(fog_enabled_location_, state.fog_enabled ? 1 : 0);
    }
}

} // namespace nocturne::platform::gl
