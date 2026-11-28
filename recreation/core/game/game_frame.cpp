#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcamera/demoncamera.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/inv/inventory.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/script/script.h"
#include "core/set/demonset.h"
#include "core/slew/slew.h"
#include "core/sound/sound.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/console/console.h"
#include "engine/drender/demonrenderer.h"
#include "engine/pcx/pcx.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "shape/edittool/editortools.h"

#include <format>

namespace nocturne::core {
namespace {

constexpr int kOpaque = 0xffff;
constexpr int kLeftMouseButton = 1;
// Palette index 0, black.
constexpr int kBorderColor = 0;
// The editor's memory line, up from the screen's bottom.
constexpr int kMemoryLineUp = 0x42;
// The world's 24.8 fixed point.
constexpr double kFixed8ToFloat = 1.0 / 256.0;

[[nodiscard]] common::CVector3f fromFixed8(const common::CVector3i &point) {
    return {.x = static_cast<float>(static_cast<double>(point.x) * kFixed8ToFloat),
            .y = static_cast<float>(static_cast<double>(point.y) * kFixed8ToFloat),
            .z = static_cast<float>(static_cast<double>(point.z) * kFixed8ToFloat)};
}

} // namespace

// The scene is drawn, the game and its sounds moved on unless paused, the clock and the network
// game served, and the 2D drawn over it. Paused, the hero is flown by the slew keys instead, and
// the pointer drawn.
// deferred: a cinematic skip's or a pending sim frame's frame, unpaused and not drawn: the
//   client's frame, the game processed, the clock stepped a quarter second while skipping and by
//   updateDT otherwise, then the server's frame, with skipCinematic and CNetGame's sim frames
// deferred: the screen paint time printed while profiling, with processCheatCodes' profile mode
// deferred: the screen cleared first while the light view is on or the session asks, with
//   processHotkeys' light view and runGameSession's clear
// deferred: the scene left undrawn while the goggles are on, and drawn again in a frame they went
//   off in (the decomp's GOGGLES_OFF_FRAME), with the goggles
// deferred: BW1-3's scene and static lights left undrawn while the field notes show or a puzzle is
//   up, and the puzzle stepped before the client's frame, with CFieldNotes and CPuzzle
// deferred: the world held still while the automap shows, its frame effects cleared instead, and
//   the automap stepped after the clock (the decomp's AUTOMAP), with the automap
// deferred: retail's force feedback stepped after the sound, with CForceFeedback::processEvent
// The actors are drawn into the spotlights' maps for the next frame's scene.
// deferred: the static lights left undrawn while the goggles are on, with the goggles
// deferred: the frame not drawn while the cheat turns drawing off, with processCheatCodes
// deferred: the goggles' view, with CDemonSet::renderGogglesView
// deferred: BW1-3's field notes or puzzle drawn in the scene's place, or monster vision's view,
//   with CFieldNotes, CPuzzle and CDemonSet::renderMonsterVisionView
// deferred: BW2's blood timer's seconds centred above the scene, with CEventList's timers
// deferred: the inventory held to the screen's 4:3 while a modal dialog is up (the decomp's
//   NETPLAY), with the network dialogs
// deferred: the light view while it is on, in a window of its own (the decomp's DEBUG_WINDOW),
//   with CDemonSet::renderLightDebugView
// deferred: the automap (the decomp's AUTOMAP), with the automap
// deferred: the performance overlay (the decomp's CHEAT_MENU), with the cheat menu
// deferred: the camera debug's fudge target line, with processFudge
// deferred: the camera debug's hardware renderer textures counted by size, with a renderer report
//   of them
// deferred: the sound debug switched on and off, with processCheatCodes
// deferred: the event list, while event processing shows it, with CEventList::render
// deferred: the script editor below the light view in script debug, and the decomp's debug
//   window frame in its place (DEBUG_WINDOW), with CScript::renderEditor
// deferred: the editor tools switched on and off, with processCheatCodes
// deferred: a client unplaced or dead told it waits for the host, at the top (the decomp's
//   NETPLAY), with CNetGame::initializeNetworkToJoin
// deferred: an open network dialog drawn over the frame, with runGameSession's host's and client's
//   dialogs
// deferred: BW1's and BW3's point-and-click cursor after the MouseControlMode commands, with the
//   point-and-click control mode
// deferred: BW1-3's screen cleared in the frame the goggles or monster vision go off, with
//   CDemonSet::renderMonsterVisionView
// deferred: the local hero's item panels left out of the scene in the editor, with the editor's
//   mission mode
// nocedit 0x004da100
void CGame::processFrame(const SGameSessionOwners &session) {
    owners_.special.setRenderedTriangleCount(0);
    const bool external = owners_.special.getUseExternalRenderer();
    if (external) {
        owners_.screen.openScreenDevice();
    }
    const SInventoryHud hud = getInventoryHud(session);
    const SSceneInventory local{.inventory = session.mission.getLocalHero()->getInventory(),
                                .hud = hud};
    session.set.renderScene(&local);
    session.net_game.processClientFrame();
    if (is_paused) {
        slewLocalHero(session);
    } else {
        process(session);
        session.sound.process(getSoundScene(session), delta_time_float_);
    }
    updateDT();
    session.net_game.processServerFrame();
    session.set.renderStaticLights();
    static_cast<void>(session.renderer.setRenderAlpha(kOpaque));
    renderFrame(session);
    if (external) {
        owners_.screen.closeScreenDevice();
    }
}

// The click places the hero where the scene's depth puts the pointer, facing as it was.
void CGame::slewLocalHero(const SGameSessionOwners &session) {
    CHero &hero = *session.mission.getLocalHero();
    CSlew slew(hero.getLocation().position, hero.getOrientation());
    slew.processInput(owners_.keys, delta_time_float_);
    common::CVector3f position = slew.getPosition();
    common::CVector3f orientation = slew.getOrientation();
    hero.setPositionAndOrientation(&position, &orientation);
    engine::IRawInput &raw_input = owners_.raw_input;
    if ((raw_input.getMouseButtonFlags() & kLeftMouseButton) == 0) {
        return;
    }
    common::CVector3i screen_point;
    static_cast<void>(session.camera.screenToWorldCoord(raw_input.getMouseX(),
                                                        raw_input.getMouseY(), &screen_point));
    common::CVector3i world_point;
    session.camera.screenToWorldTransform(&screen_point, &world_point);
    common::CVector3f place = fromFixed8(world_point);
    common::CVector3f facing = hero.getOrientation();
    hero.setPositionAndOrientation(&place, &facing);
    raw_input.releaseLeftMouseButton();
}

// Text is drawn opaque whatever alpha the scene left (the decomp's TEXT_RENDER_ALPHA). The
// screenshot is the scene before the text goes over it; the original took one only for its
// developers.
void CGame::renderFrame(const SGameSessionOwners &session) {
    engine::CSpecial &special = owners_.special;
    static_cast<void>(special.lockFrame());
    if (takeAction(EGameAction::Screenshot)) {
        saveScreenshot();
    }
    session.mission.getLocalHero()->getInventory().renderAllItems(getInventoryHud(session));
    drawScreenBorder();
    captureDebugMovieFrame();
    static_cast<void>(owners_.three_d.setRenderAlpha(kOpaque));
    session.script.renderSubtitles(getScriptScreen(session));
    renderOverlay(session);
    renderIrisFade(session);
    renderCameraDebug(session);
    if (sound_debug) {
        renderSoundDebug();
    }
    if (editor_tools_enabled) {
        owners_.two_d.drawText(shape::CEditorTools::displayMemoryDiagnostics(session.heap), 0,
                               owners_.screen.getWindowHeight() - kMemoryLineUp);
    }
    renderDeathBanner(session);
    if (show_customizable_keys) {
        showCustomizableKeys(session);
    }
    if (console_enabled) {
        renderConsole(session);
    }
    if (is_paused) {
        session.editor_tools.drawMousePointer(false);
    }
    static_cast<void>(special.unlockFrame());
}

// nocedit 0x004d7e50
// bw1 0x004cc0c0
// bw2 0x004b30d0
// bw3 0x004b45e0
void CGame::drawScreenBorder() {
    engine::C2d &two_d = owners_.two_d;
    const int right = owners_.screen.getWindowWidth() - 1;
    const int bottom = owners_.screen.getWindowHeight() - 1;
    two_d.setActiveRenderColor(kBorderColor);
    two_d.drawLine(0, 0, right, 0);
    two_d.drawLine(1, 1, right - 1, 1);
    two_d.drawLine(0, bottom, right, bottom);
    two_d.drawLine(1, bottom - 1, right - 1, bottom - 1);
    two_d.drawLine(0, 1, 0, bottom - 1);
    two_d.drawLine(1, 2, 1, bottom - 2);
    two_d.drawLine(right, 1, right, bottom - 1);
    two_d.drawLine(right - 1, 2, right - 1, bottom - 2);
}

void CGame::saveScreenshot() {
    ++screenshot_index_;
    engine::saveScreenshotGeneral(owners_.screen, owners_.two_d, owners_.dosio,
                                  std::format("demon{}.png", screenshot_index_));
}

// The console's scrolling is the decomp's console shim's, which read its keys as it drew.
void CGame::renderConsole(const SGameSessionOwners &session) {
    session.console.processInput(owners_.keys, owners_.raw_input.takeMouseWheelNotches());
    session.console.render(owners_.two_d, owners_.screen.getWindowWidth(),
                           owners_.screen.getWindowHeight());
}

} // namespace nocturne::core
