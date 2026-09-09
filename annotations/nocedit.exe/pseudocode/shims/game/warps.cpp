// =============================================================================
// MISSION WARPS — implementation
// =============================================================================
//
// See warps.h for where the names come from, why they are raised rather than
// flagged, and why the page is per-mission.

#include "game/warps.h"
#include "shim_config.h"

#include "nocturne.h"

#include <cstdio>
#include <cstring>

#if !NOCTURNE_AUTHENTIC_CHEAT_MENU

namespace {

struct WarpDef {
    char *mission;   // CDemonMission::mission_name, matched case-insensitively
    char *label;     // menu text
    char *event;     // the name to raise — what RAISE wants typed
};

// Every unguarded developer test in the shipped scripts, in script order per
// mission. The label is read off what the block does; where the block warps to
// a waypoint, the waypoint's own name is the best description there is
// (CheatPits -> "Pits"), so that is what it says.
//
// A row is only ever a name to raise. Where the script's block does more than
// move the hero — hand out a key, set a flag, kill a row of sentinels — the
// label says so, because the script is doing it, not this table.
const WarpDef kWarps[] = {
    // castle1.scr — the Act 4 castle.
    { (char *)"castle1",  (char *)"Skip the intro",              (char *)"Cheat" },

    // CHICAGO2.scr
    { (char *)"CHICAGO2", (char *)"Pier",                        (char *)"Cheat1" },
    { (char *)"CHICAGO2", (char *)"Water works (with Icepick)",  (char *)"Cheat2" },

    // CHICAGO3.scr
    { (char *)"CHICAGO3", (char *)"Manhole (with Icepick)",      (char *)"Cheat2" },

    // dungeon.scr
    { (char *)"dungeon",  (char *)"Pool platform",               (char *)"cheat1" },
    { (char *)"dungeon",  (char *)"Boss",                        (char *)"cheatholy" },
    { (char *)"dungeon",  (char *)"Gem room, and take the gem",  (char *)"CheatGem" },
    { (char *)"dungeon",  (char *)"Final room, and the sanctum key",
                                                                 (char *)"CheatEnd" },

    // forest.scr — the largest set, and the one the family is named after.
    { (char *)"forest",   (char *)"Trap 1",                      (char *)"cheattrap1" },
    { (char *)"forest",   (char *)"Trap 2",                      (char *)"cheattrap2" },
    { (char *)"forest",   (char *)"Bridge",                      (char *)"cheatBridge" },
    { (char *)"forest",   (char *)"Yuri",                        (char *)"cheatyuri" },
    { (char *)"forest",   (char *)"Pits",                        (char *)"cheatpits" },
    { (char *)"forest",   (char *)"Gap",                         (char *)"cheatgap" },
    { (char *)"forest",   (char *)"Vampire",                     (char *)"cheatvampire" },
    { (char *)"forest",   (char *)"Mill",                        (char *)"cheatmill" },
    { (char *)"forest",   (char *)"Mill bridge",                 (char *)"cheatMillBridge" },
    { (char *)"forest",   (char *)"Horse",                       (char *)"cheathorse" },
    { (char *)"forest",   (char *)"Ambush 1",                    (char *)"cheatAmbush1" },
    { (char *)"forest",   (char *)"Ambush 3",                    (char *)"cheatAmbush3" },

    // grave.scr
    { (char *)"grave",    (char *)"Centre, all three keys, both crypts solved",
                                                                 (char *)"Cheat1" },
    { (char *)"grave",    (char *)"Light crypt 2",               (char *)"Cheat2" },

    // GTOWN.scr
    { (char *)"GTOWN",    (char *)"Kill the sentinels, then town",
                                                                 (char *)"CheatTown" },
    { (char *)"GTOWN",    (char *)"Crypt, and the crypt key",    (char *)"Cheat1" },
    { (char *)"GTOWN",    (char *)"Skip the sentinel gate",      (char *)"CheatMain" },

    // HQ-ACT1.scr / HQ-ACT4.scr — the same name in both, doing what each needs.
    { (char *)"HQ-ACT1",  (char *)"Past the briefing",           (char *)"CheatBriefEnd" },
    { (char *)"HQ-ACT4",  (char *)"To the doctor, briefed",      (char *)"CheatBriefEnd" },

    // HQ-ACT5.scr
    { (char *)"HQ-ACT5",  (char *)"Hall",                        (char *)"cheat1" },
    { (char *)"HQ-ACT5",  (char *)"Hall, and Holliday's key",    (char *)"cheat2" },

    // INTFACT.scr
    { (char *)"INTFACT",  (char *)"Main floor, Emeron on",       (char *)"Cheat1" },
    { (char *)"INTFACT",  (char *)"Lookout",                     (char *)"Cheat2" },

    // Mansion.scr — the last two are the same shape under a "test" prefix
    // rather than "cheat", and just as dormant.
    { (char *)"Mansion",  (char *)"Moloch, and the matches",     (char *)"CheatMoloch" },
    { (char *)"Mansion",  (char *)"End the mission",             (char *)"CheatEnd" },
    { (char *)"Mansion",  (char *)"Dumbwaiter kitchen",          (char *)"testdumb" },
    { (char *)"Mansion",  (char *)"Succubus, and the bedroom key",
                                                                 (char *)"testsucc" },

    // temple.scr
    { (char *)"temple",   (char *)"Stone 5",                     (char *)"CheatEnd" },

    // theater.scr
    { (char *)"theater",  (char *)"Projector, and the film reel",(char *)"Cheat2" },
    { (char *)"theater",  (char *)"Meet Smiley",                 (char *)"CheatEnd" },
    { (char *)"theater",  (char *)"Ladder, then the end",        (char *)"CheatToEnd" },

    // TOWN.scr
    { (char *)"TOWN",     (char *)"Deputy, and the cell key",    (char *)"cheatdeputy" },
    { (char *)"TOWN",     (char *)"Coward",                      (char *)"cheatcoward" },
    { (char *)"TOWN",     (char *)"Saloon girl",                 (char *)"cheatwhore" },
    { (char *)"TOWN",     (char *)"The Smiths",                  (char *)"cheatmaandpa" },
    { (char *)"TOWN",     (char *)"The Smiths at the church",    (char *)"cheatMaAndPaChurch" },
    { (char *)"TOWN",     (char *)"Cellar door (the kids)",      (char *)"cheatkids" },
    { (char *)"TOWN",     (char *)"The cow",                     (char *)"CheatCow" },
    { (char *)"TOWN",     (char *)"Take the rum bottle",         (char *)"cheat1" },
    { (char *)"TOWN",     (char *)"Ma's scene done, Scat revived",
                                                                 (char *)"cheaty" },
    { (char *)"TOWN",     (char *)"Straight to the end",         (char *)"cheatyend" },
    { (char *)"TOWN",     (char *)"Boy in the mine",             (char *)"Cheatend" },

    // train.scr
    { (char *)"train",    (char *)"Alpha conversation",          (char *)"Cheat1" },
    { (char *)"train",    (char *)"Jump, with ammo and health",  (char *)"CheatEnd" },
};

#define WARP_COUNT ((int)(sizeof(kWarps) / sizeof(kWarps[0])))

// Rows of kWarps belonging to the running mission, filled by refresh.
int s_rows[WARP_COUNT];
int s_row_count = 0;

char *currentMission(void)
{
    if ((g_CDemonMissionPtr == (CDemonMission *)0) ||
        (g_CDemonMissionPtr->mission_name[0] == '\0')) {
        return (char *)0;
    }
    return g_CDemonMissionPtr->mission_name;
}

// A warp moves one machine's hero and the other machines know nothing about it,
// which in a lockstep session is a permanent divergence — so the page is closed
// for the length of one. Same reasoning as the host override in cheats.h.
bool inNetworkSession(void)
{
    return (g_CNetGamePtr != (CNetGame *)0) &&
           (g_CNetGamePtr->connection_type != CONNECTION_NONE);
}

// Fills s_rows with the running mission's warps and returns how many there are.
int collectRows(void)
{
    char *mission;
    int   i;

    s_row_count = 0;

    mission = currentMission();
    if ((mission == (char *)0) || (g_CEventListPtr == (CEventList *)0) ||
        (g_HeroCount < 1) || inNetworkSession()) {
        return 0;
    }
    if (nocturne_cheat_active(NOCTURNE_CHEAT_WARPS) == 0) {
        return 0;
    }
    for (i = 0; i < WARP_COUNT; i++) {
        if (_stricmp(kWarps[i].mission, mission) == 0) {
            s_rows[s_row_count] = i;
            s_row_count         = s_row_count + 1;
        }
    }
    return s_row_count;
}

void fire(int row)
{
    const WarpDef *warp;
    char           message[256];

    if ((row < 0) || (s_row_count <= row) || (g_CEventListPtr == (CEventList *)0)) {
        return;
    }
    warp = &kWarps[s_rows[row]];

    // executeCommands, not addOrRemovePersistentEvent: a bare name with no
    // parentheses is an event raise, which is what an unguarded script test
    // needs — see warps.h. This is the same call RAISE makes with the same
    // string, so a name the script does not read is simply never asked for.
    core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr, warp->event);

