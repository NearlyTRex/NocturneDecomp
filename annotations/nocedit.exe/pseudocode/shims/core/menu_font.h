#pragma once

// =============================================================================
// MENU FONT — the dialog widgets' font, as a Graphics Options line
// =============================================================================
//
// The pick lists and the pause menu draw in g_EditorFont. Outside the editor the
// game sets it to g_ThemeFont in five places; with this option each of them asks
// nocturne_menu_font() instead, so the player can have the smaller
// g_SmallEditorFont, which fits more rows. Large is the default and is what
// those places always chose.
//
// Gated by NOCTURNE_AUTHENTIC_MENU_FONT at the call sites.

struct CBitFont;

#define NOCTURNE_MENU_FONT_LARGE 0
#define NOCTURNE_MENU_FONT_SMALL 1
#define NOCTURNE_MENU_FONT_COUNT 2

#ifdef __cplusplus
extern "C" {
#endif

// The stored choice, read from [Graphics] menuFont in system\nocturne.ini on
// first use and cached after.
int nocturne_menu_font_get(void);

// Steps the choice by `step`, stores it and writes the INI. Returns the new value.
int nocturne_menu_font_cycle(int step);

// "Large" or "Small", for the Options line.
const char *nocturne_menu_font_name(int mode);

// The font the choice stands for: g_ThemeFont or g_SmallEditorFont.
struct CBitFont *nocturne_menu_font(void);

#ifdef __cplusplus
}
#endif
