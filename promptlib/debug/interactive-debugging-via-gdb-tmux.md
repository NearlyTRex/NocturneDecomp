---
id: interactive-debugging-via-gdb-tmux
kind: rule
title: Interactive Debugging via gdb + tmux
requires: [auto-capture-sequence-gdb-driven-no-in-game-hook,
           common-gdb-idioms-used-in-this-project,
           counter-pass-pattern,
           driving-the-session,
           fpu-exception-trap-nan-tracing,
           launching-raw-debug-sh,
           live-state-tracing-pattern-silent-printf-cont,
           sanitizer-interaction,
           use-scripts-bash-dbg-sh-for-agent-driven,
           when-to-add-a-defensive-guard-vs-fix-upstream]
triggers: []
provides: []
---

When a `.keep` compiles cleanly but the program **misbehaves at runtime** — hangs, traps a sanitizer, renders nothing, leaks NaN through animation — you need a live gdb session. The build provides `debug.sh --tmux` so an agent can drive gdb via `tmux send-keys` while the user watches in another terminal.
