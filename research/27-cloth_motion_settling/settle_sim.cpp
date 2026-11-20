// Standalone replica of CCloth_step / applyConstraints for a still body:
// no wind, no body motion, no yaw. Measures whether the cloth comes to rest.
//
// A tube of cloth (16 around, 12 down) hangs from a locked top row around a
// vertical collision cylinder, like a coat around a leg. Build and run:
//   g++ -O2 -o settle_sim settle_sim.cpp && ./settle_sim [options]
// Options: exact (exact sqrt in the springs), exactcol (exact sqrt in the
// inside test), push=F (push-out factor, shipped 1.05), cyl=R (cylinder
// radius; the cloth's is 0.5), damp=, spring=, dt=, jitter=F (frame time
// varies by +-F), nocollide, flat (a flat sheet clear of the body).
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>

struct V { float x, y, z; };
static V operator-(V a, V b) { return {a.x - b.x, a.y - b.y, a.z - b.z}; }

static bool g_fast = true;
static bool g_fast_col = true;
static float g_push = 1.05f;
static float fastSqrt(float v) {
    if (!g_fast) return std::sqrt(v);
    int32_t b; std::memcpy(&b, &v, 4); b = (b >> 1) + 0x1fc00000;
    float r; std::memcpy(&r, &b, 4); return r;
}
static float fastInvSqrt(float v) { return 1.0f / std::sqrt(v); }

struct Vert {
    V p, sv, prev; int locked = 0; std::vector<int> nb; std::vector<float> rest; int body = 0;
};

struct Cfg { float weight = 0.25f, gravity = 32, dampen = 0.95f, spring = 0.025f, body_friction = 0.5f;
             bool collide = true; float cyl_r = 0.5f; float cloth_r = 0.5f; float dt = 1.0f / 60; bool tube = true;
             float jitter = 0.0f; };

