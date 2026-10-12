#pragma once

#include "common/serial/binarywriter.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::sound {

// The pieces of a RIFF WAVE file, each overridable so a test can break one.
struct SWavLayout {
    std::string riff = "RIFF";
    std::string wave = "WAVE";
    std::uint16_t format_tag = 1;
    std::uint16_t channels = 1;
    std::uint32_t sample_rate = 22050;
    std::uint16_t bits = 16;
    // Zero works it out from the rest.
    std::uint32_t byte_rate = 0;
    // Chunks placed before and after "fmt ", with two bytes of body each.
    std::string leading_chunk;
    std::string trailing_chunk;
    // What the RIFF header says the rest holds; zero works it out.
    std::uint32_t riff_size = 0;
    bool has_fmt = true;
    bool has_data = true;
    // Data bytes the header claims beyond those actually present.
    std::uint32_t missing_data = 0;
};

inline std::string makeWav(std::span<const std::byte> data, const SWavLayout &layout = {}) {
    common::CBinaryWriter body;
    const auto chunk = [&body](std::string_view id, std::uint32_t size) {
        body.writeBytes(std::as_bytes(std::span(id)));
        body.write(size);
    };
    const auto filler = [&chunk, &body](std::string_view id) {
        if (!id.empty()) {
            chunk(id, 2);
            body.write(std::uint16_t{0});
        }
    };
    filler(layout.leading_chunk);
    if (layout.has_fmt) {
        chunk("fmt ", 16);
        body.write(layout.format_tag);
        body.write(layout.channels);
        body.write(layout.sample_rate);
        const std::uint32_t block = layout.channels * (layout.bits / 8U);
        body.write(layout.byte_rate != 0 ? layout.byte_rate : layout.sample_rate * block);
        body.write(static_cast<std::uint16_t>(block));
        body.write(layout.bits);
    }
    filler(layout.trailing_chunk);
    if (layout.has_data) {
        chunk("data", static_cast<std::uint32_t>(data.size()) + layout.missing_data);
        body.writeBytes(data);
    }
    common::CBinaryWriter file;
    file.writeBytes(std::as_bytes(std::span(std::string_view(layout.riff))));
    file.write(layout.riff_size != 0 ? layout.riff_size
                                     : static_cast<std::uint32_t>(body.getData().size() + 4));
    file.writeBytes(std::as_bytes(std::span(std::string_view(layout.wave))));
    file.writeBytes(body.getData());
    const std::span<const std::byte> bytes = file.getData();
    std::string text(bytes.size(), '\0');
    std::ranges::transform(bytes, text.begin(), [](std::byte b) { return static_cast<char>(b); });
    return text;
}

// 16-bit samples, interleaved when there are two channels.
inline std::string makeWav16(std::span<const std::int16_t> samples, SWavLayout layout = {}) {
    layout.bits = 16;
    return makeWav(std::as_bytes(samples), layout);
}

// count frames of a constant 16-bit value.
inline std::string makeConstantWav(std::size_t frame_count, std::int16_t value,
                                   SWavLayout layout = {}) {
    const std::vector<std::int16_t> samples(frame_count * layout.channels, value);
    return makeWav16(samples, layout);
}

} // namespace nocturne::sound
