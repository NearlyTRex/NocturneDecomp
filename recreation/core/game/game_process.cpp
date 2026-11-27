#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/actor/notported.h"
#include "core/game/game.h"
#include "core/script/script.h"
#include "core/set/demonset.h"
#include "core/terrain/terrain.h"
#include "core/water/water.h"
#include "core/weather/weather.h"

#include <cstdint>

namespace nocturne::core {

// The frame's draws come off the sim stream while it runs, seeded from the CRT's.
// deferred: a network game's frame seeded from the host's seed, with
//   CNetGame::initializeNetworkToHost and initializeNetworkToJoin
// deferred: the frame's simulation time and each part's printed while profiling, with
//   processCheatCodes' profile mode
// deferred: BW2's alpha fade stepped after the iris, with CGame's alpha fade
// deferred: the movie screen's filter stepped to the projector's next frame, with
//   CFilterFX::openMovie
// deferred: a skipped cinematic ended once the letterbox is down: the sound started again, the
//   director choosing for the script's focus, the clock restarted and the focus change
//   forgotten, or the input waited out while it is up, with skipCinematic
// deferred: the blood's drops, splats and pools aging, with the gore's spawners (CGore's
//   spawnBloodParticles, createGroundBloodSplat, createWallBloodSplat and createBloodPool)
// deferred: the fire effects' particles moving and burning out, and their textures' frames
//   stepped, with the fire effects' create functions
// deferred: BW2's simple particles moving after the fire's, with CSimpleParticleSystem
// deferred: last frame's raised events becoming this frame's and the event timers counting down,
//   with the events' raise and setTimer
// deferred: the gas room's netplay tick (the decomp's nocturne_net_sim_gas_tick), with
//   CNetGame::initializeNetworkToHost and initializeNetworkToJoin
// deferred: the cheat codes, with processCheatCodes
// deferred: BW1-3's field notes and puzzle stepped, and the actors left still while BW1's and
//   BW3's field notes show, with CFieldNotes and CPuzzle
// deferred: the actors' frames, the goggles' look and the heroes' goggles published (the decomp's
//   GOGGLE_LOOK and NETPLAY), with CDemonSet::processActors
// deferred: the mission's frame, with CDemonMission::process
// deferred: the sim frame's end, with CDemonSet::processActors
// deferred: the play time counted, with displayActStats and saveGame
// nocedit 0x004e3190
// bw1 0x004d8060
// bw2 0x004bd570
// bw3 0x004bf4b0
void CGame::process(const SGameSessionOwners &session) {
    is_processing = 1;
    session.actor.setRandomSeed(static_cast<std::uint32_t>(session.crt_random.rand()));
    updateFadeTransition();
    session.script.process();
    session.set.process();
    session.water.process();
    session.terrain.process(getDeltaTimeInt());
    session.weather.update(session.camera);
    quitNotPorted("CDemonSet", "processActors");
}

} // namespace nocturne::core
