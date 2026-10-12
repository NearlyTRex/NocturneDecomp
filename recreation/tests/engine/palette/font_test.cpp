#include "engine/palette/font.h"

#include <gtest/gtest.h>

#include <memory>
#include <string_view>
#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CFont, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFont>);
}

TEST(CFont, IsAbstract) {
    static_assert(std::is_abstract_v<CFont>);
}

TEST(CFont, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFont::drawText),
                                 int (CFont::*)(std::string_view, int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CFont::getStringWidth), int (CFont::*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&CFont::getStringHeight), int (CFont::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CFont::getLineSpacing), int (CFont::*)()>);
}

// Only the slots CFont leaves pure; getLineSpacing is the base's.
class CTestFont : public CFont {
public:
    int drawText(std::string_view /*text_string*/, int /*x*/, int /*y*/, int /*foreground_color*/,
                 int /*background_color*/) override {
        return 0;
    }
    int getStringWidth(std::string_view /*text_string*/) override {
        return 0;
    }
    int getStringHeight(std::string_view /*text_string*/) override {
        return 0;
    }
};

// The base slot is xor eax,eax; ret.
TEST(CFont, BaseLineSpacingIsZero) {
    CTestFont font;
    CFont &base = font;
    EXPECT_EQ(base.getLineSpacing(), 0);
}

TEST(CFont, DestroysThroughTheBase) {
    const std::unique_ptr<CFont> font = std::make_unique<CTestFont>();
    EXPECT_EQ(font->getLineSpacing(), 0);
}

} // namespace
} // namespace nocturne::engine
