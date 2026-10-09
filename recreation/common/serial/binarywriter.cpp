#include "common/serial/binarywriter.h"

#include <algorithm>

namespace nocturne::common {

void CBinaryWriter::writeBytes(std::span<const std::byte> bytes) {
    data_.insert(data_.end(), bytes.begin(), bytes.end());
}

void CBinaryWriter::writeString(std::string_view text, std::size_t field_size) {
    if (field_size == 0) {
        return;
    }
    const std::size_t length = std::min(text.size(), field_size - 1);
    for (const char c : text.substr(0, length)) {
        data_.push_back(static_cast<std::byte>(c));
    }
    data_.insert(data_.end(), field_size - length, std::byte{0});
}

std::span<const std::byte> CBinaryWriter::getData() const {
    return data_;
}

void CBinaryWriter::encode(std::uint64_t value, std::size_t size) {
    for (std::size_t i = 0; i < size; ++i) {
        data_.push_back(static_cast<std::byte>((value >> (8U * i)) & 0xffU));
    }
}

} // namespace nocturne::common
