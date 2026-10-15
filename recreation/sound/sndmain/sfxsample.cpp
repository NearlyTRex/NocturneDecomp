#include "sound/sndmain/sfxsample.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/path.h"
#include "common/text/scan.h"
#include "engine/dosio/dosio.h"
#include "sound/sndmain/sfxstream.h"

#include <algorithm>
#include <cmath>
#include <format>
#include <optional>
#include <string>

namespace nocturne::sound {
namespace {

// What sscanf(line, "<key> =%f") reads past: the key, any whitespace, then '='.
std::optional<std::string_view> findValue(std::string_view line, std::string_view key) {
    if (!line.starts_with(key)) {
        return std::nullopt;
    }
    line.remove_prefix(key.size());
    line.remove_prefix(std::min(line.find_first_not_of(common::kWhitespace), line.size()));
    if (!line.starts_with('=')) {
        return std::nullopt;
    }
    return line.substr(1);
}

std::optional<float> scanFloatValue(std::string_view line, std::string_view key) {
    const std::optional<std::string_view> value = findValue(line, key);
    return value ? common::scanFloat(*value) : std::nullopt;
}

std::optional<int> scanIntegerValue(std::string_view line, std::string_view key) {
    const std::optional<std::string_view> value = findValue(line, key);
    return value ? common::scanInteger(*value) : std::nullopt;
}

// A .sfx line without its "//" comment and the whitespace around what is left. Nothing called
// it; parseConfigFile had its own copy.
// nocedit 0x005a4530
std::string_view trimLineAndRemoveComments(std::string_view line) {
    line = line.substr(0, line.find("//"));
    const std::size_t start = line.find_first_not_of(common::kWhitespace);
    if (start == std::string_view::npos) {
        return {};
    }
    return line.substr(start, line.find_last_not_of(common::kWhitespace) - start + 1);
}

// Reads one .sfx file into its sample, remembering which line set what, so that a setting given
// twice is fatal.
class CConfigParser {
public:
    CConfigParser(CSfxSample &sample, std::string_view filename)
        : sample_(sample), info_(sample.sample_info), filename_(filename) {}

    void parseLine(std::string_view text, int line_number) {
        line_ = line_number;
        if (const std::optional<float> value = scanFloatValue(text, "refDist")) {
            readReferenceDistance(*value);
        } else if (const std::optional<float> minimum = scanFloatValue(text, "minDist")) {
            readMinimumDistance(*minimum);
        } else if (const std::optional<float> maximum = scanFloatValue(text, "maxDist")) {
            info_.max_distance = *maximum;
        } else if (const std::optional<float> volume = scanFloatValue(text, "maxVol")) {
            readMaximumVolume(*volume);
        } else if (const std::optional<int> length = scanIntegerValue(text, "length")) {
            readLength(*length);
        } else if (common::equalsIgnoringAsciiCase(text, "loop")) {
            sample_.loop_marker_count = true;
        } else {
            fail(std::format("Error parsing {} line {}: {}", filename_, line_, text));
        }
    }

private:
    static constexpr float kMinimumDistance = 0.1F;
    static constexpr float kMinimumVolume = 0.001F;

    void readReferenceDistance(float distance) {
        if (reference_line_ != 0) {
            fail(std::format("Reference distance specified in {} on line {}, then again on line {}",
                             filename_, reference_line_, line_));
        }
        reference_line_ = line_;
        info_.reference_distance = distance;
        if (distance < kMinimumDistance) {
            failTooSmall(distance);
        }
        if (minimum_line_ == 0) {
            info_.reference_volume_distance = distance / 4.0F;
        }
    }

    void readMinimumDistance(float distance) {
        claimMinimum();
        info_.reference_volume_distance = distance;
        if (distance < kMinimumDistance) {
            failTooSmall(distance);
        }
    }

    // The loudest the sound gets, as a multiple of its volume at the reference distance.
    void readMaximumVolume(float volume) {
        if (reference_line_ == 0) {
            fail(std::format(
                "{} specified maxVol on line {} without first specifying reference distance",
                filename_, line_));
        }
        claimMinimum();
        if (volume < kMinimumVolume) {
            fail(std::format("maxVol {:g} is too small in {} line {}!", volume, filename_, line_));
        }
        info_.reference_volume_distance = info_.reference_distance / volume;
    }

