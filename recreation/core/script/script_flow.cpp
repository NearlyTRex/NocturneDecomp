#include "core/game/game.h"
#include "core/script/script.h"
#include "core/script/script_functions.h"
#include "engine/package/gamecontent.h"
#include "shape/edittool/editortools.h"

#include <cstddef>
#include <expected>
#include <format>
#include <optional>
#include <string>

namespace nocturne::core {
namespace {

// Seconds the breakpoint's message shows for.
constexpr float kBreakPointSeconds = 5.0F;
// gosubs a script may be inside at once.
constexpr std::size_t kMaxCallDepth = 8;
// The longest message debug and gtfo show, one shorter than the original's buffer.
constexpr std::size_t kMaxText = 300;

} // namespace

// The original's loop warning in BW1 and BW3 was given no line for its format's.
// deferred: the script started again while a cinematic skips, with skipCinematic
// deferred: the frame's time handed to the commands that wait, each taking its share of it, with
//   processTimer
// deferred: a step at a time in script debug, the script stopping after each, with the script
//   debug keys
// deferred: resetting the heroes' input and centring the pointer when a command took the input,
//   with pressButton and releaseButton
// deferred: the line cut off once its speaker is dead, with setSpeaker
// nocedit 0x00559960
// bw1 0x005437f0
// bw2 0x005216e0
// bw3 0x00528e00
void CScript::process() {
    checking_ = false;
    if (parsed_lines_.empty()) {
        return;
    }
    const float frame_time = owners_.game.getDeltaTimeFloat();
    const int max_steps =
        owners_.game.getContent().script.value_or(engine::SScriptRun{}).steps_per_frame;
    std::size_t index = next_cmd_;
    for (int steps = 0; steps < max_steps; ++steps) {
        if (frame_time <= 0.0F || state_ == EState::Stopped || mission_ended_) {
            return;
        }
        index = next_cmd_;
        const StepResult result = step();
        if (!result) {
            const SScriptLine &line = parsed_lines_[index];
            owners_.editor_tools.showError(
                std::format("Error processing script.\nLine: {}\nText: {}\nWhat's wrong: {}\n",
                            line.line_number, line.text, result.error()));
            state_ = EState::Stopped;
        } else if (*result != EScriptStepEnd::Done) {
            return;
        }
    }
    if (!loop_warning_shown_) {
        owners_.editor_tools.showError(
            std::format("!WARNING!  Infinite loop detected in script at line {}",
                        parsed_lines_[index].line_number));
        loop_warning_shown_ = true;
    }
}

// Running, the statement after it is skipped: an if's other branch.
CScript::CommandResult CScript::checkElse(CScript &script, SStatement &statement) {
    const std::optional<std::size_t> after = script.skipCommands(script.next_cmd_);
    if (!after) {
        return std::unexpected(std::format(
            "Can't skip next command after else statement on line {}", statement.line_number));
    }
    if (statement.running) {
        script.next_cmd_ = *after;
    }
    return {};
}

std::expected<std::size_t, std::string> CScript::findJumpLabel(SStatement &statement) const {
    const std::optional<std::size_t> label = findLabelIndex(statement.rest);
    if (!label) {
        return std::unexpected(std::format("Undefined label {} used in {} statement on line {}",
                                           statement.rest, statement.command,
                                           statement.line_number));
    }
    statement.rest = {};
    return *label;
}

CScript::CommandResult CScript::checkGoto(CScript &script, SStatement &statement) {
    const std::expected<std::size_t, std::string> label = script.findJumpLabel(statement);
    if (!label) {
        return std::unexpected(label.error());
    }
    if (statement.running) {
        script.next_cmd_ = *label;
    }
    return {};
}

// Running, the line after it is kept for return to come back to.
CScript::CommandResult CScript::checkGosub(CScript &script, SStatement &statement) {
    const std::expected<std::size_t, std::string> label = script.findJumpLabel(statement);
    if (!label) {
        return std::unexpected(label.error());
    }
    if (!statement.running) {
        return {};
    }
    if (script.call_stack_.size() >= kMaxCallDepth) {
        return std::unexpected(
            std::format("Call stack overflow detected on script line {}.", statement.line_number));
    }
    script.call_stack_.push_back(script.next_cmd_);
    script.next_cmd_ = *label;
    return {};
}

CScript::CommandResult CScript::checkReturn(CScript &script, SStatement &statement) {
    if (!statement.running) {
        return {};
    }
    if (script.call_stack_.empty()) {
        return std::unexpected(
            std::format("Return without gosub detected on script line {}.", statement.line_number));
    }
    script.next_cmd_ = script.call_stack_.back();
    script.call_stack_.pop_back();
    return {};
}

// Running, the frame's run ends past it.
CScript::CommandResult CScript::checkIdle(CScript & /*script*/, SStatement &statement) {
    if (statement.running) {
        statement.end = EScriptStepEnd::Yields;
    }
    return {};
}

// Running, the script stops, saying where.
CScript::CommandResult CScript::checkBreakPoint(CScript &script, SStatement &statement) {
    if (statement.running) {
        statement.owners.game.displayMessage(
            std::format("Script breakpoint reached at line {}", statement.line_number),
            kBreakPointSeconds);
        script.state_ = EState::Stopped;
    }
    return {};
}

// Running, the message is shown, with its line.
CScript::CommandResult CScript::checkDebug(CScript & /*script*/, SStatement &statement) {
    const std::expected<std::string, std::string> text = parseArgument(statement.rest, kMaxText);
    if (!text) {
        return std::unexpected(text.error());
    }
    if (statement.running) {
        statement.owners.editor_tools.showMessage(
            std::format("Script debug message at line {}:\n{}", statement.line_number, *text));
    }
    return {};
}

// Running, the mission ends, the script held on it.
CScript::CommandResult CScript::checkEnd(CScript &script, SStatement &statement) {
    if (statement.running) {
        script.mission_ended_ = true;
        statement.end = EScriptStepEnd::Holds;
    }
    return {};
}

// Running, the mission ends with the message shown as an error, the script held on it.
CScript::CommandResult CScript::checkGtfo(CScript &script, SStatement &statement) {
    const std::expected<std::string, std::string> text = parseArgument(statement.rest, kMaxText);
    if (!text) {
        return std::unexpected(text.error());
    }
    if (statement.running) {
        statement.owners.editor_tools.showError(std::format(
            "Script GTFO at line {}:\n{}\nTerminating mission.", statement.line_number, *text));
        script.mission_ended_ = true;
        statement.end = EScriptStepEnd::Holds;
    }
    return {};
}

} // namespace nocturne::core
