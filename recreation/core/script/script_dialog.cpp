#include "common/text/scanformat.h"
#include "core/charactr/character.h"
#include "core/script/commandchecks.h"
#include "core/script/script.h"
#include "core/script/script_functions.h"

#include <cstddef>
#include <expected>
#include <format>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {

// Checking a line, only its speaker can be wrong: a character, or one missing through a
// variable for now.
// deferred: the line's length: the number the sound is, the sound's own, or two hundredths of a
//   second a character and 0.4 more for a missing sound, which the script's pick list notes,
//   with CSound::getSoundDuration and the script editor
// deferred: the speaker, the focus actor unless it is locked, the caption, the speaker's speech
//   timer and the sound, while running, with renderSubtitles and the scene camera
// deferred: the dialogue override's caption, silence and length for a hero the line wasn't
//   recorded for, and the network camera's focus, with CNetGame's sessions
// nocedit 0x0055ff00
CScript::CommandResult CScript::startDialogLine(std::string_view speaker,
                                                std::string_view /*sound_name*/,
                                                std::string_view /*dialog_text*/) const {
    const auto actor = getActor(speaker, CCharacter::kType, owners_.mission, owners_.events);
    if (!actor && !actor.error().by_variable) {
        return std::unexpected(actor.error().message);
    }
    return {};
}

// say and startSay: "(speaker, sound, caption)". The original's scan of "speaker, sound," had
// to take five characters, which "a,b," falls short of.
CScript::CommandResult CScript::checkSay(CScript &script, SStatement &statement) {
    constexpr std::size_t kMaxArgument = 500;
    constexpr std::size_t kMinScan = 5;
    const std::expected<std::string, std::string> argument =
        parseArgument(statement.rest, kMaxArgument);
    if (!argument) {
        return std::unexpected(argument.error());
    }
    std::string speaker;
    std::string sound;
    const std::optional<std::size_t> taken =
        common::scanPrefix(*argument, "%[^,], %[^,], ", speaker, sound);
    if (!taken || *taken < kMinScan) {
        return std::unexpected("Error parsing speaker and wav arguments");
    }
    return script.startDialogLine(trimString(speaker), trimString(sound),
                                  skipWhitespace(std::string_view(*argument).substr(*taken)));
}

// dbSay and dbStartSay: "(line)", a line of the dialogue database. A line it doesn't hold is
// the Stranger's, saying so.
CScript::CommandResult CScript::checkDbSay(CScript &script, SStatement &statement) {
    std::string line;
    if (const CommandResult scanned =
            consumeScanned(statement, common::scanPrefix(statement.rest, "(%[^)])", line),
                           "Error parsing dbSay arguments");
        !scanned) {
        return scanned;
    }
    const std::string_view name = trimString(line);
    const SDialogEntry *entry = script.findDialogEntry(name);
    if (entry == nullptr) {
        return script.startDialogLine("$", name, std::format("[Can't find {} in database]", name));
    }
    return script.startDialogLine(entry->speaker, entry->sound_file, entry->text);
}

} // namespace nocturne::core
