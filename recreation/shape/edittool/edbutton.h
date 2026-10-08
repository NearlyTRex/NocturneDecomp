#pragma once

namespace nocturne::shape {

class CEdButton {
public:
    ~CEdButton();

    void calculateAndSetBounds(int x_pos, int y_pos, char *button_text);
    void setBoundsAndText(int left, int top, int right, int bottom, char *button_text);
    void paint(int draw_border_flag);
    int wasClicked();
};

} // namespace nocturne::shape
