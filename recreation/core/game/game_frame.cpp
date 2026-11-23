#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/actor/notported.h"
#include "core/dcamera/demoncamera.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/slew/slew.h"
#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "shape/edittool/editortools.h"

namespace nocturne::core {
namespace {

constexpr int kOpaque = 0xffff;
constexpr int kLeftMouseButton = 1;
// The world's 24.8 fixed point.
constexpr double kFixed8ToFloat = 1.0 / 256.0;

[[nodiscard]] common::CVector3f fromFixed8(const common::CVector3i &point) {
    return {.x = static_cast<float>(static_cast<double>(point.x) * kFixed8ToFloat),
            .y = static_cast<float>(static_cast<double>(point.y) * kFixed8ToFloat),
            .z = static_cast<float>(static_cast<double>(point.z) * kFixed8ToFloat)};
}

} // namespace

// The scene is drawn, the game moved on unless paused, the clock and the network game served,
// and the 2D drawn over it. Paused, the hero is flown by the slew keys instead.
// deferred: a cinematic skip's or a pending sim frame's frame, unpaused and not drawn: the
//   client's frame, the game processed, the clock stepped a quarter second while skipping and by
//   updateDT otherwise, then the server's frame, with skipCinematic and CNetGame's sim frames
// deferred: the screen paint time printed while profiling, with processCheatCodes' profile mode
// deferred: the frame's triangle count started from none, with the camera debug's count
// deferred: the screen cleared first while the light view is on or the session asks, with
//   processHotkeys' light view and runGameSession's clear
// deferred: the scene drawn while the goggles are off, and again in a frame they went off in (the
//   decomp's GOGGLES_OFF_FRAME), with CDemonSet::renderScene
// deferred: BW1-3's scene and static lights left undrawn while the field notes show or a puzzle is
//   up, and the puzzle stepped before the client's frame, with CFieldNotes and CPuzzle
// deferred: the world held still while the automap shows, its frame effects cleared instead, and
//   the automap stepped after the clock (the decomp's AUTOMAP), with the automap
// deferred: the sound processed after the game, with CSound::process
// deferred: retail's force feedback stepped after the sound, with CForceFeedback::processEvent
// deferred: the static lights drawn while the goggles are off, with
//   CDemonSet::renderStaticLights
// deferred: the frame not drawn while the cheat turns drawing off, with processCheatCodes
// deferred: the goggles' view, with CDemonSet::renderGogglesView
// deferred: BW1-3's field notes or puzzle drawn in the scene's place, or monster vision's view,
//   with CFieldNotes, CPuzzle and CDemonSet::renderMonsterVisionView
// deferred: F4's screenshot in developer mode or with SPOOKHOUSE set, with
//   saveScreenshotGeneral
// deferred: BW2's blood timer's seconds centred above the scene, with CEventList's timers
// deferred: the inventory's items, with CInventory::renderAllItems
// deferred: the inventory held to the screen's 4:3 while a modal dialog is up (the decomp's
//   NETPLAY), with the network dialogs
// deferred: the light view while it is on, in a window of its own (the decomp's DEBUG_WINDOW),
//   with CDemonSet::renderLightDebugView
// deferred: the screen border, with drawScreenBorder
// deferred: the automap (the decomp's AUTOMAP), with the automap
// deferred: the performance overlay (the decomp's CHEAT_MENU), with the cheat menu
// deferred: the debug movie: Ctrl+V starting and stopping it, and each frame written averaged to
//   its size as a .raw in movie, up to its frame limit, with setupMovieRecording
// deferred: the subtitles, with CScript::renderSubtitles
// deferred: the iris fade, with renderIrisFade
// deferred: the camera debug's camera, frame rate, hero, slew, fudge, sound memory, texture cache,
//   skeleton memory, debug string and hardware texture lines, its averages reset while it is off,
//   with processHotkeys' camera debug
// deferred: the sound debug's playing samples, with the sound debug's switch
// deferred: the event list, while event processing shows it, with CEventList::render
// deferred: the script editor below the light view in script debug, and the decomp's debug
//   window frame in its place (DEBUG_WINDOW), with CScript::renderEditor
// deferred: the memory diagnostics line while the editor tools are on, with
//   CEditorTools::displayMemoryDiagnostics
// deferred: "You're dead.  Game over." while the local hero is dead, which BW1 and BW3 copy but
//   never draw, and the decomp's banner a quarter down (HUD), with getDeathState's death wait
// deferred: a client unplaced or dead told it waits for the host, at the top (the decomp's
//   NETPLAY), with CNetGame::initializeNetworkToJoin
// deferred: the customizable keys, with showCustomizableKeys
// deferred: the console, with CConsole::render and processHotkeys' console
// deferred: the pause menu's pick list over the frame, with runGameSession's pause menu
// deferred: the pointer left undrawn in an unpaused frame, with CGame::process
// deferred: BW1's and BW3's point-and-click cursor after the MouseControlMode commands, with the
//   point-and-click control mode
// deferred: BW1-3's screen cleared in the frame the goggles or monster vision go off, with
//   CDemonSet::renderMonsterVisionView
// nocedit 0x004da100
void CGame::processFrame(const SGameSessionOwners &session) {
    const bool external = owners_.special.getUseExternalRenderer();
    if (external) {
        owners_.screen.openScreenDevice();
    }
    session.net_game.processClientFrame();
    if (!is_paused) {
        quitNotPorted("CGame", "process");
    }
    slewLocalHero(session);
    updateDT();
    session.net_game.processServerFrame();
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

// Text is drawn opaque whatever alpha the scene left (the decomp's TEXT_RENDER_ALPHA).
void CGame::renderFrame(const SGameSessionOwners &session) {
    engine::CSpecial &special = owners_.special;
    static_cast<void>(special.lockFrame());
    static_cast<void>(owners_.three_d.setRenderAlpha(kOpaque));
    renderOverlay(session);
    session.editor_tools.drawMousePointer(false);
    static_cast<void>(special.unlockFrame());
}

} // namespace nocturne::core
