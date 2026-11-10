#pragma once

#include "engine/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// A font drawn from glyph sheets in art/: raw 8-bit images up to four to a font, each with an .act
// palette beside it. A marker colour above each row of glyphs spans each glyph's width.
class CBitFont {
public:
    static constexpr int kMaxBitmaps = 4;
    static constexpr std::size_t kCharCount = 256;
    // Colour modes, beside a palette index: the sheet's own colours, the shadow colour (always
    // black, as nothing sets it) and the default text colour.
    static constexpr int kSheetColors = -1;
    static constexpr int kShadowColor = -2;
    static constexpr int kDefaultTextColor = -3;
    // A shadow colour of none.
    static constexpr int kNoShadow = -1;
    // setCharYOffsetRange's end for a single character.
    static constexpr int kSingleChar = -0x81;

    CBitFont(const CDosIo &dosio, IScreenDevice &screen, const C2d &two_d, const C3d &three_d,
             const CFontColors &colors);

    void reset();
    void free();
    // Loads a sheet whose glyphs start at '!'; load_flags is the sheet's transparent index.
    void openFontFile(std::string_view filename, int width, int height, int load_flags);
    void loadNewBitmap(std::string_view filename, int width, int height, int first_char,
                       int last_char, int load_flags);
    void loadBitmap(std::string_view filename, int width, int height, int first_char);
    // Draws the sheet's grey levels as coverage of the text colour, in 16 and 32 bits.
    void setInitializedFlag();
    // Glyphs partly outside the clip are cut rather than dropped.
    void setFontReady(int value);
    void setCharYOffsetRange(int offset_value, int start_char, int end_char = kSingleChar);
    void setCharWidth(int char_code, int width);
    void setShadowOffset(int x, int y);
    // Hands every line to font from now on.
    void setWinFont(CFont &font);
    // Draws from the sheets from now on; the OS font setWinFont gave, if any, for handing back.
    [[nodiscard]] CFont *releaseWinFont();
    // The OS font made `scale` times as large as setWinFont's, which the scaled calls draw and
    // measure with at that scale while setWinFont's is in use; null for none.
    void setScaledWinFont(CFont *font, float scale);
    // The display colours for the current depth, from each sheet's palette.
    void remapPalette();

    [[nodiscard]] int getCharWidth(int char_code) const;
    [[nodiscard]] int getCharHeight(int char_code, int scale = 1) const;
    [[nodiscard]] int getCharYOffset(int char_code) const;
    [[nodiscard]] int getMaxCharWidth() const;
    [[nodiscard]] int getMaxCharHeight() const;
    [[nodiscard]] int getTextWidth(std::string_view text, int scale = 1) const;
    [[nodiscard]] int getTextHeight(std::string_view text, int scale = 1) const;
    // Up to max_lines lines no wider than max_pixel_width and shorter than line_width, broken
    // after the last space that fits; leading spaces and trailing ones are dropped.
    [[nodiscard]] std::vector<std::string> wrapText(std::string_view source_text, int max_lines,
                                                    int line_width, int max_pixel_width) const;

    // Draws at scale screen pixels to a sheet pixel, a shadow first unless color_value is
    // kNoShadow. Returns the width drawn.
    int drawText(std::string_view text, int x, int y, int color_mode, int color_value,
                 int scale = 1);
    int drawCharacter(int char_code, int x, int y, int color_mode, int color_value, int scale = 1);
    int drawTextWrapper(int x, int y, int color_mode, int color_value, std::string_view text);
    int drawTextRight(int x, int y, int color_mode, int color_value, char *text);
    // Centred on x.
    int drawTextCenter(int x, int y, int color_mode, int color_value, std::string_view text);
    // Centred between two inclusive edges.
    int drawTextCenterInBounds(int left_x, int right_x, int y, int color_mode, int color_value,
                               std::string_view text);
    // std::format's syntax where the original took printf's.
    // nocedit 0x004cdf30
    template <typename... TArgs>
    int drawTextCenterInBoundsF(int left_x, int right_x, int y, int color_mode, int color_value,
                                std::format_string<TArgs...> format, TArgs &&...args) {
        return drawTextCenterInBoundsFV(left_x, right_x, y, color_mode, color_value, format.get(),
                                        std::make_format_args(args...));
    }

    struct SWrappedText {
        std::vector<std::string> lines;
        // The line advance in screen pixels.
        int line_pitch = 0;
    };

    // Text at a fractional scale, for HUD text that keeps its share of the screen: each screen
    // pixel takes the sheet pixels under it, weighted by the area each covers, and is blended by
    // that coverage. A whole scale draws as drawText does. An OS font, 8 bits and a scale that
    // isn't positive draw at 1.
    int drawTextScaled(std::string_view text, int x, int y, int color_mode, int color_value,
                       float scale);
    [[nodiscard]] int getTextWidthScaled(std::string_view text, float scale) const;
    [[nodiscard]] int getCharHeightScaled(int char_code, float scale) const;
    // Wraps in unscaled glyphs to box_width screen pixels, so the wrap and the drawn text agree.
    [[nodiscard]] SWrappedText wrapTextScaled(std::string_view source_text, int max_lines,
                                              int line_width, int box_width, float scale) const;

private:
    int drawTextCenterInBoundsFV(int left_x, int right_x, int y, int color_mode, int color_value,
                                 std::string_view format, std::format_args args);

