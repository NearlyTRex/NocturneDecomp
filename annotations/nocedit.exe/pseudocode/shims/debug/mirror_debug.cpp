// =============================================================================
// MIRROR RENDER-STAGE TOGGLES — implementation
// =============================================================================
//
// See mirror_debug.h for the public API and shim_config_debug.h for the build
// toggle.

#include "shim_config.h"

#if NOCTURNE_DUMP_TOOLS

#include "debug/mirror_debug.h"
#include <cstdio>

extern "C" {

int g_MirrorStageMask = MIRROR_STAGE_ALL;

int nocturne_mirror_stage_count(int stage_bit, int real_count)
{
    return (g_MirrorStageMask & stage_bit) ? real_count : 0;
}

void nocturne_mirror_status(void)
{
    std::fprintf(stderr,
        "[mirror] mask=0x%02x  corona=%d opaque=%d particles=%d transparent=%d "
        "fire=%d bloom=%d glow=%d staticlights=%d\n",
        (unsigned)g_MirrorStageMask & 0xFF,
        (g_MirrorStageMask & MIRROR_STAGE_CORONA)       ? 1 : 0,
        (g_MirrorStageMask & MIRROR_STAGE_OPAQUE)       ? 1 : 0,
        (g_MirrorStageMask & MIRROR_STAGE_PARTICLES)    ? 1 : 0,
        (g_MirrorStageMask & MIRROR_STAGE_TRANSPARENT)  ? 1 : 0,
        (g_MirrorStageMask & MIRROR_STAGE_FIRE)         ? 1 : 0,
        (g_MirrorStageMask & MIRROR_STAGE_BLOOM)        ? 1 : 0,
        (g_MirrorStageMask & MIRROR_STAGE_GLOW)         ? 1 : 0,
        (g_MirrorStageMask & MIRROR_STAGE_STATICLIGHTS) ? 1 : 0);
}

void nocturne_mirror_set_mask(int mask)
{
    g_MirrorStageMask = mask & MIRROR_STAGE_ALL;
    nocturne_mirror_status();
}

void nocturne_mirror_enable(int stage_bit)
{
    g_MirrorStageMask |= (stage_bit & MIRROR_STAGE_ALL);
    nocturne_mirror_status();
}

void nocturne_mirror_disable(int stage_bit)
{
    g_MirrorStageMask &= ~stage_bit;
    nocturne_mirror_status();
}

void nocturne_mirror_only(int stage_bit)
{
    g_MirrorStageMask = stage_bit & MIRROR_STAGE_ALL;
    nocturne_mirror_status();
}

void nocturne_mirror_all(void)
{
    g_MirrorStageMask = MIRROR_STAGE_ALL;
    nocturne_mirror_status();
}

int nocturne_mirror_get_mask(void)
{
    return g_MirrorStageMask;
}

} // extern "C"

#endif // NOCTURNE_DUMP_TOOLS
