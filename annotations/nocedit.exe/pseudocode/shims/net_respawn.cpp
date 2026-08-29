// =============================================================================
// NETPLAY — HOST-SCHEDULED SAFE RESPAWN — implementation
// =============================================================================
//
// See net_respawn.h for what this is and why the respawn is scheduled onto a
// sim frame instead of applied where it is requested.

#include "net_respawn.h"
#include "shim_config.h"

#include "nocturne.h"

#include "debug_log.h"

#include <cmath>
#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY

// g_HeroActors is CHero *[4]; CNetGame only has room for two players, but the
// packet is sized to the hero array so the two never have to agree.
#define RESPAWN_MAX_HEROES 4

// How far ahead of the host's current sim frame the respawn is scheduled. The
// server sends a lagging client at most 5 frames per pass (processServerFrame),
// so this leaves room for a client several passes behind to still receive the
// packet before its simulation reaches the frame.
#define RESPAWN_LEAD_FRAMES 30

// CHero::collision_cylinder_radius, set in CHero::ctor. Used both as the radius
// of the ground query and as the spacing floor between two spawned heroes.
#define RESPAWN_HERO_RADIUS 0.9f

// A candidate whose floor sits more than this above or below the host's own
// footing is rejected. Anything larger is a ledge or a shaft, which is exactly
// the "moved away from the camera and died" case this exists to avoid.
#define RESPAWN_MAX_STEP 1.5f

// Candidates are taken from rings around the host. The innermost clears two
// hero radii, the outermost stays inside a room.
static const float k_ring_radius[] = { 2.0f, 3.0f, 4.5f, 6.0f };
#define RESPAWN_RING_COUNT ((int)(sizeof(k_ring_radius) / sizeof(k_ring_radius[0])))
#define RESPAWN_RING_STEPS 16

#pragma pack(push, 1)
typedef struct SNetPacket_HeroRespawn {
    SNetPacketHeader header;                  // 0x0
    int   apply_sequence;                     // 0x5  sim frame to apply on
    int   hero_count;                         // 0x9
    int   area_id;                            // 0xd
    float position[RESPAWN_MAX_HEROES][3];    // 0x11
    float orient[3];                          // 0x41  shared facing
} SNetPacket_HeroRespawn;                     // 0x4d
#pragma pack(pop)

static SNetPacket_HeroRespawn s_pending;
static int s_have_pending = 0;

static CVector3f s_placeholder_pos;
static int       s_placeholder_area = 0;
static int       s_have_placeholder = 0;

// =============================================================================
// Placeholder capture
// =============================================================================

extern "C" void nocturne_net_respawn_note_placeholder(float x, float y, float z, int area_id)
{
    if (s_have_placeholder) {
        return;                 // first placeholder of the mission wins
    }
    s_placeholder_pos.x = x;
    s_placeholder_pos.y = y;
    s_placeholder_pos.z = z;
    s_placeholder_area  = area_id;
    s_have_placeholder  = 1;
}

extern "C" void nocturne_net_respawn_clear_placeholder(void)
{
    s_have_placeholder = 0;
    s_have_pending     = 0;
}

// =============================================================================
// World queries
// =============================================================================

// Ground height under p, or 0 when there is no floor there.
//
// Neither query has a "missed" return. getGroundHeight and cylinderGroundCheck
// both sweep from p.y + 2 down to p.y - 10 and, when the sweep runs out, return
// that lower bound with the hit flag *set* — so "there is no floor here" reads
// as "the floor is exactly 10 below you", and has to be recognised by the
// bottom-out value rather than by a sentinel or the flag. NaN only comes back
// for a NaN probe position, which is worth refusing on the same grounds.
#define RESPAWN_SWEEP_DEPTH 10.0f

static int respawn_ground_height(const CVector3f *p, float radius, float *out_y)
{
    CVector3f probe = *p;
    float height = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr, &probe, radius);
    if (height != height) {
        return 0;
    }
    if (height <= ((p->y - RESPAWN_SWEEP_DEPTH) + 0.01f)) {
        return 0;                   // sweep bottomed out — a hole, or off the set
    }
    *out_y = height;
    return 1;
}

