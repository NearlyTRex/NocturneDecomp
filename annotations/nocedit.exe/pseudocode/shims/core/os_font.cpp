// =============================================================================
// OS FONT — implementation
// =============================================================================
//
// See os_font.h, and NOCTURNE_OS_FONT_OPTION in config/shim_config_video.h.

#include "core/os_font.h"
#include "shim_config.h"

#include "nocturne.h"

#include <cstdio>
#include <string>

// watcom_resolve_fs_path applies the same '\\' -> '/' and case-insensitive
// resolution the CRT _fopen shim does, so the probe below looks at the file the
// engine will actually open.
std::string watcom_resolve_fs_path(const char *path);

#if NOCTURNE_OS_FONT_OPTION

namespace {

// Same path and section the window mode option uses. Non-const buffers because
// the engine's INI accessors take char* rather than const char*.
char kIniPath[]    = ".\\system\\nocturne.ini";
char kIniSection[] = "Graphics";
char kIniKey[]     = "osFont";

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
        // CIni::getProfileString has no initialised-guard: if it cannot open
        // the file it calls displayErrorAndQuit and takes the process with it.
        // This is read during startup, so check the file is really there rather
        // than trusting init order.
        std::string resolved = watcom_resolve_fs_path(kIniPath);
        FILE *probe = fopen(resolved.c_str(), "rb");
        if (probe != nullptr) {
            fclose(probe);
            s_mode = clamp_mode(engine_ini_cpp_getProfileInteger_FUN_004fb9a0(
                kIniSection, kIniKey, NOCTURNE_OS_FONT_AUTO, kIniPath));
        }
        else {
            s_mode = NOCTURNE_OS_FONT_AUTO;
        }
        s_loaded = true;
    }
    return s_mode;
}

extern "C" void nocturne_os_font_set(int mode)
{
    char value[16];

    s_mode   = clamp_mode(mode);
    s_loaded = true;

    snprintf(value, sizeof(value), "%d", s_mode);
    engine_ini_cpp_writeProfileString_FUN_004fba40(kIniSection, kIniKey, value, kIniPath);
}

extern "C" int nocturne_os_font_cycle(int step)
{
    // C's % keeps the sign of the dividend, and step is -1 for a left press.
    int next = (nocturne_os_font_get() + step) % NOCTURNE_OS_FONT_COUNT;

    if (next < 0) {
        next += NOCTURNE_OS_FONT_COUNT;
    }
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

#endif // NOCTURNE_OS_FONT_OPTION
