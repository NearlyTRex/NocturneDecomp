#include "core/dmodel/keyframedmodelinstance.h"

#include "common/error/error.h"
#include "core/dmodel/keyframedmodels.h"
#include "core/skeleton/partvisibility.h"

#include <cstddef>
#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {

// nocedit 0x00478ce0
CKeyFramedModelInstance::CKeyFramedModelInstance(IKeyFramedModels &models) : models_(models) {
    init();
}

// nocedit 0x00478d00
void CKeyFramedModelInstance::init() {
    part_visibility_.fill(EPartVisibility::kShown);
}

// nocedit 0x00478d60
CKeyFramedModel &CKeyFramedModelInstance::preCache() {
    model_ptr_ = &models_.loadModel(model_name_);
    return *model_ptr_;
}

// nocedit 0x00478d80
CKeyFramedModel &CKeyFramedModelInstance::getModelPtr() {
    if (model_ptr_ == nullptr) {
        common::displayErrorAndQuit(
            std::format("Tried to do something with model {}, but modelPtr not set.  "
                        "(CKeyFramedModelInstance::preCache not called.",
                        model_name_));
    }
    return *model_ptr_;
}

// nocedit 0x00478dd0
void CKeyFramedModelInstance::setModelName(std::string_view filename) {
    model_name_ = filename;
    model_ptr_ = nullptr;
    init();
}

const std::string &CKeyFramedModelInstance::getModelName() const {
    return model_name_;
}

EPartVisibility CKeyFramedModelInstance::getPartVisibility(std::size_t part) const {
    return part_visibility_.at(part);
}

} // namespace nocturne::core
