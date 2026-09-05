// =============================================================================
// RENDER PROBE — see render_probe.h for what this answers and why
// =============================================================================
//
// Accumulators only. Nothing here decides anything; it records what the DLL was
// asked to draw, under which render_flags, and what vertex colors came out of
// buildTLVertex, so the accel-on lighting question can be settled against a
// running game instead of against a reading of the code.
//
// Vertex colors are attributed to the render_flags of the most recent draw
// call. That is exact whenever a batch covers one draw, which is the normal
// case: applyRenderState calls flushBatch on every state change that matters
// (texture swap, bit 0x001, bit 0x002). It can smear across draws only when
// consecutive draws share identical state — in which case the flags are the
// same anyway. The per-batch GL state below is recorded independently and is
// never attributed, so the two views cross-check each other.

#include "render_probe.h"

#include "debug_log.h"

#include <stdio.h>
#include <string.h>

namespace {

const int   MAX_FLAG_BUCKETS  = 64;
const int   MAX_BLEND_BUCKETS = 16;
const int   HIST_BINS         = 16;   // 16 bins of 16 over a byte

struct FlagBucket {
    unsigned      flags;
    unsigned long draws;
    unsigned long polygons;
    unsigned long entry[4];

    unsigned long vertices;
    unsigned long light_sum;          // diffuse red channel, the light byte
    unsigned      light_min;
    unsigned      light_max;
    unsigned long light_hist[HIST_BINS];

    unsigned long alpha_sum;          // diffuse alpha
    unsigned long alpha_hist[HIST_BINS];

    unsigned long spec_nonzero;       // vertices whose specular RGB != 0
    unsigned long spec_sum;
    unsigned      spec_max;

    // Specular ALPHA is a separate question from specular RGB: D3D7 carries the
    // per-vertex FOG FACTOR there (255 = unfogged, 0 = solid fog colour) when
    // FOGTABLEMODE is NONE, which is the mode this engine uses. GL's secondary
    // colour is 3 components, so that byte is dropped on the floor today and no
    // fog reaches the screen from the DLL path at all.
    //
    // Whether implementing it is worth anything depends entirely on whether the
    // engine ever writes something other than 255 here, so measure before
    // building: if this is 255 everywhere, vertex fog is a no-op in practice.
    unsigned long specA_sum;
    unsigned      specA_min;
    unsigned      specA_max;
    unsigned long specA_not_opaque;   // vertices with specular alpha != 255
    unsigned long specA_hist[HIST_BINS];

