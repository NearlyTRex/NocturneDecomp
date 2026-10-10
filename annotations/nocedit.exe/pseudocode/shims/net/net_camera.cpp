// =============================================================================
// NETPLAY — SYNCHRONISED CAMERA FOR SCRIPT CONDITIONS — implementation
// =============================================================================
//
// See net_camera.h. The scheduling follows net_weapon.cpp.

#include "net/net_camera.h"
#include "core/ascii_case.h"
#include "shim_config.h"
#include "nocturne.h"
#include "core/debug_log.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_NETPLAY

// Same lead as a weapon switch, for the same host/guest skew reasons; see
// WEAPON_LEAD_FRAMES in net_weapon.cpp.
#define CAMERA_LEAD_FRAMES 12

// A camera can cut several times inside the lead window.
#define CAMERA_MAX_PENDING 32

// Written before the first change a player publishes: no camera.
#define CAMERA_NONE -1

#pragma pack(push, 1)
typedef struct SNetPacket_Camera {
    SNetPacketHeader header;         // 0x0
    int apply_sequence;              // 0x5   sim frame every machine applies on
    int origin_player;               // 0x9   whose camera
    int serial;                      // 0xd   per-origin, for de-duplication
    int camera_index;                // 0x11  index into g_CDemonSetPtr->cameras
} SNetPacket_Camera;                 // 0x15
#pragma pack(pop)

static SNetPacket_Camera s_pending[CAMERA_MAX_PENDING];
static int s_pending_count = 0;
static int s_synced_camera[NOCTURNE_HERO_SLOTS] = {
    CAMERA_NONE, CAMERA_NONE, CAMERA_NONE, CAMERA_NONE};
// Serials taken from each peer (net_packets.h).
static SNetSerialWindow s_serials[NOCTURNE_HERO_SLOTS];
// Serial of the change each player's synced camera came from.
static int s_applied_serial[NOCTURNE_HERO_SLOTS];
static int s_next_serial = 1;
// The camera this machine last published; -2 forces the first publish.
static int s_published_camera = -2;
static int s_reported_late = 0;

static void camera_broadcast(const SNetPacket_Camera *change)
{
    nocturne_net_session_broadcast((SNetPacketHeader *)&change->header);
}

static void camera_queue(const SNetPacket_Camera *change)
{
    if (CAMERA_MAX_PENDING <= s_pending_count) {
        DWARN("net_camera: pending queue full, dropping a camera change - "
              "isCurrentCamera may disagree between machines from here on");
        return;
    }
    s_pending[s_pending_count] = *change;
    s_pending_count = s_pending_count + 1;
}


static void camera_publish_local(void)
{
    SNetPacket_Camera change;
    int               camera = g_CDemonSetPtr->selected_camera_index;

    if (camera == s_published_camera) {
        return;
    }
    s_published_camera = camera;

    nocturne_net_packet_init(&change, (int)sizeof(change), NOCTURNE_NET_PACKET_CAMERA);
    change.apply_sequence = nocturne_net_session_local_frame() + CAMERA_LEAD_FRAMES;
    change.origin_player  = g_CNetGamePtr->local_player_index;
    change.serial         = s_next_serial;
    change.camera_index   = camera;
    s_next_serial = s_next_serial + 1;

    camera_queue(&change);
    camera_broadcast(&change);
}

extern "C" int nocturne_net_camera_active(void)
{
    return nocturne_net_session_playing();
}

extern "C" int nocturne_net_camera_is_current(const char *camera_name)
{
    CDemonSet *set = g_CDemonSetPtr;

    if ((set == (CDemonSet *)0x0) || (camera_name == (const char *)0x0)) {
        return 0;
    }
    for (int i = 0; i < NOCTURNE_HERO_SLOTS; i++) {
        int camera = s_synced_camera[i];
        if ((0 <= camera) && (camera < set->camera_count) &&
            nocturne_ascii_iequals(set->cameras[camera].name, camera_name)) {
            return 1;
        }
    }
    return 0;
}

extern "C" int nocturne_net_camera_on_packet(const void *packet, int packet_size)
{
    const SNetPacket_Camera *incoming = (const SNetPacket_Camera *)packet;

    if (nocturne_net_packet_is(packet, packet_size, NOCTURNE_NET_PACKET_CAMERA,
                               (int)sizeof(SNetPacket_Camera)) == 0) {
        return 0;
    }
    if ((incoming->origin_player < 0) || (NOCTURNE_HERO_SLOTS <= incoming->origin_player)) {
        return 1;
    }
    if (nocturne_net_serial_take(&s_serials[incoming->origin_player], incoming->serial) == 0) {
        return 1;               // a re-send of one already queued
    }
    camera_queue(incoming);
    return 1;
}

extern "C" void nocturne_net_camera_apply_if_due(int sequence_number)
{
    CNetGame *net_game = g_CNetGamePtr;
    int       kept = 0;

    if ((net_game == (CNetGame *)0x0) || (g_CDemonSetPtr == (CDemonSet *)0x0)) {
        return;
    }
    if (nocturne_net_camera_active() != 0) {
        camera_publish_local();
    }

    // A peer's changes can arrive out of order, so a change only stands if no
    // later one from the same origin has been applied.
    for (int i = 0; i < s_pending_count; i++) {
        SNetPacket_Camera *change = &s_pending[i];
        int origin = change->origin_player;

        if (sequence_number < change->apply_sequence) {
            if (origin == net_game->local_player_index) {
                camera_broadcast(change);
            }
            s_pending[kept] = *change;
            kept = kept + 1;
            continue;
        }
        if ((change->apply_sequence < sequence_number) && (s_reported_late == 0)) {
            s_reported_late = 1;
            DLOG("netplay",
                    "net_camera: a camera change scheduled for frame %d applied at %d - "
                    "isCurrentCamera disagreed for %d frames. CAMERA_LEAD_FRAMES is too "
                    "short for this connection",
                    change->apply_sequence, sequence_number,
                    sequence_number - change->apply_sequence);
        }
        if (s_applied_serial[origin] < change->serial) {
            s_applied_serial[origin] = change->serial;
            s_synced_camera[origin] = change->camera_index;
        }
    }
    s_pending_count = kept;
}

extern "C" void nocturne_net_camera_reset(void)
{
    s_pending_count    = 0;
    s_next_serial      = 1;
    s_published_camera = -2;
    s_reported_late    = 0;
    std::memset(s_serials, 0, sizeof(s_serials));
    std::memset(s_applied_serial, 0, sizeof(s_applied_serial));
    for (int i = 0; i < NOCTURNE_HERO_SLOTS; i++) {
        s_synced_camera[i] = CAMERA_NONE;
    }
}

extern "C" CDemonActor *nocturne_net_camera_focus_actor(CDemonActor *target) {
    CHero *local = nocturne_hero_local();

    if ((nocturne_net_session_active() == 0) || (local == nullptr) ||
        (nocturne_hero_is_player(target) == 0)) {
        return target;
    }
    return (CDemonActor *)local;
}

#else

extern "C" int  nocturne_net_camera_active(void)                    { return 0; }
extern "C" int  nocturne_net_camera_is_current(const char *)        { return 0; }
extern "C" int  nocturne_net_camera_on_packet(const void *, int)    { return 0; }
extern "C" void nocturne_net_camera_apply_if_due(int)               {}
extern "C" void nocturne_net_camera_reset(void)                     {}
extern "C" CDemonActor *nocturne_net_camera_focus_actor(CDemonActor *target) { return target; }

#endif
