// =============================================================================
// OS FONT — implementation
// =============================================================================
//
// See os_font.h, and NOCTURNE_AUTHENTIC_OS_FONT in config/shim_config_authentic.h.

#include "core/os_font.h"
#include "core/ini_setting.h"
#include "shim_config.h"

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_OS_FONT

namespace {

// Same section the window mode option uses.
const char kIniSection[] = "Graphics";
const char kIniKey[]     = "osFont";

int  s_mode   = NOCTURNE_OS_FONT_AUTO;
bool s_loaded = false;

int clamp_mode(int mode)
{
    if (mode < 0 || mode >= NOCTURNE_OS_FONT_COUNT) return NOCTURNE_OS_FONT_AUTO;
    return mode;
}

} // namespace

extern "C" int nocturne_os_font_get(void)
{
    if (!s_loaded) {
        // Read during startup (see core/ini_setting.h).
        s_mode = clamp_mode(nocturne_ini_get_int(kIniSection, kIniKey, NOCTURNE_OS_FONT_AUTO));
        s_loaded = true;
    }
    return s_mode;
}

extern "C" void nocturne_os_font_set(int mode)
{
    s_mode   = clamp_mode(mode);
    s_loaded = true;
    nocturne_ini_set_int(kIniSection, kIniKey, s_mode);
}

extern "C" int nocturne_os_font_cycle(int step)
{
    int next = nocturne_ini_cycle(nocturne_os_font_get(), step, NOCTURNE_OS_FONT_COUNT);

    nocturne_os_font_set(next);
    return next;
}

extern "C" const char *nocturne_os_font_name(int mode)
{
    if (mode == NOCTURNE_OS_FONT_SYSTEM) return "System";
    if (mode == NOCTURNE_OS_FONT_BITMAP) return "Bitmap";
    return "Auto";
}

extern "C" void nocturne_os_font_apply(void)
{
    const int mode = nocturne_os_font_get();

    // AUTO writes nothing. readMessageFile has already run by the time
    // initFonts calls this, so the global holds whatever msglist.txt asked for,
    // and overwriting it would override the one mechanism the engine has for a
    // localisation to ask for OS fonts.
    if (mode == NOCTURNE_OS_FONT_AUTO) {
        return;
    }
    g_UseOSFonts = (mode == NOCTURNE_OS_FONT_SYSTEM) ? 1 : 0;
}

#else

extern "C" int         nocturne_os_font_get(void)        { return NOCTURNE_OS_FONT_AUTO; }
extern "C" void        nocturne_os_font_set(int)         { }
extern "C" int         nocturne_os_font_cycle(int)       { return NOCTURNE_OS_FONT_AUTO; }
extern "C" const char *nocturne_os_font_name(int)        { return "Auto"; }
extern "C" void        nocturne_os_font_apply(void)      { }

#endif // !NOCTURNE_AUTHENTIC_OS_FONT
