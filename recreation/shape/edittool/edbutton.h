#pragma once

#include "shape/fwd.h"

#include <string>
#include <string_view>

namespace nocturne::shape {

// A push button: a raised box with its text centred in it, pressed while the mouse holds it.
class CEdButton {
public:
    explicit CEdButton(CEdControls &controls);
    // Lets go of the mouse if it holds it.
    ~CEdButton();
    CEdButton(const CEdButton &) = delete;
    CEdButton &operator=(const CEdButton &) = delete;
    CEdButton(CEdButton &&) = delete;
    CEdButton &operator=(CEdButton &&) = delete;

    // At x, y, a pixel short of the size calculateButtonWidth and calculateButtonHeight give.
    void calculateAndSetBounds(int x_pos, int y_pos, std::string_view button_text);
    // From left, top up to but not including right, bottom.
    void setBoundsAndText(int left, int top, int right, int bottom, std::string_view button_text);
    void paint();
    // Takes the mouse on a press over it and shows pressed while it is held over it; true once,
    // when it is let go over it.
    bool wasClicked();

private:
    [[nodiscard]] bool isUnderMouse() const;

    CEdControls &controls_;
    std::string button_text_;
    int left_ = 0;
    int top_ = 0;
    int right_ = 0;
    int bottom_ = 0;
    bool pressed_ = false;
};

} // namespace nocturne::shape
