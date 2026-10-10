#pragma once

#include <cstdint>
#include <optional>

namespace nocturne::common {

// The engine's render_flags bits. Bit 8 upward say where a vertex's colour and alpha come from;
// they shape vertices, not pipeline state.
inline constexpr std::uint32_t kRenderTextured = 0x001;
inline constexpr std::uint32_t kRenderBlend = 0x002;
// Gouraud rather than flat.
inline constexpr std::uint32_t kRenderSmooth = 0x004;
// The per-vertex fog factor is live.
inline constexpr std::uint32_t kRenderSolidAlpha = 0x008;
// Modulate by the current light level.
inline constexpr std::uint32_t kRenderLighting = 0x010;
// Scale the source by its own alpha.
inline constexpr std::uint32_t kRenderSourceAlpha = 0x020;
inline constexpr std::uint32_t kRenderDepthTest = 0x040;
inline constexpr std::uint32_t kRenderDepthWrite = 0x080;
inline constexpr std::uint32_t kRenderVertexAlpha = 0x100;
inline constexpr std::uint32_t kRenderVertexColor = 0x200;

enum class EBlendFactor : std::uint8_t { Zero, One, SourceAlpha, InverseSourceAlpha };
enum class EDepthFunction : std::uint8_t { Always, LessEqual };
enum class ETextureFilter : std::uint8_t { Nearest, Linear };
enum class EMipFilter : std::uint8_t { None, Linear };

// Everything the pipeline state depends on besides the flag word.
struct SRenderStateInput {
    std::uint32_t render_flags = 0;
    // 0 blends against the destination, 1 adds to it.
    int blend_mode = 0;
    // An opacity table loaded for the texture forces a textured draw to blend by source alpha.
    bool texture_opacity_present = false;
    bool premultiply = false;
    // The bridge fields the engine's quality settings drive.
    bool bilinear = false;
    bool mipmapped = false;
};

struct SPipelineState {
    bool texture_enabled = false;
    bool blend_enabled = false;
    bool alpha_test_enabled = false;
    EBlendFactor source_blend = EBlendFactor::One;
    EBlendFactor destination_blend = EBlendFactor::Zero;
    bool smooth_shading = false;
    bool fog_enabled = false;
    bool depth_test_enabled = false;
    bool depth_write_enabled = false;
    EDepthFunction depth_function = EDepthFunction::Always;
    // The texture's alpha reaches the fragment only when set; otherwise it gives colour alone.
    bool modulate_texture_alpha = false;
    ETextureFilter min_filter = ETextureFilter::Nearest;
    ETextureFilter mag_filter = ETextureFilter::Nearest;
    EMipFilter mip_filter = EMipFilter::None;

    bool operator==(const SPipelineState &) const = default;
};

// The flag word a draw renders with: an opacity table adds BLEND and SOURCE_ALPHA to a textured
// draw, and SOURCE_ALPHA then drops SOLID_ALPHA, since both want the source's alpha channel.
[[nodiscard]] std::uint32_t effectiveRenderFlags(const SRenderStateInput &input);
// The state applyRenderState sets, from the effective flags.
[[nodiscard]] SPipelineState getPipelineState(const SRenderStateInput &input);

// A light level as a 0..255 multiplier, plus what went past full brightness, which is added
// rather than lost so an over-lit surface blows out toward white.
struct SLighting {
    int alpha = 0xff;
    int overflow = 0;

    bool operator==(const SLighting &) const = default;
};

// The draw's light level from the bridge's current_lighting; full when the draw is unlit.
[[nodiscard]] SLighting getDrawLighting(std::uint32_t render_flags, int current_lighting);
// A vertex's own light level, carried in its red channel. Empty when the draw is flat, so the
// draw's level stands; full when the draw carries its own colours.
[[nodiscard]] std::optional<SLighting> getVertexLighting(std::uint32_t render_flags,
                                                         int vertex_red);

} // namespace nocturne::common
