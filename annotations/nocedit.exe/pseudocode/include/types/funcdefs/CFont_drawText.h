#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CFont;

// Function Definition: CFont_drawText
typedef int (*CFont_drawText)(struct CFont* this_ptr, char* text, int x, int y, int foreground_color, int background_color);

