#pragma once

#include "core/fwd.h"

#include <string_view>

namespace nocturne::core {

// Where a model instance finds the deformable model it names.
class IDeformableModels {
public:
    virtual ~IDeformableModels() = default;

    // models\<model_filename>, loaded with its skeleton and textures the first time.
    virtual CDeformableModel &getDeformableModel(std::string_view model_filename) = 0;
};

} // namespace nocturne::core
