#!/bin/bash
# Open a chat about one decompiled function, with the right prompt loaded.
#
# Assembles the condensed prompt for exactly the faults this function has
# (via the detectors), attaches its .cpp / .asm / .json, and drops you into
# an interactive session. Ask follow-up questions without re-pasting
# anything.
#
# Usage:
#   ask_function.sh <stem> [-m model] [--ask "question"]
#
#   <stem> is corpus-relative and without extension, e.g.
#   core/cloth.cpp/CCloth_step_FUN_0043abb0
#   A bare function name is resolved by search, so this also works:
#   ask_function.sh CCloth_step_FUN_0043abb0
#
# Examples:
#   ask_function.sh CCloth_step_FUN_0043abb0
#   ask_function.sh CCloth_step_FUN_0043abb0 --ask "what are the parameters?"
#   ask_function.sh CCloth_step_FUN_0043abb0 -m gemma4:12b
#   ASK_WITH_ASM=1 ask_function.sh CCloth_step_FUN_0043abb0

set -u

REPO_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
PROGRAM="${PROMPTC_PROGRAM:-nocedit.exe}"
CORPUS="$REPO_ROOT/annotations/$PROGRAM/pseudocode/src"
TASK="${ASK_TASK:-fix-compilation}"

stem="${1:-}"
if [ -z "$stem" ]; then
    echo "usage: ask_function.sh <stem-or-function-name> [-m model] [--ask \"question\"]" >&2
    exit 2
fi
shift

# A bare function name is resolved to its corpus-relative stem.
if [ ! -f "$CORPUS/$stem.cpp" ]; then
    hit=$(find "$CORPUS" -name "$stem.cpp" -print -quit 2>/dev/null)
    if [ -z "$hit" ]; then
        hit=$(find "$CORPUS" -name "*$stem*.cpp" ! -name "*.keep.cpp" -print -quit 2>/dev/null)
    fi
    if [ -z "$hit" ]; then
        echo "Cannot find a function matching '$stem' under $CORPUS" >&2
        exit 2
    fi
    stem="${hit#$CORPUS/}"; stem="${stem%.cpp}"
    echo "  resolved to $stem" >&2
fi

# Ask the detectors what is wrong with it; that decides which recipes load.
triggers=$("$REPO_ROOT/scripts/Bash/detect_triggers.sh" "$stem" 2>/dev/null | tr '\n' ',' | sed 's|,$||')

prompt=$(mktemp); trap 'rm -f "$prompt"' EXIT
if [ -n "$triggers" ]; then
    echo "  detectors: $triggers" >&2
    (cd "$REPO_ROOT" && promptc build "$TASK" --triggers "$triggers") > "$prompt"
else
    echo "  detectors: none — loading the core prompt only" >&2
    (cd "$REPO_ROOT" && promptc build "$TASK") > "$prompt"
fi

# Attach the function's files. The .asm is usually the largest single file
# by a wide margin, so it is opt-in: ASK_WITH_ASM=1 includes it, for the
# questions that genuinely need the instruction stream.
attach=()
[ -f "$CORPUS/$stem.cpp" ]  && attach+=(--attach "$CORPUS/$stem.cpp")
[ -f "$CORPUS/$stem.json" ] && attach+=(--attach "$CORPUS/$stem.json")
if [ -f "$CORPUS/$stem.asm" ]; then
    if [ "${ASK_WITH_ASM:-0}" = "1" ]; then
        attach+=(--attach "$CORPUS/$stem.asm")
        echo "  .asm attached whole ($(wc -c < "$CORPUS/$stem.asm" | tr -d " ") bytes)" >&2
    else
        # A map costs a few hundred tokens instead of ~14,000. Pull the
        # regions that matter with /read once you know where to look.
        attach+=(--outline "$CORPUS/$stem.asm")
        echo "  .asm outlined (use /read for a line range, or ASK_WITH_ASM=1)" >&2
    fi
fi

echo "  prompt: $(wc -c < "$prompt" | tr -d ' ') bytes" >&2

exec llm_chat --system-file "$prompt" "${attach[@]}" "$@"
