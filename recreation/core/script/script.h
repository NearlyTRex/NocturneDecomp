#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"
#include "shape/fwd.h"

#include <cstddef>
#include <cstdio>
#include <expected>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// What a script reads its files with, reports a bad file through, finds the actors its commands
// name in, checks its conditions and event commands with, and finds the set's lights and
// cameras in.
struct SScriptOwners {
    const engine::CDosIo &dosio;
    shape::CEditorTools &editor_tools;
    const CDemonMission &mission;
    CEventList &events;
    const CDemonSet &set;
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

// The line a step is checking: the whole of it, the command's name as the command table spells
// it, what follows the name, which a check moves past what it reads, the line in the file, and
// the script's owners, which the check looks things up in.
struct SScriptStatement {
    std::string_view line;
    std::string_view command;
    std::string_view rest;
    int line_number = 0;
    const SScriptOwners &owners;
};

class CScript {
public:
    // A command's check: nothing, or the syntax error's message.
    using CommandResult = std::expected<void, std::string>;

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
    // Loads world\<filename> and the dialogue in world\<stem>.txt, then checks the script's
    // syntax unless told not to; a syntax error quits. A missing script loads as an empty one;
    // false when the file isn't text.
    [[nodiscard]] bool loadScript(std::string_view filename, bool skip_validation);
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
    using SStatement = SScriptStatement;
    using CommandCheck = CommandResult (*)(CScript &script, SStatement &statement);
    struct SCommand {
        std::string_view name;
        CommandCheck check;
    };
    // Where a syntax error is and what it is.
    struct SSyntaxError {
        int line_number = 0;
        std::string message;
    };

    [[nodiscard]] bool readScriptText(std::string_view text, std::string_view filename);
    void freeParsedLines();
    void buildParsedLines();
    void dbLoad(std::string_view filename);
    void addDialogEntry(std::string_view name, std::string_view speaker, std::string_view text,
                        std::string_view filename);
    [[nodiscard]] const SDialogEntry *findDialogEntry(std::string_view path) const;
    [[nodiscard]] CommandResult startDialogLine(std::string_view speaker,
                                                std::string_view sound_name,
                                                std::string_view dialog_text) const;

    [[nodiscard]] std::optional<SSyntaxError> validateSyntax();
    [[nodiscard]] CommandResult step();
    [[nodiscard]] CommandResult checkLabel(std::size_t index, const SStatement &statement) const;
    [[nodiscard]] std::optional<std::size_t> findLabelIndex(std::string_view label_name) const;
    [[nodiscard]] std::optional<std::size_t> skipCommands(std::size_t start) const;
    [[nodiscard]] static const SCommand *findCommand(std::string_view name);
    static CommandResult checkElse(CScript &script, SStatement &statement);
    static CommandResult checkJumpLabel(CScript &script, SStatement &statement);
    static CommandResult checkSetSkipLabel(CScript &script, SStatement &statement);
    static CommandResult checkSay(CScript &script, SStatement &statement);
    static CommandResult checkDbSay(CScript &script, SStatement &statement);

    SScriptOwners owners_;
    std::vector<std::string> script_text_;
    std::vector<SScriptLine> parsed_lines_;
    std::vector<SDialogEntry> dialog_entries_;
    std::size_t next_cmd_ = 0;
    // syntaxCheckOff: the check passes over commands until syntaxCheckOn.
    bool checks_suspended_ = false;
};

} // namespace nocturne::core
