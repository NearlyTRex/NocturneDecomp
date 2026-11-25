#include "core/inivar/inivar.h"

#include "common/error/error.h"
#include "common/video/widescreen.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "engine/console/console.h"
#include "engine/gamepadinput.h"
#include "engine/ini/inifile.h"
#include "engine/pod/pod.h"
#include "engine/special/special.h"
#include "platform/antialias.h"
#include "platform/display.h"
#include "platform/filesystem.h"
#include "platform/upscaler.h"
#include "sound/sndmain/sndmain.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <cstddef>
#include <string_view>

namespace nocturne::core {
namespace {

// Room for a list of bindings; the original read each key as one number.
constexpr std::size_t kBindingsBufferSize = 256;
constexpr std::size_t kLanguageBufferSize = 64;

// An enum setting's number; one outside 0..last keeps the setting as it was. The original stored
// heroNumber, gameControl and aimMode unchecked.
int readEnumValue(const engine::CIniFile &file, std::string_view key, int value, int last) {
    const int read = file.getInteger(key, value);
    return read < 0 || read > last ? value : read;
}

// An index or rate; a negative one keeps the setting as it was.
int readNonNegative(const engine::CIniFile &file, std::string_view key, int value) {
    const int read = file.getInteger(key, value);
    return read < 0 ? value : read;
}

void readFlag(const engine::CIniFile &file, std::string_view key, int &value) {
    value = file.getInteger(key, value);
}

void readGraphics(const engine::CIniFile &file, const SIniDataOwners &owners) {
    CGame &game = owners.game;
    readFlag(file, "gamePIXX", game.game_pixx);
    readFlag(file, "gamePIXY", game.game_pixy);
    readFlag(file, "gameBPP", game.game_bpp);
    owners.special.setUseDirect3D(
        file.getInteger("useDirect3D", owners.special.getUseDirect3D() ? 1 : 0) != 0);
    readFlag(file, "gamma", game.gamma);
    game.hero_number =
        static_cast<EHeroType>(readEnumValue(file, "heroNumber", static_cast<int>(game.hero_number),
                                             static_cast<int>(EHeroType::HERO_TYPE_MOLOCH)));
    game.halo_mode = static_cast<EHaloMode>(
        readEnumValue(file, "haloMode", static_cast<int>(game.halo_mode), kHaloModeCount - 1));
    game.flashlight_range = static_cast<EFlashlightRange>(
        readEnumValue(file, "flashlightRange", static_cast<int>(game.flashlight_range),
                      kFlashlightRangeCount - 1));
    readFlag(file, "firstTimeFlag", game.first_time_flag);
    readFlag(file, "subtitleMode", game.subtitle_mode);
    owners.messages.setLanguage(
        file.getString("language", owners.messages.getLanguage(), kLanguageBufferSize));
    readFlag(file, "bloodFlag", game.blood_flag);
    readFlag(file, "nudityFlag", game.nudity_flag);
    readFlag(file, "foulLanguageFlag", game.foul_language_flag);
    readFlag(file, "shadowFlag", game.shadow_flag);
    readFlag(file, "quimbyFlag", game.quimby_flag);
    if (game.quimby_flag != 0) {
        game.nudity_flag = 0;
        game.foul_language_flag = 0;
        game.blood_flag = 0;
    }
    owners.special.setCurrentGraphicsBoard(file.getInteger("currentBoard", 0));
    owners.fonts.setOsFontChoice(static_cast<EOsFontChoice>(
        readEnumValue(file, "osFont", static_cast<int>(owners.fonts.getOsFontChoice()),
                      static_cast<int>(EOsFontChoice::System))));
    owners.fonts.setMenuFontChoice(static_cast<EMenuFontChoice>(
        readEnumValue(file, "menuFont", static_cast<int>(owners.fonts.getMenuFontChoice()),
                      static_cast<int>(EMenuFontChoice::Small))));
    owners.display.setDisplayIndex(
        readNonNegative(file, "displayIndex", owners.display.getDisplayIndex()));
    owners.display.setFullscreenSize(static_cast<platform::EFullscreenSize>(
        readEnumValue(file, "fullscreenSize", static_cast<int>(owners.display.getFullscreenSize()),
                      platform::kFullscreenSizeCount - 1)));
    owners.display.setRefreshRate(
        readNonNegative(file, "refreshRate", owners.display.getRefreshRate()));
    owners.display.setVsync(file.getInteger("vsync", owners.display.getVsync() ? 1 : 0) != 0);
    owners.display.setWindowSize(game.game_pixx, game.game_pixy);
    owners.display.setWindowMode(static_cast<platform::EWindowMode>(
        readEnumValue(file, "windowMode", static_cast<int>(owners.display.getWindowMode()),
                      static_cast<int>(platform::EWindowMode::Borderless))));
    owners.display.setUpscaler(static_cast<platform::EUpscaler>(
        readEnumValue(file, "upscaler", static_cast<int>(owners.display.getUpscaler()),
                      platform::kUpscalerCount - 1)));
    // One out of range is the default.
    const int sharpness =
        file.getInteger("upscalerSharpness", owners.display.getUpscalerSharpness());
    owners.display.setUpscalerSharpness(sharpness < 0 || sharpness > platform::kUpscalerSharpnessMax
                                            ? platform::kUpscalerSharpnessDefault
                                            : sharpness);
    owners.display.setAntialias(static_cast<platform::EAntialias>(
        readEnumValue(file, "antialias", static_cast<int>(owners.display.getAntialias()),
                      platform::kAntialiasCount - 1)));
    owners.display.setWidescreen(static_cast<common::EWidescreen>(
        readEnumValue(file, "widescreen", static_cast<int>(owners.display.getWidescreen()),
                      common::kWidescreenCount - 1)));
}

// Shadows are only written for a game that isn't censored, as the original had it.
void writeGraphics(engine::CIniFile &file, const SIniDataOwners &owners) {
    const CGame &game = owners.game;
    file.setInteger("gamePIXX", game.game_pixx);
    file.setInteger("gamePIXY", game.game_pixy);
    file.setInteger("gameBPP", game.game_bpp);
    file.setInteger("useDirect3D", owners.special.getUseDirect3D() ? 1 : 0);
    file.setInteger("gamma", game.gamma);
    file.setInteger("heroNumber", static_cast<int>(game.hero_number));
    file.setInteger("haloMode", static_cast<int>(game.halo_mode));
    file.setInteger("flashlightRange", static_cast<int>(game.flashlight_range));
    file.setInteger("firstTimeFlag", game.first_time_flag);
    file.setInteger("subtitleMode", game.subtitle_mode);
    file.setString("language", owners.messages.getLanguage());
    file.setInteger("bloodFlag", game.blood_flag);
    if (game.quimby_flag == 0) {
        file.setInteger("nudityFlag", game.nudity_flag);
        file.setInteger("foulLanguageFlag", game.foul_language_flag);
        file.setInteger("shadowFlag", game.shadow_flag);
    }
    file.setInteger("quimbyFlag", game.quimby_flag);
    file.setInteger("currentBoard", owners.special.getCurrentGraphicsBoard());
    file.setInteger("osFont", static_cast<int>(owners.fonts.getOsFontChoice()));
    file.setInteger("menuFont", static_cast<int>(owners.fonts.getMenuFontChoice()));
    file.setInteger("windowMode", static_cast<int>(owners.display.getWindowMode()));
    file.setInteger("displayIndex", owners.display.getDisplayIndex());
    file.setInteger("fullscreenSize", static_cast<int>(owners.display.getFullscreenSize()));
    file.setInteger("refreshRate", owners.display.getRefreshRate());
    file.setInteger("vsync", owners.display.getVsync() ? 1 : 0);
    file.setInteger("upscaler", static_cast<int>(owners.display.getUpscaler()));
    file.setInteger("upscalerSharpness", owners.display.getUpscalerSharpness());
    file.setInteger("antialias", static_cast<int>(owners.display.getAntialias()));
    file.setInteger("widescreen", static_cast<int>(owners.display.getWidescreen()));
}

// The defaults for the control mode come first, then whatever the file binds over them.
void readControls(const engine::CIniFile &file, CGame &game) {
    game.game_control = static_cast<EControlMode>(
        readEnumValue(file, "gameControl", static_cast<int>(game.game_control),
                      static_cast<int>(EControlMode::CONTROL_MODE_GAMEPAD)));
    game.restoreDefaultControls();
    for (std::size_t index = 0; index < kGameActionCount; ++index) {
        const auto action = static_cast<EGameAction>(index);
        game.controls.parseBindings(action, file.getString(getGameActionInfo(action).ini_key,
                                                           game.controls.formatBindings(action),
                                                           kBindingsBufferSize));
    }
    readFlag(file, "mapZoom", game.map_zoom);
    readFlag(file, "invertMouseYAxis", game.invert_mouse_y_axis);
    readFlag(file, "alwaysRun", game.always_run);
    readFlag(file, "xMouseSensitivity", game.x_mouse_sensitivity);
    readFlag(file, "yMouseSensitivity", game.y_mouse_sensitivity);
    readFlag(file, "xCenter", game.x_center);
    readFlag(file, "yCenter", game.y_center);
    readFlag(file, "xStickMin", game.x_stick_min);
    readFlag(file, "xStickMax", game.x_stick_max);
    readFlag(file, "yStickMin", game.y_stick_min);
    readFlag(file, "yStickMax", game.y_stick_max);
    game.aim_mode =
        static_cast<EAimMode>(readEnumValue(file, "aimMode", static_cast<int>(game.aim_mode),
                                            static_cast<int>(EAimMode::AIM_MODE_MANUAL)));
    readFlag(file, "autoUseHealth", game.auto_use_health);
}

void writeControls(engine::CIniFile &file, const CGame &game) {
    file.setInteger("gameControl", static_cast<int>(game.game_control));
    for (std::size_t index = 0; index < kGameActionCount; ++index) {
        const auto action = static_cast<EGameAction>(index);
        file.setString(getGameActionInfo(action).ini_key, game.controls.formatBindings(action));
    }
    file.setInteger("mapZoom", game.map_zoom);
    file.setInteger("invertMouseYAxis", game.invert_mouse_y_axis);
    file.setInteger("alwaysRun", game.always_run);
    file.setInteger("xMouseSensitivity", game.x_mouse_sensitivity);
    file.setInteger("yMouseSensitivity", game.y_mouse_sensitivity);
    file.setInteger("xCenter", game.x_center);
    file.setInteger("yCenter", game.y_center);
    file.setInteger("xStickMin", game.x_stick_min);
    file.setInteger("xStickMax", game.x_stick_max);
    file.setInteger("yStickMin", game.y_stick_min);
    file.setInteger("yStickMax", game.y_stick_max);
    file.setInteger("aimMode", static_cast<int>(game.aim_mode));
    file.setInteger("autoUseHealth", game.auto_use_health);
}

// A hand-edited value out of range is held to it, so the pad can't be left unusable.
void readGamepadTuning(const engine::CIniFile &file, engine::SGamepadTuning &tuning) {
    using Tuning = engine::SGamepadTuning;
    tuning.deadzone = std::clamp(file.getInteger("padDeadzone", tuning.deadzone),
                                 Tuning::kMinDeadzone, Tuning::kMaxDeadzone);
    tuning.turn_rate = std::clamp(file.getInteger("padTurnRate", tuning.turn_rate),
                                  Tuning::kMinRate, Tuning::kMaxRate);
    tuning.look_rate = std::clamp(file.getInteger("padLookRate", tuning.look_rate),
                                  Tuning::kMinRate, Tuning::kMaxRate);
    tuning.invert_look =
        file.getInteger("invertPadYAxis", static_cast<int>(tuning.invert_look)) != 0;
}

void writeGamepadTuning(engine::CIniFile &file, const engine::SGamepadTuning &tuning) {
    file.setInteger("padDeadzone", tuning.deadzone);
    file.setInteger("padTurnRate", tuning.turn_rate);
    file.setInteger("padLookRate", tuning.look_rate);
    file.setInteger("invertPadYAxis", static_cast<int>(tuning.invert_look));
}

// Read before the pods mount, so their checks apply to every one.
void readPodSettings(const engine::CIniFile &file, engine::CPod &pod) {
    const engine::SPodSettings &settings = pod.getSettings();
    pod.setSettings({
        .verify_checksums =
            file.getInteger("podVerifyChecksums", settings.verify_checksums ? 1 : 0) != 0,
        .log_audit_trail = file.getInteger("podAuditLog", settings.log_audit_trail ? 1 : 0) != 0,
    });
}

void writePodSettings(engine::CIniFile &file, const engine::SPodSettings &settings) {
    file.setInteger("podVerifyChecksums", settings.verify_checksums ? 1 : 0);
    file.setInteger("podAuditLog", settings.log_audit_trail ? 1 : 0);
}

} // namespace

// The renderer DLL and AGP texturing the original also read have no reader in the game now, so
// their lines are left as they are; retail has no Editor section. The window opens at the
// resolution the game will run at, as the decomp's menu resolution change has it, on the
// enhanced game's display, in its window mode and upscaler. The pad's tuning is the decomp's
// (pad_tuning.h). The language, which picks the packages' translations, is the enhanced game's,
// as are the checks on the pods. The controls wait for readIniControls, since their defaults
// are the packages', which aren't loaded yet. A game whose folder ships no ini, as Blair Witch's
// empty SYSTEM, is given an empty one, so it starts from the defaults the reads give; only one
// that can't be made writable is fatal.
// deferred: BW1's and BW2's puzzleDifficultyMode and combatDifficultyMode read into the game's
//   difficulties, with each game's own ini file
// nocedit 0x004fbd90
void readIniData(engine::CIni &ini, platform::IFileSystem &file_system,
                 const SIniDataOwners &owners) {
    if (!file_system.getFileInfo(kIniFilename)) {
        file_system.writeFile(kIniFilename, "");
    }
    if (!file_system.setReadOnly(kIniFilename, false)) {
        common::displayErrorAndQuit("Please copy Nocturne to your hard drive");
    }
    engine::CIniFile file(ini, kIniFilename);
    file.readIniHeader("Graphics");
    readGraphics(file, owners);
    file.readIniHeader("Sound");
    owners.sound_main.readIni(file);
    file.readIniHeader("Control");
    readGamepadTuning(file, owners.gamepad.tuning);
    file.readIniHeader("Debug");
    readFlag(file, "logConsoleFlag", owners.console.file_logging_enabled);
    readFlag(file, "headOfHorrorCheat", owners.game.head_of_horror_cheat);
    readPodSettings(file, owners.pod);
}

void readIniControls(engine::CIni &ini, const SIniDataOwners &owners) {
    engine::CIniFile file(ini, kIniFilename);
    file.readIniHeader("Control");
    readControls(file, owners.game);
}

// deferred: BW1's and BW2's puzzleDifficultyMode and combatDifficultyMode written from the
//   game's difficulties, with each game's own ini file
// nocedit 0x004fc510
void writeIniData(engine::CIni &ini, const SIniDataOwners &owners) {
    engine::CIniFile file(ini, kIniFilename);
    file.readIniHeader("Graphics");
    writeGraphics(file, owners);
    file.readIniHeader("Sound");
    owners.sound_main.writeIni(file);
    file.readIniHeader("Control");
    writeControls(file, owners.game);
    writeGamepadTuning(file, owners.gamepad.tuning);
    file.readIniHeader("Debug");
    file.setInteger("logConsoleFlag", owners.console.file_logging_enabled);
    file.setInteger("headOfHorrorCheat", owners.game.head_of_horror_cheat);
    writePodSettings(file, owners.pod.getSettings());
}

} // namespace nocturne::core
