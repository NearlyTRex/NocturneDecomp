#include "common/serial/binaryreader.h"
#include "core/set/demonset.h"
#include "engine/dosio/dosio.h"

#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {

// A file that runs short leaves the rest of the table zero, where the original kept what the
// last set left there.
// deferred: rendering every camera's thumb and writing the file when there is none, with
//   renderSceneGeometry
// nocedit 0x00575b40
void CDemonSet::refreshThumbs(std::string_view filename) {
    thumbs_.assign(cameras_.size() * kThumbWidth * kThumbHeight, 0);
    const std::optional<std::string> data = owners_.dosio.readFile("data", filename);
    if (!data) {
        return;
    }
    common::CBinaryReader reader(std::as_bytes(std::span(*data)));
    for (std::uint32_t &depth : thumbs_) {
        depth = reader.read<std::uint32_t>();
    }
}

} // namespace nocturne::core
