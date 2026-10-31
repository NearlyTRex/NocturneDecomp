#include "common/error/error.h"
#include "core/actor/notported.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/dlight/demonlight.h"
#include "core/game/game.h"
#include "core/set/demonset.h"
#include "engine/2d/2d.h"
#include "engine/console/console.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "shape/edittool/editortools.h"

#include <algorithm>
#include <format>

namespace nocturne::core {
namespace {

constexpr int kFallbackWidth = 640;
constexpr int kFallbackHeight = 480;
// Below this many lines the editor's text is drawn in its small font.
constexpr int kSmallFontHeight = 384;
// The gamma a session plays at is held between a half and one, 16.16.
constexpr int kMinGamma = 0x8000;
constexpr int kMaxGamma = 0x10000;
constexpr float kFlashlightRange = 64.0F;

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
//   dialog, with processHotkeys, processFrame and playerControls
// deferred: forgetting each hero's own light, the Baron's state and a helper's death (the decomp's
//   hero_light, baron and helper_death resets), with CHero, CBaron and playerControls
// deferred: starting the session's autosave (the decomp's nocturne_autosave_session_start), with
//   the autosave poll in the play loop
// deferred: developer mode when VELOCITY is set, with processHotkeys
// deferred: starting the fire effects, or the master lights' saved states after a load, with
//   CFireEffect::init and CDemonSet::loadMasterLightStates
// deferred: clearing the overlay and the pick list, choosing the first camera, fading in and
//   loading the session's assets, with clearOverlay, setCameraView, evaluateVirtualDirector,
//   beginFadeIn and loadAssets
// deferred: the cheats the menu turned on (the decomp's nocturne_cheats_apply), with
//   showCheatsMenu
// deferred: waiting for every player and starting the server's frames, with CNetGame::syncPlayers
//   and processServerFrame
// deferred: saving the clock, centring the input, freeing the loading screen, the hero's aim mode
//   and the act not yet complete, then the play loop, with the play loop
// nocedit 0x004daf80
int CGame::runGameSession(const SGameSessionOwners &session) {
    session.console.reset();
    session.console.printf("Nocturne is alive and kicking\n");
    session.console.printf(std::format("{}\n\n", session.build_version));
    is_processing = 0;
    time_scale_factor = 1.0F;
    setGameRes(session);
    session.flashlight.init();
    session.flashlight.setCameraName("Flashlight");
    session.flashlight.setLightEnabled(false);
    session.flashlight.setMaxDistance(kFlashlightRange);
    session.set.initScene();
    gamma = std::clamp(gamma, kMinGamma, kMaxGamma);
    session.set.setGamma(gamma);
    quitNotPorted("CGame", "runGameSession's play loop");
}

} // namespace nocturne::core
