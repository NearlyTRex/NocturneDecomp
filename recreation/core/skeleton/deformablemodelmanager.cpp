#include "core/skeleton/deformablemodelmanager.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/skeleton.h"

#include <cstddef>
#include <format>
#include <memory>
#include <string_view>

namespace nocturne::core {

// nocedit 0x00599670
CDeformableModelManager::CDeformableModelManager(const engine::CDosIo &dosio,
                                                 engine::CDemonRenderer &renderer)
    : dosio_(dosio), model_owners_{.dosio = dosio, .models = *this, .renderer = renderer} {}

CDeformableModelManager::~CDeformableModelManager() = default;

// nocedit 0x005a1cf0
CDeformableModel &CDeformableModelManager::getDeformableModel(std::string_view model_filename) {
    for (std::size_t i = 0; i < model_count_; ++i) {
        if (common::equalsIgnoringAsciiCase(models_[i]->getModelFilename(), model_filename)) {
            return *models_[i];
        }
    }
    if (model_count_ >= kMaxModels) {
        common::displayErrorAndQuit(
            std::format("Can't load {} because deformable model manager is full.  (Size is {})",
                        model_filename, kMaxModels));
    }
    if (model_count_ == models_.size()) {
        models_.push_back(std::make_unique<CDeformableModel>(model_owners_));
    }
    CDeformableModel &model = *models_[model_count_];
    ++model_count_;
    model.load(model_filename);
    model.captureTextures();
    return model;
}

// nocedit 0x005a1df0
CSkeleton &CDeformableModelManager::loadSkeleton(std::string_view filename) {
    for (std::size_t i = 0; i < skeleton_count_; ++i) {
        if (common::equalsIgnoringAsciiCase(skeletons_[i]->getLoadedFilename(), filename)) {
            return *skeletons_[i];
        }
    }
    if (skeleton_count_ >= kMaxSkeletons) {
        common::displayErrorAndQuit(
            std::format("Can't load {} because skeleton manager is full.  (Size is {})", filename,
                        kMaxSkeletons));
    }
    if (skeleton_count_ == skeletons_.size()) {
        skeletons_.push_back(std::make_unique<CSkeleton>(dosio_));
    }
    CSkeleton &skeleton = *skeletons_[skeleton_count_];
    ++skeleton_count_;
    skeleton.load(filename);
    return skeleton;
}

// nocedit 0x005a1dc0
void CDeformableModelManager::freeAllModels() {
    for (const std::unique_ptr<CDeformableModel> &model : models_) {
        model->free();
    }
    model_count_ = 0;
}

// nocedit 0x005a1ea0
void CDeformableModelManager::freeAllSkeletons() {
    freeAllModels();
    for (const std::unique_ptr<CSkeleton> &skeleton : skeletons_) {
        skeleton->free();
    }
    skeleton_count_ = 0;
}

std::size_t CDeformableModelManager::getModelCount() const {
    return model_count_;
}

std::size_t CDeformableModelManager::getSkeletonCount() const {
    return skeleton_count_;
}

} // namespace nocturne::core
