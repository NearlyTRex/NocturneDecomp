#pragma once

#include "common/render/renderstate.h"
#include "platform/gl/glapi.h"
#include "platform/gl/glprogram.h"
#include "platform/gl/glvertexstream.h"

#include <cstdint>
#include <span>

namespace nocturne::platform::gl {

// The renderer's draw program and the pipeline state it last set, so a run of draws sharing a
// state costs nothing to repeat.
class CGlPipeline {
public:
    explicit CGlPipeline(const SGlApi &gl);

    void apply(const common::SPipelineState &state);
    // The state last applied; the defaults before the first.
    [[nodiscard]] const common::SPipelineState &getState() const;
    // After anything else has drawn with GL: the next apply states everything again, and the
    // epoch tells callers keeping their own record of the pipeline that it is stale too.
    void invalidate();
    [[nodiscard]] std::uint32_t getEpoch() const;
    // A depth clear needs writes on; going through here keeps the record true, so the next
    // draw that wants them off still turns them off.
    void enableDepthWrite();

    // Draws arrive in pixels, y down, with depth already 0..1.
    void setTargetSize(int width, int height);
    // 0..1 per channel.
    void setFogColor(float red, float green, float blue);
    // Draws inside a reflection pass carry sphere-map coordinates, which the shader turns back
    // into directions; only the pass emitting them knows what they are.
    void setReflection(bool reflection);

    void draw(std::span<const common::SScreenVertex> vertices,
              std::span<const std::uint16_t> indices);

private:
    void applyBlend(const common::SPipelineState &state, bool first);
    void applyDepth(const common::SPipelineState &state, bool first);
    void applyUniforms(const common::SPipelineState &state, bool first) const;

    const SGlApi &gl_;
    CGlProgram program_;
    CGlVertexStream stream_;
    GLint projection_location_;
    GLint texture_enabled_location_;
    GLint modulate_alpha_location_;
    GLint alpha_test_location_;
    GLint fog_enabled_location_;
    GLint fog_color_location_;
    GLint reflection_location_;
    common::SPipelineState state_;
    bool valid_ = false;
    bool reflection_ = false;
    std::uint32_t epoch_ = 0;
    int target_width_ = 0;
    int target_height_ = 0;
};

} // namespace nocturne::platform::gl
