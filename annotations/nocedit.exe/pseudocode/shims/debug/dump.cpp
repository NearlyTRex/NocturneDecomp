// =============================================================================
// DEBUG DUMP TOOLS — implementation
// =============================================================================
//
// See dump.h for the public API and shim_config_debug.h for the build-time
// toggle.

#include "debug/dump.h"
#include "shim_config.h"

#if NOCTURNE_DUMP_TOOLS

#include "nocturne.h"
#include <cmath>
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
    std::fprintf(f, "g_VertexRedStart:    %u\n", g_VertexRedStart.u32[0]);
    std::fprintf(f, "g_VertexRedDelta:    %u\n", g_VertexRedDelta.u32[0]);
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

// =============================================================================
// Actor state dump — generic, typed via class-hash dispatch
// =============================================================================

static void dump_actor_fields(FILE *f, CDemonActor *a)
{
    char name[33];
    std::memcpy(name, a->actor_name, 32);
    name[32] = '\0';
    std::fprintf(f, "[CDemonActor]\n");
    std::fprintf(f, "name:       %s\n", name);
    std::fprintf(f, "ptr:        %p\n", (void *)a);
    std::fprintf(f, "position:   (%.4f, %.4f, %.4f)\n",
                 a->location.position.x, a->location.position.y, a->location.position.z);
    std::fprintf(f, "area_id:    %d\n", a->location.area_id);
    std::fprintf(f, "orient_vec: (%.4f, %.4f, %.4f)\n",
                 a->orient.vec.x, a->orient.vec.y, a->orient.vec.z);
    // The 3x3 orientation matrix is what the renderer actually multiplies
    // vertices by for body rotation. Print all 9 cells; mismatch with
    // orient_vec implies they're being updated by different code paths.
    std::fprintf(f, "orient_matrix:\n");
    for (int r = 0; r < 3; ++r) {
        std::fprintf(f, "  [%.4f %.4f %.4f]\n",
                     a->orient_matrix.m[r].x,
                     a->orient_matrix.m[r].y,
                     a->orient_matrix.m[r].z);
    }
    // Derived yaw from the matrix: atan2(m02, m00). Cheaper to read across
    // a long file than the matrix.
    {
        float yaw = std::atan2(a->orient_matrix.m[0].z, a->orient_matrix.m[0].x);
        std::fprintf(f, "matrix_yaw: %.4f rad (%.2f deg)\n",
                     yaw, yaw * 57.29577951f);
    }
    std::fprintf(f, "lifecycle:  %d\n", (int)a->lifecycle_state);
    std::fprintf(f, "health:     %d\n", a->health);
    std::fprintf(f, "runtime_state:    %d\n", a->runtime_state);
    std::fprintf(f, "is_renderable:    %d\n", a->is_renderable);
    std::fprintf(f, "is_transparent:   %d\n", a->is_transparent);
    std::fprintf(f, "collision_disabled: %d\n", a->collision_disabled);
    std::fprintf(f, "process_disabled:   %d\n", a->process_disabled);
    std::fprintf(f, "scale:       (%d, %d, %d)\n",
                 a->scale.x, a->scale.y, a->scale.z);
    std::fprintf(f, "standing_platform: %p\n", (void *)a->standing_platform);
}

