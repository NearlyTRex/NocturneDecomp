#pragma once

#include "engine/fwd.h"
#include "shape/fwd.h"

#include <optional>
#include <string_view>

namespace nocturne::shape {

// What the controls draw with, measure by and read the mouse from.
struct SEdControlsOwners {
    engine::C2d &two_d;
    const engine::IScreenDevice &screen;
    engine::IRawInput &raw_input;
    engine::IGameClock &clock;
    CEditorTools &editor_tools;
};

// What the CEd controls share: which one the mouse has captured, from the press that took it to
// the release, and the drawing and sizing every control uses.
class CEdControls {
public:
    // The controls' fixed colours: their edges lit and shaded, their face, and their marks.
    static constexpr int kHighlightColor = 0xff;
    static constexpr int kShadeColor = 0xf8;
    static constexpr int kFaceColor = 7;
    static constexpr int kMarkColor = 0;

    explicit CEdControls(const SEdControlsOwners &owners);

    [[nodiscard]] const SEdControlsOwners &getOwners() const;
    // Compared by identity alone; null when nothing holds the mouse.
    [[nodiscard]] const void *getActiveControl() const;
    void setActiveControl(const void *control);

    // A raised box from left, top up to but not including right, bottom: its top and left edges
    // lit and its others shaded, the other way round when pressed.
    void draw3DBorder(int left, int top, int right, int bottom, bool pressed);
    // An arrowhead in such a box pointing up, down, left or right for style 0 to 3, a third of
    // its size, nudged by offset along both axes.
    void draw3DInsetBorder(int left, int top, int right, int bottom, int offset, int style);
    [[nodiscard]] int calculateGridWidth() const;
    [[nodiscard]] int calculateGridHeight() const;
    // The text's size in the editor font at the HUD scale, the height with a margin of an
    // eightieth of the screen; without text, the height of the font's tallest glyph.
    [[nodiscard]] int calculateButtonWidth(std::optional<std::string_view> text);
    [[nodiscard]] int calculateButtonHeight(std::optional<std::string_view> text);

private:
    SEdControlsOwners owners_;
    const void *active_control_ = nullptr;
};

} // namespace nocturne::shape
