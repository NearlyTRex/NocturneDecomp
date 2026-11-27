#pragma once

#include "core/fwd.h"
#include "core/game/letterbox.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/fwd.h"

#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <expected>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// What a script reads its files with, reports a bad file through, finds the actors its commands
// name in, checks and evaluates its conditions and event commands with, finds and changes the
// set's lights and cameras in, and begins the game's iris fades under the scene camera with.
struct SScriptOwners {
    const engine::CDosIo &dosio;
    shape::CEditorTools &editor_tools;
    const CDemonMission &mission;
    CEventList &events;
    CDemonSet &set;
    CSound &sound;
    CGame &game;
    CDemonCamera &camera;
};

// What the letterbox and the subtitles are measured on and drawn with: the screen, its 2D and 3D
// state, the fonts, and the display's widescreen framing.
struct SScriptScreen {
    engine::IScreenDevice &screen;
    engine::C2d &two_d;
    engine::C3d &three_d;
    const CDFont &fonts;
    const platform::IDisplay &display;
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

// How a step leaves a running script: moved on, held on the command for a later frame, or moved
// past it with the frame's run over.
enum class EScriptStepEnd : std::uint8_t { Done, Holds, Yields };

// The line a step is checking: the whole of it, the command's name as the command table spells
// it, what follows the name, which a check moves past what it reads, the line in the file, and
// the script's owners, which the check looks things up in.
struct SScriptStatement {
    std::string_view line;
    std::string_view command;
    std::string_view rest;
    int line_number = 0;
    // Set while the script runs, when a check that passes also does what the command says.
    bool running = false;
    const SScriptOwners &owners;
    // The script's focus, which the iris fades centre on.
    CDemonActor *focus = nullptr;
    // What the command, running, leaves the script to do.
    EScriptStepEnd end = EScriptStepEnd::Done;
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
    // The frame's run: steps until a command holds or yields, the script stops or the mission
    // ends, the game's steps a frame at most, warning once of a loop that ran out of them. An
    // error is shown, and stops the script.
    void process();
    // Each bar's height as far as it has slid in.
    [[nodiscard]] int getLetterboxHeight(const SScriptScreen &screen) const;
    // The bars slid a frame further in or out and drawn, then the line said, if any, in the
    // bottom one while the player has subtitles on.
    void renderSubtitles(const SScriptScreen &screen);
    void renderEditor(int left, int top, int right, int bottom);
    // Loads world\<filename> and the dialogue in world\<stem>.txt, then checks the script's
    // syntax unless told not to; a syntax error quits. A missing script loads as an empty one;
    // false when the file isn't text.
    [[nodiscard]] bool loadScript(std::string_view filename, bool skip_validation);
    void initRuntime();
    // Runs the commands from the label initSection to the label initSectionEnd, if there is an
    // initSection, then goes back to where the script was. A command that fails is fatal, as is
    // an initSection without its end or one that runs 10000 steps.
    void executeInitSection();
    void setSpeaker(CDemonActor *actor);
    void resetDialogState();
    int skipCinematic();
    void loadState(std::FILE *file_handle);
    void saveState(std::FILE *file_handle);

    [[nodiscard]] std::span<const SScriptLine> getParsedLines() const;
    [[nodiscard]] std::span<const SDialogEntry> getDialogEntries() const;
    // The actor the cameras follow; null for none.
    [[nodiscard]] CDemonActor *getFocusActor() const;

private:
    using SStatement = SScriptStatement;
    using CommandCheck = CommandResult (*)(CScript &script, SStatement &statement);
    // Running a command whose running isn't ported yet quits.
    struct SCommand {
        std::string_view name;
        CommandCheck check;
        bool runs = false;
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

    // A step: what it leaves the script to do, or its error.
    using StepResult = std::expected<EScriptStepEnd, std::string>;
    // At a breakpoint or an error, until it runs again.
    enum class EState : std::uint8_t { Running, Stopped };

    [[nodiscard]] std::optional<SSyntaxError> validateSyntax();
    [[nodiscard]] StepResult step();
    [[nodiscard]] CommandResult stepLine(SStatement &statement, std::size_t index);
    [[nodiscard]] CommandResult stepCommand(SStatement &statement, std::string_view word);
    [[nodiscard]] CommandResult checkLabel(std::size_t index, const SStatement &statement) const;
    [[nodiscard]] std::optional<std::size_t> findLabelIndex(std::string_view label_name) const;
    [[nodiscard]] std::optional<std::size_t> skipCommands(std::size_t start) const;
    [[nodiscard]] static const SCommand *findCommand(std::string_view name);
    static CommandResult checkElse(CScript &script, SStatement &statement);
    static CommandResult checkGoto(CScript &script, SStatement &statement);
    static CommandResult checkGosub(CScript &script, SStatement &statement);
    static CommandResult checkReturn(CScript &script, SStatement &statement);
    static CommandResult checkIdle(CScript &script, SStatement &statement);
    static CommandResult checkBreakPoint(CScript &script, SStatement &statement);
    static CommandResult checkDebug(CScript &script, SStatement &statement);
    static CommandResult checkEnd(CScript &script, SStatement &statement);
    static CommandResult checkGtfo(CScript &script, SStatement &statement);
    // The label goto and gosub name, which is the rest of the line.
    [[nodiscard]] std::expected<std::size_t, std::string>
    findJumpLabel(SStatement &statement) const;
    static CommandResult checkSetSkipLabel(CScript &script, SStatement &statement);
    static CommandResult checkSay(CScript &script, SStatement &statement);
    static CommandResult checkDbSay(CScript &script, SStatement &statement);
    static CommandResult checkDisplay(CScript &script, SStatement &statement);
    // A bar at full extension, as tall as the letterbox goes.
    [[nodiscard]] static int getFullLetterbox(const SScriptScreen &screen);

    SScriptOwners owners_;
    std::vector<std::string> script_text_;
    std::vector<SScriptLine> parsed_lines_;
    std::vector<SDialogEntry> dialog_entries_;
    std::size_t next_cmd_ = 0;
    CDemonActor *focus_actor_ = nullptr;
    // Set while the script's syntax is checked rather than its commands run.
    bool checking_ = false;
    // syntaxCheckOff: the check passes over commands until syntaxCheckOn.
    bool checks_suspended_ = false;
    // The line the subtitles show; empty for none.
    std::string current_message_;
    // How far the letterbox has slid in, from 0 to 1.
    float letterbox_extension_ = 0.0F;
    // The last letterbox the script set, which the bars keep as they slide out.
    ELetterbox previous_letterbox_ = ELetterbox::Off;
    EState state_ = EState::Running;
    // Set by end and gtfo: the script runs no more.
    bool mission_ended_ = false;
    // Where each gosub returns to, the latest last.
    std::vector<std::size_t> call_stack_;
    // A run out of steps warns once a mission.
    bool loop_warning_shown_ = false;
};

} // namespace nocturne::core
