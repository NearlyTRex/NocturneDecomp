#include "shape/edittool/edbutton.h"

#include "engine/font/bitfont.h"
#include "engine/rawinput.h"
#include "shape/edittool/edcontrols.h"
#include "shape/edittool/editortools.h"

namespace nocturne::shape {
namespace {

constexpr int kLeftButton = 1;

} // namespace

CEdButton::CEdButton(CEdControls &controls) : controls_(controls) {}

// nocedit 0x004a6510
// nocedit 0x004a6530
CEdButton::~CEdButton() {
    if (controls_.getActiveControl() == this) {
        controls_.setActiveControl(nullptr);
    }
}

// nocedit 0x004a6550
void CEdButton::calculateAndSetBounds(int x_pos, int y_pos, std::string_view button_text) {
    const int bottom = controls_.calculateButtonHeight(button_text) + y_pos - 1;
    const int right = controls_.calculateButtonWidth(button_text) + x_pos - 1;
    setBoundsAndText(x_pos, y_pos, right, bottom, button_text);
}

// The editor's took right and bottom as the last pixels inside; the original copied the text
// into 200 bytes, which a longer one overran.
// nocedit 0x004a6590
void CEdButton::setBoundsAndText(int left, int top, int right, int bottom,
                                 std::string_view button_text) {
    button_text_ = button_text;
    left_ = left;
    top_ = top;
    right_ = right;
    bottom_ = bottom;
}

// The editor's also outlined a focused button and underlined its shortcut key.
// nocedit 0x004a65e0
void CEdButton::paint() {
    CEditorTools &tools = controls_.getOwners().editor_tools;
    controls_.draw3DBorder(left_, top_, right_, bottom_, pressed_);
    engine::CBitFont &font = tools.requireEditorFont();
    const int scale = tools.getScale();
    const int x = (right_ + left_ - font.getTextWidth(button_text_, scale)) / 2;
    const int y = (top_ + bottom_ - font.getTextHeight(button_text_, scale)) / 2;
    font.drawText(button_text_, x, y, CEdControls::kMarkColor, engine::CBitFont::kNoShadow, scale);
}

// The original also refused the click while a flag nothing sets was set.
// nocedit 0x004a6830
bool CEdButton::wasClicked() {
    const bool over = isUnderMouse();
    const bool held = (controls_.getOwners().raw_input.getMouseButtonFlags() & kLeftButton) != 0;
    if (controls_.getActiveControl() == this) {
        pressed_ = over;
        if (held) {
            return false;
        }
        controls_.setActiveControl(nullptr);
        if (!over) {
            return false;
        }
        pressed_ = false;
        return true;
    }
    if (controls_.getActiveControl() == nullptr && held && over) {
        pressed_ = true;
        controls_.setActiveControl(this);
    }
    return false;
}

bool CEdButton::isUnderMouse() const {
    const engine::IRawInput &input = controls_.getOwners().raw_input;
    const int x = input.getMouseX();
    const int y = input.getMouseY();
    return left_ <= x && top_ <= y && x < right_ && y < bottom_;
}

} // namespace nocturne::shape
