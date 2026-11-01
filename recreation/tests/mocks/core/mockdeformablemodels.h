#pragma once

#include "core/skeleton/deformablemodels.h"

#include <gmock/gmock.h>

#include <string_view>

namespace nocturne::core {

class MockDeformableModels : public IDeformableModels {
public:
    MOCK_METHOD(CDeformableModel &, getDeformableModel, (std::string_view model_filename),
                (override));
};

} // namespace nocturne::core
