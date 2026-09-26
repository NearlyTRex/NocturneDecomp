// =============================================================================
// MENU FONT — implementation
// =============================================================================
//
// See menu_font.h. Stored the way core/os_font.cpp stores its line.

#include "core/menu_font.h"
#include "shim_config.h"

#include "nocturne.h"

#include <cstdio>
#include <string>

std::string watcom_resolve_fs_path(const char *path);

namespace {

// The engine's INI accessors take char*, not const char*.
char kIniPath[]    = ".\\system\\nocturne.ini";
char kIniSection[] = "Graphics";
char kIniKey[]     = "menuFont";

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
        // CIni::getProfileString quits the process when it cannot open the
        // file, so make sure it is there first.
        std::string resolved = watcom_resolve_fs_path(kIniPath);
        FILE *probe = fopen(resolved.c_str(), "rb");
        if (probe != nullptr) {
            fclose(probe);
            s_mode = clamp_mode(engine_ini_cpp_getProfileInteger_FUN_004fb9a0(
                kIniSection, kIniKey, NOCTURNE_MENU_FONT_LARGE, kIniPath));
        }
        s_loaded = true;
    }
    return s_mode;
}

extern "C" int nocturne_menu_font_cycle(int step)
{
    char value[16];
    int next = (nocturne_menu_font_get() + step) % NOCTURNE_MENU_FONT_COUNT;

    if (next < 0) {
        next += NOCTURNE_MENU_FONT_COUNT;
    }
    s_mode = next;
    snprintf(value, sizeof(value), "%d", s_mode);
    engine_ini_cpp_writeProfileString_FUN_004fba40(kIniSection, kIniKey, value, kIniPath);
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
