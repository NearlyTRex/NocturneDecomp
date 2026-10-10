// =============================================================================
// SETTINGS IN NOCTURNE.INI — implementation
// =============================================================================
//
// See ini_setting.h for why every read checks the file first.

#include "core/ini_setting.h"
#include "watcom/path.h"
#include "nocturne.h"

#include <cstdio>
#include <string>

// The engine's INI accessors take char* rather than const char*.
static char s_ini_path[] = NOCTURNE_INI_PATH;

extern "C" int nocturne_ini_exists(void)
{
    std::string resolved = watcom_resolve_fs_path(s_ini_path);
    FILE *probe = fopen(resolved.c_str(), "rb");

    if (probe == nullptr) {
        return 0;
    }
    fclose(probe);
    return 1;
}

extern "C" int nocturne_ini_get_int(const char *section, const char *key, int fallback)
{
    if (nocturne_ini_exists() == 0) {
        return fallback;
    }
    return engine_ini_cpp_getProfileInteger_FUN_004fb9a0((char *)section, (char *)key,
                                                         fallback, s_ini_path);
}

extern "C" int nocturne_ini_cycle(int value, int step, int count)
{
    int next = (value + step) % count;

    return (next < 0) ? next + count : next;
}

extern "C" void nocturne_ini_set_int(const char *section, const char *key, int value)
{
    char text[16];

    snprintf(text, sizeof(text), "%d", value);
    engine_ini_cpp_writeProfileString_FUN_004fba40((char *)section, (char *)key, text,
                                                   s_ini_path);
}