static void dump_character_fields(FILE *f, CCharacter *c)
{
    std::fprintf(f, "\n[CCharacter]\n");
    std::fprintf(f, "is_on_ground:    %d\n", c->is_on_ground);
    std::fprintf(f, "closest_distance_threshold: %.4f\n", c->closest_distance_threshold);
    std::fprintf(f, "velocity:        (%.4f, %.4f, %.4f)\n",
                 c->velocity.x, c->velocity.y, c->velocity.z);
    std::fprintf(f, "position_delta:  (%.4f, %.4f, %.4f)\n",
                 c->position_delta.x, c->position_delta.y, c->position_delta.z);
    std::fprintf(f, "walk_step_speed: %.4f\n", c->walk_step_speed);
    std::fprintf(f, "turn_speed:      %.4f\n", c->turn_speed);
    std::fprintf(f, "hit_points:      %.2f / %.2f\n", c->hit_points, c->max_hit_points);
    std::fprintf(f, "size_scale:      %.4f\n", c->size_scale);
    std::fprintf(f, "collision_cylinder_height: %.4f\n", c->collision_cylinder_height);
    std::fprintf(f, "collision_cylinder_radius: %.4f\n", c->collision_cylinder_radius);
    std::fprintf(f, "collision_cylinder_bottom: %.4f\n", c->collision_cylinder_bottom);
    std::fprintf(f, "collision_cylinder_top:    %.4f\n", c->collision_cylinder_top);
    char dn[101];
    std::memcpy(dn, c->descriptive_name, 100);
    dn[100] = '\0';
    std::fprintf(f, "descriptive_name: %s\n", dn);

    // Skeleton root pose. The renderer multiplies world-space verts by
    // bone_world_matrices[i] for each skinned vertex. If the actor's
    // orient_matrix rotates per frame but the root bone matrix doesn't,
    // the body will appear visually static. bone_world_matrices[0] is the
    // root bone — usually the pelvis or hips.
    CMatrix3x4f &root = c->model.bone_transform.bone_world_matrices[0];
    std::fprintf(f, "root_pose_position: (%.4f, %.4f, %.4f)\n",
                 c->model.bone_transform.pose_data.root_position.x,
                 c->model.bone_transform.pose_data.root_position.y,
                 c->model.bone_transform.pose_data.root_position.z);
    std::fprintf(f, "root_bone_world_matrix:\n");
    for (int r = 0; r < 3; ++r) {
        std::fprintf(f, "  [%.4f %.4f %.4f %.4f]\n",
                     root.m[r].x, root.m[r].y, root.m[r].z, root.m[r].w);
    }
    {
        float yaw = std::atan2(root.m[0].z, root.m[0].x);
        std::fprintf(f, "root_bone_yaw: %.4f rad (%.2f deg)\n",
                     yaw, yaw * 57.29577951f);
    }
    // Root quaternion (driven by motion blender / applyRotationToHierarchy).
    CQuaternion4f &q0 = c->model.bone_transform.pose_data.bone_rotations[0];
    std::fprintf(f, "root_bone_quat: (w=%.4f x=%.4f y=%.4f z=%.4f)\n",
                 q0.w, q0.x, q0.y, q0.z);

    // Scan all 100 bones for NaN or non-unit quaternions. Unit quat:
    // w^2 + x^2 + y^2 + z^2 == 1. A bone with a wildly-off-unit rotation
    // indicates the motion blender applied garbage (e.g. uninit quaternion
    // locals multiplied together) — the renderer will explode the verts
    // skinned to that bone.
    std::fprintf(f, "anomalous_bones (|len2 - 1| > 0.01 or NaN):\n");
    int anomalous = 0;
    for (int b = 0; b < 100; ++b) {
        CQuaternion4f &q = c->model.bone_transform.pose_data.bone_rotations[b];
        bool nan = std::isnan(q.w) || std::isnan(q.x) ||
                   std::isnan(q.y) || std::isnan(q.z);
        float len2 = q.w*q.w + q.x*q.x + q.y*q.y + q.z*q.z;
        if (nan || std::fabs(len2 - 1.0f) > 0.01f) {
            std::fprintf(f, "  bone[%3d]: w=%.4f x=%.4f y=%.4f z=%.4f  |len2=%.4f%s\n",
                         b, q.w, q.x, q.y, q.z, len2, nan ? " NaN" : "");
            anomalous++;
        }
    }
    if (anomalous == 0) {
        std::fprintf(f, "  (none — all bone quaternions are unit-length)\n");
    }
    else {
        std::fprintf(f, "  total anomalous: %d / 100\n", anomalous);
    }
}

static void dump_hero_fields(FILE *f, CHero *h)
{
    std::fprintf(f, "\n[CHero]\n");
    std::fprintf(f, "invincibility_timer: %.4f\n", h->invincibility_timer);
    std::fprintf(f, "control_type:        %d\n", (int)h->control_type);
    std::fprintf(f, "aim_mode:            %d\n", (int)h->aim_mode);
    std::fprintf(f, "ai_task:             %d\n", (int)h->ai_task);
    std::fprintf(f, "is_wearing_gas_mask: %d\n", h->is_wearing_gas_mask);
    std::fprintf(f, "target_actor:        %p\n", (void *)h->target_actor);
    std::fprintf(f, "target_position:     (%.4f, %.4f, %.4f)\n",
                 h->target_position.x, h->target_position.y, h->target_position.z);
}

static void dump_stranger_fields(FILE *f, CStranger *s)
{
    std::fprintf(f, "\n[CStranger]\n");
    std::fprintf(f, "guns_drawn:       %d\n", s->guns_drawn);
    std::fprintf(f, "aim_pitch:        %.4f\n", s->aim_pitch);
    std::fprintf(f, "weapon:           %p\n", (void *)s->weapon);
    std::fprintf(f, "airborne_timer:   %.4f\n", s->airborne_timer);
    std::fprintf(f, "fall_velocity_snapshot: %.4f\n", s->fall_velocity_snapshot);
    std::fprintf(f, "pending_velocity: (%.4f, %.4f, %.4f)\n",
                 s->pending_velocity.x, s->pending_velocity.y, s->pending_velocity.z);
}

