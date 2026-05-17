#!/usr/bin/env bash
# dbg.sh — drive the Nocturne ASan/gdb build under tmux from a single CLI.
#
# Hides the tmux send-keys / capture-pane / set-logging plumbing so Claude (or
# a human) can just say `dbg.sh probe foo.gdb` instead of remembering the four
# commands that make that happen.
#
# Quick reference:
#   dbg.sh build                  # cmake build (picks up new .keep files via re-glob)
#   dbg.sh start                  # launch in tmux; game starts PAUSED at gdb
#   dbg.sh cont                   # resume (game runs freely)
#   dbg.sh restart                # stop + start (preserves probe log)
#   dbg.sh probe path/file.gdb    # pause, source <file>, resume
#   dbg.sh cmd 'p g_HeroActors'   # one-shot gdb cmd; captured output → stdout
#   dbg.sh log [N]                # tail N lines of probe log (default 50)
#   dbg.sh log-full               # whole probe log
#   dbg.sh clear                  # wipe probe log
#   dbg.sh pause                  # interrupt running game (Ctrl-C to gdb)
#   dbg.sh status                 # pane snapshot + log size
#   dbg.sh stop                   # kill the tmux session
#   dbg.sh attach                 # exec into tmux attach (interactive)
#
# Env overrides:
#   NOCTURNE_DBG_SESSION    tmux session name (default: nodebug)
#   NOCTURNE_DBG_LOG        probe log path (default: /tmp/nocturne_dbg.log)
#   NOCTURNE_DBG_DEBUG_SH   path to build's debug.sh (default: auto-discover)
#
# Probe-file conventions:
#   - Set breakpoints with `commands ... silent ... printf ... cont ... end`.
#   - DO NOT call `set logging ...` from inside the probe file — `start` already
#     configures logging to ${NOCTURNE_DBG_LOG} with redirect off (output goes
#     to BOTH the tmux pane and the log file).
#   - Probe printfs land in ${NOCTURNE_DBG_LOG}; read with `dbg.sh log [N]`.

set -u

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd -P)"
PROJECT_ROOT="$(cd -- "${SCRIPT_DIR}/../.." && pwd -P)"

SESSION="${NOCTURNE_DBG_SESSION:-nodebug}"
LOG="${NOCTURNE_DBG_LOG:-/tmp/nocturne_dbg.log}"
DEBUG_SH="${NOCTURNE_DBG_DEBUG_SH:-${PROJECT_ROOT}/build/exe-linux-asan/debug.sh}"

usage() {
  local rc="${1:-1}"
  local out_fd=2
  [ "${rc}" = "0" ] && out_fd=1
  sed -n '3,33p' "${BASH_SOURCE[0]}" | sed 's/^# \{0,1\}//' >&${out_fd}
  exit "${rc}"
}

