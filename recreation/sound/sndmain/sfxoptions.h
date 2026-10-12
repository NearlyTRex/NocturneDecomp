#pragma once

#include "common/fwd.h"
#include "common/math/vector3d.h"
#include "sound/sndmain/sampleinfo.h"

#include <cstdint>

namespace nocturne::sound {

// A setNextSfxFlags bit: the sound plays at its own volume wherever it is, with no doppler.
inline constexpr std::uint32_t kSfxNonPositional = 1;

// How the next sound starts, kept on a stack the callers push and pop around their settings.
// A playing sound keeps its own copy, which the setSfx calls change.
class CSfxOptions {
public:
    CSfxOptions();

    void reset();

    int channel_index = 0;
    // In feet.
    common::CVector3d position;
    // Followed while the sound plays when set; position then holds where it last was.
    const common::CVector3f *position_source_ptr = nullptr;
    // In feet a second.
    common::CVector3d velocity;
    const common::CVector3f *velocity_source_ptr = nullptr;
    float current_volume = 1.0F;
    // A multiple of the sample's own rate.
    float base_frequency = 1.0F;
    // Seconds before the sound starts; kAutoDelay works it out from the distance.
    double delay_remaining = kAutoDelay;
    std::uint32_t flags = 0;
    // The playback position and its units (the names are Ghidra's).
    double trigger_time = 0.0;
    EPlaybackPosType trigger_id = EPlaybackPosType::Samples;

    static constexpr double kAutoDelay = -1.0;
};

} // namespace nocturne::sound