// How far off the middle of frame p projects, 0 at dead centre and 1 at the
// edge, or 0 when p is not on screen at all.
//
// worldToScreenWithFrustumCull writes g_CameraOutOfBoundsCoord for a culled
// point. That global is never assigned anywhere in the game, so it is {0,0,0}
// and a culled point comes back with z == 0, while every visible point has a
// positive view depth — so `0 < z` is an exact visibility test rather than a
// heuristic. Screen coordinates are 16.16 fixed point (see
// CDemonCamera::beginScene, which offsets them by shake * 0x10000).
static int respawn_screen_offset(const CVector3f *p, float *out_offset)
{
    CDemonCamera *camera = &g_CDemonCameraInstance;
    CVector3i world_fixed;
    CVector3i screen_fixed;
    float half_w;
    float half_h;
    float dx;
    float dy;

    if ((camera->framebuffer_width < 1) || (camera->framebuffer_height < 1)) {
        return 0;
    }

    world_fixed.x = (int)ROUND(p->x * 256.0f);
    world_fixed.y = (int)ROUND(p->y * 256.0f);
    world_fixed.z = (int)ROUND(p->z * 256.0f);
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
        (camera, &world_fixed, &screen_fixed);
    if (screen_fixed.z < 1) {
        return 0;
    }

    half_w = (float)camera->framebuffer_width * 0.5f;
    half_h = (float)camera->framebuffer_height * 0.5f;
    dx = (((float)screen_fixed.x / 65536.0f) - half_w) / half_w;
    dy = (((float)screen_fixed.y / 65536.0f) - half_h) / half_h;
    if ((dx < -1.0f) || (1.0f < dx) || (dy < -1.0f) || (1.0f < dy)) {
        return 0;
    }

    *out_offset = sqrtf(dx * dx + dy * dy);
    return 1;
}

// =============================================================================
// Spot selection
// =============================================================================

static int respawn_too_close(const CVector3f *candidate,
                             const CVector3f *taken, int taken_count)
{
    float min_gap = RESPAWN_HERO_RADIUS * 2.5f;
    int i;

    for (i = 0; i < taken_count; i++) {
        float dx = candidate->x - taken[i].x;
        float dz = candidate->z - taken[i].z;
        if ((dx * dx + dz * dz) < (min_gap * min_gap)) {
            return 1;
        }
    }
    return 0;
}

// Ring search around the host, scored towards the middle of the camera's frame.
// Returns 0 when nothing qualifies, leaving the caller to fall back.
static int respawn_find_spot(const CVector3f *anchor, float anchor_ground,
                             const CVector3f *taken, int taken_count,
                             CVector3f *out)
{
    float best_score = 0.0f;
    int   found = 0;
    int   ring;
    int   step;

    for (ring = 0; ring < RESPAWN_RING_COUNT; ring++) {
        float radius = k_ring_radius[ring];
        for (step = 0; step < RESPAWN_RING_STEPS; step++) {
            float angle = (float)step * (6.2831853f / (float)RESPAWN_RING_STEPS);
            CVector3f candidate;
            float ground_y;
            float offset;
            float score;

            candidate.x = anchor->x + cosf(angle) * radius;
            candidate.y = anchor->y;
            candidate.z = anchor->z + sinf(angle) * radius;

            if (respawn_ground_height(&candidate, RESPAWN_HERO_RADIUS, &ground_y) == 0) {
                continue;                       // no floor — a hole or off the set
            }
            if (RESPAWN_MAX_STEP < fabsf(ground_y - anchor_ground)) {
                continue;                       // a ledge or a shaft
            }
            candidate.y = ground_y;

            if (respawn_too_close(&candidate, taken, taken_count) != 0) {
                continue;
            }
            if (respawn_screen_offset(&candidate, &offset) == 0) {
                continue;                       // behind or outside the camera
            }

            // Centre of frame dominates; the ring index only breaks ties, so a
            // well-framed far spot still beats a badly-framed near one.
            score = offset + (float)ring * 0.05f;
            if ((found == 0) || (score < best_score)) {
                best_score = score;
                *out = candidate;
                found = 1;
            }
        }
    }
    return found;
}

// =============================================================================
// Scheduling and transport
// =============================================================================

static void respawn_broadcast(void)
{
    CNetGame *net_game = g_CNetGamePtr;
    int i;

    for (i = 0; i < net_game->player_count; i++) {
        if (i != net_game->local_player_index) {
            core_netgame_cpp_CNetGame_send_FUN_005411c0(net_game, i, &s_pending.header);
        }
    }
}

