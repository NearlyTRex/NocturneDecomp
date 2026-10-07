// =============================================================================
// MENU FONT — implementation
// =============================================================================
//
// See menu_font.h. Stored the way core/os_font.cpp stores its line.

#include "core/menu_font.h"
#include "core/ini_setting.h"
#include "shim_config.h"

#include "nocturne.h"

namespace {

const char kIniSection[] = "Graphics";
const char kIniKey[]     = "menuFont";

int  s_mode   = NOCTURNE_MENU_FONT_LARGE;
bool s_loaded = false;

int clamp_mode(int mode)
{
    if (mode < 0 || mode >= NOCTURNE_MENU_FONT_COUNT) return NOCTURNE_MENU_FONT_LARGE;
    return mode;
}

} // namespace

extern "C" int nocturne_menu_font_get(void)
{
    if (!s_loaded) {
        s_mode = clamp_mode(nocturne_ini_get_int(kIniSection, kIniKey, s_mode));
        s_loaded = true;
    }
    return s_mode;
}

extern "C" int nocturne_menu_font_cycle(int step)
{
    s_mode = nocturne_ini_cycle(nocturne_menu_font_get(), step, NOCTURNE_MENU_FONT_COUNT);
    nocturne_ini_set_int(kIniSection, kIniKey, s_mode);
    return s_mode;
}

extern "C" const char *nocturne_menu_font_name(int mode)
{
    return (mode == NOCTURNE_MENU_FONT_SMALL) ? "Small" : "Large";
}

extern "C" CBitFont *nocturne_menu_font(void)
{
    if ((nocturne_menu_font_get() == NOCTURNE_MENU_FONT_SMALL) &&
        (g_SmallEditorFont != (CBitFont *)0x0)) {
        return g_SmallEditorFont;
    }
    return g_ThemeFont;
}
