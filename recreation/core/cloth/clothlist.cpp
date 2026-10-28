#include "core/cloth/clothlist.h"

#include <span>
#include <string>
#include <utility>
#include <vector>

namespace nocturne::core {

// deferred: clearing the loaded cloth, with CCloth
// nocedit 0x0043bf40
CClothList::CClothList() = default;

// deferred: freeing the loaded cloth, with reset
// nocedit 0x0043bf80
CClothList::~CClothList() = default;

std::span<const std::string> CClothList::getFilenames() const {
    return filenames_;
}

void CClothList::setFilenames(std::vector<std::string> filenames) {
    filenames_ = std::move(filenames);
}

} // namespace nocturne::core