extern "C" int nocturne_net_respawn_available(void)
{
    CNetGame *net_game = g_CNetGamePtr;

    if (net_game == (CNetGame *)0x0) {
        return 0;
    }
    if (net_game->connection_type != CONNECTION_HOST) {
        return 0;
    }
    if (net_game->network_mode != NET_MODE_PLAYING) {
        return 0;
    }
    return (1 < net_game->player_count);
}

extern "C" int nocturne_net_respawn_world_area(void)
{
    CHero *local_hero;
    int    i;

    if ((g_LocalHeroIndex < 0) || (RESPAWN_MAX_HEROES <= g_LocalHeroIndex)) {
        return 0;
    }
    local_hero = g_HeroActors[g_LocalHeroIndex];
    if ((local_hero != (CHero *)0x0) && (0 <= (local_hero->base).base.location.area_id)) {
        return (local_hero->base).base.location.area_id;
    }

    // Held out of the world — follow whoever is in it. In practice that is the
    // host, which is also the hero this client is spectating.
    for (i = 0; i < RESPAWN_MAX_HEROES; i++) {
        if ((g_HeroActors[i] != (CHero *)0x0) &&
            (0 <= (g_HeroActors[i]->base).base.location.area_id)) {
            return (g_HeroActors[i]->base).base.location.area_id;
        }
    }
    return 0;
}

extern "C" int nocturne_net_respawn_request(void)
{
    CNetGame *net_game = g_CNetGamePtr;
    CHero    *anchor;
    CVector3f taken[RESPAWN_MAX_HEROES];
    int       taken_count = 0;
    float     anchor_ground;
    int       hero_count;
    int       i;

    if (nocturne_net_respawn_available() == 0) {
        return 0;
    }
    if ((net_game->local_player_index < 0) || (RESPAWN_MAX_HEROES <= g_LocalHeroIndex)) {
        return 0;
    }
    anchor = g_HeroActors[g_LocalHeroIndex];
    if (anchor == (CHero *)0x0) {
        return 0;
    }

    hero_count = g_HeroCount;
    if (RESPAWN_MAX_HEROES < hero_count) {
        hero_count = RESPAWN_MAX_HEROES;
    }

    // The host stays where it is: it is the reference for "safe", and moving
    // the player who opened the menu is not what the item offers.
    if (respawn_ground_height(&(anchor->base).base.location.position,
                              RESPAWN_HERO_RADIUS, &anchor_ground) == 0) {
        anchor_ground = (anchor->base).base.location.position.y;
    }

    std::memset(&s_pending, 0, sizeof(s_pending));
    s_pending.header.size = sizeof(SNetPacket_HeroRespawn);
    s_pending.header.type = PACKET_UNUSED;
    s_pending.hero_count  = hero_count;
    s_pending.area_id     = (anchor->base).base.location.area_id;
    s_pending.orient[0]   = (anchor->base).base.orient.vec.x;
    s_pending.orient[1]   = (anchor->base).base.orient.vec.y;
    s_pending.orient[2]   = (anchor->base).base.orient.vec.z;

    for (i = 0; i < hero_count; i++) {
        CHero    *hero = g_HeroActors[i];
        CVector3f spot;

        if (hero == (CHero *)0x0) {
            continue;
        }
        if (i == g_LocalHeroIndex) {
            spot = (hero->base).base.location.position;
        }
        else if (respawn_find_spot(&(anchor->base).base.location.position, anchor_ground,
                                   taken, taken_count, &spot) == 0) {
            // Nothing near the host qualified. The mission's own placeholder is
            // the one spot a designer placed a hero on, so it is the safest
            // thing left to offer — even though it may be across the map.
            if (s_have_placeholder != 0) {
                spot              = s_placeholder_pos;
                s_pending.area_id = s_placeholder_area;
            }
            else {
                spot = (anchor->base).base.location.position;
            }
        }

        taken[taken_count] = spot;
        taken_count        = taken_count + 1;

        s_pending.position[i][0] = spot.x;
        s_pending.position[i][1] = spot.y;
        s_pending.position[i][2] = spot.z;
    }

    s_pending.apply_sequence =
        net_game->players[net_game->local_player_index].sim_frame_index + RESPAWN_LEAD_FRAMES;
    s_have_pending = 1;
    respawn_broadcast();

    DLOG_EX("netplay", "respawn of %d heroes scheduled for sim frame %d",
            hero_count, s_pending.apply_sequence);
    return 1;
}

