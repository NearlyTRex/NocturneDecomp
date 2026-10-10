#pragma once

namespace nocturne::shape {

class CInputString {
public:
    void init(char *source_string, int max_length, int mask_mode);
    void setSelectionToCursor();
    void insertChar(char character, int advance_cursor);
    void deleteSelection();
    void backspace();
    void handleKeyboardInput();
    void draw(int x_pos, int y_pos);
};

} // namespace nocturne::shape