extern "C" int nocturne_dump_actor_state(const char *path, CDemonActor *actor)
{
    if (path == nullptr) return -1;
    FILE *f = std::fopen(path, "w");
    if (f == nullptr) return -1;

    std::fprintf(f, "=== Nocturne Actor State Dump ===\n");
    write_timestamp(f);
    std::fprintf(f, "\n");

    if (actor == nullptr) {
        std::fprintf(f, "<actor is null>\n");
        std::fclose(f);
        return 0;
    }

    // Walk the inheritance chain — most-derived first. castToClassHash returns
    // non-null when the actor is-a (or extends) the named class.
    dump_actor_fields(f, actor);
    CStranger *as_stranger = (CStranger *)core_actor_cpp_castToClassHash_FUN_0040c790(
        actor, g_CStrangerClassInfo.name_hash);
    CHero *as_hero = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790(
        actor, g_CHeroClassInfo.name_hash);
    CCharacter *as_character = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c790(
        actor, g_CCharacterClassInfo.name_hash);
    if (as_character) dump_character_fields(f, as_character);
    if (as_hero)      dump_hero_fields(f, as_hero);
    if (as_stranger)  dump_stranger_fields(f, as_stranger);

    std::fclose(f);
    return 0;
}

// =============================================================================
// Ground probes — point + cylinder sweep at a given position
// =============================================================================

extern "C" int nocturne_dump_ground_probes(const char *path, CVector3f *pos)
{
    if (path == nullptr || pos == nullptr) return -1;
    FILE *f = std::fopen(path, "w");
    if (f == nullptr) return -1;

    std::fprintf(f, "=== Nocturne Ground Probes ===\n");
    write_timestamp(f);
    std::fprintf(f, "probe position: (%.4f, %.4f, %.4f)\n\n",
                 pos->x, pos->y, pos->z);

    // radius=0 hits the point-query getGroundHeight path; >0 goes to
    // cylinderGroundCheck which iterates neighbor cubes. Sweeping radii
    // shows whether the bug is "no ground at all" (every probe NaN) vs
    // "no ground in this single cube but yes in neighbors" (radius=0
    // misses, radius>=1 hits).
    float radii[] = {0.0f, 0.5f, 1.0f, 2.0f, 5.0f};
    for (size_t i = 0; i < sizeof(radii)/sizeof(radii[0]); i++) {
        CVector3f probe = *pos;
        float gh = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0(
            &g_CDemonSetInstance, &probe, radii[i]);
        std::fprintf(f, "  radius=%.1f  ground=%.4f  (delta=%.4f)\n",
                     radii[i], gh, pos->y - gh);
    }

    std::fclose(f);
    return 0;
}

// =============================================================================
// Collision grid — extent, optional per-position neighborhood, and triangles
// =============================================================================

static const char *triangle_kind(float ny)
{
    if (ny >  0.7f) return "FLOOR-up";
    if (ny < -0.7f) return "FLOOR-dn";
    return "wall    ";
}

static void dump_cube_triangles(FILE *f, CDemonRaytrace *rt,
                                int xi, int yi, int zi, const char *label)
{
    CDemonCube *cube = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(
        rt, xi, yi, zi);
    if (cube == nullptr || cube->triangle_count <= 0) return;
    std::fprintf(f, "\n%s (x=%d, y=%d, z=%d, %d tris):\n",
                 label, xi, yi, zi, cube->triangle_count);
    char *base = (char *)cube->triangle_buffer;
    for (int t = 0; t < cube->triangle_count; t++) {
        CDemonCubeTriangle *ct = (CDemonCubeTriangle *)(base + t * 0x20);
        CVector3f *v0 = ct->triangle.vertices[0];
        CVector3f *v1 = ct->triangle.vertices[1];
        CVector3f *v2 = ct->triangle.vertices[2];
        std::fprintf(f, "  tri[%d] %s  dom=%u  normal=(%.3f, %.3f, %.3f)  d=%.3f\n",
                     t, triangle_kind(ct->triangle.normal.y), ct->dominant_axis,
                     ct->triangle.normal.x, ct->triangle.normal.y, ct->triangle.normal.z,
                     ct->triangle.plane_distance);
        std::fprintf(f, "         v0=(%.2f, %.2f, %.2f)  v1=(%.2f, %.2f, %.2f)  v2=(%.2f, %.2f, %.2f)\n",
                     v0->x, v0->y, v0->z, v1->x, v1->y, v1->z, v2->x, v2->y, v2->z);
    }
}

