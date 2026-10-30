#pragma once

#include "core/fwd.h"
#include "core/skeleton/deformablemodel.h"
#include "engine/fwd.h"

#include <cstddef>
#include <memory>
#include <string_view>
#include <vector>

namespace nocturne::core {

// skeleton.cpp's shared state: the deformable models and the skeletons they are skinned to, each
// loaded once, by its file's name compared ignoring case. Freeing them forgets them, but what is
// held of them stays, emptied, to be loaded into again.
class CDeformableModelManager {
public:
    static constexpr std::size_t kMaxModels = 64;
    static constexpr std::size_t kMaxSkeletons = 40;

    CDeformableModelManager(const engine::CDosIo &dosio, engine::CDemonRenderer &renderer);
    ~CDeformableModelManager();
    CDeformableModelManager(const CDeformableModelManager &) = delete;
    CDeformableModelManager &operator=(const CDeformableModelManager &) = delete;
    CDeformableModelManager(CDeformableModelManager &&) = delete;
    CDeformableModelManager &operator=(CDeformableModelManager &&) = delete;

    // models\<model_filename>, loaded with its skeleton and textures the first time. More than
    // kMaxModels is fatal.
    CDeformableModel &getDeformableModel(std::string_view model_filename);
    // data\<filename>. More than kMaxSkeletons is fatal.
    CSkeleton &loadSkeleton(std::string_view filename);
    void freeAllModels();
    // The models with them.
    void freeAllSkeletons();
    void getMemoryStats(char *output_buffer);

    [[nodiscard]] std::size_t getModelCount() const;
    [[nodiscard]] std::size_t getSkeletonCount() const;

private:
    const engine::CDosIo &dosio_;
    SDeformableModelOwners model_owners_;
    std::vector<std::unique_ptr<CDeformableModel>> models_;
    std::size_t model_count_ = 0;
    std::vector<std::unique_ptr<CSkeleton>> skeletons_;
    std::size_t skeleton_count_ = 0;
};

} // namespace nocturne::core
