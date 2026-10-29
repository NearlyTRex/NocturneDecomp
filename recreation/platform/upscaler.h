#pragma once

#include <cstdint>

namespace nocturne::platform {

// How a frame is enlarged onto the window: Standard is the presenter's own scaling, nearest at a
// whole multiple and bilinear otherwise; the rest are one draw through a filter's program. Only
// the enlarging changes, not the letterbox. The values are frozen: the game saves them as
// [Graphics] upscaler.
enum class EUpscaler : std::uint8_t {
    Standard,
    Fsr,
    Lanczos,
    Gsr,
    Nis,
    Xbr,
};

inline constexpr int kUpscalerCount = 6;

// The sharpness the filters that sharpen take, in percent.
inline constexpr int kUpscalerSharpnessStep = 25;
inline constexpr int kUpscalerSharpnessMax = 100;
inline constexpr int kUpscalerSharpnessDefault = 50;

// FSR, GSR and NIS.
[[nodiscard]] constexpr bool getUpscalerSharpens(EUpscaler upscaler) {
    return upscaler == EUpscaler::Fsr || upscaler == EUpscaler::Gsr || upscaler == EUpscaler::Nis;
}

} // namespace nocturne::platform
