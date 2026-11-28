#include "common/error/error.h"
#include "core/charactr/deathstate.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/dlight/demonlight.h"
#include "core/fire/fireeffect.h"
#include "core/game/game.h"
#include "core/gore/gore.h"
#include "core/hero/hero.h"
#include "core/inv/inventoryassets.h"
#include "core/level/levelloader.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/script/script.h"
#include "core/set/demonset.h"
#include "engine/2d/2d.h"
#include "engine/console/console.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "engine/package/gamecontent.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/environment.h"
#include "shape/edittool/editortools.h"

#include <algorithm>
#include <format>
#include <string_view>

namespace nocturne::core {
namespace {

// Either set turns developer mode on. The original's SPOOKHOUSE let only the console, camera debug
// and screenshot keys work, read at each press.
constexpr std::string_view kDeveloperVariable = "VELOCITY";
constexpr std::string_view kSpookHouseVariable = "SPOOKHOUSE";
constexpr int kFallbackWidth = 640;
constexpr int kFallbackHeight = 480;
// Below this many lines the editor's text is drawn in its small font.
constexpr int kSmallFontHeight = 384;
// The sync stages a session waits on: every player loaded, then every player starting.
constexpr int kSyncLoaded = 3;
constexpr int kSyncStarting = 4;
// A dead hero's screen closes after this many seconds.
constexpr float kDeathFadeSeconds = 4.0F;
// The death wait once the screen is closing.
constexpr float kDeathFadeBegun = -1.0F;

} // namespace

int CGame::getFlashlightRange() const {
    return flashlight_range == EFlashlightRange::Long ? kLongFlashlightRange
                                                      : kOriginalFlashlightRange;
}

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
// deferred: the cheats the menu turned on (the decomp's nocturne_cheats_apply), with
//   showCheatsMenu
// deferred: ending the session when a player gives up syncing, with CNetGame::syncPlayers' waits
//   and the session's end
// deferred: the network game's mode set to playing, with CNetGame::initializeNetworkToHost
// deferred: the local hero aiming as the options say, with CStranger::processFrame,
//   CGabriella::updateAimTracking and CScat::updateAiming
// deferred: the act not yet complete, with finishAct
// deferred: BW1's and BW3's menu resolution put up while the field notes or a puzzle shows, and
//   the game's and its camera back once they go, with CFieldNotes and CPuzzle
// deferred: the input masked while a modal dialog is up, with the pause menu's network dialogs
// deferred: each frame's autosave poll (the decomp's nocturne_autosave_poll), with the autosave
// deferred: each frame's nudge of the fudge target, with processFudge and
//   CMansionPuzzleCircle::process
// deferred: BW3's music stepped after the controls, with CGame::updateMusic
// deferred: BW1-3's dead hero's goggles taken off and the field notes and puzzle put away after
//   the controls, with the goggles, CFieldNotes and CPuzzle
// deferred: the director left alone while a cinematic skips, a sim frame is pending or the goggles
//   are on, with skipCinematic, CNetGame's sim frames and the goggles
// deferred: BW1-3's director made to choose whenever no camera is shown, active or not, the
//   focus marked changed past the cooldown (the original's 2), with a manifest key for BW1-3's
//   director
// deferred: the camera held while the goggles are on (the decomp's goggles_camera_hold), with
//   processHotkeys' goggles
// deferred: a client leaving a game whose host stopped answering or ended it (the decomp's
//   NETPLAY), with CNetGame::initializeNetworkToJoin
// deferred: the pause menu on Escape: Return, Options (redrawing the scene after, the decomp's
//   OPTIONS_RESUMES_GAME, with its menu font), Load game, Save game, Warps (the decomp's
//   CHEAT_MENU), Quit with a confirm, and Skip cinematic in a letterboxed cinematic, with
//   showOptionsScreen, promptLoadGame, saveGame and skipCinematic
// deferred: BW1-3's iris put away as a cinematic is skipped (their resetIrisFade), with
//   skipCinematic
// deferred: the sound held while the pause menu shows (the decomp's PAUSE_SOUND), not
//   CSound::shutdown and init, which lost a dialogue line and restarted the music. The slots
//   playing as it opens are held, neither computed nor heard, and written down with their
//   sample, options, position and serial; the menu's own sounds play. Return, Save or Options
//   lets them go from the same sample, after stopping the menu's sounds; one lost meanwhile (an
//   output reopened, muting, its channel off and on) starts again where it was, in its own slot
//   under its own serial, so the game's handle still finds it. Load, Warps, Skip cinematic and
//   Quit shut the sound down and start it again as shipped. With CSound::init and shutdown, and
//   a stop on CSfxVoice that keeps its frame
// deferred: Escape closing the automap first, and ignored while the hero dies (the decomp's
//   AUTOMAP and DEATH_FADE_SKIP), with the automap and getDeathState
// deferred: the host's abort and the client's leave dialogs, with respawn and skip votes (the
//   decomp's NETPLAY), with CNetGame::initializeNetworkToHost and initializeNetworkToJoin
// deferred: BW1's and BW3's teleport skipping the rest of the frame from Escape on, with
//   CDemonMission::setTeleportTarget
// deferred: the frame left unpresented, only the window's messages handled, while a cinematic
//   skips, a sim frame is pending or as the pause menu closes, with skipCinematic, CNetGame's sim
//   frames and the pause menu
// deferred: BW1's and BW3's screen cleared before each of a camera's first three frames, with
//   the screen clear count's reset
// deferred: the frames counted, with processCheatCodes' frame rate
// deferred: BW3's end timer counted down on the screen, closing it as a death does and ending on
//   the Game Over menu, with its script command
// deferred: a dead or unplaced client watching the host's hero, and the host's death menu (the
//   decomp's NETPLAY), with CNetGame::initializeNetworkToJoin
// deferred: the session ending when a network mission is pending (the decomp's NETPLAY), with
//   CNetGame's sessions
// deferred: the fullscreen bitmap and its wait for a key, with the displayBitmap command and
//   showFullscreenBitmap
// deferred: the session ending on a chapter reload, with processHotkeys' quick load and
//   promptLoadGame
// deferred: the sound started after the first frame, with CSound::init
// deferred: BW1's and BW3's NewSet event raised after a set change, with the set change's event
// deferred: the Game Over menu after a death, with Load game and Quit, and the host's
//   disconnect, with promptLoadGame
// deferred: the damageable enemies counted, with displayActStats
// deferred: the sound stopped, with CSound::shutdown
// deferred: retail's force feedback stepped after the sound starts and stops, with
//   CForceFeedback::processEvent
// deferred: BW1-3's puzzle pictures and BW1's and BW3's cursor bitmaps freed, with CPuzzle and the
//   point-and-click cursor
// deferred: the menu's resolution and fangs back, and the set's lights and the inventory cleared,
//   with CDemonMission::run's return to the front end, CDemonSet::clearLights and freeInventory
// BW1's developer Ctrl+P was read and dropped each frame.
// nocedit 0x004daf80
// nocturne 0x0049da10
// bw1 0x004cf5e0
// bw2 0x004b6170
// bw3 0x004b7f90
int CGame::runGameSession(const SGameSessionOwners &session) {
    session.console.reset();
    session.console.printf("Nocturne is alive and kicking\n");
    session.console.printf(std::format("{}\n\n", session.build_version));
    is_processing = 0;
    time_scale_factor = 1.0F;
    game_active = true;
    camera_debug = false;
    console_enabled = false;
    editor_tools_enabled = false;
    show_customizable_keys = false;
    setGameRes(session);
    developer_mode = session.environment.getVariable(kDeveloperVariable).has_value() ||
                     session.environment.getVariable(kSpookHouseVariable).has_value();
    session.flashlight.init();
    session.flashlight.setCameraName("Flashlight");
    session.flashlight.setLightEnabled(false);
    // Nocturne started it at 64 and Blair Witch at 32, but nothing shows it before a lit weapon
    // sets its own.
    session.flashlight.setMaxDistance(static_cast<float>(getFlashlightRange()));
    session.set.initScene();
    gamma = std::clamp(gamma, kMinGamma, kMaxGamma);
    session.set.setGamma(gamma);
    clearOverlay();
    static_cast<void>(session.set.evaluateVirtualDirector(session.script.getFocusActor(), 1));
    if (getIrisContent().opens_session) {
        beginFadeIn(session.script.getFocusActor(), session.camera);
    } else {
        iris_fade_ = EIrisFade::Idle;
    }
    loadAssets(session);
    static_cast<void>(session.net_game.syncPlayers(kSyncLoaded));
    static_cast<void>(session.net_game.syncPlayers(kSyncStarting));
    saveClockTime();
    resetInputAndCenterCursor(session);
    session.net_game.processServerFrame();
    session.level_loader.cleanup();
    const bool mission_ended = playSession(session);
    session.keys.toggleInputMask(false);
    owners_.keys.clearKeypresses();
    time_scale_factor = 1.0F;
    return mission_ended ? 1 : 0;
}

// The loop of runGameSession: a frame each pass, until the script ends the mission, Enter is
// pressed or the screen has closed on a dead hero, or the window closes. The original never
// ended its session on the window's closing, but went on with no window and the input off.
bool CGame::playSession(const SGameSessionOwners &session) {
    // The seconds the hero has been dead, until the screen closes on them; then negative.
    float death_wait = 0.0F;
    engine::IRawInput &raw_input = owners_.raw_input;
    while (true) {
        session.keys.toggleInputMask(!is_paused);
        processHotkeys(session);
        updateStatusDisplays();
        playerControls(session);
        if (game_active) {
            directSession(session);
        }
        processFrame(session);
        owners_.screen.swapBuffers();
        // The best camera before it is kept, as the decomp's WINDOWS fix keeps it.
        if (raw_input.getFocusRegained()) {
            raw_input.setFocusRegained(false);
            session.set.setCameraView(session.set.getSelectedCameraIndex());
        }
        if (raw_input.getInputDisabled() || isDeathWaitOver(session, death_wait)) {
            return false;
        }
        if (session.script.isMissionEnded()) {
            return true;
        }
    }
}

// The virtual director chooses again when the script changed its focus; a new camera restarts
// the frame's clock.
void CGame::directSession(const SGameSessionOwners &session) {
    const int changed = session.script.takeFocusActorChanged() ? 1 : 0;
    if (session.set.evaluateVirtualDirector(session.script.getFocusActor(), changed) != 0) {
        saveClockTime();
    }
}

// A dead hero's session ends on Enter, or, where the game's death fades, once the screen has
// closed on them four seconds after.
bool CGame::isDeathWaitOver(const SGameSessionOwners &session, float &death_wait) {
    if (session.mission.getLocalHero()->getDeathState() != EDeathState::DEATH_STATE_DEAD) {
        return false;
    }
    if (owners_.keys.getAndClearKeyState(engine::EInputCodeType::DIK_RETURN) != 0) {
        return true;
    }
    if (!getContent().death.value_or(engine::SDeath{}).fades) {
        return false;
    }
    if (death_wait < 0.0F) {
        return fadeIn();
    }
    death_wait += delta_time_float_;
    if (death_wait > kDeathFadeSeconds) {
        beginFadeOut(session.script.getFocusActor(), session.camera);
        death_wait = kDeathFadeBegun;
    }
    return false;
}

// nocedit 0x004e07a0
void CGame::loadAssets(const SGameSessionOwners &session) {
    session.set.loadAssets();
    session.fire.loadAssets();
    session.gore.loadAssets();
    session.inventory_assets.loadAssets();
}

} // namespace nocturne::core
