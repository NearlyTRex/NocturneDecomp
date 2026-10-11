#include "platform/sdl/sdlfile.h"

namespace nocturne::platform::sdl {

void CSdlFile::SClose::operator()(std::FILE *file) const {
    std::fclose(file);
}

CSdlFile::CSdlFile(std::FILE *file) : file_(file) {}

std::size_t CSdlFile::read(std::span<std::byte> buffer) {
    return std::fread(buffer.data(), 1, buffer.size(), file_.get());
}

bool CSdlFile::write(std::span<const std::byte> data) {
    return std::fwrite(data.data(), 1, data.size(), file_.get()) == data.size();
}

bool CSdlFile::seek(std::int64_t position) {
    return fseeko(file_.get(), static_cast<off_t>(position), SEEK_SET) == 0;
}

std::int64_t CSdlFile::tell() {
    return static_cast<std::int64_t>(ftello(file_.get()));
}

} // namespace nocturne::platform::sdl
