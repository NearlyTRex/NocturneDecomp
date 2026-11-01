#include "core/cloth/clothlist.h"

#include "common/math/vector3f.h"
#include "core/cloth/cloth.h"

#include <memory>
#include <span>
#include <string>
#include <utility>
#include <vector>

namespace nocturne::core {

// nocedit 0x0043bf40
CClothList::CClothList(const engine::CDosIo &dosio, IKeyFramedModels &models)
    : dosio_(dosio), models_(models) {}

// nocedit 0x0043bf80
CClothList::~CClothList() = default;

// The original allowed ten pieces; any number are loaded here.
// nocedit 0x0043bfa0
void CClothList::load() {
    cloths_.clear();
    for (const std::string &filename : filenames_) {
        cloths_.push_back(std::make_unique<CCloth>(dosio_, models_));
        cloths_.back()->load(filename);
    }
}

// nocedit 0x0043c290
void CClothList::setup(const common::CVector3f &position, const common::CVector3f &euler,
                       CDeformableModelInstance *model_ptr) {
    for (const std::unique_ptr<CCloth> &cloth : cloths_) {
        cloth->setup(position, euler, model_ptr);
    }
}

// nocedit 0x0043c2d0
void CClothList::process(const common::CVector3f &position, const common::CVector3f &euler,
                         float delta_time, float floor_y, CDeformableModelInstance *model_ptr,
                         const common::CVector3f &wind) {
    for (const std::unique_ptr<CCloth> &cloth : cloths_) {
        cloth->process(position, euler, delta_time, floor_y, model_ptr, wind);
    }
}

std::span<const std::string> CClothList::getFilenames() const {
    return filenames_;
}

void CClothList::setFilenames(std::vector<std::string> filenames) {
    filenames_ = std::move(filenames);
}

std::span<const std::unique_ptr<CCloth>> CClothList::getCloths() const {
    return cloths_;
}

} // namespace nocturne::core
