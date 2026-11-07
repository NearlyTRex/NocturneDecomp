#include "common/error/error.h"
#include "core/actor/notported.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/dlight/demonlight.h"
#include "core/fire/fireeffect.h"
#include "core/game/game.h"
#include "core/gore/gore.h"
#include "core/inv/inventoryassets.h"
#include "core/level/levelloader.h"
#include "core/netgame/netgame.h"
#include "core/script/script.h"
#include "core/set/demonset.h"
#include "engine/2d/2d.h"
#include "engine/console/console.h"
#include "engine/keys/keys.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/environment.h"
#include "shape/edittool/editortools.h"

#include <algorithm>
#include <format>
#include <string_view>

namespace nocturne::core {
namespace {

// Set, it turns developer mode on.
constexpr std::string_view kDeveloperVariable = "VELOCITY";
constexpr int kFallbackWidth = 640;
constexpr int kFallbackHeight = 480;
// Below this many lines the editor's text is drawn in its small font.
constexpr int kSmallFontHeight = 384;
constexpr float kFlashlightRange = 64.0F;
// The sync stages a session waits on: every player loaded, then every player starting.
constexpr int kSyncLoaded = 3;
constexpr int kSyncStarting = 4;

} // namespace

// Only the height and depth are compared, so a new width alone keeps the old mode.
// nocedit 0x004dade0
void CGame::setGameRes(const SGameSessionOwners &session) {
    engine::CSpecial &special = owners_.special;
    if (special.getCurrentGraphicsBoard() != 0) {
        static_cast<void>(special.selectCard(special.getCurrentGraphicsBoard()));
    }
    engine::IScreenDevice &screen = owners_.screen;
    if ((screen.getWindowHeight() != game_pixy || screen.getBitsPerPixel() != game_bpp) &&
        !screen.setScreenResolution(game_pixx, game_pixy, game_bpp)) {
        game_pixx = kFallbackWidth;
        game_pixy = kFallbackHeight;
        if (!screen.setScreenResolution(game_pixx, game_pixy, game_bpp)) {
            common::displayErrorAndQuit(
                std::format("CGame::setGameRes - Unable to set the video mode to {}x{}x{}",
                            game_pixx, game_pixy, game_bpp));
        }
    }
    owners_.two_d.resetGraphicsSystem();
    session.camera.init(screen.getWindowHeight());
    if (screen.getWindowHeight() < kSmallFontHeight) {
        session.editor_tools.setEditorFont(owners_.fonts.getSmallEditorFont());
    }
}

// The console's build line is the enhanced game's version. The original also printed when
// game.cpp was built, and the stack's address.
// deferred: the console's system memory, swap file and heap lines, with a platform memory report
//   and CEditorTools::displayMemoryDiagnostics
// deferred: clearing the camera view, pause, debug, cheat, subtitle, console, render mode,
//   overlay bitmap, cinematic skip, control block, goggles and flashlight flags, and the modal
//   dialog, with processHotkeys, processFrame and CScript::step's allowHeroControls
// deferred: forgetting each hero's own light, the Baron's state and a helper's death (the decomp's
//   hero_light, baron and helper_death resets), with CHero, CBaron and the helper's death hold
// deferred: starting the session's autosave (the decomp's nocturne_autosave_session_start), with
//   the autosave poll in the play loop
// Developer mode is on for a session with VELOCITY set, and off for any other.
// deferred: starting the fire effects, or the master lights' saved states after a load, with
//   CFireEffect::init and CDemonSet::loadMasterLightStates
// The original also cleared its one pick list; here each dialog makes its own.
// The game is made active as a session starts, edit mode left, so the virtual director chooses the
// first camera for the script's focus; the camera view the game keeps is for when it isn't.
// deferred: opening the iris on the focus actor, with beginFadeIn and renderIrisFade
// deferred: the cheats the menu turned on (the decomp's nocturne_cheats_apply), with
//   showCheatsMenu
// deferred: ending the session when a player gives up syncing, with CNetGame::syncPlayers' waits
//   and the session's end
// deferred: the network game's mode set to playing, with CNetGame::initializeNetworkToHost
// deferred: the local hero aiming as the options say, with CStranger::processFrame,
//   CGabriella::updateAimTracking and CScat::updateAiming
// deferred: the act not yet complete, with finishAct
// deferred: the input masked while paused or a modal dialog is up, with processHotkeys and the
//   pause menu
// deferred: each frame's autosave poll (the decomp's nocturne_autosave_poll), with the autosave
// deferred: each frame's nudge of the fudge target, with processFudge and
//   CMansionPuzzleCircle::process
// deferred: the director left alone while the game isn't active, a cinematic skips, a sim frame
//   is pending or the goggles are on, with processHotkeys, processFrame and the goggles
// deferred: the director made to choose again when the script changed its focus, with
//   CScript::step's focus commands
// deferred: the camera held while the goggles are on (the decomp's goggles_camera_hold), with
//   processHotkeys' goggles
// deferred: each frame processed, with processFrame
// deferred: a client leaving a game whose host stopped answering or ended it (the decomp's
//   NETPLAY), with CNetGame::initializeNetworkToJoin
// deferred: the pause menu on Escape: Return, Options (redrawing the scene after, the decomp's
//   OPTIONS_RESUMES_GAME, with its menu font), Load game, Save game, Warps (the decomp's
//   CHEAT_MENU), Quit with a confirm, and Skip cinematic in a letterboxed cinematic, the sound
//   stopped while it shows, with showOptionsScreen, promptLoadGame, saveGame and skipCinematic
// deferred: Escape closing the automap first, and ignored while the hero dies (the decomp's
//   AUTOMAP and DEATH_FADE_SKIP), with the automap and getDeathState
// deferred: the host's abort and the client's leave dialogs, with respawn and skip votes (the
//   decomp's NETPLAY), with CNetGame::initializeNetworkToHost and initializeNetworkToJoin
// deferred: each frame presented and counted, or only the window's messages while a cinematic
//   skips or a sim frame is pending, with processFrame
// deferred: the camera shown again when the window has its focus back, keeping the director's
//   previous best camera (the decomp's WINDOWS), with processFrame
// deferred: a dead hero's wait: Enter, or four seconds then the fade out, ends the session, and a
//   dead or unplaced client watching the host's hero (the decomp's NETPLAY), with getDeathState
//   and fadeIn
// deferred: the session ending when the script ends the mission, a network mission is pending or
//   a chapter reload is asked, with CScript::step's end and showFullscreenBitmap
// deferred: the fullscreen bitmap and its wait for a key, with showFullscreenBitmap
// deferred: the sound started after the first frame, with CSound::init
// deferred: the Game Over menu after a death, with Load game and Quit, and the host's
//   disconnect, with promptLoadGame
// deferred: the session's end: the damageable enemies counted, the input unmasked, the sound
//   stopped, the menu's resolution and fangs back, the key presses, lights, time scale, pick list
//   and inventory cleared, and 1 returned when the mission ended, with countDamageableEnemies,
//   setScreenResolutionAndDisplayFangs, CDemonSet::clearLights and freeInventory
// nocedit 0x004daf80
int CGame::runGameSession(const SGameSessionOwners &session) {
    session.console.reset();
    session.console.printf("Nocturne is alive and kicking\n");
    session.console.printf(std::format("{}\n\n", session.build_version));
    is_processing = 0;
    time_scale_factor = 1.0F;
    game_active = true;
    setGameRes(session);
    developer_mode = session.environment.getVariable(kDeveloperVariable).has_value();
    session.flashlight.init();
    session.flashlight.setCameraName("Flashlight");
    session.flashlight.setLightEnabled(false);
    session.flashlight.setMaxDistance(kFlashlightRange);
    session.set.initScene();
    gamma = std::clamp(gamma, kMinGamma, kMaxGamma);
    session.set.setGamma(gamma);
    clearOverlay();
    static_cast<void>(session.set.evaluateVirtualDirector(session.script.getFocusActor(), 1));
    loadAssets(session);
    static_cast<void>(session.net_game.syncPlayers(kSyncLoaded));
    static_cast<void>(session.net_game.syncPlayers(kSyncStarting));
    saveClockTime();
    resetInputAndCenterCursor(session);
    session.net_game.processServerFrame();
    session.level_loader.cleanup();
    session.keys.toggleInputMask(true);
    processHotkeys(session);
    updateStatusDisplays();
    playerControls(session);
    if (session.set.evaluateVirtualDirector(session.script.getFocusActor(), 0) != 0) {
        saveClockTime();
    }
    quitNotPorted("CGame", "processFrame");
}

// nocedit 0x004e07a0
void CGame::loadAssets(const SGameSessionOwners &session) {
    session.set.loadAssets();
    session.fire.loadAssets();
    session.gore.loadAssets();
    session.inventory_assets.load();
}

} // namespace nocturne::core