extern "C" int nocturne_dump_collision_grid(const char *path, CVector3f *pos)
{
    if (path == nullptr) return -1;
    FILE *f = std::fopen(path, "w");
    if (f == nullptr) return -1;

    std::fprintf(f, "=== Nocturne Collision Grid Dump ===\n");
    write_timestamp(f);
    std::fprintf(f, "\n");

    CDemonRaytrace *rt = &g_CDemonRaytraceInstance;
    std::fprintf(f, "[Raytrace grid]\n");
    std::fprintf(f, "bbox_min:          (%.2f, %.2f, %.2f)\n",
                 rt->bbox_min.x, rt->bbox_min.y, rt->bbox_min.z);
    std::fprintf(f, "cell_size:         (%.3f, %.3f, %.3f)\n",
                 rt->cell_size.x, rt->cell_size.y, rt->cell_size.z);
    std::fprintf(f, "grid_coord (size): (%d, %d, %d)\n",
                 rt->grid_coord.x, rt->grid_coord.y, rt->grid_coord.z);

    if (pos == nullptr) {
        std::fclose(f);
        return 0;
    }

    // Position-relative neighborhood: where is the position in the grid,
    // what triangles live around it.
    int gx = (int)((pos->x - rt->bbox_min.x) / rt->cell_size.x + 0.5f);
    int gy = (int)((pos->y - rt->bbox_min.y) / rt->cell_size.y + 0.5f);
    int gz = (int)((pos->z - rt->bbox_min.z) / rt->cell_size.z + 0.5f);
    std::fprintf(f, "\n[Position lookup]\n");
    std::fprintf(f, "probe position: (%.4f, %.4f, %.4f)\n", pos->x, pos->y, pos->z);
    std::fprintf(f, "grid index:     (%d, %d, %d)\n", gx, gy, gz);
    std::fprintf(f, "(in_bounds: x=%d y=%d z=%d)\n",
                 (gx >= 0 && gx < rt->grid_coord.x),
                 (gy >= 0 && gy < rt->grid_coord.y),
                 (gz >= 0 && gz < rt->grid_coord.z));

    // Y-column scan: where (along Y) at probe's (x, z) do triangles exist.
    std::fprintf(f, "\nCube triangle counts along Y at (x=%d, z=%d):\n", gx, gz);
    std::fprintf(f, "%-6s %-30s %s\n", "grid_y", "world y range", "triangle_count");
    for (int yi = rt->grid_coord.y - 1; yi >= 0; yi--) {
        CDemonCube *cube = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(
            rt, gx, yi, gz);
        if (cube == nullptr || cube->triangle_count == 0) continue;
        float y0 = rt->bbox_min.y + yi * rt->cell_size.y;
        float y1 = y0 + rt->cell_size.y;
        const char *marker = (yi == gy) ? " <-- probe here" : "";
        std::fprintf(f, "y=%-4d [%7.2f .. %7.2f]      %d%s\n",
                     yi, y0, y1, cube->triangle_count, marker);
    }

    // Triangle dump for the probe's cube + 4 adjacent xz cells.
    if (gy >= 0 && gy < rt->grid_coord.y) {
        dump_cube_triangles(f, rt, gx,   gy, gz,   "Probe's cube");
        dump_cube_triangles(f, rt, gx-1, gy, gz,   "x-1 neighbor");
        dump_cube_triangles(f, rt, gx+1, gy, gz,   "x+1 neighbor");
        dump_cube_triangles(f, rt, gx,   gy, gz-1, "z-1 neighbor");
        dump_cube_triangles(f, rt, gx,   gy, gz+1, "z+1 neighbor");
    }

    // Densest cube in the column — useful to see "what triangles exist
    // somewhere around here" when the probe's cell is sparse.
    int best_y = -1, best_count = 0;
    for (int yi = 0; yi < rt->grid_coord.y; yi++) {
        CDemonCube *c = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(rt, gx, yi, gz);
        if (c != nullptr && c->triangle_count > best_count) {
            best_count = c->triangle_count;
            best_y = yi;
        }
    }
    if (best_y >= 0 && best_y != gy) {
        dump_cube_triangles(f, rt, gx, best_y, gz, "Densest cube in column");
    }

    std::fclose(f);
    return 0;
}

// =============================================================================
// Lighting / vertex pipeline state
// =============================================================================

