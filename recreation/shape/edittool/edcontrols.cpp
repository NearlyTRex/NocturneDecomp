#include "shape/edittool/edcontrols.h"

#include "engine/2d/2d.h"
#include "engine/font/bitfont.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "shape/edittool/editortools.h"

namespace nocturne::shape {

CEdControls::CEdControls(const SEdControlsOwners &owners) : owners_(owners) {}

const SEdControlsOwners &CEdControls::getOwners() const {
    return owners_;
}

const void *CEdControls::getActiveControl() const {
    return active_control_;
}

void CEdControls::setActiveControl(const void *control) {
    active_control_ = control;
}

// nocedit 0x004a58f0
void CEdControls::draw3DBorder(int left, int top, int right, int bottom, bool pressed) {
    engine::C2d &two_d = owners_.two_d;
    const engine::SDialogLook &look = owners_.editor_tools.getDialogLook();
    two_d.setActiveRenderColor(pressed ? look.bevel_shade_colour : look.bevel_highlight_colour);
    two_d.drawHLine(left, top, right - 1);
    two_d.drawVLine(left, top, bottom - 1);
    two_d.setActiveRenderColor(pressed ? look.bevel_highlight_colour : look.bevel_shade_colour);
    two_d.drawHLine(left, bottom - 1, right - 1);
    two_d.drawVLine(right - 1, top, bottom - 1);
    two_d.fillRectColor(left + 1, top + 1, right - 2, bottom - 2, look.bevel_face_colour);
}

// Up and down widen a row at a time from the tip, left and right a column at a time.
// nocedit 0x004a59a0
void CEdControls::draw3DInsetBorder(int left, int top, int right, int bottom, int offset,
                                    int style) {
    engine::C2d &two_d = owners_.two_d;
    two_d.setActiveRenderColor(owners_.editor_tools.getDialogLook().bevel_mark_colour);
    if (style == 0 || style == 1) {
        const int centre = ((right + left - 1) / 2) + offset;
        const int size = (bottom - top) / 3;
        int y = style == 0 ? offset + top + size + 1 : (bottom - size) - 2 + offset;
        for (int i = 0; i < size; ++i) {
            two_d.drawHLine(centre - i, y, centre + i);
            y += style == 0 ? 1 : -1;
        }
        return;
    }
    const int centre = ((top + bottom - 1) / 2) + offset;
    const int size = (right - left) / 3;
    int x = style == 2 ? offset + left + size + 1 : (right - size) - 2 + offset;
    for (int i = 0; i < size; ++i) {
        two_d.drawVLine(x, centre - i, centre + i);
        x += style == 2 ? 1 : -1;
    }
}

// nocedit 0x004a6490
int CEdControls::calculateGridWidth() const {
    return owners_.screen.getWindowWidth() / owners_.editor_tools.getDialogLook().grid_divisor;
}

// nocedit 0x004a64b0
int CEdControls::calculateGridHeight() const {
    const int width = owners_.screen.getWindowWidth();
    return ((owners_.screen.getWindowHeight() * calculateGridWidth() / width) * 4) / 3;
}

// The editor's also added a fortieth of the screen.
// nocedit 0x004a68e0
int CEdControls::calculateButtonWidth(std::optional<std::string_view> text) {
    CEditorTools &tools = owners_.editor_tools;
    const engine::CBitFont &font = tools.requireEditorFont();
    tools.initEditorFontMetrics();
    return font.getTextWidth(text.value_or(""), tools.getScale());
}

// nocedit 0x004a6970
int CEdControls::calculateButtonHeight(std::optional<std::string_view> text) {
    CEditorTools &tools = owners_.editor_tools;
    const engine::CBitFont &font = tools.requireEditorFont();
    tools.initEditorFontMetrics();
    const int height = text ? font.getTextHeight(*text, tools.getScale())
                            : font.getMaxCharHeight() * tools.getScale();
    return (owners_.screen.getWindowHeight() / tools.getDialogLook().button_margin_divisor) +
           height;
}

} // namespace nocturne::shape