int main(int argc, char **argv) {
    Cfg c;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "exact")) g_fast = false;
        else if (!strcmp(argv[i], "nocollide")) c.collide = false;
        else if (!strcmp(argv[i], "exactcol")) g_fast_col = false;
        else if (!strncmp(argv[i], "push=", 5)) g_push = atof(argv[i] + 5);
        else if (!strcmp(argv[i], "flat")) c.tube = false;
        else if (!strncmp(argv[i], "cyl=", 4)) c.cyl_r = atof(argv[i] + 4);
        else if (!strncmp(argv[i], "damp=", 5)) c.dampen = atof(argv[i] + 5);
        else if (!strncmp(argv[i], "spring=", 7)) c.spring = atof(argv[i] + 7);
        else if (!strncmp(argv[i], "dt=", 3)) c.dt = atof(argv[i] + 3);
        else if (!strncmp(argv[i], "jitter=", 7)) c.jitter = atof(argv[i] + 7);
    }
    // Grid: W around, H down. Tube of radius cloth_r around a vertical cylinder, or a flat sheet.
    const int W = 16, H = 12; const float drop = 0.25f;
    std::vector<Vert> v(W * H);
    for (int j = 0; j < H; j++)
        for (int i = 0; i < W; i++) {
            Vert &q = v[j * W + i];
            if (c.tube) { float a = 2 * M_PI * i / W; q.p = {c.cloth_r * cosf(a), -j * drop, c.cloth_r * sinf(a)}; }
            else q.p = {i * drop - W * drop / 2, -j * drop, c.cloth_r};
            q.locked = (j == 0);
        }
    // Quad edges; connect only to neighbours at the same height or above (initializeConnections).
    auto link = [&](int a, int b) {
        if (v[a].p.y <= v[b].p.y) { V d = v[a].p - v[b].p; v[a].nb.push_back(b); v[a].rest.push_back(std::sqrt(d.x*d.x+d.y*d.y+d.z*d.z)); }
    };
    for (int j = 0; j < H; j++)
        for (int i = 0; i < W; i++) {
            int a = j * W + i;
            int r = c.tube ? j * W + (i + 1) % W : (i + 1 < W ? a + 1 : -1);
            if (r >= 0) { link(a, r); link(r, a); }
            if (j + 1 < H) { link(a, a + W); link(a + W, a); }
        }
    // Sort: highest first, then smaller |x| (setup).
    std::vector<int> order(W * H);
    for (int i = 0; i < W * H; i++) order[i] = i;
    std::stable_sort(order.begin(), order.end(), [&](int a, int b) {
        if (v[a].p.y != v[b].p.y) return v[a].p.y > v[b].p.y; return fabsf(v[a].p.x) < fabsf(v[b].p.x); });

    const float inv_dt = 1.0f / c.dt, mass = c.weight / c.gravity;
    srand(1);
    auto constrain = [&](Vert &q) {
        for (size_t k = 0; k < q.nb.size(); k++) {
            Vert &o = v[q.nb[k]];
            V d = q.p - o.p; float len = fastSqrt(d.x*d.x + d.y*d.y + d.z*d.z), rest = q.rest[k];
            if (rest < len) { float s = (len - rest) / len; V m = {d.x*s, d.y*s, d.z*s};
                q.p = q.p - m; q.sv = q.sv - V{m.x*inv_dt, m.y*inv_dt, m.z*inv_dt}; }
            if (len < rest) { float s = (rest - len) / len * c.spring; V m = {d.x*s, d.y*s, d.z*s};
                q.p = {q.p.x+m.x, q.p.y+m.y, q.p.z+m.z}; q.sv = {q.sv.x+m.x*inv_dt, q.sv.y+m.y*inv_dt, q.sv.z+m.z*inv_dt}; }
        }
        if (c.collide && q.p.y <= 0 && q.p.y >= -H * drop) { // vertical cylinder, axis down from y=0
            float a = q.p.x, b = q.p.z, n2 = (a*a + b*b) / (c.cyl_r * c.cyl_r);
            float n = g_fast_col ? fastSqrt(n2) : std::sqrt(n2);
            if (n < 1) { float is = fastInvSqrt(a*a + b*b);
                V np = {c.cyl_r * g_push * a * is, q.p.y, c.cyl_r * g_push * b * is};
                q.sv = {q.sv.x + (np.x-q.p.x)*inv_dt, q.sv.y, q.sv.z + (np.z-q.p.z)*inv_dt}; q.p = np; q.body = 1; }
        }
    };
    const int frames = 6000;
    double ke_tail = 0, move_tail = 0, maxmove_tail = 0;
    for (int f = 0; f < frames; f++) {
        float dt = c.dt * (1.0f + c.jitter * ((rand() / (float)RAND_MAX) * 2 - 1));
        for (auto &q : v) { q.body = 0; q.prev = q.p; }
        for (int idx : order) { Vert &q = v[idx]; if (q.locked) continue;
            q.sv = {q.sv.x*c.dampen, q.sv.y*c.dampen, q.sv.z*c.dampen};
            V acc = {0, -c.weight / mass, 0};
            q.sv = {q.sv.x + acc.x*dt, q.sv.y + acc.y*dt, q.sv.z + acc.z*dt};
            q.p = {q.p.x + q.sv.x*dt, q.p.y + q.sv.y*dt, q.p.z + q.sv.z*dt};
            constrain(q); }
        for (int pass = 0; pass < 5; pass++) for (int idx : order) if (!v[idx].locked) constrain(v[idx]);
        for (auto &q : v) if (q.body) q.sv = {q.sv.x*c.body_friction, q.sv.y*c.body_friction, q.sv.z*c.body_friction};
        if (f >= frames - 600) {
            for (auto &q : v) { V d = q.p - q.prev; double m = std::sqrt(d.x*d.x+d.y*d.y+d.z*d.z);
                move_tail += m; maxmove_tail = std::max(maxmove_tail, m);
                ke_tail += q.sv.x*q.sv.x + q.sv.y*q.sv.y + q.sv.z*q.sv.z; }
        }
        if (f % 600 == 0 || f == frames - 1) {
            double mx = 0; int col = 0; for (auto &q : v) { V d = q.p - q.prev; mx = std::max(mx, (double)std::sqrt(d.x*d.x+d.y*d.y+d.z*d.z)); col += q.body; }
            printf("  frame %5d  max move/frame %.6f  colliding %d\n", f, mx, col);
        }
    }
    printf("last 10 s: mean move/vertex/frame %.6f  max %.6f  mean |sv|^2 %.6f\n",
           move_tail / (600.0 * W * H), maxmove_tail, ke_tail / (600.0 * W * H));
}
