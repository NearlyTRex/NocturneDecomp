---
id: use-scripts-bash-dbg-sh-for-agent-driven
kind: rule
title: "Use `scripts/Bash/dbg.sh` for agent-driven workflows"
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

`scripts/Bash/dbg.sh` is a thin wrapper around `debug.sh --tmux` that hides the tmux/gdb plumbing behind subcommands. **Prefer it for any agent-driven session** — it cuts the per-step token cost (one short command instead of three `tmux send-keys` lines + a `capture-pane`) and standardizes the log location so probe output is always at `/tmp/nocturne_dbg.log`.

```bash
scripts/Bash/dbg.sh build              # ninja build, re-globs new .keep files
scripts/Bash/dbg.sh start              # launch in tmux 'nodebug', paused at gdb
scripts/Bash/dbg.sh cont               # resume (game runs freely)
scripts/Bash/dbg.sh restart            # stop + start (preserves log)
scripts/Bash/dbg.sh probe path.gdb     # pause → source <file> → resume
scripts/Bash/dbg.sh cmd 'p g_FooBar'   # one-shot gdb cmd; output → stdout
scripts/Bash/dbg.sh log [N]            # tail N lines of probe log (default 50)
scripts/Bash/dbg.sh log-full           # whole probe log
scripts/Bash/dbg.sh clear              # wipe probe log
scripts/Bash/dbg.sh pause              # Ctrl-C to gdb
scripts/Bash/dbg.sh status             # pane snapshot + log size
scripts/Bash/dbg.sh stop               # kill session
scripts/Bash/dbg.sh attach             # exec into tmux attach (interactive)
```

**Probe-file conventions when using `dbg.sh probe`:**
- Write breakpoints with `commands ... silent ... printf ... cont ... end`. Probe printfs land in `/tmp/nocturne_dbg.log` automatically.
- Do **not** call `set logging ...` from inside the probe — `dbg.sh start` already configures logging (redirect off so output appears in both the tmux pane and the log file).
- Use `dbg.sh cmd` for one-shot inspection (`p VAR`, `bt`, `x/8w ADDR`); it captures output between marker printfs so you don't need to grep through unrelated probe lines.

Fall back to the raw `debug.sh --tmux` plus manual `tmux send-keys` flow below only when you need something the wrapper doesn't expose — e.g. multiline gdb input that the `cmd` marker trick can't handle, or interactive use without log redirection.
