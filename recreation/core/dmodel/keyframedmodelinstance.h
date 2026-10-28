#pragma once

#include "core/fwd.h"
#include "core/skeleton/partvisibility.h"

#include <array>
#include <cstddef>
#include <string>
#include <string_view>

namespace nocturne::core {

// An actor's use of a keyframed model: which model, loaded when first wanted, and which of its
// parts show.
class CKeyFramedModelInstance {
public:
    // The most parts a model can have.
    static constexpr std::size_t kMaxParts = 30;

    CKeyFramedModelInstance();

    void prepareForRendering(float animation_frame, int render_flags);
    CKeyFramedModel *preCache();
    CKeyFramedModel *getModelPtr();
    // Names the model, from the models folder, and shows every part.
    void setModelName(std::string_view filename);

    [[nodiscard]] const std::string &getModelName() const;
    [[nodiscard]] EPartVisibility getPartVisibility(std::size_t part) const;

private:
    void init();

    std::string model_name_;
    std::array<EPartVisibility, kMaxParts> part_visibility_{};
};

} // namespace nocturne::core
