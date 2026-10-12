#include "common/error/error.h"
#include "common/serial/binaryreader.h"
#include "common/text/ascii.h"
#include "common/text/path.h"
#include "engine/dosio/dosio.h"
#include "sound/sndmain/sfxstream.h"
#include "sound/sndmain/sndmain.h"

#include <algorithm>
#include <format>
#include <numeric>
#include <span>
#include <string>

namespace nocturne::sound {
namespace {

constexpr std::size_t kRiffHeaderSize = 8;
constexpr std::size_t kChunkHeaderSize = 8;
constexpr std::size_t kFirstChunk = 12;
constexpr std::size_t kFmtChunkReadSize = 10;
constexpr std::uint16_t kPcmFormat = 1;

struct SChunk {
    std::string id;
    std::size_t size = 0;
};

SChunk readChunk(common::CBinaryReader &reader, std::size_t position) {
    reader.seek(position);
    SChunk chunk{.id = reader.readString(4)};
    chunk.size = reader.read<std::uint32_t>();
    return chunk;
}

bool hasExtension(std::string_view filename, std::string_view extension) {
    return common::equalsIgnoringAsciiCase(common::pathExtension(filename), extension);
}

// The original mixer's scale: 8-bit samples are unsigned about 128 and 16-bit ones signed, each
// over half its range.
std::vector<float> toFloatSamples(std::span<const std::byte> bytes, int bit_depth) {
    constexpr float kHalf8 = 128.0F;
    constexpr float kHalf16 = 32768.0F;
    std::vector<float> samples;
    if (bit_depth == 8) {
        samples.reserve(bytes.size());
        for (const std::byte byte : bytes) {
            samples.push_back(static_cast<float>(std::to_integer<int>(byte) - 128) / kHalf8);
        }
        return samples;
    }
    common::CBinaryReader reader(bytes);
    samples.reserve(bytes.size() / 2);
    while (reader.getRemaining() >= 2) {
        samples.push_back(static_cast<float>(reader.read<std::int16_t>()) / kHalf16);
    }
    return samples;
}

} // namespace

// The original's checks in its order, with its reports; a file that ends before what it reads
// fails without one.
// nocedit 0x005a3fe0
bool CSndMain::parseWavFile(std::string_view file, std::size_t &data_offset,
                            CSampleInfo &sample_info) {
    const auto invalid = [this](std::string_view reason) {
        logSoundError(std::format("WAV file is invalid: {}", reason));
        return false;
    };
    common::CBinaryReader reader(std::as_bytes(std::span(file)));
    const SChunk riff = readChunk(reader, 0);
    const std::string wave = reader.readString(4);
    if (reader.hasFailed()) {
        return false;
    }
    if (riff.id != "RIFF") {
        return invalid(R"("RIFF" ID not found at offset 00000000h)");
    }
    if (wave != "WAVE") {
        return invalid(R"("WAVE" ID not found at offset 00000008h)");
    }
    const std::size_t riff_end = riff.size + kRiffHeaderSize;
    std::size_t position = kFirstChunk;
    SChunk chunk;
    do {
        chunk = readChunk(reader, position);
        if (reader.hasFailed()) {
            return false;
        }
        position += kChunkHeaderSize + chunk.size;
        if (chunk.id == "data") {
            return invalid(R"("data" chunk preceeds "fmt" chunk)");
        }
    } while (!chunk.id.starts_with("fmt") && position <= riff_end);
    if (!chunk.id.starts_with("fmt")) {
        return invalid(R"(Required "fmt" chunk not found)");
    }
    if (chunk.size < kFmtChunkReadSize) {
        return invalid(R"(File contains invalid "fmt" chunk)");
    }
    // Ten bytes, so only the low half of the byte rate.
    const auto format_tag = reader.read<std::uint16_t>();
    const auto channels = reader.read<std::uint16_t>();
    const auto sample_rate = reader.read<std::uint32_t>();
    const auto byte_rate = reader.read<std::uint16_t>();
    if (reader.hasFailed()) {
        return false;
    }
    if (format_tag != kPcmFormat) {
        return invalid(std::format(
            R"(Invalid "fmt" chunk tag: {:04X}  (Must be 0001h = Pulse Code Modulation))",
            format_tag));
    }
    if (channels == 0 || channels > 2) {
        return invalid(std::format("Invalid number of channels: {}  (must be 1 or 2)", channels));
    }
    // Compared in 16 bits, as the original did.
    const auto frame_rate =
        static_cast<std::int16_t>(channels * static_cast<std::int16_t>(sample_rate));
    if (frame_rate == static_cast<std::int16_t>(byte_rate)) {
        sample_info.bit_depth = 8;
    } else if (static_cast<std::int16_t>(frame_rate * 2) == static_cast<std::int16_t>(byte_rate)) {
        sample_info.bit_depth = 16;
    } else {
        return invalid(std::format("Invalid bytes/sec value: {} ({:04X}h)", byte_rate, byte_rate));
    }
    do {
        chunk = readChunk(reader, position);
        if (reader.hasFailed()) {
            return false;
        }
        if (chunk.id == "data") {
            data_offset = position + kChunkHeaderSize;
            sample_info.num_channels = channels;
            sample_info.sample_count =
                static_cast<int>(chunk.size / channels / (sample_info.bit_depth / 8));
            sample_info.sample_rate = static_cast<int>(sample_rate & 0xffffU);
            return true;
        }
        position += kChunkHeaderSize + chunk.size;
    } while (position <= riff_end);
    return invalid(R"(No "data" chunk found)");
}

// The round from the last sample handed out; getSfxSample and startSfx had their own copies. A
// free slot to play in means one of the samples is free too: there are as many as slots.
// nocedit 0x005a4400
CSfxSample &CSndMain::findFreeSfxSample() {
    do {
        last_sample_access_index_ = (last_sample_access_index_ + 1) % kSampleCount;
    } while (sfx_samples_.at(last_sample_access_index_).ref_count != 0);
    return sfx_samples_.at(last_sample_access_index_);
}

// The loaded sample by that name, or one loaded into the next free place, ousting what it held.
// nocedit 0x005a4c80
CSfxSample *CSndMain::getSfxSample(std::string_view filename) {
    for (CSfxSample &loaded : sfx_samples_) {
        if (common::equalsIgnoringAsciiCase(loaded.sample_info.name, filename)) {
            return &loaded;
        }
    }
    CSfxSample &sample = findFreeSfxSample();
    sample.freeMemory();
    if (!loadSampleData(sample, filename)) {
        sample.freeMemory();
        return nullptr;
    }
    return &sample;
}

bool CSndMain::loadSampleData(CSfxSample &sample, std::string_view filename) {
    const std::optional<std::string> file = dos_io_.readFile("sound", filename);
    if (!file || file->empty()) {
        return false;
    }
    if (!hasExtension(filename, ".wav")) {
        common::displayErrorAndQuit(
            std::format("Unknown sample file format extension: {}", filename));
    }
    sample.sample_info.name = filename;
    std::size_t offset = 0;
    if (!parseWavFile(*file, offset, sample.sample_info)) {
        return false;
    }
    sample.parseConfigFile(dos_io_);
    const auto size = static_cast<std::size_t>(sample.sample_info.sample_count) *
                      static_cast<std::size_t>(sample.getBytesPerFrame());
    ensureSoundMemoryAvailable(size);
    if (file->size() < offset + size) {
        logSoundError(std::format("Error reading file data for {}", filename));
        return false;
    }
    sample.sample_data = toFloatSamples(std::as_bytes(std::span(*file)).subspan(offset, size),
                                        sample.sample_info.bit_depth);
    return true;
}

// The original read these through a ring buffer it refilled as the voice played.
CSfxSample *CSndMain::openStreamingSample(std::string_view filename, std::size_t slot) {
    CSfxSample &sample = findFreeSfxSample();
    sample.freeMemory();
    std::optional<std::string> file = dos_io_.readFile("sound", filename);
    if (!file || file->empty()) {
        return nullptr;
    }
    const bool mp3 = hasExtension(filename, ".mp3");
    CSampleInfo &info = sample.sample_info;
    std::size_t offset = 0;
    if (!mp3 && !parseWavFile(*file, offset, info)) {
        return nullptr;
    }
    auto stream = std::make_unique<CSfxStream>(std::move(*file));
    if (!stream->isOpen()) {
        return nullptr;
    }
    if (mp3) {
        info.bit_depth = 16;
        info.num_channels = stream->getChannelCount();
        info.sample_rate = stream->getSampleRate();
        info.sample_count = -1;
    }
    info.name = filename;
    sample.parseConfigFile(dos_io_);
    sample.streaming_slot_index = static_cast<int>(slot);
    sample.stream = std::move(stream);
    return &sample;
}

// An MP3's length is whatever its .sfx file says.
// nocedit 0x005aa3f0
std::optional<CSampleInfo> CSndMain::getSampleInfo(std::string_view sample_name) {
    for (const CSfxSample &loaded : sfx_samples_) {
        if (loaded.sample_info.sample_count > 0 &&
            common::equalsIgnoringAsciiCase(loaded.sample_info.name, sample_name)) {
            return loaded.sample_info;
        }
    }
    std::optional<std::string> file = dos_io_.readFile("sound", sample_name);
    if (!file || file->empty()) {
        return std::nullopt;
    }
    CSfxSample probe;
    CSampleInfo &info = probe.sample_info;
    if (hasExtension(sample_name, ".wav")) {
        std::size_t offset = 0;
        if (!parseWavFile(*file, offset, info)) {
            return std::nullopt;
        }
    } else if (hasExtension(sample_name, ".mp3")) {
        const CSfxStream stream(std::move(*file));
        if (!stream.isOpen()) {
            return std::nullopt;
        }
        info.bit_depth = 16;
        info.num_channels = stream.getChannelCount();
        info.sample_rate = stream.getSampleRate();
        info.sample_count = -1;
    } else {
        common::displayErrorAndQuit(
            std::format("Unknown sample file format extension: {}", sample_name));
    }
    info.name = sample_name;
    probe.parseConfigFile(dos_io_);
    if (info.sample_count < 1) {
        common::displayErrorAndQuit(
            std::format("getSampleInfo - can't determine length for {}", sample_name));
    }
    return info;
}

// nocedit 0x005aa660
void CSndMain::freeAllSamples() {
    killAllSfx();
    for (CSfxSample &sample : sfx_samples_) {
        sample.freeMemory();
    }
}

// nocedit 0x005aa6a0
SSoundMemoryStats CSndMain::getSoundMemoryStats() const {
    SSoundMemoryStats stats;
    for (const CSfxSample &sample : sfx_samples_) {
        if (sample.getMemorySize() == 0) {
            continue;
        }
        if (sample.ref_count == 0) {
            ++stats.unreferenced_count;
            stats.total_bytes_unreferenced += sample.getMemorySize();
        } else {
            ++stats.referenced_count;
            stats.total_bytes_referenced += sample.getMemorySize();
        }
    }
    stats.free_slots =
        static_cast<int>(kSampleCount) - stats.referenced_count - stats.unreferenced_count;
    const std::size_t used = stats.total_bytes_referenced + stats.total_bytes_unreferenced;
    stats.available_memory =
        used < maximum_sound_memory_budget_ ? maximum_sound_memory_budget_ - used : 0;
    return stats;
}

// nocedit 0x005a4450
bool CSndMain::ensureSoundMemoryAvailable(std::size_t requested_bytes) {
    std::size_t used = std::accumulate(
        sfx_samples_.begin(), sfx_samples_.end(), std::size_t{0},
        [](std::size_t total, const CSfxSample &sample) { return total + sample.getMemorySize(); });
    while (used + requested_bytes > maximum_sound_memory_budget_) {
        CSfxSample *evicted = nullptr;
        for (std::size_t tried = 1; tried <= kSampleCount && evicted == nullptr; ++tried) {
            CSfxSample &sample =
                sfx_samples_.at((last_sample_access_index_ + tried) % kSampleCount);
            if (sample.getMemorySize() > 0 && sample.ref_count == 0) {
                evicted = &sample;
            }
        }
        if (evicted == nullptr) {
            return false;
        }
        used -= evicted->getMemorySize();
        evicted->freeMemory();
    }
    return true;
}

} // namespace nocturne::sound