extern "C" int nocturne_net_respawn_on_packet(const void *packet, int packet_size)
{
    const SNetPacket_HeroRespawn *incoming = (const SNetPacket_HeroRespawn *)packet;

    if ((packet == (const void *)0x0) || (packet_size < (int)sizeof(SNetPacket_HeroRespawn))) {
        return 0;
    }
    if (incoming->header.type != PACKET_UNUSED) {
        return 0;
    }

    // Re-sent every frame until it is due, so this is normally a duplicate.
    s_pending      = *incoming;
    s_have_pending = 1;
    return 1;
}

// =============================================================================
// Application — the one hook both the server and client frame paths share
// =============================================================================

extern "C" void nocturne_net_respawn_apply_if_due(int sequence_number)
{
    int i;

    if (s_have_pending == 0) {
        return;
    }
    if (sequence_number < s_pending.apply_sequence) {
        if ((g_CNetGamePtr != (CNetGame *)0x0) &&
            (g_CNetGamePtr->connection_type == CONNECTION_HOST)) {
            respawn_broadcast();        // UDP: a lost respawn would be a desync
        }
        return;
    }

    // `<=` rather than `==`: a client whose packet arrived late still applies,
    // and since the positions are absolute both machines converge on the same
    // state either way.
    for (i = 0; i < s_pending.hero_count; i++) {
        CHero    *hero = g_HeroActors[i];
        CVector3f position;
        CVector3f orient;

        if (hero == (CHero *)0x0) {
            continue;
        }
        position.x = s_pending.position[i][0];
        position.y = s_pending.position[i][1];
        position.z = s_pending.position[i][2];
        orient.x   = s_pending.orient[0];
        orient.y   = s_pending.orient[1];
        orient.z   = s_pending.orient[2];

        // Arcade continue. A dead hero is not destroyed — CCharacter::getDeathState
        // reads the motion controller's current state name, so "dead" is just the
        // DEAD animation playing over a zeroed hit_points. Putting both back is
        // the whole revive, and doing it here means it lands on the same sim
        // frame on every machine, exactly like the move.
        if ((hero->base).hit_points <= 0.0f) {
            (hero->base).hit_points = (hero->base).max_hit_points;
            core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                (&(hero->base).model.motion_controller, 0, 0.0f);
        }

        (*((hero->base).base.vtable._ub)->setPositionAndOrientation)
            (&(hero->base).base, &position, &orient);

        // A hero created for a network guest is held out of the world with a
        // negative area (see CDemonMission::createOneHero); giving it the
        // host's area is what admits it to the active set.
        //
        // Do NOT rebuild the set here. CDemonMission::process already calls
        // buildActiveSetActorList every frame, and it does so from inside
        // CGame::process — which is the only place g_CGamePtr->is_processing
        // is 1. That flag decides which RNG randomChance() draws from: the
        // game's seeded generator when processing, and libc rand() otherwise.
        // Calling it from here (applySimFrameHistory runs outside CGame::process)
        // therefore rolled create_prob against libc rand(), which is not the
        // stream the sim frame synchronises — so the two machines drew
        // different numbers. Worse, that path scales rand() by 1/32768, and
        // glibc's RAND_MAX makes the result almost always exceed any
        // probability, so the roll fails and the actor is marked
        // ACTOR_DESTROYED for good. A different set of actors died on each
        // machine, permanently.
        //
        // Letting the next frame's own call do it costs one frame and is
        // correctly seeded.
        (hero->base).base.location.area_id = s_pending.area_id;
    }

    s_have_pending = 0;
    DLOG_EX("netplay", "respawn applied on sim frame %d", sequence_number);
}

#else  /* NOCTURNE_AUTHENTIC_NETPLAY */

extern "C" void nocturne_net_respawn_note_placeholder(float, float, float, int) {}
extern "C" void nocturne_net_respawn_clear_placeholder(void) {}
extern "C" int  nocturne_net_respawn_available(void) { return 0; }
/* Authentic mode never holds a hero, so the local hero's own area always
   applies — but the callers read it through this, so answer honestly. */
extern "C" int  nocturne_net_respawn_world_area(void)
{
    return (g_HeroActors[g_LocalHeroIndex]->base).base.location.area_id;
}
extern "C" int  nocturne_net_respawn_request(void) { return 0; }
extern "C" int  nocturne_net_respawn_on_packet(const void *, int) { return 0; }
extern "C" void nocturne_net_respawn_apply_if_due(int) {}

#endif /* NOCTURNE_AUTHENTIC_NETPLAY */
