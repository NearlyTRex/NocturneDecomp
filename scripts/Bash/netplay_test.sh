#!/usr/bin/env bash
#
# Stage and launch a netplay test instance.
#
# The game hardcodes UDP port 7647 for host and client alike and binds every
# interface, so two copies on one machine collide ("Can't bind UDP socket").
# Each instance therefore gets its own loopback address via NOCTURNE_NET_BIND;
# see shims/net_config.h.
#
# It also writes its state (SYSTEM/nocturne.ini, gtfo.txt, stderr.txt, the
# nocturne_*.log files, save games) into the working directory, so two copies
# sharing one directory would fight over all of it. Each instance runs in its
# own directory under build/netplay/, with the bulk game data symlinked back to
# the repo (22 GB — nothing is copied except the small writable bits).
#
# Usage:
#   scripts/Bash/netplay_test.sh host              # binds 127.0.0.1, name "Host"
#   scripts/Bash/netplay_test.sh client            # binds 127.0.0.2, name "Client"
#   scripts/Bash/netplay_test.sh <name> <ip>       # anything else
#
#   NOCTURNE_EXE=... to pick a build (default: the asan x86_64 one)
#   NOCTURNE_STAGE_ONLY=1 to prepare the directory without launching
#
# Then: host presses CTRL+H, client presses CTRL+J and enters the host's IP.
# In the lobby ENTER toggles ready, S chats, ESC leaves; the mission starts by
# itself once every player is ready AND there are at least two of them.

set -euo pipefail

REPO_ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/../.." && pwd -P)"
EXE="${NOCTURNE_EXE:-${REPO_ROOT}/build/exe-linux-asan-x86_64/nocturne}"

case "${1:-}" in
    host)   NAME="Host";   IP="127.0.0.1" ;;
    client) NAME="Client"; IP="127.0.0.2" ;;
    "")     echo "usage: $(basename "$0") host|client|<name> [ip]" >&2; exit 2 ;;
    *)      NAME="$1";     IP="${2:-}" ;;
esac

if [[ -z "${IP}" ]]; then
    echo "error: no bind address for '${NAME}' — pass one as the second argument" >&2
    exit 2
fi

if [[ ! -x "${EXE}" ]]; then
    echo "error: no executable at ${EXE}" >&2
    echo "       build it first, or set NOCTURNE_EXE" >&2
    exit 1
fi

RUN_DIR="${REPO_ROOT}/build/netplay/${NAME}"
mkdir -p "${RUN_DIR}"

# Drop every symlink from a previous staging, so entries that are now skipped
# (the game's own output files, in particular) do not linger and get written
# through into the repo root. The copied directories below are left alone.
find "${RUN_DIR}" -maxdepth 1 -type l -delete

# Symlink everything the game reads. Skipped:
#   SYSTEM  - copied instead; holds nocturne.ini and netplay.ini, both written
#   save    - copied instead; savegames are written
#   build   - the binaries; not game data, and would nest this directory
#   .git    - irrelevant and large
#   outputs - the game writes these into its working directory. Symlinking a
#             leftover one aims both instances at the same file in the repo
#             root, which silently merges their logs and loses exactly the
#             evidence this harness exists to separate.
for entry in "${REPO_ROOT}"/* "${REPO_ROOT}"/.[!.]*; do
    [[ -e "${entry}" ]] || continue
    base="$(basename "${entry}")"
    case "${base}" in
        SYSTEM|save|build|.git)     continue ;;
        nocturne_*.log)             continue ;;
        stderr.txt|gtfo.txt|console.txt|sounderr.txt) continue ;;
        '$$UNDO$$.TMP')             continue ;;
    esac
    ln -sfn "${entry}" "${RUN_DIR}/${base}"
done

# Per-instance writable state, copied so the two runs cannot corrupt each
# other's settings. Refreshed only when missing, so edits made between runs
# (netplay.ini in particular) survive.
for writable in SYSTEM save; do
    if [[ ! -e "${RUN_DIR}/${writable}" && -e "${REPO_ROOT}/${writable}" ]]; then
        cp -r "${REPO_ROOT}/${writable}" "${RUN_DIR}/${writable}"
    fi
done

export NOCTURNE_NET_BIND="${IP}"
export NOCTURNE_NET_NAME="${NAME}"

echo "instance : ${NAME}"
echo "bind     : ${IP}:7647"
echo "workdir  : ${RUN_DIR}"
echo "exe      : ${EXE}"
if [[ "${NAME}" == "Client" ]]; then
    echo "join     : CTRL+J, then enter 127.0.0.1"
else
    echo "host     : CTRL+H, pick a mission, then wait for the client"
fi

if [[ -n "${NOCTURNE_STAGE_ONLY:-}" ]]; then
    echo "(staged only; NOCTURNE_STAGE_ONLY is set)"
    exit 0
fi

cd "${RUN_DIR}"
exec "${EXE}" "$@"
