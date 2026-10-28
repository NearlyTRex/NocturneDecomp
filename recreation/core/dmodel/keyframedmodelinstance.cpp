#include "core/dmodel/keyframedmodelinstance.h"

#include "core/skeleton/partvisibility.h"

#include <cstddef>
#include <string>
#include <string_view>

namespace nocturne::core {

// deferred: starting with no model loaded, with getModelPtr
// nocedit 0x00478ce0
CKeyFramedModelInstance::CKeyFramedModelInstance() {
    init();
}

// nocedit 0x00478d00
void CKeyFramedModelInstance::init() {
    part_visibility_.fill(EPartVisibility::kShown);
}

// deferred: letting go of the model loaded, with getModelPtr
// nocedit 0x00478dd0
void CKeyFramedModelInstance::setModelName(std::string_view filename) {
    model_name_ = filename;
    init();
}

const std::string &CKeyFramedModelInstance::getModelName() const {
    return model_name_;
}

EPartVisibility CKeyFramedModelInstance::getPartVisibility(std::size_t part) const {
    return part_visibility_.at(part);
}

} // namespace nocturne::core
