#include "core/texlist/texturelist.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/scan.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "engine/dosio/dosio.h"

#include <algorithm>
#include <cstddef>
#include <optional>
#include <string>

namespace nocturne::core {

// nocedit 0x005dbdd0
CTextureList::CTextureList(const engine::CDosIo &dosio) : dosio_(&dosio) {}

// A line the file lacks repeats the name before it, with 0, as the original read each into the
// same buffer; the first such line takes the .TEX file's own name.
// nocedit 0x005dbe00
void CTextureList::load(std::string_view filename) {
    std::string tex_filename(filename);
    const std::size_t extension = tex_filename.find('.');
    if (extension == std::string::npos) {
        common::displayErrorAndQuit("CTextureList::load - No extension found");
    }
    tex_filename.resize(extension);
    tex_filename += ".tex";
    const std::optional<std::string> text = dosio_->readFile("data", tex_filename);
    if (!text) {
        common::displayErrorAndQuit("CTextureList::load - Bad filename!");
    }
    common::CTextScanner scanner(*text);
    int texture_count = static_cast<int>(texture_entries_.size());
    common::scanFormat(scanner, "%d\n", texture_count);
    const auto count = static_cast<std::size_t>(std::max(texture_count, 0));
    texture_entries_.assign(count, {});
    texture_values_.assign(count, 0);
    std::string line = tex_filename;
    for (std::size_t i = 0; i < count; ++i) {
        common::scanFormat(scanner, "%s\n", line);
        const std::size_t comma = line.find(',');
        if (comma != std::string::npos) {
            texture_values_[i] =
                common::scanInteger(std::string_view(line).substr(comma + 1)).value_or(0);
            line.resize(comma);
        }
        texture_entries_[i].texture_name = common::toUpperAscii(line);
    }
}

std::span<const platform::SMRGLTextureBasic> CTextureList::getTextureEntries() const {
    return texture_entries_;
}

std::span<const int> CTextureList::getTextureValues() const {
    return texture_values_;
}

} // namespace nocturne::core
