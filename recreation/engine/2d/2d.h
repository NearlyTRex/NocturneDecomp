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
};

// The software renderer's 2D state: the palette and the tables built from it, the clip
// rectangle and the viewport the projection centres on.
class C2d {
public:
    static constexpr std::size_t kPaletteBytes = 768;
    // 32 levels to a channel, red outermost.
    static constexpr std::size_t kColorCubeSize = 0x8000;
    static constexpr std::size_t kLightLevels = 32;
    static constexpr std::size_t kReciprocalCount = 1600;

    using Palette = std::array<std::uint8_t, kPaletteBytes>;
    using LightRow = std::array<std::uint8_t, 256>;

    C2d(const CDosIo &dosio, IScreenDevice &screen);

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
    void drawText(char *text, int x, int y);
    void drawString(char *text, int x_pos, int y_pos, int color);
    void drawTextXY(int x, int y, char *text);
    void drawTextColor(char *text, int x, int y);
    void drawTextRightAlignedColor(char *text, int x, int y);
    void drawTextCenteredAtColor(char *text, int x, int y);
    void drawTextCenteredColor(char *text, int left_x, int right_x, int y);
    void drawTextCenteredXYColor(int left_x, int right_x, int y, char *text);
    int getTextWrapEnabled();
    void setTextWrapEnabled(int enabled);
    void disableTextWrap();
    int getTextColor();
    void setTextColor(int color);
    void resetGraphicsSystem();
    void reinitializeGraphicsSystem();
    void clipLineGlobal(int x1, int y1, int x2, int y2);
    void drawHLine(int x1, int y, int x2);
    void drawVLine(int x, int y1, int y2);
    void fillRectColor(int x1, int y1, int x2, int y2, int color);
    void fillRectWithBorder(int x1, int y1, int x2, int y2, int fill_color, int border_color);
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

private:
    void loadLightTable(std::string_view filename);
    void buildLightTable(int base_color_index);
    void saveLightTable(std::string_view filename);
    void buildDarkeningRows(std::size_t entry, std::size_t base);
    void buildBrighteningRows(std::size_t entry);

    const CDosIo &dosio_;
    IScreenDevice &screen_;
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
};

} // namespace nocturne::engine
