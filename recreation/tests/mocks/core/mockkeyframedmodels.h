#pragma once

#include "core/dmodel/keyframedmodels.h"

#include <gmock/gmock.h>

#include <string_view>

namespace nocturne::core {

class MockKeyFramedModels : public IKeyFramedModels {
public:
    MOCK_METHOD(CKeyFramedModel &, loadModel, (std::string_view filename), (override));
    MOCK_METHOD(void, loadOwnedModel, (CKeyFramedModel & model, std::string_view filename),
                (override));
};

} // namespace nocturne::core
