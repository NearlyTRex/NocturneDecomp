#include "core/emitter/emitter_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreEmitterFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncEmitter), CEmitter *(*)()>);
}

} // namespace
} // namespace nocturne::core
