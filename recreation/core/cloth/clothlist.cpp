#include "core/cloth/clothlist.h"

#include "core/actor/notported.h"

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

// A list naming no cloth loads none.
// deferred: each piece loaded from its file in place of the one before, with CCloth::load
// nocedit 0x0043bfa0
void CClothList::load() {
    if (!filenames_.empty()) {
        quitNotPorted("CCloth", "load");
    }
}

// deferred: each piece set up on the model where the character stands, with CCloth::setup
// nocedit 0x0043c290
void CClothList::setup(common::CVector3f * /*position*/, common::CVector3f * /*euler*/,
                       CDeformableModelInstance * /*model_ptr*/) {}

// deferred: each piece moved on with the model, with CCloth::process
// nocedit 0x0043c2d0
void CClothList::process(common::CVector3f * /*position*/, common::CVector3f * /*euler*/,
                         float /*delta_time*/, float /*floor_y*/,
                         CDeformableModelInstance * /*model_ptr*/) {}

std::span<const std::string> CClothList::getFilenames() const {
    return filenames_;
}

void CClothList::setFilenames(std::vector<std::string> filenames) {
    filenames_ = std::move(filenames);
}

} // namespace nocturne::core
