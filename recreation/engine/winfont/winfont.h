#pragma once

#include "engine/fwd.h"
#include "engine/palette/font.h"

namespace nocturne::engine {

class CWinFont : public CFont {
public:
    CWinFont(char *font_name, int font_height, int y_offset1, int y_offset2);
    ~CWinFont() override;

    int drawText(char *text_string, int x, int y, int foreground_color,
                 int background_color) override;
    int getStringWidth(char *text_string) override;
    int getStringHeight(char *text_string) override;
    int getLineSpacing() override;
};

} // namespace nocturne::engine
