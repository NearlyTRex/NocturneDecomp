#pragma once

#include "platform/file.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::platform {

// A file held in memory, for the tests of what reads and writes files.
class CMemoryFile : public IFile {
public:
    explicit CMemoryFile(std::string_view contents = {}) {
        const std::span<const std::byte> bytes = std::as_bytes(std::span(contents));
        bytes_.assign(bytes.begin(), bytes.end());
    }

    std::size_t read(std::span<std::byte> buffer) override {
        const std::size_t count =
            std::min(buffer.size(), bytes_.size() - std::min(bytes_.size(), position_));
        std::copy_n(bytes_.begin() + static_cast<std::ptrdiff_t>(position_), count, buffer.begin());
        position_ += count;
        return count;
    }

    bool write(std::span<const std::byte> data) override {
        if (bytes_.size() < position_ + data.size()) {
            bytes_.resize(position_ + data.size());
        }
        std::ranges::copy(data, bytes_.begin() + static_cast<std::ptrdiff_t>(position_));
        position_ += data.size();
        return true;
    }

    bool seek(std::int64_t position) override {
        if (position < 0) {
            return false;
        }
        position_ = static_cast<std::size_t>(position);
        return true;
    }

    std::int64_t tell() override {
        return static_cast<std::int64_t>(position_);
    }

    [[nodiscard]] std::string contents() const {
        std::string text(bytes_.size(), '\0');
        std::ranges::transform(bytes_, text.begin(),
                               [](std::byte b) { return static_cast<char>(b); });
        return text;
    }

private:
    std::vector<std::byte> bytes_;
    std::size_t position_ = 0;
};

} // namespace nocturne::platform
