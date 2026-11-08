#include "engine/package/podhash.h"

#include "platform/file.h"
#include "platform/filesystem.h"

#include <array>
#include <cstddef>
#include <format>
#include <memory>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <xxhash.h>

namespace nocturne::engine {
namespace {

constexpr std::size_t kBlockSize = std::size_t{1} << 20U;

} // namespace

std::optional<std::string> hashFile(platform::IFileSystem &file_system, std::string_view path) {
    const std::unique_ptr<platform::IFile> file =
        file_system.openFile(path, platform::EFileMode::Read);
    if (file == nullptr) {
        return std::nullopt;
    }
    XXH3_state_t state;
    XXH3_128bits_reset(&state);
    auto block = std::make_unique<std::array<std::byte, kBlockSize>>();
    while (const std::size_t count = file->read(*block)) {
        XXH3_128bits_update(&state, block->data(), count);
    }
    XXH128_canonical_t canonical;
    XXH128_canonicalFromHash(&canonical, XXH3_128bits_digest(&state));
    std::string hex;
    for (const unsigned char byte : canonical.digest) {
        hex += std::format("{:02x}", byte);
    }
    return hex;
}

} // namespace nocturne::engine
