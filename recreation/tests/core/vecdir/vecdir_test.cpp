#include "core/vecdir/vecdir.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreVecdirFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&convertDirectionVectorToEulerAngles),
                                 common::CVector3f *(*)(common::CVector3f *, common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
