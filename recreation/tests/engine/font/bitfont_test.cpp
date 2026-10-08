#include "engine/font/bitfont.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CBitFont, IsConcrete) {
    static_assert(!std::is_abstract_v<CBitFont>);
}

TEST(CBitFont, Constructors) {
    static_assert(std::is_constructible_v<CBitFont>);
}

TEST(CBitFont, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBitFont::openFontFile),
                                 void (CBitFont::*)(char *, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::setInitializedFlag), void (CBitFont::*)()>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawText),
                                 int (CBitFont::*)(char *, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextWrapper),
                                 int (CBitFont::*)(int, int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextRight),
                                 int (CBitFont::*)(int, int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextCenter),
                                 int (CBitFont::*)(int, int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextCenterInBounds),
                                 int (CBitFont::*)(int, int, int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CBitFont::drawTextCenterInBoundsF),
                                 int (CBitFont::*)(int, int, int, int, int, char *, ...)>);
    static_assert(std::is_same_v<decltype(&CBitFont::getTextWidth), int (CBitFont::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CBitFont::getTextHeight), int (CBitFont::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CBitFont::wrapText),
                                 int (CBitFont::*)(char *, char *, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::getCharWidth), int (CBitFont::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::getCharHeight), int (CBitFont::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::getCharYOffset), int (CBitFont::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::setCharYOffsetRange),
                                 void (CBitFont::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::setFontReady), void (CBitFont::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBitFont::remapPalette), void (CBitFont::*)()>);
}

} // namespace
} // namespace nocturne::engine
