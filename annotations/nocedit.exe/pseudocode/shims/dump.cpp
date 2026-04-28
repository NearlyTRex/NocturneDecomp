// =============================================================================
// DEBUG DUMP TOOLS — implementation
// =============================================================================
//
// See dump.h for the public API and shim_config.h for the build-time toggle.

#include "dump.h"
#include "shim_config.h"

#if NOCTURNE_DUMP_TOOLS

#include "nocturne.h"
#include <cstdio>
#include <cstring>
#include <ctime>

// =============================================================================
// Common helpers
// =============================================================================

static void write_timestamp(FILE *f)
{
    time_t now = std::time(nullptr);
    char tbuf[64];
    std::strftime(tbuf, sizeof(tbuf), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
    std::fprintf(f, "timestamp: %s\n", tbuf);
}

// =============================================================================
// Screenshot — frame buffer color dump
// =============================================================================

struct PixelStats {
    int zero;
    int dim;     // max channel 1..31
    int mid;     // max channel 32..127
    int bright;  // max channel 128..255
    int min_x, min_y, max_x, max_y;
    int max_value;
};

static void pixel_stats_init(PixelStats *s)
{
    s->zero = s->dim = s->mid = s->bright = 0;
    s->min_x = s->min_y = 0x7fffffff;
    s->max_x = s->max_y = -1;
    s->max_value = 0;
}

static void pixel_stats_update(PixelStats *s, int x, int y, int r, int g, int b)
{
    int m = r;
    if (g > m) m = g;
    if (b > m) m = b;
    if (m == 0) {
        s->zero++;
        return;
    }
    if (m < 32) s->dim++;
    else if (m < 128) s->mid++;
    else s->bright++;
    if (m > s->max_value) s->max_value = m;
    if (x < s->min_x) s->min_x = x;
    if (y < s->min_y) s->min_y = y;
    if (x > s->max_x) s->max_x = x;
    if (y > s->max_y) s->max_y = y;
}

static void write_screenshot_metadata(const char *path, const PixelStats *s)
{
    char meta_path[1024];
    std::snprintf(meta_path, sizeof(meta_path), "%s.txt", path);
    FILE *f = std::fopen(meta_path, "w");
    if (!f) return;

    std::fprintf(f, "=== Nocturne Frame Buffer Dump ===\n");
    std::fprintf(f, "image: %s\n", path);
    write_timestamp(f);
    std::fprintf(f, "\n");

    std::fprintf(f, "== Buffer ==\n");
    std::fprintf(f, "g_BackBuffer:    %p\n", g_BackBuffer);
    std::fprintf(f, "g_WindowWidth:   %d\n", g_WindowWidth);
    std::fprintf(f, "g_WindowHeight:  %d\n", g_WindowHeight);
    std::fprintf(f, "g_BitsPerPixel:  %d\n\n", g_BitsPerPixel);

    std::fprintf(f, "== Render State ==\n");
    std::fprintf(f, "g_RenderStateFlags:      0x%x\n", g_RenderStateFlags.dword);
    std::fprintf(f, "g_VertexPreprocessMode:  %d\n", g_VertexPreprocessMode);
    std::fprintf(f, "g_TexturesDisabled:      %d\n", g_TexturesDisabled);
    std::fprintf(f, "g_ScanlineRenderFunc:    %p\n", (void *)g_ScanlineRenderFunc);
    std::fprintf(f, "g_RenderedTriangleCount: %d\n", g_RenderedTriangleCount);
    std::fprintf(f, "g_RasterizerMinY:        %d\n", g_RasterizerMinY);
    std::fprintf(f, "g_RasterizerMaxY:        %d\n", g_RasterizerMaxY);
    std::fprintf(f, "g_ScanlinePixelCount:    %d\n", g_ScanlinePixelCount);
    std::fprintf(f, "g_ClippedVertexCount:    %d\n\n", g_ClippedVertexCount);

    std::fprintf(f, "== Vertex / Lighting ==\n");
    std::fprintf(f, "g_VertexRedStart:    %d\n", g_VertexRedStart);
    std::fprintf(f, "g_VertexRedDelta:    %d\n", g_VertexRedDelta);
    std::fprintf(f, "g_VertexAlphaStart:  %d\n", g_VertexAlphaStart);
    std::fprintf(f, "g_VertexAlphaDelta:  %d\n", g_VertexAlphaDelta);
    std::fprintf(f, "g_AmbientLightLevel: %d\n", g_AmbientLightLevel);
    std::fprintf(f, "g_DynamicLightCount: %d\n", g_DynamicLightCount);
    std::fprintf(f, "g_SpotLightCount:    %d\n\n", g_SpotLightCount);

    std::fprintf(f, "== Camera ==\n");
    std::fprintf(f, "position: (%.4f, %.4f, %.4f)\n",
                 g_CDemonCameraInstance.base.position.f.x,
                 g_CDemonCameraInstance.base.position.f.y,
                 g_CDemonCameraInstance.base.position.f.z);
    std::fprintf(f, "rotation_matrix:\n");
    for (int i = 0; i < 3; i++) {
        std::fprintf(f, "  [% 9.4f % 9.4f % 9.4f]\n",
                     g_CDemonCameraInstance.base.rotation_matrix.m[i].x,
                     g_CDemonCameraInstance.base.rotation_matrix.m[i].y,
                     g_CDemonCameraInstance.base.rotation_matrix.m[i].z);
    }
    std::fprintf(f, "scale_factor: %d\n", g_CDemonCameraInstance.scale_factor);
    std::fprintf(f, "framebuffer:  %dx%d\n",
                 g_CDemonCameraInstance.framebuffer_width,
                 g_CDemonCameraInstance.framebuffer_height);
    std::fprintf(f, "display:      %dx%d\n\n",
                 g_CDemonCameraInstance.display_width,
                 g_CDemonCameraInstance.display_height);

    int total = s->zero + s->dim + s->mid + s->bright;
    int nonzero = total - s->zero;
    std::fprintf(f, "== Frame Buffer Histogram ==\n");
    std::fprintf(f, "total pixels:           %d\n", total);
    std::fprintf(f, "zero (all channels=0):  %d (%.2f%%)\n",
                 s->zero, total ? 100.0 * s->zero / total : 0.0);
    std::fprintf(f, "dim (max 1..31):        %d (%.2f%%)\n",
                 s->dim,    total ? 100.0 * s->dim    / total : 0.0);
    std::fprintf(f, "mid (max 32..127):      %d (%.2f%%)\n",
                 s->mid,    total ? 100.0 * s->mid    / total : 0.0);
    std::fprintf(f, "bright (max 128..255):  %d (%.2f%%)\n",
                 s->bright, total ? 100.0 * s->bright / total : 0.0);
    std::fprintf(f, "max channel value:      %d\n", s->max_value);
    if (nonzero > 0) {
        std::fprintf(f, "nonzero bbox: x=[%d..%d] y=[%d..%d] (w=%d h=%d)\n",
                     s->min_x, s->max_x, s->min_y, s->max_y,
                     s->max_x - s->min_x + 1, s->max_y - s->min_y + 1);
    } else {
        std::fprintf(f, "nonzero bbox: <none — buffer is entirely zero>\n");
    }

    std::fclose(f);
}

extern "C" int nocturne_dump_screenshot(const char *path)
{
    if (path == nullptr || g_BackBuffer == nullptr) {
        return -1;
    }
    if (g_BitsPerPixel != 32 && g_BitsPerPixel != 16) {
        return -1;
    }

    FILE *f = std::fopen(path, "wb");
    if (f == nullptr) {
        return -1;
    }

    const int w = g_WindowWidth;
    const int h = g_WindowHeight;
    std::fprintf(f, "P6\n%d %d\n255\n", w, h);

    PixelStats stats;
    pixel_stats_init(&stats);

    const unsigned char *base = (const unsigned char *)g_BackBuffer;
    if (g_BitsPerPixel == 32) {
        for (int y = 0; y < h; y++) {
            const unsigned char *row = base + y * w * 4;
            for (int x = 0; x < w; x++) {
                // ARGB8888 SDL byte order: memory is [B, G, R, A].
                unsigned char r = row[x * 4 + 2];
                unsigned char g = row[x * 4 + 1];
                unsigned char b = row[x * 4 + 0];
                unsigned char rgb[3] = { r, g, b };
                std::fwrite(rgb, 1, 3, f);
                pixel_stats_update(&stats, x, y, r, g, b);
            }
        }
    } else {
        for (int y = 0; y < h; y++) {
            const unsigned char *row = base + y * w * 2;
            for (int x = 0; x < w; x++) {
                unsigned int p =
                    (unsigned int)row[x * 2] | ((unsigned int)row[x * 2 + 1] << 8);
                unsigned int r5 = (p >> 11) & 0x1F;
                unsigned int g6 = (p >> 5)  & 0x3F;
                unsigned int b5 =  p        & 0x1F;
                unsigned char r = (unsigned char)((r5 << 3) | (r5 >> 2));
                unsigned char g = (unsigned char)((g6 << 2) | (g6 >> 4));
                unsigned char b = (unsigned char)((b5 << 3) | (b5 >> 2));
                unsigned char rgb[3] = { r, g, b };
                std::fwrite(rgb, 1, 3, f);
                pixel_stats_update(&stats, x, y, r, g, b);
            }
        }
    }

    std::fclose(f);
    write_screenshot_metadata(path, &stats);
    return 0;
}

// =============================================================================
// Z-buffer dump
// =============================================================================

extern "C" int nocturne_dump_zbuffer(const char *path)
{
    if (path == nullptr) {
        return -1;
    }

    const int w = g_WindowWidth;
    const int h = g_WindowHeight;
    if (w <= 0 || h <= 0) {
        return -1;
    }

    // First pass: scan the buffer to find min/max for normalization and
    // compute histogram + bbox of touched pixels. The "cleared" sentinel is
    // typically 0 (depth buffer reset to zero per frame in the shim).
    unsigned int min_d = 0xffffffffu;
    unsigned int max_d = 0;
    int touched = 0;
    int min_x = 0x7fffffff, min_y = 0x7fffffff;
    int max_x = -1, max_y = -1;
    int total = w * h;

    for (int y = 0; y < h; y++) {
        const unsigned int *row = g_ZBufferScanlineArray[y];
        if (row == nullptr) continue;
        for (int x = 0; x < w; x++) {
            unsigned int d = row[x];
            if (d < min_d) min_d = d;
            if (d > max_d) max_d = d;
            if (d != 0) {
                touched++;
                if (x < min_x) min_x = x;
                if (y < min_y) min_y = y;
                if (x > max_x) max_x = x;
                if (y > max_y) max_y = y;
            }
        }
    }

    FILE *f = std::fopen(path, "wb");
    if (f == nullptr) {
        return -1;
    }
    std::fprintf(f, "P6\n%d %d\n255\n", w, h);

    // Second pass: normalize each depth value to [0, 255] using min/max
    // observed in the touched range. If the buffer is entirely 0, write all
    // black. If min == max, all pixels map to mid-gray.
    unsigned int range = (max_d > min_d) ? (max_d - min_d) : 1;

    for (int y = 0; y < h; y++) {
        const unsigned int *row = g_ZBufferScanlineArray[y];
        if (row == nullptr) {
            unsigned char black[3] = {0, 0, 0};
            for (int x = 0; x < w; x++) std::fwrite(black, 1, 3, f);
            continue;
        }
        for (int x = 0; x < w; x++) {
            unsigned int d = row[x];
            unsigned char v = 0;
            if (d != 0) {
                unsigned long long scaled =
                    (unsigned long long)(d - min_d) * 255ull / range;
                v = (unsigned char)scaled;
            }
            unsigned char rgb[3] = { v, v, v };
            std::fwrite(rgb, 1, 3, f);
        }
    }
    std::fclose(f);

    char meta_path[1024];
    std::snprintf(meta_path, sizeof(meta_path), "%s.txt", path);
    FILE *m = std::fopen(meta_path, "w");
    if (m) {
        std::fprintf(m, "=== Nocturne Z-Buffer Dump ===\n");
        std::fprintf(m, "image: %s\n", path);
        write_timestamp(m);
        std::fprintf(m, "\n");
        std::fprintf(m, "== Buffer ==\n");
        std::fprintf(m, "dimensions:                %dx%d\n", w, h);
        std::fprintf(m, "g_SoftwareZBuffer:         %p\n", g_SoftwareZBuffer);
        std::fprintf(m, "g_ZBufferScanlineArray[0]: %p\n", g_ZBufferScanlineArray[0]);
        std::fprintf(m, "\n");
        std::fprintf(m, "== Depth Stats ==\n");
        std::fprintf(m, "total pixels:    %d\n", total);
        std::fprintf(m, "touched (d!=0):  %d (%.2f%%)\n",
                     touched, total ? 100.0 * touched / total : 0.0);
        std::fprintf(m, "untouched (d=0): %d (%.2f%%)\n",
                     total - touched, total ? 100.0 * (total - touched) / total : 0.0);
        if (touched > 0) {
            std::fprintf(m, "min depth: 0x%08x (%u)\n", min_d, min_d);
            std::fprintf(m, "max depth: 0x%08x (%u)\n", max_d, max_d);
            std::fprintf(m, "touched bbox: x=[%d..%d] y=[%d..%d] (w=%d h=%d)\n",
                         min_x, max_x, min_y, max_y,
                         max_x - min_x + 1, max_y - min_y + 1);
        } else {
            std::fprintf(m, "<entire z-buffer is zero — rasterizer didn't run or didn't write depth>\n");
        }
        std::fclose(m);
    }

    return 0;
}

// =============================================================================
// Display list dump
// =============================================================================

extern "C" int nocturne_dump_display_list(const char *path)
{
    if (path == nullptr) {
        return -1;
    }

    FILE *f = std::fopen(path, "w");
    if (f == nullptr) {
        return -1;
    }

    std::fprintf(f, "=== Nocturne Display List Dump ===\n");
    std::fprintf(f, "file: %s\n", path);
    write_timestamp(f);
    std::fprintf(f, "\n");

    int count = g_CDemonSetInstance.sorted_render_actor_count;
    std::fprintf(f, "g_CDemonSetInstance.sorted_render_actor_count: %d\n", count);
    std::fprintf(f, "g_SetDisplayListCount:                         %d\n", g_SetDisplayListCount);
    std::fprintf(f, "g_HeroActors[g_LocalHeroIndex]:                %p\n",
                 (void *)g_HeroActors[g_LocalHeroIndex]);
    std::fprintf(f, "\n");

    if (count <= 0) {
        std::fprintf(f, "<display list is empty — buildDisplayList culled all actors or wasn't called>\n");
        std::fclose(f);
        return 0;
    }

    std::fprintf(f, "%-4s  %-10s  %-32s  %-30s  %s\n",
                 "idx", "ptr", "name", "position", "orient (vec)");
    std::fprintf(f, "----  ----------  --------------------------------  ------------------------------  ------------------------------\n");

    if (count > 2000) count = 2000;  // safety cap to declared array size
    for (int i = 0; i < count; i++) {
        CDemonActor *a = g_CDemonSetInstance.sorted_render_actors[i];
        if (a == nullptr) {
            std::fprintf(f, "%-4d  %-10s  %-32s  %s\n", i, "<null>", "", "");
            continue;
        }
        char name[33];
        std::memcpy(name, a->actor_name, 32);
        name[32] = '\0';
        char posbuf[64];
        std::snprintf(posbuf, sizeof(posbuf), "(%.2f, %.2f, %.2f)",
                      a->location.position.x,
                      a->location.position.y,
                      a->location.position.z);
        char rotbuf[64];
        std::snprintf(rotbuf, sizeof(rotbuf), "(%.3f, %.3f, %.3f)",
                      a->orient.vec.x,
                      a->orient.vec.y,
                      a->orient.vec.z);
        std::fprintf(f, "%-4d  %-10p  %-32s  %-30s  %s\n",
                     i, (void *)a, name, posbuf, rotbuf);
    }

    std::fclose(f);
    return 0;
}

#else  // NOCTURNE_DUMP_TOOLS == 0

extern "C" int nocturne_dump_screenshot(const char *path)   { (void)path; return -1; }
extern "C" int nocturne_dump_zbuffer(const char *path)      { (void)path; return -1; }
extern "C" int nocturne_dump_display_list(const char *path) { (void)path; return -1; }

#endif
