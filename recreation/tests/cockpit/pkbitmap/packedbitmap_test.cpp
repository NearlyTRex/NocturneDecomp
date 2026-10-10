#include "cockpit/pkbitmap/packedbitmap.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::cockpit {
namespace {

TEST(CPackedBitmap, IsConcrete) {
    static_assert(!std::is_abstract_v<CPackedBitmap>);
}

TEST(CPackedBitmap, Constructors) {
    static_assert(std::is_constructible_v<CPackedBitmap>);
}

TEST(CPackedBitmap, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CPackedBitmap::freePackedData), void (CPackedBitmap::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPackedBitmap::getTotalMemoryUsage), int (CPackedBitmap::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPackedBitmap::setFilename), void (CPackedBitmap::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CPackedBitmap::getPixelValue), int (CPackedBitmap::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CPackedBitmap::renderIfIntersectsRect),
                                 void (CPackedBitmap::*)(int, int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CPackedBitmap::reloadFromBitmapFile),
                                 void (CPackedBitmap::*)(char *, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CPackedBitmap::copyRawDataToCompressedRuns),
                                 void (CPackedBitmap::*)(std::uint8_t *, int)>);
    static_assert(std::is_same_v<decltype(&CPackedBitmap::load),
                                 void (CPackedBitmap::*)(std::uint8_t *, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CPackedBitmap::applyPaletteToPackedData),
                                 void (CPackedBitmap::*)(std::uint8_t *)>);
    static_assert(
        std::is_same_v<decltype(&CPackedBitmap::applyPalette), void (CPackedBitmap::*)()>);
    static_assert(std::is_same_v<decltype(&CPackedBitmap::loadByFileExtension),
                                 void (CPackedBitmap::*)(int)>);
    static_assert(std::is_same_v<decltype(&CPackedBitmap::readPBMFile),
                                 void (CPackedBitmap::*)(std::FILE *, int)>);
    static_assert(std::is_same_v<decltype(&CPackedBitmap::openPBMFile),
                                 void (CPackedBitmap::*)(char *, int)>);
}

} // namespace
} // namespace nocturne::cockpit
