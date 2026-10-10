#include "cockpit/pkbitmap/pkbitmap.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::cockpit {
namespace {

TEST(CockpitPkbitmapFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&loadPBGFile),
                       CPackedBitmap *(*)(CPackedBitmapSet *, char *, int, int, int, int)>);
}

} // namespace
} // namespace nocturne::cockpit