extern "C" int nocturne_dump_lighting_state(const char *path)
{
    if (path == nullptr) return -1;
    FILE *f = std::fopen(path, "w");
    if (f == nullptr) return -1;

    std::fprintf(f, "=== Nocturne Lighting State Dump ===\n");
    write_timestamp(f);
    std::fprintf(f, "\n");

    std::fprintf(f, "[Per-vertex color gradient (driven into rasterizer)]\n");
    std::fprintf(f, "g_VertexRedStart  : %u\n", g_VertexRedStart.u32[0]);
    std::fprintf(f, "g_VertexRedDelta  : %u\n", g_VertexRedDelta.u32[0]);
    std::fprintf(f, "g_VertexGreenStart: %u\n", g_VertexGreenStart.u32[0]);
    std::fprintf(f, "g_VertexGreenDelta: %u\n", g_VertexGreenDelta.u32[0]);
    std::fprintf(f, "g_VertexBlueStart : %u\n", g_VertexBlueStart.u32[0]);
    std::fprintf(f, "g_VertexBlueDelta : %u\n", g_VertexBlueDelta.u32[0]);
    std::fprintf(f, "g_VertexAlphaStart: %d\n", g_VertexAlphaStart);
    std::fprintf(f, "g_VertexAlphaDelta: %d\n", g_VertexAlphaDelta);
    std::fprintf(f, "\n");

    std::fprintf(f, "[Lighting]\n");
    std::fprintf(f, "g_AmbientLightLevel:        %d\n", g_AmbientLightLevel);
    std::fprintf(f, "g_DynamicLightCount:        %d\n", g_DynamicLightCount);
    std::fprintf(f, "g_SpotLightCount:           %d\n", g_SpotLightCount);
    std::fprintf(f, "g_StaticColorVector:        (%.4f, %.4f, %.4f)\n",
                 g_StaticColorVector.x, g_StaticColorVector.y, g_StaticColorVector.z);
    std::fprintf(f, "g_LightingReferencePosition: (%.4f, %.4f, %.4f)\n",
                 g_LightingReferencePosition.x,
                 g_LightingReferencePosition.y,
                 g_LightingReferencePosition.z);
    std::fprintf(f, "\n");

    int vc = g_VertexCount;
    if (vc > 20000) vc = 20000;
    std::fprintf(f, "[g_VertexCount = %d]\n", vc);

    // Vertex normal sample + magnitude statistics — if our ROUND→TRUNC change
    // shifted normalization output, magnitudes would deviate from ~1.0.
    int sample = vc < 12 ? vc : 12;
    std::fprintf(f, "\n[g_VertexNormalArray sample]\n");
    std::fprintf(f, "%-5s %-10s %-10s %-10s %s\n", "idx", "x", "y", "z", "|n|");
    for (int i = 0; i < sample; i++) {
        float x = g_VertexNormalArray[i].x;
        float y = g_VertexNormalArray[i].y;
        float z = g_VertexNormalArray[i].z;
        float mag = std::sqrt(x*x + y*y + z*z);
        std::fprintf(f, "%-5d %-10.4f %-10.4f %-10.4f %.4f\n", i, x, y, z, mag);
    }

    if (vc > 0) {
        int below_half = 0, near_unit = 0, above_two = 0, nan_count = 0, zero_count = 0;
        float min_mag = 1e30f, max_mag = 0.0f;
        for (int i = 0; i < vc; i++) {
            float x = g_VertexNormalArray[i].x;
            float y = g_VertexNormalArray[i].y;
            float z = g_VertexNormalArray[i].z;
            if (x != x || y != y || z != z) { nan_count++; continue; }
            float mag = std::sqrt(x*x + y*y + z*z);
            if (mag < min_mag) min_mag = mag;
            if (mag > max_mag) max_mag = mag;
            if (mag == 0.0f) zero_count++;
            else if (mag < 0.5f) below_half++;
            else if (mag < 2.0f) near_unit++;
            else above_two++;
        }
        std::fprintf(f, "\n[Normal magnitude histogram across all %d normals]\n", vc);
        std::fprintf(f, "  zero  : %d\n", zero_count);
        std::fprintf(f, "  <0.5  : %d\n", below_half);
        std::fprintf(f, "  ~unit : %d  (mag in [0.5, 2.0))\n", near_unit);
        std::fprintf(f, "  >=2.0 : %d\n", above_two);
        std::fprintf(f, "  NaN   : %d\n", nan_count);
        std::fprintf(f, "  min   : %.4f\n", min_mag);
        std::fprintf(f, "  max   : %.4f\n", max_mag);
    }

    // Transformed (post-camera, post-projection) vertex sample.
    std::fprintf(f, "\n[g_TransformedVertexArray sample (CVector3i, fixed-point 8.8 in many places)]\n");
    std::fprintf(f, "%-5s %-12s %-12s %s\n", "idx", "x", "y", "z");
    for (int i = 0; i < sample; i++) {
        std::fprintf(f, "%-5d %-12d %-12d %d\n",
                     i,
                     g_TransformedVertexArray[i].x,
                     g_TransformedVertexArray[i].y,
                     g_TransformedVertexArray[i].z);
    }

    std::fclose(f);
    return 0;
}

// =============================================================================
// Bake signature — the engine's per-pixel lighting inputs and outputs
// =============================================================================
//
// setCameraView rebuilds the whole static-lighting bake: it re-renders the
// scene into the camera Z-buffer, derives per-pixel world positions and
// normals from it (precomputeNormals), reloads the backdrop, and then projects
// every visible spot light onto those positions (precomputeLight), leaving the
// per-scanline lit extents and the per-pixel corona buffers behind.
//
// Scalar lighting globals cannot distinguish two bakes that consumed different
// per-pixel inputs. This checksums the inputs (Z-buffer, world positions,
// normals) and the outputs (lit extents, corona buffers) so a bake that
// silently produced a different lit region shows up as a changed number.
//
// Appends one line per call so a run accumulates samples; correlate the tag
// with the screenshot captured a few frames later.

static unsigned long long sig_mix(unsigned long long h, unsigned long long v)
{
    return h * 1000003ull + v;
}