    struct SSheet {
        std::string name;
        std::vector<std::uint8_t> pixels;
        int width = 0;
        // 256 RGB triples.
        std::array<std::uint8_t, 768> palette{};
        std::array<std::uint32_t, 256> display{};
    };

    // A glyph's rectangle on the screen once clipped, and its sheet pixels.
    struct SGlyphBox {
        int left = 0;
        int top = 0;
        int right = 0;
        int bottom = 0;
    };

    // What the sheet pixels under one screen pixel come to.
    struct SCoverage {
        // A blended font's sheet colour, per byte.
        std::array<float, 4> channel{};
        // A keyed font's share covered, or a blended one's coverage level.
        float amount = 0.0F;
        // The sheet colour of the pixel covering most of it, and that pixel's share.
        std::uint32_t color = 0;
        float largest_share = 0.0F;
    };

    // A glyph's first pixel in its sheet.
    struct SGlyphSource {
        const SSheet *sheet = nullptr;
        std::size_t position = 0;
    };

    // A rectangle of a glyph in fractional sheet pixels.
    struct SSheetArea {
        float left = 0.0F;
        float top = 0.0F;
        float right = 0.0F;
        float bottom = 0.0F;
    };

    [[nodiscard]] int calculateCharacterHeight(std::span<const std::uint8_t> char_bitmap,
                                               int char_width, int char_height,
                                               int bitmap_stride) const;
    void parseCharacterMetrics(std::size_t bitmap, int bitmap_width, int bitmap_height,
                               int first_char);
    void measureGlyph(std::size_t bitmap, std::size_t char_code, std::size_t position, int width,
                      int band_height);
    // How many characters of the text start the next wrapped line, before trailing spaces go.
    [[nodiscard]] std::size_t measureLine(std::string_view text, int line_width,
                                          int max_pixel_width) const;
    [[nodiscard]] std::optional<SGlyphBox> placeGlyph(std::size_t char_code, int x, int y,
                                                      int scale) const;
    void drawGlyphRow(void *row, int left, std::span<const std::uint8_t> indices,
                      std::size_t bitmap, int color_mode);
    void drawRow8(std::uint8_t *row, std::span<const std::uint8_t> indices, int color_mode) const;
    void drawRow16(std::uint16_t *row, std::span<const std::uint8_t> indices, std::size_t bitmap,
                   int color_mode);
    void drawRow32(std::uint32_t *row, std::span<const std::uint8_t> indices, std::size_t bitmap,
                   int color_mode);
    [[nodiscard]] std::uint16_t blendPixel16(std::uint32_t source, std::uint32_t screen,
                                             std::uint32_t alpha);
    [[nodiscard]] float getUsableScale(float scale) const;
    // The OS font setScaledWinFont gave, while setWinFont's is in use and the scale is its.
    [[nodiscard]] CFont *getScaledWinFont(float scale) const;
    // The widest line an OS font draws.
    [[nodiscard]] static int getWinFontTextWidth(CFont &font, std::string_view text);
    float drawCharacterScaled(std::size_t char_code, float x, float y, int color_mode,
                              int color_value, float scale);
    [[nodiscard]] SCoverage measureCoverage(const SGlyphSource &glyph,
                                            const SSheetArea &area) const;
    void addCoverage(SCoverage &coverage, const SSheet &sheet, std::uint8_t index,
                     float share) const;
    void plotCoverage(void *row, int x, const SCoverage &coverage, std::uint32_t color);
    [[nodiscard]] std::uint32_t getSolidColor16(int color_mode);
    [[nodiscard]] std::uint32_t getSolidColor32(int color_mode) const;
    [[nodiscard]] int drawWithWinFont(std::string_view text, int x, int y, int color_mode,
                                      int color_value);

    const CDosIo &dosio_;
    IScreenDevice &screen_;
    const C2d &two_d_;
    const C3d &three_d_;
    const CFontColors &colors_;
    std::vector<SSheet> sheets_;
    // Where each glyph starts in its sheet; empty for a character with none.
    std::array<std::optional<std::size_t>, kCharCount> char_positions_{};
    std::array<std::size_t, kCharCount> char_bitmap_index_{};
    std::array<int, kCharCount> char_widths_{};
    std::array<int, kCharCount> char_heights_{};
    std::array<int, kCharCount> char_y_offsets_{};
    int max_char_width_ = 0;
    int max_char_height_ = 0;
    int current_line_height_ = 0;
    int char_spacing_ = 1;
    int line_spacing_ = 2;
    int shadow_offset_x_ = 2;
    int shadow_offset_y_ = 1;
    bool rendering_ready_ = false;
    bool is_initialized_ = false;
    int load_flags_ = 0;
    CFont *win_font_helper_ = nullptr;
    CFont *scaled_win_font_ = nullptr;
    float scaled_win_scale_ = 1.0F;
};

} // namespace nocturne::engine
