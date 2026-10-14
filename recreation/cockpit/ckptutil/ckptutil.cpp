#include "cockpit/ckptutil/ckptutil.h"

#include "common/error/error.h"
#include "engine/dosio/dosio.h"

#include <format>
#include <optional>
#include <string>

namespace nocturne::cockpit {

// nocedit 0x00431870
std::vector<std::uint8_t> readBitmapFile(const engine::CDosIo &dosio, std::string_view filename,
                                         std::size_t size) {
    const std::optional<std::string> contents = dosio.readFile("art", filename);
    if (!contents) {
        common::displayErrorAndQuit(std::format("Unable to open bitmap file ({}).", filename));
    }
    if (contents->size() < size) {
        common::displayErrorAndQuit(std::format("Unable to read bitmap file ({}).", filename));
    }
    return {contents->begin(), contents->begin() + static_cast<std::ptrdiff_t>(size)};
}

} // namespace nocturne::cockpit
