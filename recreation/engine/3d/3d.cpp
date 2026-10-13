#include "engine/3d/3d.h"

#include <algorithm>

namespace nocturne::engine {
namespace {

constexpr std::uint32_t kWhite = 0xffffff;

} // namespace

// nocedit 0x00406d80
int C3d::setRenderAlpha(int alpha_color_value) {
    current_alpha_value_ = std::clamp(alpha_color_value >> 8, 0, kOpaqueAlpha);
    const auto level = static_cast<std::uint32_t>(current_alpha_value_);
    current_render_color_ = level | (level << 8U) | (level << 16U);
    return static_cast<int>(current_render_color_ ^ kWhite);
}

// nocedit 0x00406dd0
void C3d::setBlendMode(int blend_mode) {
    blend_mode_ = blend_mode;
}

int C3d::getBlendMode() const {
    return blend_mode_;
}

int C3d::getCurrentAlphaValue() const {
    return current_alpha_value_;
}

std::uint32_t C3d::getCurrentRenderColor() const {
    return current_render_color_;
}

} // namespace nocturne::engine