extern "C" int nocturne_dump_bake_signature(const char *path, int tag)
{
    if (path == nullptr) {
        return -1;
    }
    FILE *f = std::fopen(path, "a");
    if (f == nullptr) {
        return -1;
    }

    CDemonCamera *cam = &g_CDemonCameraInstance;
    const int dw = cam->display_width;
    const int dh = cam->display_height;
    const int fw = cam->framebuffer_width;
    const int fh = cam->framebuffer_height;

    // --- bake inputs -------------------------------------------------------
    // Camera Z-buffer: what precomputeNormals reads to reconstruct the world.
    // Both buffers are framebuffer_width * framebuffer_height 32-bit words
    // (CDemonCamera::init allocates them that way).
    unsigned long long zb = 0;
    if (cam->zbuffer_aligned != nullptr && fw > 0 && fh > 0) {
        const unsigned int *z = (const unsigned int *)cam->zbuffer_aligned;
        for (int i = 0; i < fw * fh; i++) {
            zb = sig_mix(zb, z[i]);
        }
    }

    // Backdrop after loadImage + the light passes composite into it.
    unsigned long long fb = 0;
    long long fb_lum = 0;
    if (cam->framebuffer_aligned != nullptr && fw > 0 && fh > 0) {
        const unsigned int *p = (const unsigned int *)cam->framebuffer_aligned;
        for (int i = 0; i < fw * fh; i++) {
            fb = sig_mix(fb, p[i]);
            // Cheap brightness proxy, directly comparable to the screenshot
            // means the two states are identified by.
            fb_lum += (p[i] & 0xff) + ((p[i] >> 8) & 0xff) + ((p[i] >> 16) & 0xff);
        }
    }
    double fb_mean = (fw > 0 && fh > 0) ? (double)fb_lum / (3.0 * fw * fh) : 0.0;

    // precomputeNormals output — the world position / normal of every pixel.
    // Both arrays are sized for the fixed 320x240 precompute grid.
    unsigned long long wp = 0, nrm = 0;
    int wp_zero = 0;
    for (int y = 0; y < 240; y++) {
        for (int x = 0; x < 320; x++) {
            const CVector3i *w = &g_PrecomputedWorldPositions[y * 320 + x];
            if (w->x == 0 && w->y == 0 && w->z == 0) wp_zero++;
            wp = sig_mix(wp, (unsigned int)w->x);
            wp = sig_mix(wp, (unsigned int)w->y);
            wp = sig_mix(wp, (unsigned int)w->z);
            const CVector3f *n = &g_PrecomputedSurfaceNormals[y][x];
            unsigned int nb[3];
            std::memcpy(&nb[0], &n->x, 4);
            std::memcpy(&nb[1], &n->y, 4);
            std::memcpy(&nb[2], &n->z, 4);
            nrm = sig_mix(nrm, nb[0]);
            nrm = sig_mix(nrm, nb[1]);
            nrm = sig_mix(nrm, nb[2]);
        }
    }

    std::fprintf(f,
                 "tag=%d dw=%d dh=%d fw=%d fh=%d zb=%016llx fb=%016llx "
                 "fbmean=%.3f wp=%016llx wpzero=%d nrm=%016llx spot=%d dyn=%d",
                 tag, dw, dh, fw, fh, zb, fb, fb_mean, wp, wp_zero, nrm,
                 g_SpotLightCount, g_DynamicLightCount);

    // --- bake outputs, per spot light --------------------------------------
    for (int li = 0; li < g_SpotLightCount && li < 8; li++) {
        CDemonLight *L = g_SpotLightList[li];
        if (L == nullptr) {
            std::fprintf(f, " | L%d=null", li);
            continue;
        }

        // Lit extents: which pixels of each scanline this light reaches.
        long long lit_px = 0;
        int lit_lines = 0;
        unsigned long long ext = 0;
        for (int y = 0; y < 240; y++) {
            int l = L->left_extent[y];
            int r = L->right_extent[y];
            ext = sig_mix(ext, (unsigned int)l);
            ext = sig_mix(ext, (unsigned int)r);
            if (r > l) {
                lit_lines++;
                lit_px += (r - l + 1);
            }
        }

        // Per-pixel corona buffers over the whole 320x240 precompute grid.
        unsigned long long vis = 0, lm = 0;
        int vis_nonzero = 0;
        if (L->corona_visibility_buffers != nullptr) {
            const int *v = L->corona_visibility_buffers;
            for (int i = 0; i < 320 * 240; i++) {
                if (v[i] != 0) vis_nonzero++;
                vis = sig_mix(vis, (unsigned int)v[i]);
            }
        }
        if (L->corona_lightmap_indices != nullptr) {
            const int *m = L->corona_lightmap_indices;
            for (int i = 0; i < 320 * 240; i++) {
                lm = sig_mix(lm, (unsigned int)m[i]);
            }
        }

        // The light's own view transform — precomputeLight projects every
        // world position through this and rejects anything landing behind the
        // light, so a bad transform silently zeroes the whole light.
        CCameraView *V = &L->base.base;
        const CRect *rc = &g_SpotLightBounds[li];

        std::fprintf(f,
                     " | L%d en=%d px=%lld lines=%d ext=%016llx "
                     "vis=%016llx visnz=%d lm=%016llx "
                     "rect=(%d,%d)-(%d,%d) fps=%.4f foc=%.4f dead=%d "
                     "pos=(%.3f,%.3f,%.3f) "
                     "rot=[%.4f %.4f %.4f | %.4f %.4f %.4f | %.4f %.4f %.4f] "
                     "lfw=%d lfh=%d lsc=%d lsw=%d lsh=%d xs=%d ys=%d "
                     "mask=%u tsf=%d mz=%d sdb=%d lvb=%d plt=%d filt=%s",
                     li, L->light_enabled_flag, lit_px, lit_lines, ext,
                     vis, vis_nonzero, lm,
                     rc->x_min, rc->y_min, rc->x_max, rc->y_max,
                     V->fixed_point_scale, V->focal_length, V->dead,
                     V->position.f.x, V->position.f.y, V->position.f.z,
                     V->rotation_matrix.m[0].x, V->rotation_matrix.m[0].y,
                     V->rotation_matrix.m[0].z,
                     V->rotation_matrix.m[1].x, V->rotation_matrix.m[1].y,
                     V->rotation_matrix.m[1].z,
                     V->rotation_matrix.m[2].x, V->rotation_matrix.m[2].y,
                     V->rotation_matrix.m[2].z,
                     L->base.framebuffer_width, L->base.framebuffer_height,
                     L->base.scale_factor,
                     L->shadow_map_width, L->shadow_map_height,
                     L->shadow_x_shift, L->shadow_y_shift,
                     L->texture_coord_mask, L->transform_scale_factor,
                     L->master_zbuffer != nullptr,
                     L->shadow_depth_buffer != nullptr,
                     L->lightmap_visibility_bits != nullptr,
                     L->precomputed_lighting_textures != nullptr,
                     L->filter_name);
    }

    std::fprintf(f, "\n");
    std::fclose(f);
    return 0;
}

