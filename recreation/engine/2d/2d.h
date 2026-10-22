#pragma once

#include "engine/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>

namespace nocturne::engine {

// The screen mapping the fixed-point projection uses, in 16.16.
struct SProjectionParams {
    int half_width_fixed = 0;
    int neg_half_height_fixed = 0;
    int center_x_fixed = 0;
    int center_y_fixed = 0;

    bool operator==(const SProjectionParams &) const = default;
};

// The 2D clip rectangle, every edge inclusive.
struct SClipRect {
    int left = 0;
    int top = 0;
    int right = 0;
    int bottom = 0;

    bool operator==(const SClipRect &) const = default;
};

// A character of the built-in font, which runs from 0x20 to 0xff: its rows top down, bit width - 1
// the leftmost pixel.
struct SFontGlyph {
    static constexpr std::size_t kRows = 11;

    std::uint8_t width = 0;
    std::array<std::uint16_t, kRows> rows{};
};

// The software renderer's 2D state: the palette and the tables built from it, the clip
// rectangle, the viewport the projection centres on and the colour lines are drawn in.
class C2d {
public:
    static constexpr std::size_t kPaletteBytes = 768;
    // 32 levels to a channel, red outermost.
    static constexpr std::size_t kColorCubeSize = 0x8000;
    static constexpr std::size_t kLightLevels = 32;
    static constexpr std::size_t kReciprocalCount = 1600;

    using Palette = std::array<std::uint8_t, kPaletteBytes>;
    using LightRow = std::array<std::uint8_t, 256>;

    C2d(const CDosIo &dosio, IScreenDevice &screen, IRawInput &raw_input);

    void initGraphicsSystem();
    void cleanupGraphicsSystem();
    void loadPaletteFile(std::string_view filename);
    // The closest entry from start_index to end_index, inclusive; the first of equals wins.
    [[nodiscard]] int findBestPaletteMatch(int red, int green, int blue, int start_index,
                                           int end_index) const;
    void buildColorLookupTable();
    void loadOrBuildColorMap(std::string_view filename);
    void plotPixel(int x, int y);
    void drawLine(int x1, int y1, int x2, int y2);
    void drawLine3D(int x1, int y1, std::uint32_t z1, int x2, int y2, std::uint32_t z2);
    void setupViewportAndClipping(int left, int top, int right, int bottom);
    int getStringWidth(char *text);
    // In the built-in font, its top left corner at x, y, each line 11 rows below the last and
    // starting at x again, and clipped; while text wrap is on, a line also breaks at the clip's
    // right edge. Bytes are Windows-1252, and controls other than a newline are skipped.
    void drawText(std::string_view text, int x, int y);
    void drawString(char *text, int x_pos, int y_pos, int color);
    void drawTextXY(int x, int y, char *text);
    void drawTextColor(char *text, int x, int y);
    void drawTextRightAlignedColor(char *text, int x, int y);
    void drawTextCenteredAtColor(char *text, int x, int y);
    void drawTextCenteredColor(char *text, int left_x, int right_x, int y);
    void drawTextCenteredXYColor(int left_x, int right_x, int y, char *text);
    int getTextWrapEnabled();
    void setTextWrapEnabled(bool enabled);
    void disableTextWrap();
    int getTextColor();
    void setTextColor(int color);
    void resetGraphicsSystem();
    void reinitializeGraphicsSystem();
    void clipLineGlobal(int x1, int y1, int x2, int y2);
    // The line drawing below is in the active render colour, a palette index, and clipped.
    void drawHLine(int x1, int y, int x2);
    void drawVLine(int x, int y1, int y2);
    void drawRect(int x1, int y1, int x2, int y2);
    void fillRectColor(int x1, int y1, int x2, int y2, int color);
    // The border is drawn one pixel outside the fill.
    void fillRectWithBorder(int x1, int y1, int x2, int y2, int fill_color, int border_color);
    // Drops typed characters, mouse clicks and held keys.
    void clearInputAndWait();

    // vga.act: 256 RGB triples.
    [[nodiscard]] const Palette &getSourcePaletteData() const;
    // art/default.act, when there is one.
    [[nodiscard]] const Palette &getDefaultPalette() const;
    [[nodiscard]] std::span<const std::uint8_t, kColorCubeSize> getColorCubeLookup() const;
    // Rows 1 to 16 are each entry from a sixteenth of its colour up to all of it, and 17 to 32
    // brighten it to white. Rows 0 and 33 repeat the ends, so a lookup one level out of range
    // stays in the table.
    [[nodiscard]] std::span<const LightRow, kLightLevels + 2> getLightTable() const;
    // 0xffffffff / i, and 0xffffffff for 0: a software span is at most 1599 pixels.
    [[nodiscard]] std::span<const std::uint32_t, kReciprocalCount> getReciprocalLookupTable() const;
    [[nodiscard]] int getClipLeft() const;
    [[nodiscard]] int getClipTop() const;
    [[nodiscard]] int getClipRight() const;
    [[nodiscard]] int getClipBottom() const;
    [[nodiscard]] int getViewportWidth() const;
    [[nodiscard]] int getViewportHeight() const;
    [[nodiscard]] const SProjectionParams &getProjection() const;
    [[nodiscard]] SClipRect getClipRect() const;
    // The clip, projection and viewport size put back as a window or 3D window saved them.
    void setClipRect(const SClipRect &clip);
    void setProjection(const SProjectionParams &projection);
    void setViewportSize(int width, int height);
    [[nodiscard]] int getActiveRenderColor() const;
    void setActiveRenderColor(int color);

private:
    // count pixels of row y from x in the active render colour; false at a depth that has no
    // colour table.
    bool fillRun(int x, int y, int count);
    [[nodiscard]] static const SFontGlyph &getFontGlyph(unsigned char char_code);
    // How far the next character starts to the right, or 0 when the glyph does not fit in the
    // clip and nothing is drawn.
    int drawCharacter(unsigned char char_code, int x_pos, int y_pos);
    void drawTextWrapped(std::string_view text, int x_start, int y_start, int x_max, int y_max);
    void drawTextMultiline(std::string_view text, int x_start, int y_start, int y_max);
    void loadLightTable(std::string_view filename);
    void buildLightTable(int base_color_index);
    void saveLightTable(std::string_view filename);
    void buildDarkeningRows(std::size_t entry, std::size_t base);
    void buildBrighteningRows(std::size_t entry);

    const CDosIo &dosio_;
    IScreenDevice &screen_;
    IRawInput &raw_input_;
    Palette source_palette_data_{};
    Palette default_palette_{};
    std::array<float, 256> palette_luminance_cache_{};
    std::array<std::uint8_t, kColorCubeSize> color_cube_lookup_{};
    std::array<LightRow, kLightLevels + 2> light_table_{};
    std::array<std::uint32_t, kReciprocalCount> reciprocal_lookup_table_{};
    int clip_left_ = 0;
    int clip_top_ = 0;
    int clip_right_ = 0;
    int clip_bottom_ = 0;
    int viewport_width_ = 0;
    int viewport_height_ = 0;
    SProjectionParams projection_;
    int active_render_color_ = 0;
    bool text_wrap_enabled_ = true;
};

} // namespace nocturne::engine