    unsigned long rgb_unequal;        // diffuse R != G or G != B (the 0x200 path)
};

struct BlendBucket {
    unsigned      src;
    unsigned      dst;
    unsigned long triangles;
    unsigned long batches;
};

FlagBucket  g_flags[MAX_FLAG_BUCKETS];
int         g_flag_count;
BlendBucket g_blends[MAX_BLEND_BUCKETS];
int         g_blend_count;

unsigned      g_current_flags;
int           g_have_current;

unsigned long g_frames;
unsigned long g_draws;
unsigned long g_polygons;
unsigned long g_vertices;
unsigned long g_batches;
unsigned long g_tris_blend_on;
unsigned long g_tris_blend_off;
unsigned long g_tris_alphatest_on;
unsigned long g_tris_untextured;
unsigned long g_flag_overflow;        // distinct combos past MAX_FLAG_BUCKETS

// --- per-texture buckets -------------------------------------------------
// Keyed by the engine's g_CurrentTextureData pointer so the software-side
// sample can be matched to the same texture. Characters and set geometry both
// ride flags 0x2cd, so this is the only way to compare them separately.
const int MAX_TEX_BUCKETS = 128;

struct TexBucket {
    const void   *tex;
    unsigned long vertices;
    unsigned long light_sum;
    unsigned      light_min;
    unsigned      light_max;
    unsigned long light_hist[HIST_BINS];
};

TexBucket   g_tex[MAX_TEX_BUCKETS];
int         g_tex_count;
const void *g_current_tex;
unsigned long g_tex_overflow;

TexBucket *tex_bucket_for(const void *tex) {
    for (int i = 0; i < g_tex_count; i++) {
        if (g_tex[i].tex == tex) return &g_tex[i];
    }
    if (g_tex_count >= MAX_TEX_BUCKETS) {
        g_tex_overflow++;
        return nullptr;
    }
    TexBucket *b = &g_tex[g_tex_count++];
    memset(b, 0, sizeof(*b));
    b->tex       = tex;
    b->light_min = 0x100;
    return b;
}

FlagBucket *bucket_for(unsigned flags) {
    for (int i = 0; i < g_flag_count; i++) {
        if (g_flags[i].flags == flags) return &g_flags[i];
    }
    if (g_flag_count >= MAX_FLAG_BUCKETS) {
        g_flag_overflow++;
        return nullptr;
    }
    FlagBucket *b = &g_flags[g_flag_count++];
    memset(b, 0, sizeof(*b));
    b->flags     = flags;
    b->light_min = 0x100;             // sentinel: no sample yet
    b->specA_min = 0x100;
    return b;
}

void decode_flags(unsigned f, char *out, size_t cap) {
    static const char *names[10] = {
        "TEX", "SOLID", "GOURAUD", "SOLIDALPHA", "FLATLIGHT",
        "READDEST", "ZTEST", "ZWRITE", "VTXALPHA", "VTXRGB",
    };
    out[0] = '\0';
    size_t used = 0;
    for (int bit = 0; bit < 10; bit++) {
        if ((f & (1u << bit)) == 0) continue;
        const char *n   = names[bit];
        size_t      len = strlen(n);
        if (used + len + 2 >= cap) break;
        if (used != 0) out[used++] = '|';
        memcpy(out + used, n, len);
        used += len;
        out[used] = '\0';
    }
    if (used == 0 && cap > 1) {
        out[0] = '-';
        out[1] = '\0';
    }
    unsigned extra = f & ~0x3ffu;
    if (extra != 0 && used + 12 < cap) {
        snprintf(out + used, cap - used, "|+%#x", extra);
    }
}

void write_hist(FILE *fp, const char *label, const unsigned long *hist,
                unsigned long total) {
    fprintf(fp, "    %-6s", label);
    for (int i = 0; i < HIST_BINS; i++) {
        double pct = (total != 0) ? (100.0 * (double)hist[i] / (double)total) : 0.0;
        fprintf(fp, " %4.1f", pct);
    }
    fprintf(fp, "\n");
}

}  // namespace

extern "C" void nocturne_render_probe_draw(unsigned render_flags, int polygons, int entry) {
    g_current_flags = render_flags;
    g_have_current  = 1;
    if (polygons < 0) polygons = 0;

    g_draws++;
    g_polygons += (unsigned long)polygons;

    FlagBucket *b = bucket_for(render_flags);
    if (b == nullptr) return;
    b->draws++;
    b->polygons += (unsigned long)polygons;
    if (entry >= 0 && entry < 4) b->entry[entry]++;
}

extern "C" void nocturne_render_probe_color(unsigned diffuse, unsigned specular) {
    const unsigned r = (diffuse >> 16) & 0xff;
    const unsigned g = (diffuse >>  8) & 0xff;
    const unsigned b = (diffuse      ) & 0xff;
    const unsigned a = (diffuse >> 24) & 0xff;
    const unsigned sr = (specular >> 16) & 0xff;
    const unsigned sg = (specular >>  8) & 0xff;
    const unsigned sb = (specular      ) & 0xff;
    const unsigned sa = (specular >> 24) & 0xff;

    g_vertices++;

    FlagBucket *fb = g_have_current ? bucket_for(g_current_flags) : nullptr;
    if (fb == nullptr) return;

    fb->vertices++;
    fb->light_sum += r;
    if (r < fb->light_min) fb->light_min = r;
    if (r > fb->light_max) fb->light_max = r;
    fb->light_hist[r / HIST_BINS]++;

    fb->alpha_sum += a;
    fb->alpha_hist[a / HIST_BINS]++;

    if (r != g || g != b) fb->rgb_unequal++;

    const unsigned smax = (sr > sg) ? ((sr > sb) ? sr : sb) : ((sg > sb) ? sg : sb);
    if (smax != 0) fb->spec_nonzero++;
    fb->spec_sum += smax;
    if (smax > fb->spec_max) fb->spec_max = smax;

    fb->specA_sum += sa;
    if (sa < fb->specA_min) fb->specA_min = sa;
    if (sa > fb->specA_max) fb->specA_max = sa;
    if (sa != 255) fb->specA_not_opaque++;
    fb->specA_hist[sa / HIST_BINS]++;

    TexBucket *tb = tex_bucket_for(g_current_tex);
    if (tb != nullptr) {
        tb->vertices++;
        tb->light_sum += r;
        if (r < tb->light_min) tb->light_min = r;
        if (r > tb->light_max) tb->light_max = r;
        tb->light_hist[r / HIST_BINS]++;
    }
}