// =============================================================================
// Auto-capture sequence — gdb-driven, no in-game hook
// =============================================================================
//
// Designed to be called from a `commands` block on a regular gdb breakpoint
// (e.g. on renderScene). The function manages its own call/written counters
// so the user only needs to set the breakpoint. Pass NULL path to make
// subsequent calls no-ops.

extern "C" void nocturne_auto_capture(const char *path_template,
                                       int every_n, int max_count, int reset)
{
    static int s_call    = 0;
    static int s_written = 0;
    if (reset) {
        s_call    = 0;
        s_written = 0;
    }
    if (path_template == nullptr) return;
    if (s_written >= max_count)   return;
    if (every_n <= 0) every_n = 1;
    if ((s_call++ % every_n) != 0) return;

    // Build screenshot path via the user-supplied template.
    char ppm[256];
    std::snprintf(ppm, sizeof(ppm), path_template, s_written);

    // Sidecar display-list path: replace ".ppm" with ".txt" if present,
    // otherwise append ".txt".
    char dl[256];
    std::snprintf(dl, sizeof(dl), "%s", ppm);
    char *dot = std::strrchr(dl, '.');
    if (dot != nullptr && std::strcmp(dot, ".ppm") == 0) {
        std::strcpy(dot, ".txt");
    } else {
        size_t len = std::strlen(dl);
        if (len + 4 < sizeof(dl)) std::strcpy(dl + len, ".txt");
    }

    nocturne_dump_screenshot(ppm);
    nocturne_dump_display_list(dl);
    s_written++;
}

// =============================================================================
// Auto-dump actor — keyboard-driven continuous capture
// =============================================================================
//
// Used by the user32 hotkeys to record a stream of per-frame actor state
// while the user drives the game. Two slots so player + one NPC can run in
// parallel.

namespace {

struct AutoDumpSlot {
    char           path_template[256];
    CDemonActor   *actor;
    int            counter;
    bool           armed;
};

AutoDumpSlot g_auto_dump_slots[2] = {};

}  // namespace

extern "C" void nocturne_auto_dump_set_slot(int slot, const char *path_template,
                                             CDemonActor *actor)
{
    if (slot < 0 || slot >= 2) return;
    AutoDumpSlot &s = g_auto_dump_slots[slot];

    if (path_template == nullptr) {
        if (s.armed) {
            std::fprintf(stderr, "[auto_dump] slot %d disarmed (%d files written)\n",
                         slot, s.counter);
        }
        s.armed   = false;
        s.actor   = nullptr;
        s.counter = 0;
        return;
    }

    std::snprintf(s.path_template, sizeof(s.path_template), "%s", path_template);
    s.actor   = actor;
    s.counter = 0;
    s.armed   = true;
    std::fprintf(stderr, "[auto_dump] slot %d armed: actor=%p template=\"%s\"\n",
                 slot, (void *)actor, s.path_template);
}

