#include "common/serial/binaryreader.h"

#include <algorithm>
#include <iterator>

namespace nocturne::common {

CBinaryReader::CBinaryReader(std::span<const std::byte> data) : data_(data) {}

void CBinaryReader::readBytes(std::span<std::byte> out) {
    const std::span<const std::byte> bytes = take(out.size());
    if (bytes.size() != out.size()) {
        std::ranges::fill(out, std::byte{0});
        return;
    }
    std::ranges::copy(bytes, out.begin());
}

std::string CBinaryReader::readString(std::size_t field_size) {
    const std::span<const std::byte> bytes = take(field_size);
    const auto end = std::ranges::find(bytes, std::byte{0});
    std::string text;
    std::ranges::transform(bytes.begin(), end, std::back_inserter(text),
                           [](std::byte b) { return static_cast<char>(b); });
    return text;
}

void CBinaryReader::skip(std::size_t count) {
    static_cast<void>(take(count));
}

void CBinaryReader::seek(std::size_t position) {
    if (position > data_.size()) {
        failed_ = true;
        return;
    }
    position_ = position;
}

std::size_t CBinaryReader::getPosition() const {
    return position_;
}

std::size_t CBinaryReader::getRemaining() const {
    return data_.size() - position_;
}

bool CBinaryReader::hasFailed() const {
    return failed_;
}

std::span<const std::byte> CBinaryReader::take(std::size_t count) {
    if (failed_ || count > getRemaining()) {
        failed_ = true;
        return {};
    }
    const std::span<const std::byte> bytes = data_.subspan(position_, count);
    position_ += count;
    return bytes;
}

std::uint64_t CBinaryReader::decode(std::span<const std::byte> bytes) {
    std::uint64_t value = 0;
    for (std::size_t i = 0; i < bytes.size(); ++i) {
        value |= std::to_integer<std::uint64_t>(bytes[i]) << (8U * i);
    }
    return value;
}

} // namespace nocturne::common
