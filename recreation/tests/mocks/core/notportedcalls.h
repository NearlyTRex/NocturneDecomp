#pragma once

#include "common/error/fatalerror.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <functional>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {

// Calls to a class's functions, each named, that are not ported yet.
using NotPortedCalls = std::vector<std::pair<std::string_view, std::function<void()>>>;

// Each call quits, naming the class's function.
inline void expectEachQuitsNotPorted(std::string_view class_name, const NotPortedCalls &calls) {
    for (const auto &[name, call] : calls) {
        EXPECT_THAT(call, ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(
                              std::format("{}::{} is not ported yet", class_name, name))));
    }
}

} // namespace nocturne::core