extern "C" void nocturne_render_probe_texture(const void *texture_data) {
    g_current_tex = texture_data;
}

extern "C" void nocturne_render_probe_batch(int triangles, int blend_enabled,
                                            unsigned src_blend, unsigned dst_blend,
                                            int alpha_test_enabled, int textured) {
    if (triangles < 0) triangles = 0;
    const unsigned long tris = (unsigned long)triangles;

    g_batches++;
    if (blend_enabled) {
        g_tris_blend_on += tris;

        int slot = -1;
        for (int i = 0; i < g_blend_count; i++) {
            if (g_blends[i].src == src_blend && g_blends[i].dst == dst_blend) {
                slot = i;
                break;
            }
        }
        if (slot < 0 && g_blend_count < MAX_BLEND_BUCKETS) {
            slot = g_blend_count++;
            g_blends[slot].src       = src_blend;
            g_blends[slot].dst       = dst_blend;
            g_blends[slot].triangles = 0;
            g_blends[slot].batches   = 0;
        }
        if (slot >= 0) {
            g_blends[slot].triangles += tris;
            g_blends[slot].batches++;
        }
    } else {
        g_tris_blend_off += tris;
    }
    if (alpha_test_enabled) g_tris_alphatest_on += tris;
    if (!textured)          g_tris_untextured   += tris;
}

extern "C" void nocturne_render_probe_frame(void) {
    g_frames++;
}

extern "C" int nocturne_reset_render_flags(void) {
    memset(g_flags, 0, sizeof(g_flags));
    memset(g_blends, 0, sizeof(g_blends));
    g_flag_count = 0;
    g_blend_count = 0;
    g_have_current = 0;
    g_frames = g_draws = g_polygons = g_vertices = g_batches = 0;
    g_tris_blend_on = g_tris_blend_off = 0;
    g_tris_alphatest_on = g_tris_untextured = 0;
    g_flag_overflow = 0;
    memset(g_tex, 0, sizeof(g_tex));
    g_tex_count = 0;
    g_current_tex = nullptr;
    g_tex_overflow = 0;
    return 1;
}

extern "C" int nocturne_dump_texture_light(const char *path) {
    const char *out = (path != nullptr && path[0] != '\0')
                          ? path : "/tmp/nocturne_texture_light.txt";
    FILE *fp = fopen(out, "w");
    if (fp == nullptr) return 0;

    fprintf(fp, "tridx7 per-texture vertex light\n");
    fprintf(fp, "===============================\n\n");
    fprintf(fp, "Light byte is the diffuse red channel out of buildTLVertex, i.e.\n");
    fprintf(fp, "  red_current >> 8. The software side samples g_VertexRedStart.u32[0]\n");
    fprintf(fp, "  (== red_current >> 1) keyed by the SAME g_CurrentTextureData pointer,\n");
    fprintf(fp, "  so compare (redStart >> 7) against the mean below, texture by texture.\n\n");
    if (g_tex_overflow != 0) {
        fprintf(fp, "!! %lu vertices fell outside the %d texture buckets\n\n",
                g_tex_overflow, MAX_TEX_BUCKETS);
    }
    fprintf(fp, "  %-12s %10s %6s %6s %6s\n", "tex_data", "verts", "min", "mean", "max");

    int order[MAX_TEX_BUCKETS];
    for (int i = 0; i < g_tex_count; i++) order[i] = i;
    for (int i = 0; i < g_tex_count; i++) {
        for (int j = i + 1; j < g_tex_count; j++) {
            if (g_tex[order[j]].vertices > g_tex[order[i]].vertices) {
                int t = order[i]; order[i] = order[j]; order[j] = t;
            }
        }
    }
    for (int k = 0; k < g_tex_count; k++) {
        const TexBucket *b = &g_tex[order[k]];
        if (b->vertices == 0) continue;
        fprintf(fp, "  %-12p %10lu %6u %6.1f %6u\n",
                b->tex, b->vertices,
                (b->light_min == 0x100) ? 0 : b->light_min,
                (double)b->light_sum / (double)b->vertices,
                b->light_max);
    }
    fclose(fp);
    return 1;
}

