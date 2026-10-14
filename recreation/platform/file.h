#pragma once

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::platform {

// An open file, as fopen gave the game one. No newline translation: the game's text readers
// take a CRLF as a line end, as Windows text mode handed it to them.
class IFile {
public:
    virtual ~IFile() = default;

    // Bytes read: fewer than asked for at the end of the file.
    [[nodiscard]] virtual std::size_t read(std::span<std::byte> buffer) = 0;
    // False when not everything could be written.
    virtual bool write(std::span<const std::byte> data) = 0;
    // From the start of the file. False when the position can't be reached.
    virtual bool seek(std::int64_t position) = 0;
    [[nodiscard]] virtual std::int64_t tell() = 0;
};

} // namespace nocturne::platform