[ $# -ge 1 ] || usage 1

session_exists() { tmux has-session -t "${SESSION}" 2>/dev/null; }
require_session() {
  session_exists || { echo "dbg.sh: no tmux session '${SESSION}' — run 'start' first" >&2; exit 1; }
}

# Wait until pane's last non-empty line ends with `(gdb)`. Returns 0 on success.
wait_for_prompt() {
  local max_tenths=${1:-30}
  local i=0
  while (( i < max_tenths )); do
    local last
    # Visible pane content + 5 lines of scrollback, take last non-empty line.
    last=$(tmux capture-pane -t "${SESSION}" -p -S -5 2>/dev/null \
           | sed -e 's/[[:space:]]*$//' \
           | awk 'NF{ line=$0 } END{ print line }')
    if [[ "${last}" == *'(gdb)' ]]; then
      return 0
    fi
    sleep 0.1
    i=$((i + 1))
  done
  return 1
}

# Send Ctrl-C to interrupt the program if running. No-op if already paused.
do_pause() {
  tmux send-keys -t "${SESSION}" C-c
  wait_for_prompt 30
}

do_cont() {
  tmux send-keys -t "${SESSION}" 'c' Enter
}

cmd="$1"; shift

case "${cmd}" in
  build)
    touch "${PROJECT_ROOT}/cmake/skip_list.txt"
    cmake --build "${PROJECT_ROOT}/build/exe-linux-asan" "$@"
    ;;

  restart)
    session_exists && tmux kill-session -t "${SESSION}"
    exec "${BASH_SOURCE[0]}" start "$@"
    ;;

  start)
    if session_exists; then
      echo "dbg.sh: session '${SESSION}' already exists; 'stop' first" >&2
      exit 1
    fi
    [ -x "${DEBUG_SH}" ] || {
      echo "dbg.sh: ${DEBUG_SH} not found or not executable" >&2
      echo "        build the exe-linux-asan target first" >&2
      exit 1
    }
    breaks=""
    while [ $# -gt 0 ]; do
      case "$1" in
        --breaks) breaks="$2"; shift 2;;
        *) echo "dbg.sh start: unknown arg '$1'" >&2; exit 1;;
      esac
    done
    : > "${LOG}"
    env \
      ${breaks:+NOCTURNE_BREAKS="${breaks}"} \
      NOCTURNE_TMUX_SESSION="${SESSION}" \
      ASAN_OPTIONS="halt_on_error=0:detect_leaks=0:abort_on_error=0:symbolize=0" \
      UBSAN_OPTIONS="halt_on_error=0:print_stacktrace=0:symbolize=0" \
      "${DEBUG_SH}" --tmux >/dev/null
    # Wait for the tmux session to exist + gdb to be loading the program.
    # The auto-`run` from debug.sh fires the SDL window, so once threads start
    # spawning we know gdb is past the load. Wait up to 8s.
    waited=0
    while (( waited < 80 )); do
      tmux capture-pane -t "${SESSION}" -p -S -10 2>/dev/null \
        | grep -q "Starting program\|New Thread\|warning" && break
      sleep 0.1; waited=$((waited + 1))
    done
    sleep 0.3
    # Interrupt the auto-run so we can configure logging from a clean prompt.
    do_pause || { echo "dbg.sh start: gdb prompt never appeared" >&2; exit 1; }
    tmux send-keys -t "${SESSION}" "set logging file ${LOG}" Enter
    tmux send-keys -t "${SESSION}" 'set logging overwrite off' Enter
    tmux send-keys -t "${SESSION}" 'set logging redirect off' Enter
    tmux send-keys -t "${SESSION}" 'set logging enabled on' Enter
    sleep 0.2
    echo "started (session=${SESSION} log=${LOG}) — game is PAUSED at gdb prompt"
    echo "  next: 'dbg.sh probe FILE.gdb' or 'dbg.sh cont'"
    ;;

  stop)
    if session_exists; then
      tmux kill-session -t "${SESSION}"
      echo "stopped"
    else
      echo "(no session)"
    fi
    ;;

  status)
    if session_exists; then
      local_lines=$( [ -f "${LOG}" ] && wc -l < "${LOG}" || echo 0)
      echo "session: ${SESSION} (running)"
      echo "log:     ${LOG} (${local_lines} lines)"
      echo "--- last 15 pane lines ---"
      tmux capture-pane -t "${SESSION}" -p -S -15
    else
      echo "no session"
    fi
    ;;

  pause)
    require_session
    do_pause || { echo "dbg.sh pause: no (gdb) prompt after 3s" >&2; exit 1; }
    echo "paused"
    ;;

  cont|resume|c)
    require_session
    do_cont
    echo "resumed"
    ;;

  probe)
    require_session
    [ $# -ge 1 ] || { echo "usage: dbg.sh probe <file.gdb>" >&2; exit 1; }
    path="$1"
    [ -f "${path}" ] || { echo "dbg.sh probe: ${path} not found" >&2; exit 1; }
    abs="$(cd "$(dirname "${path}")" && pwd -P)/$(basename "${path}")"
    do_pause || { echo "dbg.sh probe: couldn't pause to source" >&2; exit 1; }
    tmux send-keys -t "${SESSION}" "source ${abs}" Enter
    sleep 0.4
    do_cont
    echo "sourced ${abs}; resumed"
    ;;

  cmd)
    require_session
    [ $# -ge 1 ] || { echo "usage: dbg.sh cmd 'GDB COMMAND'" >&2; exit 1; }
    gdb_cmd="$1"
    do_pause || { echo "dbg.sh cmd: couldn't pause" >&2; exit 1; }
    # Use printf markers so we can extract just this command's output from the
    # log (which may also be receiving probe printfs from other threads).
    marker_a="===DBGSH_CMD_BEGIN_$$==="
    marker_b="===DBGSH_CMD_END_$$==="
    tmux send-keys -t "${SESSION}" "printf \"${marker_a}\\n\"" Enter
    sleep 0.1
    tmux send-keys -t "${SESSION}" "${gdb_cmd}" Enter
    sleep 0.3
    tmux send-keys -t "${SESSION}" "printf \"${marker_b}\\n\"" Enter
    sleep 0.2
    do_cont
    awk -v a="${marker_a}" -v b="${marker_b}" '
      $0 ~ a { capture=1; next }
      $0 ~ b { exit }
      capture { print }
    ' "${LOG}"
    ;;

  log)
    n="${1:-50}"
    [ -f "${LOG}" ] && tail -n "${n}" "${LOG}" || echo "(no log)"
    ;;

  log-full)
    [ -f "${LOG}" ] && cat "${LOG}" || echo "(no log)"
    ;;

  clear)
    : > "${LOG}"
    echo "cleared ${LOG}"
    ;;

  attach)
    require_session
    exec tmux attach -t "${SESSION}"
    ;;

  -h|--help|help) usage 0 ;;
  *) echo "dbg.sh: unknown subcommand '${cmd}'" >&2; usage 1 ;;
esac
