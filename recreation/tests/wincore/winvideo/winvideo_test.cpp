#include "wincore/winvideo/winvideo.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::wincore {
namespace {

TEST(WincoreWinvideoFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&playMovie), int (*)(char *, char *)>);
}

} // namespace
} // namespace nocturne::wincore
