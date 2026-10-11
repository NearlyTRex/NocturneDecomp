#pragma once

#include "platform/file.h"

#include <cstdio>
#include <memory>

namespace nocturne::platform::sdl {

// A C stdio stream, opened binary.
class CSdlFile final : public IFile {
public:
    explicit CSdlFile(std::FILE *file);

    [[nodiscard]] std::size_t read(std::span<std::byte> buffer) override;
    bool write(std::span<const std::byte> data) override;
    bool seek(std::int64_t position) override;
    [[nodiscard]] std::int64_t tell() override;

private:
    struct SClose {
        void operator()(std::FILE *file) const;
    };
    std::unique_ptr<std::FILE, SClose> file_;
};

} // namespace nocturne::platform::sdl
