// =============================================================================
// SCREENSHOT DUMPER — implementation
// =============================================================================
//
// See screenshot.h for the public API and shim_config.h for the build-time
// toggle. Reads g_BackBuffer + g_WindowWidth/Height/BitsPerPixel and writes
// a binary PPM (P6) file with one byte each for R, G, B per pixel.
//
// In addition to the PPM, writes a sidecar `<path>.txt` with all the relevant
// render state captured at dump time (camera transform, render flags, vertex
// lighting, rasterizer cursors) plus a per-pixel-brightness histogram.
//
// Supported source formats:
//   32bpp ARGB8888  (SDL byte order: B, G, R, A in memory)
//   16bpp RGB565    (5 bits R, 6 bits G, 5 bits B, packed into one ushort)

#include "screenshot.h"
#include "shim_config.h"

#if NOCTURNE_SCREENSHOT_DUMP

#include "nocturne.h"
#include <cstdio>
#include <ctime>

struct PixelStats {
    int zero;
    int dim;     // max channel 1..31
    int mid;     // max channel 32..127
    int bright;  // max channel 128..255
    int min_x, min_y, max_x, max_y;  // bounding box of nonzero pixels
    int max_value;
};

static void stats_init(PixelStats *s)
{
    s->zero = s->dim = s->mid = s->bright = 0;
    s->min_x = s->min_y = 0x7fffffff;
    s->max_x = s->max_y = -1;
    s->max_value = 0;
}

static void stats_update(PixelStats *s, int x, int y, int r, int g, int b)
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

static void write_metadata(const char *path, const PixelStats *s)
{
    char meta_path[1024];
    std::snprintf(meta_path, sizeof(meta_path), "%s.txt", path);
    FILE *f = std::fopen(meta_path, "w");
    if (!f) return;

    time_t now = std::time(nullptr);
    char tbuf[64];
    std::strftime(tbuf, sizeof(tbuf), "%Y-%m-%d %H:%M:%S", std::localtime(&now));

    std::fprintf(f, "=== Nocturne Screenshot Metadata ===\n");
    std::fprintf(f, "image: %s\n", path);
    std::fprintf(f, "timestamp: %s\n\n", tbuf);

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
    std::fprintf(f, "\n");

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

extern "C" int nocturne_screenshot_dump(const char *path)
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
    stats_init(&stats);

    const unsigned char *base = (const unsigned char *)g_BackBuffer;
    if (g_BitsPerPixel == 32) {
        for (int y = 0; y < h; y++) {
            const unsigned char *row = base + y * w * 4;
            for (int x = 0; x < w; x++) {
                // ARGB8888 in SDL byte order: memory is [B, G, R, A].
                unsigned char r = row[x * 4 + 2];
                unsigned char g = row[x * 4 + 1];
                unsigned char b = row[x * 4 + 0];
                unsigned char rgb[3] = { r, g, b };
                std::fwrite(rgb, 1, 3, f);
                stats_update(&stats, x, y, r, g, b);
            }
        }
    } else {
        for (int y = 0; y < h; y++) {
            const unsigned char *row = base + y * w * 2;
            for (int x = 0; x < w; x++) {
                unsigned int p =
                    (unsigned int)row[x * 2] | ((unsigned int)row[x * 2 + 1] << 8);
                // RGB565: bits [15:11]=R, [10:5]=G, [4:0]=B.
                unsigned int r5 = (p >> 11) & 0x1F;
                unsigned int g6 = (p >> 5)  & 0x3F;
                unsigned int b5 =  p        & 0x1F;
                unsigned char r = (unsigned char)((r5 << 3) | (r5 >> 2));
                unsigned char g = (unsigned char)((g6 << 2) | (g6 >> 4));
                unsigned char b = (unsigned char)((b5 << 3) | (b5 >> 2));
                unsigned char rgb[3] = { r, g, b };
                std::fwrite(rgb, 1, 3, f);
                stats_update(&stats, x, y, r, g, b);
            }
        }
    }

    std::fclose(f);
    write_metadata(path, &stats);
    return 0;
}

#else

extern "C" int nocturne_screenshot_dump(const char *path)
{
    (void)path;
    return -1;
}

#endif
