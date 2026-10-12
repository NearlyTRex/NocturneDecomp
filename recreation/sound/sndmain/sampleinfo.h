#pragma once

#include "sound/fwd.h"

#include <cstdint>
#include <string>

namespace nocturne::sound {

// The units a playback position is given in; the values are the ones callers passed.
enum class EPlaybackPosType : std::uint8_t {
    Samples,
    Seconds,
    // A fraction of the sample's length.
    Relative,
};

// A sound file's format and how far it carries, in feet.
class CSampleInfo {
public:
    // The name the game asked for it by, matched without regard to case.
    std::string name;
    int bit_depth = 0;
    int num_channels = 0;
    int sample_rate = 0;
    // In frames; -1 until a streamed sample's .sfx file gives it.
    int sample_count = 0;
    // The sound plays at its own volume this far away.
    float reference_distance = 20.0F;
    // Nearer than this it gets no louder.
    float reference_volume_distance = 5.0F;
    // Further than this it gets no quieter.
    float max_distance = 10000.0F;

    [[nodiscard]] double getSampleDuration() const;
    // A relative position needs the length; asking for one without it is fatal.
    [[nodiscard]] double cvtPlaybackPos(double position, EPlaybackPosType input_type,
                                        EPlaybackPosType output_type) const;

private:
    [[nodiscard]] double getKnownLength() const;
};

} // namespace nocturne::sound
