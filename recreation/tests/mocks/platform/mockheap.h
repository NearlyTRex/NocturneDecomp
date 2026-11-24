#pragma once

#include "platform/heap.h"

#include <gmock/gmock.h>

#include <string>

namespace nocturne::platform {

class MockHeap : public IHeap {
public:
    MOCK_METHOD(std::string, describe, (), (override));
};

} // namespace nocturne::platform
