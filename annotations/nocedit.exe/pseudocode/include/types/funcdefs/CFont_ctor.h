#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CFont_drawText.h"
#include "types/funcdefs/CFont_getLineSpacing.h"
#include "types/funcdefs/CFont_getStringHeight.h"
#include "types/funcdefs/CFont_getStringWidth.h"

// Forward declarations
struct CFont;

// Function Definition: CFont_ctor
typedef struct CFont* (*CFont_ctor)(struct CFont* this_ptr);

