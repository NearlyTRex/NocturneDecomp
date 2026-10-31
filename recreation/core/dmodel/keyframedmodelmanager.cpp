#include "core/dmodel/keyframedmodelmanager.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "core/dmodel/keyframedmodel.h"

#include <cstddef>
#include <format>
#include <memory>
#include <string_view>

namespace nocturne::core {

// The original makes all 256 models as the program starts; here each is made when first needed.
// nocedit 0x00476c50
CKeyFramedModelManager::CKeyFramedModelManager(const engine::CDosIo &dosio,
                                               engine::CDemonRenderer &renderer)
    : dosio_(dosio), renderer_(renderer) {}

CKeyFramedModelManager::~CKeyFramedModelManager() = default;

// nocedit 0x00478c00
CKeyFramedModel &CKeyFramedModelManager::loadModel(std::string_view filename) {
    for (std::size_t i = 0; i < model_count_; ++i) {
        if (common::equalsIgnoringAsciiCase(models_[i]->getModelFilename(), filename)) {
            return *models_[i];
        }
    }
    if (model_count_ >= kMaxModels) {
        common::displayErrorAndQuit(
            std::format("Can't load {} because keyFrame model manager is full.  (Size is {})",
                        filename, kMaxModels));
    }
    if (model_count_ == models_.size()) {
        models_.push_back(std::make_unique<CKeyFramedModel>(dosio_));
    }
    CKeyFramedModel &model = *models_[model_count_];
    ++model_count_;
    model.load(filename);
    model.captureTextures(renderer_);
    return model;
}

// nocedit 0x00478cb0
void CKeyFramedModelManager::freeAllModels() {
    for (const std::unique_ptr<CKeyFramedModel> &model : models_) {
        model->free();
    }
    model_count_ = 0;
}

std::size_t CKeyFramedModelManager::getModelCount() const {
    return model_count_;
}

} // namespace nocturne::core