    void readLength(int length) {
        if (info_.sample_count >= 0) {
            fail(std::format("Length for {} already known, then specified again in {} line {}",
                             info_.name, filename_, line_));
        }
        if (length < 1) {
            fail(std::format("Invalid length {} in {} line {}", length, filename_, line_));
        }
        info_.sample_count = length;
    }

    void claimMinimum() {
        if (minimum_line_ != 0) {
            fail(std::format("Minimum distance specified in {} on line {}, then again on line {}",
                             filename_, minimum_line_, line_));
        }
        minimum_line_ = line_;
    }

    void failTooSmall(float distance) const {
        fail(std::format("Reference volume distance {:g} is too small in {} line {}!", distance,
                         filename_, line_));
    }

    [[noreturn]] static void fail(std::string_view message) {
        common::displayErrorAndQuit(message);
    }

    CSfxSample &sample_;
    CSampleInfo &info_;
    std::string_view filename_;
    int line_ = 0;
    int reference_line_ = 0;
    int minimum_line_ = 0;
};

} // namespace

// init's defaults are the member initialisers.
// nocedit 0x005a60f0
// nocedit 0x005a8480
CSfxSample::CSfxSample() = default;

// The original's freeMemory is the members' own destructors.
// nocedit 0x005a6150
CSfxSample::~CSfxSample() = default;

// nocedit 0x005a62c0
void CSfxSample::freeMemory() {
    if (ref_count != 0) {
        common::displayErrorAndQuit("SfxSample::freeMemory - freeing sample in use!");
    }
    freeSampleData();
    stream.reset();
    streaming_slot_index = -1;
    sample_info.name.clear();
}

// nocedit 0x005a6400
void CSfxSample::freeSampleData() {
    sample_data = {};
}

// Retail's: a .klp file or a "loop" line makes the whole sample repeat. The editor's loop markers
// aren't in the shipped game.
// nocedit 0x005a45c0
void CSfxSample::parseConfigFile(const engine::CDosIo &dos_io) {
    const CSampleInfo defaults;
    sample_info.reference_distance = defaults.reference_distance;
    sample_info.reference_volume_distance = defaults.reference_volume_distance;
    sample_info.max_distance = defaults.max_distance;
    loop_marker_count = false;
    const std::string stem(common::pathStem(sample_info.name));
    if (dos_io.getFileSize("sound", stem + ".klp") > 0) {
        loop_marker_count = true;
    }
    const std::string filename = stem + ".sfx";
    const std::optional<std::string> text = dos_io.readFile("sound", filename);
    if (!text) {
        return;
    }
    CConfigParser parser(*this, filename);
    std::string_view rest = *text;
    for (int line_number = 1; !rest.empty(); ++line_number) {
        const std::size_t end = std::min(rest.find('\n'), rest.size());
        const std::string_view line = trimLineAndRemoveComments(rest.substr(0, end));
        rest.remove_prefix(std::min(end + 1, rest.size()));
        if (!line.empty()) {
            parser.parseLine(line, line_number);
        }
    }
}

// nocedit 0x005a8550
int CSfxSample::getBytesPerFrame() const {
    return sample_info.bit_depth * sample_info.num_channels / 8;
}

// nocedit 0x005a86f0
double CSfxSample::normalizePlaybackPos(double position, EPlaybackPosType input_type) const {
    double relative = sample_info.cvtPlaybackPos(position, input_type, EPlaybackPosType::Relative);
    relative = loop_marker_count ? relative - std::floor(relative) : std::clamp(relative, 0.0, 1.0);
    return sample_info.cvtPlaybackPos(relative, EPlaybackPosType::Relative, input_type);
}

std::size_t CSfxSample::getMemorySize() const {
    if (stream != nullptr) {
        return getStreamBufferSize();
    }
    return sample_data.size() * static_cast<std::size_t>(sample_info.bit_depth / 8);
}

std::size_t CSfxSample::getStreamBufferSize() const {
    return static_cast<std::size_t>(getBytesPerFrame()) *
           static_cast<std::size_t>(sample_info.sample_rate) * kStreamBufferSeconds;
}

} // namespace nocturne::sound
