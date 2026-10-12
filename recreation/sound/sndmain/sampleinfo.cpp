#include "sound/sndmain/sampleinfo.h"

#include "common/error/error.h"

#include <format>

namespace nocturne::sound {

// nocedit 0x005a84d0
double CSampleInfo::getSampleDuration() const {
    if (sample_rate <= 0) {
        return 0.0;
    }
    return static_cast<double>(sample_count) / sample_rate;
}

// nocedit 0x005a8580
double CSampleInfo::cvtPlaybackPos(double position, EPlaybackPosType input_type,
                                   EPlaybackPosType output_type) const {
    if (input_type == output_type) {
        return position;
    }
    if (input_type == EPlaybackPosType::Seconds) {
        position *= sample_rate;
    } else if (input_type == EPlaybackPosType::Relative) {
        position *= getKnownLength();
    }
    if (output_type == EPlaybackPosType::Seconds) {
        return position / sample_rate;
    }
    if (output_type == EPlaybackPosType::Relative) {
        return position / getKnownLength();
    }
    return position;
}

double CSampleInfo::getKnownLength() const {
    if (sample_count < 1) {
        common::displayErrorAndQuit(
            std::format("SampleInfo::cvtPlaybackPos - can't use relative sample position when "
                        "length of {} is not known.",
                        name));
    }
    return sample_count;
}

} // namespace nocturne::sound
