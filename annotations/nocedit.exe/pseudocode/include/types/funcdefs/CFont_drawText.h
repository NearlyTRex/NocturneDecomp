#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CFont;

// Function Definition: CFont_drawText
typedef void (*CFont_drawText)(struct CFont* this_ptr, int x, int y, char* text, int foreground_color, int background_color);

