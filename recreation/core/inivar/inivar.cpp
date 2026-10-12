#include "core/inivar/inivar.h"

#include "common/error/error.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "engine/console/console.h"
#include "engine/ini/inifile.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "platform/filesystem.h"
#include "sound/sndmain/sndmain.h"

#include <cstddef>
#include <string_view>

namespace nocturne::core {
namespace {

constexpr std::string_view kIniFilename = ".\\system\\nocturne.ini";
// Room for a list of bindings; the original read each key as one number.
constexpr std::size_t kBindingsBufferSize = 256;

// An enum setting's number; one outside 0..last keeps the setting as it was.
int readEnumValue(const engine::CIniFile &file, std::string_view key, int value, int last) {
    const int read = file.getInteger(key, value);
    return read < 0 || read > last ? value : read;
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
    readFlag(file, "haloMode", game.halo_mode);
    readFlag(file, "subtitleMode", game.subtitle_mode);
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

// Shadows are only written for a game that isn't censored, as the original had it.
void writeGraphics(engine::CIniFile &file, const SIniDataOwners &owners) {
    const CGame &game = owners.game;
    file.setInteger("gamePIXX", game.game_pixx);
    file.setInteger("gamePIXY", game.game_pixy);
    file.setInteger("gameBPP", game.game_bpp);
    file.setInteger("useDirect3D", owners.special.getUseDirect3D() ? 1 : 0);
    file.setInteger("gamma", game.gamma);
    file.setInteger("heroNumber", static_cast<int>(game.hero_number));
    file.setInteger("haloMode", game.halo_mode);
    file.setInteger("subtitleMode", game.subtitle_mode);
    file.setInteger("bloodFlag", game.blood_flag);
    if (game.quimby_flag == 0) {
        file.setInteger("nudityFlag", game.nudity_flag);
        file.setInteger("foulLanguageFlag", game.foul_language_flag);
        file.setInteger("shadowFlag", game.shadow_flag);
    }
    file.setInteger("quimbyFlag", game.quimby_flag);
    file.setInteger("currentBoard", owners.special.getCurrentGraphicsBoard());
    file.setInteger("osFont", static_cast<int>(owners.fonts.getOsFontChoice()));
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

} // namespace

// The renderer DLL, AGP texturing and first-run flag the original also read have no reader in
// the game now, so their lines are left as they are; retail has no Editor section. The window
// opens at the resolution the game will run at, as the decomp's menu resolution change has it.
// nocedit 0x004fbd90
void readIniData(engine::CIni &ini, platform::IFileSystem &file_system,
                 const SIniDataOwners &owners) {
    if (!file_system.setReadOnly(kIniFilename, false)) {
        common::displayErrorAndQuit("Please copy Nocturne to your hard drive");
    }
    engine::CIniFile file(ini, kIniFilename);
    file.readIniHeader("Graphics");
    readGraphics(file, owners);
    file.readIniHeader("Sound");
    owners.sound_main.readIni(file);
    file.readIniHeader("Control");
    readControls(file, owners.game);
    file.readIniHeader("Debug");
    readFlag(file, "logConsoleFlag", owners.console.file_logging_enabled);
    readFlag(file, "headOfHorrorCheat", owners.game.head_of_horror_cheat);
    owners.display.setWindowSize(owners.game.game_pixx, owners.game.game_pixy);
}

// nocedit 0x004fc510
void writeIniData(engine::CIni &ini, const SIniDataOwners &owners) {
    engine::CIniFile file(ini, kIniFilename);
    file.readIniHeader("Graphics");
    writeGraphics(file, owners);
    file.readIniHeader("Sound");
    owners.sound_main.writeIni(file);
    file.readIniHeader("Control");
    writeControls(file, owners.game);
    file.readIniHeader("Debug");
    file.setInteger("logConsoleFlag", owners.console.file_logging_enabled);
    file.setInteger("headOfHorrorCheat", owners.game.head_of_horror_cheat);
}

} // namespace nocturne::core
