#pragma once

#include <cstdint>

namespace nocturne::sound {

class CSampleInfo {
public:
    double getSampleDuration();
    double cvtPlaybackPos(double position, std::uint32_t input_type, std::uint32_t output_type);
};

} // namespace nocturne::sound
