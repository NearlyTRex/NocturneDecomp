#include "core/skeleton/deformablemodelinstance.h"

#include "core/skeleton/partvisibility.h"

#include <cstddef>
#include <string>
#include <string_view>

namespace nocturne::core {

// deferred: the transformed vertices, and the defaults the constructor gives the model, skinning,
//   root motion and scale fields, with the steps that read them
// nocedit 0x0059ddc0
CDeformableModelInstance::CDeformableModelInstance() = default;

// deferred: freeing what the model loaded, with free
// nocedit 0x0059de40
CDeformableModelInstance::~CDeformableModelInstance() = default;

// nocedit 0x005a0410
void CDeformableModelInstance::showAllParts() {
    part_visibility_.fill(EPartVisibility::kShown);
}

// nocedit 0x005a0430
void CDeformableModelInstance::clearAllTextureSetIndices() {
    part_texture_sets_.fill(kFirstTextureSet);
}

// deferred: forgetting the loaded model and the level of detail last skinned, with getModelPtr
//   and skinVerticesForLOD
// nocedit 0x005a0840
void CDeformableModelInstance::init(std::string_view model_name) {
    model_name_ = model_name;
    showAllParts();
    clearAllTextureSetIndices();
}

const std::string &CDeformableModelInstance::getModelName() const {
    return model_name_;
}

EPartVisibility CDeformableModelInstance::getPartVisibility(std::size_t part) const {
    return part_visibility_.at(part);
}

void CDeformableModelInstance::setPartVisibility(std::size_t part, EPartVisibility visibility) {
    part_visibility_.at(part) = visibility;
}

int CDeformableModelInstance::getPartTextureSet(std::size_t part) const {
    return part_texture_sets_.at(part);
}

void CDeformableModelInstance::setPartTextureSet(std::size_t part, int texture_set) {
    part_texture_sets_.at(part) = texture_set;
}

} // namespace nocturne::core
