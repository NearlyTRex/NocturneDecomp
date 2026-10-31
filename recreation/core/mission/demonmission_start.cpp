#include "common/error/error.h"
#include "core/actor/demonactor.h"
#include "core/event/eventlist.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/loadingscreen.h"
#include "core/mission/demonmission.h"
#include "core/script/script.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"

#include <format>

namespace nocturne::core {

// deferred: the local hero being the one netplay gives this machine, and the set loaded being
//   the area netplay respawns it in (the decomp's nocturne_net_respawn_world_area), with
//   CNetGame's sessions
// deferred: clearing the pending teleport to area -1 at the origin, with setTeleportTarget and
//   process
// deferred: clearing the letterbox, with CGame's readers of it
// deferred: ending the cooldown on the next camera switch, with
//   CDemonSet::clearCameraSwitchCooldown and the scene camera
// nocedit 0x00524760
bool CDemonMission::startMission() {
    if (hero_count_ < 1) {
        owners_.editor_tools.showError("Can't run mission - no heros");
        return false;
    }
    const CHero *hero = getHero(0);
    if (hero == nullptr) {
        owners_.editor_tools.showError("Can't run mission - no local hero");
        return false;
    }
    prepareAllActors();
    owners_.events.reset();
    loadSet(hero->getLocation().area_id);
    owners_.loading_screen.update(owners_.messages.getLocalizedString("Loading script"), false);
    if (!loadScript(owners_.game.is_loading)) {
        return false;
    }
    owners_.script.initRuntime();
    owners_.script.executeInitSection();
    return true;
}

// deferred: the set loaded being the area netplay respawns the hero in (the decomp's
//   nocturne_net_respawn_world_area), with CNetGame's sessions
// deferred: after the session, taking the hero off the list and resetting it, clearing the
//   mission, and going on to the mission the session asked for, with its act's stats, a loading
//   screen and a key to continue away from headquarters, or finishing the act, with the play
//   loop, CDemonMission::removeActorFromList, CHero::reset, displayActStats and finishAct
// deferred: netplay agreeing on the next mission and skipping the key to continue (the decomp's
//   nocturne_net_mission_*), with CNetGame's sessions
// nocedit 0x00524420
void CDemonMission::run(CGame &game, const SGameSessionOwners &session) {
    if (hero_count_ < 1) {
        common::displayErrorAndQuit("CDemonMission::run - hero list empty");
    }
    const CHero *hero = getHero(0);
    if (hero == nullptr) {
        common::displayErrorAndQuit("CDemonMission::run - no gLocalHero");
    }
    loadSet(hero->getLocation().area_id);
    pending_mission_name_.clear();
    buildActiveSetActorList();
    static_cast<void>(game.runGameSession(session));
}

// nocedit 0x005235b0
bool CDemonMission::loadScript(bool is_loading) {
    return owners_.script.loadScript(std::format("{}.scr", mission_name_), is_loading);
}

} // namespace nocturne::core
