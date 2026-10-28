#include "core/script/script.h"

#include <span>

namespace nocturne::core {

// deferred: the game's script, with the main loop that runs it
// deferred: the script editor's pick list and two scroll bars, with the script editor
// nocedit 0x005591b0
// nocedit 0x005597f0
CScript::CScript(const SScriptOwners &owners) : owners_(owners) {}

// The original cleared the script first, which the members' own destructors do.
// nocedit 0x00559840
CScript::~CScript() = default;

// nocedit also freed a cross-reference table, which retail doesn't have.
// deferred: clearing the notes of dialogue missing from the database, with the dbSay commands
//   and startDialogLine
// nocedit 0x00559870
void CScript::clear() {
    script_text_.clear();
    freeParsedLines();
    dialog_entries_.clear();
}

// nocedit 0x005598f0
void CScript::freeParsedLines() {
    parsed_lines_.clear();
}

std::span<const SScriptLine> CScript::getParsedLines() const {
    return parsed_lines_;
}

std::span<const SDialogEntry> CScript::getDialogEntries() const {
    return dialog_entries_;
}

} // namespace nocturne::core
