#include "common/math/vector3f.h"
#include "common/text/ascii.h"
#include "common/text/scan.h"
#include "common/text/scanformat.h"
#include "core/actor/demonactor.h"
#include "core/actor/notported.h"
#include "core/charactr/character.h"
#include "core/event/eventchecks.h"
#include "core/event/eventlist.h"
#include "core/lever/lever.h"
#include "core/script/script_functions.h"
#include "core/set/demonset.h"
#include "core/setutil/3dslight.h"
#include "core/weather/weathertype.h"
#include "engine/dosio/dosio.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <expected>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>

namespace nocturne::core {
namespace {

using Result = CEventList::CheckResult;

// The longest names, one shorter than the original's buffers for them.
constexpr std::size_t kMaxEventName = 31;
constexpr std::size_t kMaxTimerName = 31;
constexpr std::size_t kMaxSfxHandleName = 19;
// What a flag's name and a light's or actor's name must be shorter than.
constexpr std::size_t kMaxFlagArgument = 0x20;
constexpr std::size_t kMaxNameArgument = 200;
// A camera's ambient light, as a percentage.
constexpr float kMaxAmbientPercent = 100.0F;
// The least some of the original's scans had to take, which shorter arguments fall short of.
constexpr std::size_t kMinCounterScan = 5;
constexpr std::size_t kMinSfxScan = 3;

// hurtCharacter's damage types, which the game numbers from 100 in this order.
constexpr std::array<std::string_view, 7> kDamageTypes = {
    "generic", "bullet", "Fire", "Blade", "Stake", "Gas", "electrocute"};
constexpr int kFirstDamageType = 100;
// killCharacter's death types, numbered in this order, and gas, numbered as the Gas damage.
constexpr std::array<std::string_view, 11> kDeathTypes = {
    "generic",     "drown",   "fall",    "explode", "fallApart", "shatter",
    "electrocute", "Chopped", "Crushed", "Impale",  "Fire"};
constexpr std::string_view kGasDeath = "gas";
constexpr int kGasDeathType = kFirstDamageType + 5;

std::optional<int> findIgnoringCase(std::span<const std::string_view> names,
                                    std::string_view name) {
    const auto found = std::ranges::find_if(names, [name](std::string_view candidate) {
        return common::equalsIgnoringAsciiCase(candidate, name);
    });
    if (found == names.end()) {
        return std::nullopt;
    }
    return static_cast<int>(found - names.begin());
}

// nocedit 0x004aa960
std::optional<int> parseDamageType(std::string_view name) {
    return findIgnoringCase(kDamageTypes, name).transform([](int index) {
        return kFirstDamageType + index;
    });
}

// nocedit 0x004aa7d0
std::optional<int> parseDeathType(std::string_view name) {
    if (common::equalsIgnoringAsciiCase(name, kGasDeath)) {
        return kGasDeathType;
    }
    return findIgnoringCase(kDeathTypes, name);
}

std::string trimmed(std::string_view text) {
    return std::string(trimString(text));
}

void skipSpaces(std::string_view &rest) {
    rest = skipWhitespace(rest);
}

Result checkFlag(const SCheckContext & /*owners*/, std::string_view &rest) {
    const std::expected<std::string, std::string> flag = parseArgument(rest, kMaxFlagArgument);
    if (!flag) {
        return std::unexpected(flag.error());
    }
    return {};
}

Result checkSpotlight(const SCheckContext &owners, std::string_view light) {
    if (!owners.set.addLightFilter(light)) {
        return std::unexpected(std::format("SpotLight {} doesn't exist.", light));
    }
    return {};
}

Result checkAdvanceLightFilter(const SCheckContext &owners, std::string_view &rest) {
    const std::expected<std::string, std::string> light = parseArgument(rest, kMaxNameArgument);
    if (!light) {
        return std::unexpected(light.error());
    }
    return checkSpotlight(owners, *light);
}

// "(radius, place[, damage])", the place a vector or an actor.
Result checkCreateExplosion(const SCheckContext &owners, std::string_view &rest) {
    constexpr std::string_view kError = "Error parsing createExplosion() parms";
    float radius = 0.0F;
    if (Result opened = consume(rest, common::scanPrefix(rest, "( %f , ", radius), kError);
        !opened) {
        return opened;
    }
    common::CVector3f place;
    std::optional<std::size_t> taken =
        common::scanPrefix(rest, "%f , %f , %f ", place.x, place.y, place.z);
    if (!taken) {
        std::string actor;
        taken = common::scanPrefix(rest, " %[^,)] ", actor);
        if (taken) {
            if (Result found = checkActor(owners, trimmed(actor), CDemonActor::kType); !found) {
                return found;
            }
        }
    }
    if (Result scanned = consume(rest, taken, kError); !scanned) {
        return scanned;
    }
    skipSpaces(rest);
    if (rest.starts_with(',')) {
        float damage = 0.0F;
        if (Result scanned = consume(rest, common::scanPrefix(rest, ", %f ", damage), kError);
            !scanned) {
            return scanned;
        }
        skipSpaces(rest);
    }
    if (!rest.starts_with(')')) {
        return std::unexpected("Error parsing createExplosion() parms, expected matching ')'");
    }
    rest.remove_prefix(1);
    return {};
}

Result checkDeleteActor(const SCheckContext &owners, std::string_view &rest) {
    const std::expected<std::string, std::string> actor = parseArgument(rest, kMaxNameArgument);
    if (!actor) {
        return std::unexpected(actor.error());
    }
    return checkActor(owners, *actor, CDemonActor::kType);
}

// "(file, width, height)": a raw bitmap in art, which must be width by height bytes.
Result checkDisplayBitmap(const SCheckContext &owners, std::string_view &rest) {
    std::string bitmap;
    int width = 0;
    int height = 0;
    if (Result scanned =
            consume(rest, common::scanPrefix(rest, "( %[^ ,], %d, %d )", bitmap, width, height),
                    "Error parsing displayBitmap() parms");
        !scanned) {
        return scanned;
    }
    const std::int64_t size = owners.dosio.getFileSize("art", bitmap);
    if (size < 0) {
        return std::unexpected("Bitmap doesn't exist");
    }
    if (size != static_cast<std::int64_t>(width) * height) {
        return std::unexpected("Bitmap file size does not match specified dimensions");
    }
    return {};
}

Result checkFadeAmbientSound(const SCheckContext & /*owners*/, std::string_view &rest) {
    float volume = 0.0F;
    float seconds = 0.0F;
    return consume(rest, common::scanPrefix(rest, "(%f, %f )", volume, seconds),
                   "Error parsing fadeAmbientSound parms");
}

Result checkFadeSfx(const SCheckContext & /*owners*/, std::string_view &rest) {
    std::string sound;
    float volume = 0.0F;
    float seconds = 0.0F;
    return consume(rest, common::scanPrefix(rest, "(%[^,], %f, %f )", sound, volume, seconds),
                   "Error parsing fadeSfx parms");
}

// The original's message names killHero.
Result checkHurtCharacter(const SCheckContext &owners, std::string_view &rest) {
    std::string character;
    std::string damage_type;
    float damage = 0.0F;
    if (Result scanned = consume(
            rest, common::scanPrefix(rest, " ( %[^,], %[^,],%f)", character, damage_type, damage),
            "Syntax error in killHero() parms");
        !scanned) {
        return scanned;
    }
    if (Result found = checkActor(owners, trimmed(character), CCharacter::kType); !found) {
        return found;
    }
    if (!parseDamageType(trimmed(damage_type))) {
        return std::unexpected(std::format("Unknown damage type \"{}\" in hurtCharacter command.",
                                           trimmed(damage_type)));
    }
    return {};
}

// "( name )", and the original's scan took at least five characters, so a two-letter name needs
// a space beside it.
Result checkIncCounter(const SCheckContext & /*owners*/, std::string_view &rest) {
    std::string counter;
    const std::optional<std::size_t> taken = common::scanPrefix(rest, "( %[^ )] )", counter);
    if (!taken || *taken < kMinCounterScan) {
        return std::unexpected("Error parsing incCounter arguments");
    }
    rest.remove_prefix(*taken);
    return {};
}

// "(character, death[, x, y, z[, degrees]])".
Result checkKillCharacter(const SCheckContext &owners, std::string_view &rest) {
    std::string character;
    std::string death_type;
    common::CVector3f direction;
    float degrees = 0.0F;
    std::optional<std::size_t> taken =
        common::scanPrefix(rest, " ( %[^,], %[^,], %f , %f , %f , %f)", character, death_type,
                           direction.x, direction.y, direction.z, degrees);
    if (!taken) {
        taken = common::scanPrefix(rest, " ( %[^,], %[^,], %f , %f , %f )", character, death_type,
                                   direction.x, direction.y, direction.z);
    }
    if (!taken) {
        taken = common::scanPrefix(rest, " ( %[^,], %[^)])", character, death_type);
    }
    if (Result scanned = consume(rest, taken, "Syntax error in killCharacter() parms"); !scanned) {
        return scanned;
    }
    if (Result found = checkActor(owners, trimmed(character), CCharacter::kType); !found) {
        return found;
    }
    if (!parseDeathType(trimmed(death_type))) {
        return std::unexpected(std::format("Unknown death type \"{}\" in killCharacter command.",
                                           trimmed(death_type)));
    }
    return {};
}

// The death type is taken untrimmed. The shipped game refused killHero in a network game; there
// it kills the hero who set the trigger off, or every hero.
Result checkKillHero(const SCheckContext & /*owners*/, std::string_view &rest) {
    std::string death_type;
    if (Result scanned = consume(rest, common::scanPrefix(rest, " ( %[^)])", death_type),
                                 "Syntax error in killHero() parms");
        !scanned) {
        return scanned;
    }
    if (!parseDeathType(death_type)) {
        return std::unexpected(
            std::format("Unknown death type \"{}\" in killHero command.", death_type));
    }
    return {};
}

// The ')' after the arguments, past any whitespace.
Result closeParenthesis(std::string_view &rest, std::string_view error) {
    skipSpaces(rest);
    if (!rest.starts_with(')')) {
        return std::unexpected(std::string(error));
    }
    rest.remove_prefix(1);
    return {};
}

// "(handle[, seconds])"; the original's scans took at least three characters, so a one-letter
// handle or a one-digit fade without a space falls short.
Result checkKillSfx(const SCheckContext & /*owners*/, std::string_view &rest) {
    constexpr std::string_view kError = "Error parsing killSfx parms";
    std::string handle;
    std::optional<std::size_t> taken = common::scanPrefix(rest, "(%[^,)]", handle);
    if (!taken || *taken < kMinSfxScan) {
        return std::unexpected(std::string(kError));
    }
    rest.remove_prefix(*taken);
    if (rest.starts_with(',')) {
        float seconds = 0.0F;
        taken = common::scanPrefix(rest, ",%f", seconds);
        if (!taken || *taken < kMinSfxScan) {
            return std::unexpected(std::string(kError));
        }
        rest.remove_prefix(*taken);
    }
    return closeParenthesis(rest, "Can't find matching ) in killSfx command");
}

Result checkLightning(const SCheckContext & /*owners*/, std::string_view &rest) {
    return consume(rest, common::scanPrefix(rest, "( )"), "Error parsing lightning command");
}

// "(sound[, handle])"; the original's scans took at least three characters, as killSfx's did.
Result checkPlaySfx(const SCheckContext & /*owners*/, std::string_view &rest) {
    constexpr std::string_view kError = "Error parsing playSfx parms";
    std::string sound;
    std::optional<std::size_t> taken = common::scanPrefix(rest, "(%[^,)]", sound);
    if (!taken || *taken < kMinSfxScan) {
        return std::unexpected(std::string(kError));
    }
    rest.remove_prefix(*taken);
    if (rest.starts_with(',')) {
        std::string handle;
        taken = common::scanPrefix(rest, ",%[^)]", handle);
        if (!taken || *taken < kMinSfxScan) {
            return std::unexpected(std::string(kError));
        }
        rest.remove_prefix(*taken);
        if (trimmed(handle).size() > kMaxSfxHandleName) {
            return std::unexpected(std::format("handle name {} is too long, max {} chars",
                                               trimmed(handle), kMaxSfxHandleName));
        }
    }
    return closeParenthesis(rest, "Can't find matching ) in playSfx command");
}

Result checkAmbientPercent(float percent) {
    if (percent < 0.0F || percent > kMaxAmbientPercent) {
        return std::unexpected(std::format("Ambient value {:g} is out of range (1..100)", percent));
    }
    return {};
}

Result checkSetCameraAmbient(const SCheckContext &owners, std::string_view &rest) {
    std::string camera;
    float percent = 0.0F;
    if (Result scanned = consume(rest, common::scanPrefix(rest, "(%[^,], %f)", camera, percent),
                                 "Error parsing setCameraAmbient parms");
        !scanned) {
        return scanned;
    }
    if (!owners.set.findCameraByName(trimmed(camera))) {
        return std::unexpected(std::format("Camera \"{}\" does not exist.", trimmed(camera)));
    }
    return checkAmbientPercent(percent);
}

// "(counter[, value])"; the original's scan of "( counter" took at least five characters.
Result checkSetCounter(const SCheckContext & /*owners*/, std::string_view &rest) {
    constexpr std::string_view kError = "Error parsing setCounter arguments";
    std::string counter;
    const std::optional<std::size_t> taken = common::scanPrefix(rest, "( %[^,)]", counter);
    if (!taken || *taken < kMinCounterScan) {
        return std::unexpected(std::string(kError));
    }
    rest.remove_prefix(*taken);
    if (rest.starts_with(',')) {
        int value = 0;
        if (Result scanned = consume(rest, common::scanPrefix(rest, ",%d", value),
                                     "Error parsing setCounter value argument");
            !scanned) {
            return scanned;
        }
    }
    return closeParenthesis(rest, kError);
}

Result checkSetGroupAmbient(const SCheckContext & /*owners*/, std::string_view &rest) {
    int group = 0;
    float percent = 0.0F;
    if (Result scanned = consume(rest, common::scanPrefix(rest, "(%d, %f)", group, percent),
                                 "Error parsing setGroupAmbient parms");
        !scanned) {
        return scanned;
    }
    return checkAmbientPercent(percent);
}

Result checkSetLightFilterFrame(const SCheckContext &owners, std::string_view &rest) {
    std::string light;
    int frame = 0;
    if (Result scanned = consume(rest, common::scanPrefix(rest, "( %[^ ,] , %d )", light, frame),
                                 "Error parsing setLightFilterFrame parms");
        !scanned) {
        return scanned;
    }
    const std::optional<SSpotlight> spotlight = owners.set.addLightFilter(light);
    if (!spotlight) {
        return std::unexpected(std::format("SpotLight {} doesn't exist.", light));
    }
    const int filter_count = spotlight->light->getFilterCount();
    if (frame < 0 || frame >= filter_count) {
        return std::unexpected(
            std::format("Invalid filter frame, {} has {} filters", light, filter_count));
    }
    return {};
}

// Two arguments, each trimmed. The original's scans had to take five characters, which "(a,b)",
// the least the format matches, already is.
using PairFormat = std::type_identity_t<common::CScanFormat<std::string, std::string>>;

std::expected<std::pair<std::string, std::string>, std::string>
scanPair(std::string_view &rest, PairFormat format, std::string_view error) {
    std::string first;
    std::string second;
    if (Result scanned = consume(
            rest, common::scanPrefix<std::string, std::string>(rest, format, first, second), error);
        !scanned) {
        return std::unexpected(scanned.error());
    }
    return std::pair{trimmed(first), trimmed(second)};
}

// "(lever, condition)".
Result checkSetLeverState(const SCheckContext &owners, std::string_view &rest) {
    const auto pair = scanPair(rest, "(%[^,], %[^)])", "Error parsing setLeverState command parms");
    if (!pair) {
        return std::unexpected(pair.error());
    }
    if (Result found = checkActor(owners, pair->first, CLever::kType); !found) {
        return found;
    }
    return owners.events.validateCondition(pair->second);
}

// A character's model must have the state or motion; a character missing for now passes.
Result checkModelPart(const SCheckContext &owners, std::string_view &rest, std::string_view error,
                      std::string_view finder) {
    const auto pair = scanPair(rest, "(%[^,], %[^)])", error);
    if (!pair) {
        return std::unexpected(pair.error());
    }
    const auto character = resolveActorByName(owners, pair->first, CCharacter::kType);
    if (!character) {
        return std::unexpected(character.error());
    }
    if (*character != nullptr) {
        quitNotPorted("CMotionList", finder);
    }
    return {};
}

Result checkSetModelState(const SCheckContext &owners, std::string_view &rest) {
    return checkModelPart(owners, rest, "Error parsing setModelState command parms",
                          "findStateIndex");
}

Result checkSlamModelToMotion(const SCheckContext &owners, std::string_view &rest) {
    return checkModelPart(owners, rest, "Error parsing slamModelToMotion command parms",
                          "findMotionIndex");
}

Result checkSetTimer(const SCheckContext & /*owners*/, std::string_view &rest) {
    std::string timer;
    float seconds = 0.0F;
    if (Result scanned = consume(rest, common::scanPrefix(rest, "(%[^,], %f)", timer, seconds),
                                 "Error parsing setTimer command parms");
        !scanned) {
        return scanned;
    }
    if (trimmed(timer).size() > kMaxTimerName) {
        return std::unexpected(std::format("Timer name \"{}\" is too long, (max {} chars)",
                                           trimmed(timer), kMaxTimerName));
    }
    if (seconds < 0.0F) {
        return std::unexpected("Invalid timer duration");
    }
    return {};
}

std::optional<EWeatherType> parseWeatherType(std::string_view name) {
    constexpr std::array<std::string_view, 3> kWeatherTypes = {"none", "rain", "snow"};
    return findIgnoringCase(kWeatherTypes, name).transform([](int index) {
        return static_cast<EWeatherType>(index);
    });
}

Result checkSetWeather(const SCheckContext & /*owners*/, std::string_view &rest) {
    std::string weather;
    if (Result scanned = consume(rest, common::scanPrefix(rest, "(%[^)])", weather),
                                 "Error parsing setWeather command parms");
        !scanned) {
        return scanned;
    }
    if (!parseWeatherType(trimmed(weather))) {
        return std::unexpected(std::format("Invalid weather type: {}", trimmed(weather)));
    }
    return {};
}

Result checkShakeScreen(const SCheckContext & /*owners*/, std::string_view &rest) {
    float peak = 0.0F;
    float attack = 0.0F;
    float sustain = 0.0F;
    float decay = 0.0F;
    return consume(rest,
                   common::scanPrefix(rest, "( %f, %f, %f, %f )", peak, attack, sustain, decay),
                   "Error parsing shakeScreen command parms");
}

// "(camera[, seconds])".
Result checkSwitchCamera(const SCheckContext &owners, std::string_view &rest) {
    constexpr std::string_view kError = "Syntax error in switchCamera() parms";
    std::string camera;
    if (Result scanned = consume(rest, common::scanPrefix(rest, " ( %[^ ,)]", camera), kError);
        !scanned) {
        return scanned;
    }
    skipSpaces(rest);
    if (!owners.set.findCameraByName(camera)) {
        return std::unexpected(std::format("Camera \"{}\" doesn't exist", camera));
    }
    if (rest.starts_with(',')) {
        float seconds = 0.0F;
        if (Result scanned = consume(rest, common::scanPrefix(rest, ",%f", seconds), kError);
            !scanned) {
            return scanned;
        }
    }
    return closeParenthesis(rest, "Missing ')' in switchCamera() statement");
}

// "(actor, place)": the place is "x,y,z" with an optional yaw, or with all three angles, or an
// actor, whose place and turn it takes; nothing may follow it.
Result checkWarpTo(const SCheckContext &owners, std::string_view &rest) {
    constexpr std::string_view kError = "Error parsing warpTo command parms";
    const auto pair = scanPair(rest, "(%[^,], %[^)])", kError);
    if (!pair) {
        return std::unexpected(pair.error());
    }
    if (Result found = checkActor(owners, pair->first, CDemonActor::kType); !found) {
        return found;
    }
    const std::string_view place = pair->second;
    common::CVector3f position;
    common::CVector3f turn;
    std::optional<std::size_t> taken = common::scanPrefix(
        place, "%f,%f,%f,%f,%f,%f", position.x, position.y, position.z, turn.x, turn.z, turn.y);
    if (!taken) {
        taken =
            common::scanPrefix(place, "%f,%f,%f,%f", position.x, position.y, position.z, turn.y);
    }
    if (!taken) {
        taken = common::scanPrefix(place, "%f,%f,%f", position.x, position.y, position.z);
    }
    if (!taken) {
        const auto target = resolveActorByName(owners, place, CDemonActor::kType);
        if (!target) {
            return std::unexpected(target.error());
        }
        if (*target != nullptr) {
            taken = place.size();
        }
    }
    if (!taken || *taken != place.size()) {
        return std::unexpected(std::string(kError));
    }
    return {};
}

// The functions an event command can call, by name, and their checks.
struct SCommandFunction {
    std::string_view name;
    Result (*check)(const SCheckContext &owners, std::string_view &rest);
};

constexpr std::array kCommandFunctions{
    SCommandFunction{.name = "advanceLightFilter", .check = &checkAdvanceLightFilter},
    SCommandFunction{.name = "createExplosion", .check = &checkCreateExplosion},
    SCommandFunction{.name = "deleteActor", .check = &checkDeleteActor},
    SCommandFunction{.name = "displayBitmap", .check = &checkDisplayBitmap},
    SCommandFunction{.name = "fadeAmbientSound", .check = &checkFadeAmbientSound},
    SCommandFunction{.name = "fadeSfx", .check = &checkFadeSfx},
    SCommandFunction{.name = "flagOn", .check = &checkFlag},
    SCommandFunction{.name = "flagOff", .check = &checkFlag},
    SCommandFunction{.name = "gameFlagOn", .check = &checkFlag},
    SCommandFunction{.name = "gameFlagOff", .check = &checkFlag},
    SCommandFunction{.name = "hurtCharacter", .check = &checkHurtCharacter},
    SCommandFunction{.name = "incCounter", .check = &checkIncCounter},
    SCommandFunction{.name = "killCharacter", .check = &checkKillCharacter},
    SCommandFunction{.name = "killHero", .check = &checkKillHero},
    SCommandFunction{.name = "killSfx", .check = &checkKillSfx},
    SCommandFunction{.name = "lightning", .check = &checkLightning},
    SCommandFunction{.name = "playSfx", .check = &checkPlaySfx},
    SCommandFunction{.name = "setCameraAmbient", .check = &checkSetCameraAmbient},
    SCommandFunction{.name = "setCounter", .check = &checkSetCounter},
    SCommandFunction{.name = "setGroupAmbient", .check = &checkSetGroupAmbient},
    SCommandFunction{.name = "setLightFilterFrame", .check = &checkSetLightFilterFrame},
    SCommandFunction{.name = "setLeverState", .check = &checkSetLeverState},
    SCommandFunction{.name = "setModelState", .check = &checkSetModelState},
    SCommandFunction{.name = "setTimer", .check = &checkSetTimer},
    SCommandFunction{.name = "setWeather", .check = &checkSetWeather},
    SCommandFunction{.name = "shakeScreen", .check = &checkShakeScreen},
    SCommandFunction{.name = "slamModelToMotion", .check = &checkSlamModelToMotion},
    SCommandFunction{.name = "switchCamera", .check = &checkSwitchCamera},
    SCommandFunction{.name = "warpTo", .check = &checkWarpTo},
};

// The command calls the function: its name then anything but a letter or digit. The command holds
// a '(', so it is longer than any name it starts with.
bool callsFunction(std::string_view command, std::string_view name) {
    return common::startsWithIgnoringAsciiCase(command, name) &&
           !common::isAsciiAlnum(command[name.size()]);
}

// An event's name: 31 characters at most, of letters, digits, '_' and '-'.
Result checkEventName(std::string_view name) {
    if (name.size() > kMaxEventName) {
        return std::unexpected(std::format("Event name {} is too long", name));
    }
    if (!std::ranges::all_of(name, isValidIdentifierChar)) {
        return std::unexpected(std::format("Event name {} is not valid", name));
    }
    return {};
}

} // namespace

// deferred: running the commands, printing a failed one's error to the console and going on to
//   the next, with executeCommands
// nocedit 0x004add40
CEventList::CheckResult CEventList::validateCommands(std::string_view commands) {
    commands = commands.substr(0, commands.find('\0'));
    if (commands.empty()) {
        return {};
    }
    return executeCommandString(commands);
}

// Each command up to a ';', trimmed; empty ones are passed over.
// nocedit 0x004aac00
CEventList::CheckResult CEventList::executeCommandString(std::string_view commands) {
    while (!commands.empty()) {
        const std::size_t end = commands.find(';');
        const std::string_view command = trimString(commands.substr(0, end));
        commands = end == std::string_view::npos ? std::string_view{} : commands.substr(end + 1);
        if (command.empty()) {
            continue;
        }
        if (CheckResult checked = executeCommand(command); !checked) {
            return checked;
        }
    }
    return {};
}

// An event to raise, or a function of the table's; a '.' before either is passed over. Nothing
// may follow a function's arguments.
// deferred: raising the event, unless it is raised already, and the quit at 100 events, with
//   process
// deferred: each function's work: the flags, counters, timers and sounds, the actors, the set's
//   lights, cameras and shake, the weather and the fire effects, with executeCommands
// deferred: playSfx not starting a cue again while it plays, killHero killing the hero who set
//   the trigger off or every hero in a network game, with CNetGame's sessions and the cue sounds
// deferred: the commands after a setLeverState in the same string running while checking, and
//   their errors only printed, as the original's condition check ends the dry run, with
//   executeCommands
// nocedit 0x004aacc0
CEventList::CheckResult CEventList::executeCommand(std::string_view command) {
    if (common::equalsIgnoringAsciiCase(command, "none")) {
        return {};
    }
    if (command.starts_with('.')) {
        command.remove_prefix(1);
    }
    if (!command.contains('(')) {
        return checkEventName(command);
    }
    const auto *function =
        std::ranges::find_if(kCommandFunctions, [command](const SCommandFunction &candidate) {
            return callsFunction(command, candidate.name);
        });
    if (function == kCommandFunctions.end()) {
        return std::unexpected(std::format("Unknown meta-function starting at {}", command));
    }
    std::string_view rest = skipWhitespace(command.substr(function->name.size()));
    if (CheckResult checked = function->check(SCheckContext{owners_, *this}, rest); !checked) {
        return checked;
    }
    if (!skipWhitespace(rest).empty()) {
        return std::unexpected("Extra characters found");
    }
    return {};
}

} // namespace nocturne::core