extern "C" int nocturne_dump_render_flags(const char *path) {
    const char *out = (path != nullptr && path[0] != '\0')
                          ? path : "/tmp/nocturne_render_flags.txt";
    FILE *fp = fopen(out, "w");
    if (fp == nullptr) {
        DDRAW_LOG("render_probe: cannot open %s", out);
        return 0;
    }

    fprintf(fp, "tridx7 render probe\n");
    fprintf(fp, "===================\n\n");
    fprintf(fp, "frames presented      %lu\n", g_frames);
    fprintf(fp, "APIDLL draw calls     %lu\n", g_draws);
    fprintf(fp, "polygons submitted    %lu", g_polygons);
    if (g_frames != 0) fprintf(fp, "   (%.1f / frame)", (double)g_polygons / (double)g_frames);
    fprintf(fp, "\n");
    fprintf(fp, "vertices converted    %lu", g_vertices);
    if (g_frames != 0) fprintf(fp, "   (%.1f / frame)", (double)g_vertices / (double)g_frames);
    fprintf(fp, "\n");
    fprintf(fp, "glDrawElements calls  %lu\n", g_batches);
    if (g_flag_overflow != 0) {
        fprintf(fp, "\n!! %lu draws fell outside the %d flag buckets — combos are being lost\n",
                g_flag_overflow, MAX_FLAG_BUCKETS);
    }

    fprintf(fp, "\nQ1 — is anything reaching the hardware at all?\n");
    fprintf(fp, "  If polygons/frame is ~0 the accel path is not being taken and the\n");
    fprintf(fp, "  frame differences come from somewhere else entirely.\n");

    fprintf(fp, "\nQ2 — render_flags combos (sorted by polygon count)\n");
    fprintf(fp, "  entry: [drawPolygon drawPolygon2 drawPolyList drawPolyList2]\n\n");
    fprintf(fp, "  %-8s %-52s %10s %10s  %s\n",
            "flags", "decoded", "polys", "verts", "entry");

    // Selection sort by polygons; at most 64 buckets.
    int order[MAX_FLAG_BUCKETS];
    for (int i = 0; i < g_flag_count; i++) order[i] = i;
    for (int i = 0; i < g_flag_count; i++) {
        for (int j = i + 1; j < g_flag_count; j++) {
            if (g_flags[order[j]].polygons > g_flags[order[i]].polygons) {
                int t = order[i]; order[i] = order[j]; order[j] = t;
            }
        }
    }

    for (int k = 0; k < g_flag_count; k++) {
        const FlagBucket *b = &g_flags[order[k]];
        char decoded[128];
        decode_flags(b->flags, decoded, sizeof(decoded));
        fprintf(fp, "  %#-8x %-52s %10lu %10lu  [%lu %lu %lu %lu]\n",
                b->flags, decoded, b->polygons, b->vertices,
                b->entry[0], b->entry[1], b->entry[2], b->entry[3]);
    }

    fprintf(fp, "\nQ3 — vertex colors out of buildTLVertex, per flag combo\n");
    fprintf(fp, "  light   = diffuse red byte (R=G=B on the monochrome light path)\n");
    fprintf(fp, "  alpha   = diffuse alpha; a cluster at ~128 with blending on is the\n");
    fprintf(fp, "            50%%-blend fingerprint that explains on = 0.5*off + 12\n");
    fprintf(fp, "  specA   = specular ALPHA, which is where D3D7 carries the\n");
    fprintf(fp, "            per-vertex FOG FACTOR (255 unfogged, 0 solid fog).\n");
    fprintf(fp, "            GL's secondary colour is 3 components so this byte\n");
    fprintf(fp, "            is dropped today. 255 everywhere means implementing\n");
    fprintf(fp, "            vertex fog in the shader would change nothing.\n");
    fprintf(fp, "  spec    = specular RGB; 0 everywhere means the overbright term\n");
    fprintf(fp, "            never engages (expected below light 0xff0 pre-shift)\n");
    fprintf(fp, "  rgbne   = vertices whose diffuse RGB are not all equal (the 0x200\n");
    fprintf(fp, "            per-vertex-RGB path rather than the light path)\n");
    fprintf(fp, "  hist bins are 16 wide over 0..255, shown as %% of that combo\n\n");

    for (int k = 0; k < g_flag_count; k++) {
        const FlagBucket *b = &g_flags[order[k]];
        if (b->vertices == 0) continue;
        char decoded[128];
        decode_flags(b->flags, decoded, sizeof(decoded));
        const unsigned light_min = (b->light_min > 0xff) ? 0 : b->light_min;
        fprintf(fp, "  %#x  %s\n", b->flags, decoded);
        fprintf(fp,
                "    light  min %3u  mean %6.1f  max %3u\n",
                light_min, (double)b->light_sum / (double)b->vertices, b->light_max);
        write_hist(fp, "light", b->light_hist, b->vertices);
        fprintf(fp, "    alpha  mean %6.1f\n",
                (double)b->alpha_sum / (double)b->vertices);
        write_hist(fp, "alpha", b->alpha_hist, b->vertices);
        fprintf(fp,
                "    spec   nonzero %lu/%lu (%.1f%%)  mean %5.2f  max %u\n",
                b->spec_nonzero, b->vertices,
                100.0 * (double)b->spec_nonzero / (double)b->vertices,
                (double)b->spec_sum / (double)b->vertices, b->spec_max);
        {
            const unsigned specA_min = (b->specA_min > 0xff) ? 0 : b->specA_min;
            fprintf(fp,
                    "    specA  min %3u  mean %6.1f  max %3u   != 255 on %lu/%lu (%.1f%%)\n",
                    specA_min, (double)b->specA_sum / (double)b->vertices,
                    b->specA_max, b->specA_not_opaque, b->vertices,
                    100.0 * (double)b->specA_not_opaque / (double)b->vertices);
            write_hist(fp, "specA", b->specA_hist, b->vertices);
        }
        fprintf(fp, "    rgbne  %lu/%lu\n\n", b->rgb_unequal, b->vertices);
    }

    fprintf(fp, "GL state the batches were drawn under\n");
    fprintf(fp, "  triangles with GL_BLEND on   %lu\n", g_tris_blend_on);
    fprintf(fp, "  triangles with GL_BLEND off  %lu\n", g_tris_blend_off);
    fprintf(fp, "  triangles with ALPHA_TEST    %lu\n", g_tris_alphatest_on);
    fprintf(fp, "  triangles untextured         %lu\n", g_tris_untextured);
    if (g_blend_count != 0) {
        fprintf(fp, "\n  blend funcs in use (GL enums):\n");
        for (int i = 0; i < g_blend_count; i++) {
            fprintf(fp, "    src %#-8x dst %#-8x  %10lu tris  %lu batches\n",
                    g_blends[i].src, g_blends[i].dst,
                    g_blends[i].triangles, g_blends[i].batches);
        }
    }

    fclose(fp);
    DDRAW_LOG("render_probe: wrote %s (%lu frames, %lu polys, %lu verts)",
              out, g_frames, g_polygons, g_vertices);
    return 1;
}
