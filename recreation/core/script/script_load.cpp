#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/path.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/script/script.h"
#include "core/script/script_functions.h"
#include "engine/dosio/dosio.h"
#include "shape/edittool/editortools.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {

// Retail, not nocedit: no listing of the parsed lines is written to script.txt, and a syntax
// error quits instead of offering to edit the script and load it again.
// deferred: clearing the notes of dialogue missing from the database after the check, with the
//   dbSay commands and startDialogLine
// nocedit 0x00559f80
bool CScript::loadScript(std::string_view filename, bool skip_validation) {
    clear();
    if (owners_.dosio.getFileSize("world", filename) < 1) {
        return true;
    }
    dbLoad(std::format("{}.txt", common::pathStem(filename)));
    const std::optional<std::string> text = owners_.dosio.readFile("world", filename);
    if (!text) {
        return true;
    }
    if (!readScriptText(*text, filename)) {
        return false;
    }
    buildParsedLines();
    if (!skip_validation) {
        if (const std::optional<SSyntaxError> error = validateSyntax()) {
            common::displayErrorAndQuit(std::format("{} failed syntax check on line {}: {}",
                                                    filename, error->line_number, error->message));
        }
    }
    initRuntime();
    return true;
}

// The original read the file as text a byte at a time, so CRs drop out wherever they are. A file
// that ends in a newline ends with an empty line, which counts toward the line a NUL is near.
bool CScript::readScriptText(std::string_view text, std::string_view filename) {
    std::string line;
    for (const char c : text) {
        if (c == '\0') {
            owners_.editor_tools.showError(
                std::format("Probable non-text file {} detected near line {}.  Cannot use script.",
                            filename, script_text_.size() + 1));
            clear();
            return false;
        }
        if (c == '\n') {
            script_text_.push_back(std::exchange(line, {}));
        } else if (c != '\r') {
            line.push_back(c);
        }
    }
    script_text_.push_back(std::move(line));
    return true;
}

// The original also quit when the lines ran out of memory, which the vector throws for.
// nocedit 0x0055a370
void CScript::buildParsedLines() {
    freeParsedLines();
    for (std::size_t index = 0; index < script_text_.size(); ++index) {
        std::string text = trimLine(script_text_[index]);
        if (!text.empty()) {
            parsed_lines_.push_back(
                {.line_number = static_cast<int>(index) + 1, .text = std::move(text)});
        }
    }
}

// Each record is "name, speaker, caption" on a line of its own.
// nocedit 0x005603c0
void CScript::dbLoad(std::string_view filename) {
    dialog_entries_.clear();
    if (owners_.dosio.getFileSize("world", filename) < 1) {
        return;
    }
    const std::optional<std::string> text = owners_.dosio.readFile("world", filename);
    if (!text) {
        common::displayErrorAndQuit(std::format("Can't open world\\{}", filename));
    }
    common::CTextScanner scanner(*text);
    for (scanner.skipWhitespace(); !scanner.atEnd(); scanner.skipWhitespace()) {
        std::string name;
        std::string speaker;
        std::string caption;
        if (common::scanFormat(scanner, "%[^,], %[^,], %[^\n]\n", name, speaker, caption) != 3) {
            common::displayErrorAndQuit(std::format("SCScipt::dbLoad - error parsing {} record {}",
                                                    filename, dialog_entries_.size()));
        }
        addDialogEntry(name, speaker, caption, filename);
    }
}

// Each field is kept whole: the original's fixed record overran past 60 bytes of a name or sound
// file, 30 of a speaker and 400 of a caption.
void CScript::addDialogEntry(std::string_view name, std::string_view speaker, std::string_view text,
                             std::string_view filename) {
    const std::string stem(common::pathStem(trimString(name)));
    if (findDialogEntry(stem) != nullptr) {
        owners_.editor_tools.showError(
            std::format("Warning! Duplicate wav string {} detected in {}", stem, filename));
    }
    std::string sound_file = stem;
    for (const std::string_view extension : {".wav", ".mp3"}) {
        std::string candidate = std::format("{}{}", stem, extension);
        if (owners_.dosio.getFileSize("sound", candidate) >= 1) {
            sound_file = std::move(candidate);
            break;
        }
    }
    speaker = trimString(speaker);
    dialog_entries_.push_back(
        {.name = stem,
         .sound_file = std::move(sound_file),
         .speaker =
             std::string(common::equalsIgnoringAsciiCase(speaker, "stranger") ? "$" : speaker),
         .text = std::string(trimString(text))});
}

// nocedit 0x005606e0
const SDialogEntry *CScript::findDialogEntry(std::string_view path) const {
    const std::string_view stem = common::pathStem(path);
    const auto entry = std::ranges::find_if(dialog_entries_, [stem](const SDialogEntry &candidate) {
        return common::equalsIgnoringAsciiCase(candidate.name, stem);
    });
    return entry == dialog_entries_.end() ? nullptr : &*entry;
}

} // namespace nocturne::core
