#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CFont {
public:
    CFont();
    virtual ~CFont();

    virtual int drawText(char *text_string, int x, int y, int foreground_color,
                         int background_color) = 0;
    virtual int getStringWidth(char *text_string) = 0;
    virtual int getStringHeight(char *text_string) = 0;
    virtual int getLineSpacing();
};

} // namespace nocturne::engine
