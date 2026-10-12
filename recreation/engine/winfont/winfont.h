#pragma once

#include "common/video/presentation.h"
#include "engine/fwd.h"
#include "engine/palette/font.h"
#include "platform/fwd.h"

#include <cstdint>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// A font the OS draws, the way GDI did it for the original: each string is drawn into an image
// keyed magenta where no glyph is, then copied onto the screen over everything that isn't key.
class CWinFont : public CFont {
public:
    CWinFont(platform::IOsFontFactory &factory, IScreenDevice &screen, const C2d &two_d,
             const CFontColors &colors, std::string_view font_name, int font_height, int y_offset1,
             int y_offset2);
    CWinFont(const CWinFont &) = delete;
    CWinFont &operator=(const CWinFont &) = delete;
    CWinFont(CWinFont &&) = delete;
    CWinFont &operator=(CWinFont &&) = delete;
    ~CWinFont() override;

    // Draws below y by the first offset, in a palette colour, or the default text colour for a
    // negative foreground. Returns 0.
    int drawText(std::string_view text_string, int x, int y, int foreground_color,
                 int background_color) override;
    int getStringWidth(std::string_view text_string) override;
    // The text's height and both offsets.
    int getStringHeight(std::string_view text_string) override;
    int getLineSpacing() override;

private:
    void reset();
    void createTextBackground();
    void textOut(int x, int y, std::string_view text, std::uint32_t color);
    [[nodiscard]] common::SExtent measureText(std::string_view text);
    void copyToScreen(int x, int y, int width, int height);
    void setColorAndDrawText(std::string_view text_string, int x, int y, int foreground_color,
                             int background_color);
    [[nodiscard]] std::uint32_t getColorRef(int color) const;
    [[nodiscard]] std::uint32_t getKeyColor() const;

    IScreenDevice &screen_;
    const C2d &two_d_;
    const CFontColors &colors_;
    std::unique_ptr<platform::IOsFont> font_;
    // The image strings are drawn into, a pixel to an entry in its depth's layout: 5-5-5 in 16
    // bits, 8-8-8 otherwise.
    std::vector<std::uint32_t> text_image_;
    int right_ = 0;
    int top_ = 0;
    int bpp_ = 0;
    std::string text_cache_;
    int cached_string_width_ = 0;
    int cached_string_height_ = 0;
    int cached_foreground_color_ = 0;
    int cached_background_color_ = 0;
    int y_offset1_;
    int y_offset2_;
};

} // namespace nocturne::engine
