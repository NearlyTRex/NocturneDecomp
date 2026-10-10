#include "core/dmodel/dmodel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreDmodelFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&loadModel), CKeyFramedModel *(*)(char *)>);
    static_assert(std::is_same_v<decltype(&freeAllModels), void (*)()>);
}

} // namespace
} // namespace nocturne::core
