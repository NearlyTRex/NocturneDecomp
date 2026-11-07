#include "common/math/extendedfloat.h"
#include "core/dcamera/demoncamera.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/game/keychord.h"
#include "core/script/script.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/sound/sound.h"
#include "engine/keys/keys.h"
#include "engine/screendevice.h"
#include "sound/sndmain/sndmain.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <span>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

constexpr int kGammaStep = 0x400;
// 16.16 fixed point's one.
constexpr double kGammaOne = 65536.0;
constexpr float kGammaMessageSeconds = 1.0F;
// The script view needs a screen this tall, whose top this many lines show the scene.
constexpr int kScriptViewLeastHeight = 480;
constexpr int kScriptViewHeight = 240;
constexpr float kAmbientStep = 0.02F;
// The camera's blend factor's units, 0xffff full.
constexpr double kBlendUnit = 1.0 / 65535.0;

// From where the camera's blend stands, for every camera, held between none and full.
void stepAmbientLight(const SGameSessionOwners &session, float step) {
    const CExtendedFloat sum =
        (CExtendedFloat(static_cast<double>(session.camera.getCoronaBlendFactor())) *
         CExtendedFloat(kBlendUnit)) +
        CExtendedFloat(static_cast<double>(step));
    float value = sum.toFloat();
    if (sum < CExtendedFloat(0.0)) {
        value = 0.0F;
    }
    value = std::min(value, 1.0F);
    const auto camera_count = static_cast<int>(session.set.getCameras().size());
    for (int index = 0; index < camera_count; ++index) {
        session.set.setCameraAmbientValue(index, value);
    }
}

} // namespace

// The original read fixed keys; each is now an action's. Muting goes as the main menu's does; the
// original shut the sound down and started it again.
// deferred: nothing while a modal dialog is up, with the pause menu's network dialogs
// deferred: edit mode and its cameras left alone while a cinematic skips, and the agreed skip
//   polled (the decomp's net_skip.h nocturne_net_skip_poll), with processFrame's cinematic skip
// deferred: the script's change of focus forgotten as edit mode ends, with
//   CDemonMission::process's
// deferred: pausing, the sound shut down and started again, with CSound::shutdown, CSound::init
//   and the paused frame
// deferred: the camera debug, also with SPOOKHOUSE set, with processFrame's
// deferred: the motion debug drawing, with the renderOpaque of Biggs, the Succubus and the
//   Dracula brides
// deferred: F5 muting and quick load only outside script debug, with processCheatCodes' script
//   debug
// deferred: the debug display, not while a movie records, with processFrame's
// deferred: saving, loading, quick saving with its "Quick Save" message, and quick loading after
//   asking, not while letterboxed or loading in a network game, with CGame::saveGame and
//   promptLoadGame
// deferred: the keys help, with renderOverlay's key list
// deferred: the console, also with SPOOKHOUSE set, with processFrame's console
// deferred: the script debug keys while not paused: running or stopping the script in the script
//   view, resuming it, and resetting its dialog, with CScript's script state and resetDialogState
// deferred: the camera on or off, with CDemonSet's camera flag's reader
// nocedit 0x004dcee0
void CGame::processHotkeys(const SGameSessionOwners &session) {
    if (developer_mode && takeAction(EGameAction::EditMode)) {
        game_active = !game_active;
        if (game_active) {
            static_cast<void>(
                session.set.evaluateVirtualDirector(session.script.getFocusActor(), 1));
        }
    }
    if (!game_active) {
        const auto camera_count = static_cast<int>(session.set.getCameras().size());
        if (takeAction(EGameAction::PrevCamera)) {
            camera_view_index = camera_view_index > 0 ? camera_view_index - 1 : camera_count - 1;
            session.set.setCameraView(camera_view_index);
        } else if (takeAction(EGameAction::NextCamera)) {
            camera_view_index = camera_view_index + 1 < camera_count ? camera_view_index + 1 : 0;
            session.set.setCameraView(camera_view_index);
        }
    }
    if (takeAction(EGameAction::Mute)) {
        owners_.sound_main.setSoundMuted(!owners_.sound_main.isSoundMuted());
        session.sound.configure();
    }
    const int height = owners_.screen.getWindowHeight();
    if (developer_mode && takeAction(EGameAction::ScriptView) && height >= kScriptViewLeastHeight) {
        script_view = !script_view;
        session.set.reinitCamera(script_view ? kScriptViewHeight : height);
    }
    if (takeAction(EGameAction::GammaDown)) {
        stepGamma(session, -kGammaStep);
    }
    if (takeAction(EGameAction::GammaUp)) {
        stepGamma(session, kGammaStep);
    }
    if (developer_mode && takeAction(EGameAction::AmbientDown)) {
        stepAmbientLight(session, -kAmbientStep);
    } else if (developer_mode && takeAction(EGameAction::AmbientUp)) {
        stepAmbientLight(session, kAmbientStep);
    }
}

bool CGame::takeAction(EGameAction action) {
    const std::span<const SKeyChord> chords = controls.getBindings(action);
    const auto pressed = std::ranges::find_if(chords, [&](const SKeyChord &chord) {
        return isChordHeld(chord, owners_.keys) && !isOutranked(chord, action);
    });
    if (pressed == chords.end()) {
        return false;
    }
    static_cast<void>(owners_.keys.getAndClearKeyState(pressed->code));
    return true;
}

bool CGame::isOutranked(const SKeyChord &chord, EGameAction action) const {
    const EActionContext context = getGameActionInfo(action).context;
    for (std::size_t index = 0; index < kGameActionCount; ++index) {
        const auto other = static_cast<EGameAction>(index);
        if (other == action || getGameActionInfo(other).context != context) {
            continue;
        }
        const bool wider =
            std::ranges::any_of(controls.getBindings(other), [&](const SKeyChord &c) {
                return outranks(c, chord) && isChordHeld(c, owners_.keys);
            });
        if (wider) {
            return true;
        }
    }
    return false;
}

// The new gamma is shown for a second.
void CGame::stepGamma(const SGameSessionOwners &session, int step) {
    gamma = std::clamp(gamma + step, kMinGamma, kMaxGamma);
    displayMessage(std::format("Gamma : {:f}", static_cast<double>(gamma) / kGammaOne),
                   kGammaMessageSeconds);
    session.set.setGamma(gamma);
}

} // namespace nocturne::core
