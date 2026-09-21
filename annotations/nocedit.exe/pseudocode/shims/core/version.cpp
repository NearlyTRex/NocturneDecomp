// =============================================================================
// VERSION — implementation
// =============================================================================
//
// The one translation unit that reads the generated header. See version.h for
// why it is only this one.

#include "core/version.h"

// The generated header exists only inside a build tree, so it is reached the
// same way window_icon.cpp reaches its generated icon: behind a macro CMake
// defines on this target. The standalone shim compile check in the export tool
// sees neither, and takes the fallback rather than failing to find a file that
// is not supposed to be there yet.
//
// The fallback is deliberately not a plausible version. Every real build
// defines the macro, so if these strings ever reach a binary something has gone
// wrong with the build and the binary should say so out loud.
#ifdef NOCTURNE_VERSION_GENERATED
#include "nocturne_version.h"
#else
#define NOCTURNE_VERSION       "0.0.0"
#define NOCTURNE_VERSION_MAJOR 0
#define NOCTURNE_VERSION_MINOR 0
#define NOCTURNE_VERSION_PATCH 0
#define NOCTURNE_VERSION_GIT   "no-version-header"
#define NOCTURNE_VERSION_BUILD "syntax-check"
#endif

#include <cstdio>
#include <cstring>

extern "C" const char *nocturne_version(void)
{
    return NOCTURNE_VERSION;
}

extern "C" const char *nocturne_version_git(void)
{
    return NOCTURNE_VERSION_GIT;
}

extern "C" const char *nocturne_version_build(void)
{
    return NOCTURNE_VERSION_BUILD;
}

extern "C" const char *nocturne_version_short(void)
{
    static char line[96];
    static int  built = 0;

    if (built == 0) {
        if (NOCTURNE_VERSION_GIT[0] != '\0' &&
            strcmp(NOCTURNE_VERSION_GIT, NOCTURNE_VERSION) != 0) {
            snprintf(line, sizeof(line), "%s (%s)", NOCTURNE_VERSION, NOCTURNE_VERSION_GIT);
        }
        else {
            snprintf(line, sizeof(line), "%s", NOCTURNE_VERSION);
        }
        built = 1;
    }
    return line;
}

extern "C" const char *nocturne_version_built(void)
{
    return __DATE__ " " __TIME__;
}

extern "C" const char *nocturne_version_line(void)
{
    static char line[192];
    static int  built = 0;

    if (built == 0) {
        // The describe string repeats the version when the build sits on a tag,
        // and "0.1.0 (0.1.0)" reads like a mistake. One or the other then.
        if (NOCTURNE_VERSION_GIT[0] != '\0' &&
            strcmp(NOCTURNE_VERSION_GIT, NOCTURNE_VERSION) != 0) {
            snprintf(line, sizeof(line), "NocturneDecomp %s (%s), %s",
                     NOCTURNE_VERSION, NOCTURNE_VERSION_GIT, NOCTURNE_VERSION_BUILD);
        }
        else {
            snprintf(line, sizeof(line), "NocturneDecomp %s, %s",
                     NOCTURNE_VERSION, NOCTURNE_VERSION_BUILD);
        }
        built = 1;
    }
    return line;
}