    // Queued now, drawn once play resumes — the pause menu does not render the
    // overlay.
    if (g_CGamePtr != (CGame *)0) {
        snprintf(message, sizeof(message), "Warp: %s",
                 support_newmsg_cpp_getLocalizedString_FUN_005441f0(warp->label));
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr, message, 3.0f);
    }
}

} // namespace

extern "C" int nocturne_warps_available(void)
{
    return collectRows() > 0 ? 1 : 0;
}

extern "C" void nocturne_warps_menu(void)
{
    CPickList list;
    char     *title;
    int       count;
    int       choice;
    int       i;

    count = collectRows();
    if (count < 1) {
        return;
    }

    // A pick list rather than the Options screen's renderMenuAndGetChoice: this
    // is opened from the pause menu and drawn over the paused mission, so it
    // should look like the list the player just came from.
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&list);
    for (i = 0; i < count; i++) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(
            &list.base,
            support_newmsg_cpp_getLocalizedString_FUN_005441f0(kWarps[s_rows[i]].label));
    }
    title  = support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Warp to");
    choice = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(
                 &list, title, -1, 0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&list, 0);

    // Negative is Escape — displayChoicesAndWaitForInput returns the index, so
    // the receiver is an int and not the char * its name suggests.
    if (0 <= choice) {
        fire(choice);
    }
}

#else

extern "C" int  nocturne_warps_available(void) { return 0; }
extern "C" void nocturne_warps_menu(void)      { }

#endif // !NOCTURNE_AUTHENTIC_CHEAT_MENU
