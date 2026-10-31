#pragma once

#include "core/fwd.h"

#include <string_view>

namespace nocturne::core {

// Where keyframed models are found by name, each loaded once.
class IKeyFramedModels {
public:
    virtual ~IKeyFramedModels() = default;

    virtual CKeyFramedModel &loadModel(std::string_view filename) = 0;
};

} // namespace nocturne::core
