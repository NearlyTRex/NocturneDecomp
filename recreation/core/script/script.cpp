#include "core/script/script.h"

#include <span>

namespace nocturne::core {

// deferred: the game's script, with the main loop that runs it
// deferred: the script editor's pick list and two scroll bars, with the script editor
// nocedit 0x005591b0
// nocedit 0x005597f0
// bw1 0x005430c0
// bw1 0x005436d0
// bw2 0x00520f90
// bw2 0x005215c0
// bw3 0x005286b0
// bw3 0x00528ce0
CScript::CScript(const SScriptOwners &owners) : owners_(owners) {}

// The original cleared the script first, which the members' own destructors do.
// nocedit 0x00559840
// bw1 0x00543710
// bw2 0x00521600
// bw3 0x00528d20
CScript::~CScript() = default;

// nocedit also freed a cross-reference table, which retail doesn't have.
// deferred: clearing the notes of dialogue missing from the database, with the dbSay commands
//   and startDialogLine
// nocedit 0x00559870
// bw1 0x00543740
// bw2 0x00521630
// bw3 0x00528d50
void CScript::clear() {
    script_text_.clear();
    freeParsedLines();
    dialog_entries_.clear();
}

// nocedit 0x005598f0
// bw1 0x00543790
// bw2 0x00521680
// bw3 0x00528da0
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