extern "C" int nocturne_auto_dump_is_armed(int slot)
{
    if (slot < 0 || slot >= 2) return 0;
    return g_auto_dump_slots[slot].armed ? 1 : 0;
}

extern "C" void nocturne_auto_dump_tick(void)
{
    // Telemetry: confirm this is actually getting hit at frame rate during
    // gameplay. Append to /tmp/auto_dump_tick.log on every 60th call. If
    // dumps stop appearing during active play but this counter still climbs,
    // the bug is in the slot-armed/dump path. If the counter also stalls,
    // the host loop isn't pumping PeekMessageA's empty branch.
    static int s_tick = 0;
    s_tick++;
    if ((s_tick % 60) == 0) {
        FILE *log = std::fopen("/tmp/auto_dump_tick.log", "a");
        if (log) {
            time_t now = std::time(nullptr);
            std::fprintf(log, "tick=%d slot0_armed=%d slot1_armed=%d t=%lld\n",
                         s_tick,
                         g_auto_dump_slots[0].armed ? 1 : 0,
                         g_auto_dump_slots[1].armed ? 1 : 0,
                         (long long)now);
            std::fclose(log);
        }
    }

    for (int i = 0; i < 2; ++i) {
        AutoDumpSlot &s = g_auto_dump_slots[i];
        if (!s.armed) continue;
        char path[300];
        std::snprintf(path, sizeof(path), s.path_template, s.counter);
        nocturne_dump_actor_state(path, s.actor);
        s.counter++;
    }
}

static CDemonActor *find_player_actor()
{
    if (g_LocalHeroIndex < 0 || g_LocalHeroIndex >= 4) return nullptr;
    return (CDemonActor *)g_HeroActors[g_LocalHeroIndex];
}

static CDemonActor *find_svetlana_actor()
{
    int count = g_CDemonSetInstance.sorted_render_actor_count;
    for (int i = 0; i < count; ++i) {
        CDemonActor *a = g_CDemonSetInstance.sorted_render_actors[i];
        if (a == nullptr) continue;
        if (core_actor_cpp_castToClassHash_FUN_0040c790(a, g_CSvetlanaClassInfo.name_hash))
            return a;
    }
    return nullptr;
}

static int toggle_slot(int slot, const char *path_template, CDemonActor *actor)
{
    if (nocturne_auto_dump_is_armed(slot)) {
        nocturne_auto_dump_set_slot(slot, nullptr, nullptr);
        return 0;
    }
    if (actor == nullptr) {
        std::fprintf(stderr, "[auto_dump] slot %d: actor not found, ignoring toggle\n", slot);
        return -1;
    }
    nocturne_auto_dump_set_slot(slot, path_template, actor);
    return 1;
}

extern "C" int nocturne_auto_dump_toggle_player(void)
{
    return toggle_slot(0, "/tmp/auto_dump_player_%05d.txt", find_player_actor());
}

extern "C" int nocturne_auto_dump_toggle_svetlana(void)
{
    return toggle_slot(1, "/tmp/auto_dump_svetlana_%05d.txt", find_svetlana_actor());
}

#else  // NOCTURNE_DUMP_TOOLS == 0

extern "C" int nocturne_dump_screenshot(const char *path)   { (void)path; return -1; }
extern "C" int nocturne_dump_zbuffer(const char *path)      { (void)path; return -1; }
extern "C" int nocturne_dump_display_list(const char *path) { (void)path; return -1; }
extern "C" int nocturne_dump_actor_state(const char *path, CDemonActor *actor) {
    (void)path; (void)actor; return -1;
}
extern "C" int nocturne_dump_ground_probes(const char *path, CVector3f *pos) {
    (void)path; (void)pos; return -1;
}
extern "C" int nocturne_dump_collision_grid(const char *path, CVector3f *pos) {
    (void)path; (void)pos; return -1;
}
extern "C" void nocturne_auto_capture(const char *path_template,
                                       int every_n, int max_count, int reset) {
    (void)path_template; (void)every_n; (void)max_count; (void)reset;
}
extern "C" int nocturne_dump_lighting_state(const char *path) { (void)path; return -1; }
extern "C" int nocturne_dump_bake_signature(const char *path, int tag) {
    (void)path; (void)tag; return -1;
}
extern "C" void nocturne_auto_dump_set_slot(int slot, const char *path_template,
                                             CDemonActor *actor) {
    (void)slot; (void)path_template; (void)actor;
}
extern "C" int  nocturne_auto_dump_is_armed(int slot) { (void)slot; return 0; }
extern "C" void nocturne_auto_dump_tick(void) {}
extern "C" int  nocturne_auto_dump_toggle_player(void)   { return -1; }
extern "C" int  nocturne_auto_dump_toggle_svetlana(void) { return -1; }

#endif
