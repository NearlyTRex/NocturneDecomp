#pragma once

#include "core/dmodel/keyframedmodels.h"
#include "core/fwd.h"
#include "engine/fwd.h"

#include <cstddef>
#include <memory>
#include <string_view>
#include <vector>

namespace nocturne::core {

// dmodel.cpp's shared state: the keyframed models, each loaded once, by its file's name compared
// ignoring case, with its textures captured. Freeing them forgets them, but what is held of them
// stays, emptied, to be loaded into again.
class CKeyFramedModelManager : public IKeyFramedModels {
public:
    static constexpr std::size_t kMaxModels = 256;

    CKeyFramedModelManager(const engine::CDosIo &dosio, engine::CDemonRenderer &renderer);
    ~CKeyFramedModelManager() override;
    CKeyFramedModelManager(const CKeyFramedModelManager &) = delete;
    CKeyFramedModelManager &operator=(const CKeyFramedModelManager &) = delete;
    CKeyFramedModelManager(CKeyFramedModelManager &&) = delete;
    CKeyFramedModelManager &operator=(CKeyFramedModelManager &&) = delete;

    // models\<filename>. More than kMaxModels is fatal.
    CKeyFramedModel &loadModel(std::string_view filename) override;
    void freeAllModels();

    [[nodiscard]] std::size_t getModelCount() const;

private:
    const engine::CDosIo &dosio_;
    engine::CDemonRenderer &renderer_;
    std::vector<std::unique_ptr<CKeyFramedModel>> models_;
    std::size_t model_count_ = 0;
};

} // namespace nocturne::core
