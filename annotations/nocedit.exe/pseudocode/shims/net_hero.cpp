// =============================================================================
// NETPLAY — LOBBY HERO SELECTION — implementation
// =============================================================================
//
// See net_hero.h for what this is and why the names live here.

#include "net_hero.h"
#include "nocturne.h"

// One name per EHeroType, in enum order. The game itself has no display string
// for any hero — CHeroPlaceholder::createHero knows them only as the class
// names it hands to createActorByName — so these are written to match the
// model each class loads (gabriela.dfm, icepick.dfm, ...) rather than invented.
static const char *const k_hero_names[] = {
    "Gabriella",    // HERO_TYPE_GABRIELLA
    "Svetlana",     // HERO_TYPE_SVETLANA
    "Stranger",     // HERO_TYPE_STRANGER
    "Scat",         // HERO_TYPE_SCAT
    "Baron",        // HERO_TYPE_BARON
    "Icepick",      // HERO_TYPE_ICEPICK
    "Haystack",     // HERO_TYPE_HAYSTACK
    "Colonel",      // HERO_TYPE_COLONEL
    "Moloch",       // HERO_TYPE_MOLOCH
};

#define HERO_NAME_COUNT ((int)(sizeof(k_hero_names) / sizeof(k_hero_names[0])))

// Which of them the lobby will hand out. Baron is excluded. The entry stays in
// the name table so a hero_number that arrives as Baron over the wire still
// prints as one rather than as "?" — this gates the selector, not the game.
static const char k_hero_selectable[HERO_NAME_COUNT] = {
    1,  // HERO_TYPE_GABRIELLA
    1,  // HERO_TYPE_SVETLANA
    1,  // HERO_TYPE_STRANGER
    1,  // HERO_TYPE_SCAT
    0,  // HERO_TYPE_BARON
    1,  // HERO_TYPE_ICEPICK
    1,  // HERO_TYPE_HAYSTACK
    1,  // HERO_TYPE_COLONEL
    1,  // HERO_TYPE_MOLOCH
};

// The table is indexed by EHeroType, so it has to end where the enum does. If
// a hero is ever added to EHeroType this stops the build rather than letting
// the lobby cycle into a value createHero would quit on.
static_assert(HERO_NAME_COUNT == HERO_TYPE_MOLOCH + 1,
              "k_hero_names must cover every EHeroType");

const char *nocturne_net_hero_name(int hero_type)
{
    if (hero_type < 0 || hero_type >= HERO_NAME_COUNT) {
        return "?";
    }
    return k_hero_names[hero_type];
}

// -1 until the host has broadcast a settings packet this session.
static int s_host_view = -1;

void nocturne_net_hero_note_host_view(int hero_type)
{
    if (hero_type < 0 || hero_type >= HERO_NAME_COUNT) {
        return;
    }
    s_host_view = hero_type;
}

int nocturne_net_hero_host_view(void)
{
    return s_host_view;
}

void nocturne_net_hero_forget_host_view(void)
{
    s_host_view = -1;
}

int nocturne_net_hero_cycle(int hero_type, int direction)
{
    int step;

    direction = direction < 0 ? -1 : 1;
    if (hero_type < 0 || hero_type >= HERO_NAME_COUNT) {
        hero_type = HERO_TYPE_GABRIELLA;
    }

    // One lap at most, so a table with nothing selectable in it cannot spin
    // forever — it just leaves the hero where it started.
    for (step = 0; step < HERO_NAME_COUNT; step++) {
        hero_type = hero_type + direction;
        if (hero_type < 0) {
            hero_type = HERO_NAME_COUNT - 1;
        }
        else if (hero_type >= HERO_NAME_COUNT) {
            hero_type = 0;
        }
        if (k_hero_selectable[hero_type] != 0) {
            break;
        }
    }
    return hero_type;
}
