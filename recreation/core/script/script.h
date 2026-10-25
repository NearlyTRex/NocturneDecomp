#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"
#include "shape/fwd.h"

#include <cstdio>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// What a script reads its files with and reports a bad file through.
struct SScriptOwners {
    const engine::CDosIo &dosio;
    shape::CEditorTools &editor_tools;
};

// A line of the script that holds something, trimmed, and its line in the file, from 1.
struct SScriptLine {
    int line_number = 0;
    std::string text;

    bool operator==(const SScriptLine &) const = default;
};

// A line of dialogue: the stem the script names it by, the sound it plays (the stem itself when
// the sound directory has neither a .wav nor an .mp3), who says it ("$" for the Stranger), and
// its caption.
struct SDialogEntry {
    std::string name;
    std::string sound_file;
    std::string speaker;
    std::string text;

    bool operator==(const SDialogEntry &) const = default;
};

class CScript {
public:
    explicit CScript(const SScriptOwners &owners);
    ~CScript();
    CScript(const CScript &) = delete;
    CScript &operator=(const CScript &) = delete;
    CScript(CScript &&) = delete;
    CScript &operator=(CScript &&) = delete;

    void clear();
    void process();
    int getLetterboxHeight();
    void renderSubtitles();
    void renderEditor(int left, int top, int right, int bottom);
    // Loads world\<filename> and the dialogue in world\<stem>.txt. A missing script loads as an
    // empty one; false when the file isn't text.
    [[nodiscard]] bool loadScript(std::string_view filename);
    void initRuntime();
    void executeInitSection();
    void setSpeaker(CDemonActor *actor);
    void resetDialogState();
    int skipCinematic();
    void loadState(std::FILE *file_handle);
    void saveState(std::FILE *file_handle);

    [[nodiscard]] std::span<const SScriptLine> getParsedLines() const;
    [[nodiscard]] std::span<const SDialogEntry> getDialogEntries() const;

private:
    [[nodiscard]] bool readScriptText(std::string_view text, std::string_view filename);
    void freeParsedLines();
    void buildParsedLines();
    void dbLoad(std::string_view filename);
    void addDialogEntry(std::string_view name, std::string_view speaker, std::string_view text,
                        std::string_view filename);
    [[nodiscard]] const SDialogEntry *findDialogEntry(std::string_view path) const;

    SScriptOwners owners_;
    std::vector<std::string> script_text_;
    std::vector<SScriptLine> parsed_lines_;
    std::vector<SDialogEntry> dialog_entries_;
};

} // namespace nocturne::core
