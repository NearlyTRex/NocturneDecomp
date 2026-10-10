#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CBitFont {
public:
    CBitFont();
    ~CBitFont();

    void openFontFile(char *filename, int width, int height, int load_flags);
    void setInitializedFlag();
    int drawText(char *text, int x, int y, int color_mode, int color_value);
    int drawTextWrapper(int x, int y, int color_mode, int color_value, char *text);
    int drawTextRight(int x, int y, int color_mode, int color_value, char *text);
    int drawTextCenter(int x, int y, int color_mode, int color_value, char *text);
    int drawTextCenterInBounds(int left_x, int right_x, int y, int color_mode, int color_value,
                               char *text);
    int drawTextCenterInBoundsF(int left_x, int right_x, int y, int color_mode, int color_value,
                                char *format_string, ...);
    int getTextWidth(char *text);
    int getTextHeight(char *text_string);
    int wrapText(char *source_text, char *dest_buffer, int max_lines, int line_width,
                 int max_pixel_width);
    int getCharWidth(int char_code);
    int getCharHeight(int char_code);
    int getCharYOffset(int char_code);
    void setCharYOffsetRange(int offset_value, int start_char, int end_char);
    void setFontReady(int value);
    void remapPalette();
};

} // namespace nocturne::engine
