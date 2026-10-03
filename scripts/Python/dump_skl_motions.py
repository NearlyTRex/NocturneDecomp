#!/usr/bin/env python3
"""Dump the motion list of one or more Nocturne .SKL skeleton files.

The motion list is the state machine a CMotionController runs: states,
motions, the transitions between them, and the signals each motion emits.
Parsing mirrors CMotionList_load (0052cd70): every field group is preceded by
one '//' line, which the loader skips unread.

Extract the skeletons first, e.g.
    python3 scripts/Python/extract_pod.py hero.pod .skl <outdir>

Usage:
    dump_skl_motions.py FILE.SKL [FILE.SKL ...]           readable dump
    dump_skl_motions.py --compact FILE.SKL [...]          one line per motion
    dump_skl_motions.py --json FILE.SKL [...]             machine-readable

See research/21-character_motions/format.md for what the fields mean at runtime.
"""
import argparse
import json
import re
import sys

# The importer's own keywords (parseTransitionType, 005925c0).
CMD_NAMES = {
    0: "none",
    1: "skipTo",
    2: "flowTo",
    3: "tweenPoseToPose",
    4: "tweenPoseToMotion",
    5: "tweenMotionToPose",
    6: "tweenMotionToMotion",
}
CMD_SHORT = {0: "none", 1: "skip", 2: "flow", 3: "PP", 4: "PM", 5: "MP", 6: "MM"}


def numbers(text):
    return [float(x) if ("." in x or "e" in x.lower()) else int(x)
            for x in re.split(r"[,\s]+", text.strip()) if x]


def parse(path):
    with open(path, "rb") as handle:
        lines = handle.read().decode("latin-1").replace("\r", "").split("\n")
    start = next(i for i, line in enumerate(lines) if line.startswith("// motion list version"))
    data = [line for line in lines[start:] if not line.startswith("//")]
    pos = 0

    def take():
        nonlocal pos
        pos += 1
        return data[pos - 1]

    version = int(take())
    states = [take().strip() for _ in range(int(take()))]
    motions = []
    for index in range(int(take())):
        header = re.match(r'"([^"]*)",(.*)', take())
        fps, state, frame_start, frame_count = numbers(header.group(2))
        exit_from, exit_motion, exit_frame = numbers(take())
        exit_cmd, exit_tween, exit_keep = numbers(take())
        back_motion, back_frame = numbers(take())
        transitions = []
        for _ in range(int(take())):
            desired, cmd, to_motion, to_frame, tween, keep = numbers(take())
            transitions.append(dict(desired=desired, cmd=cmd, to_motion=to_motion,
                                    to_frame=to_frame, tween=tween, keep_state=keep))
        signals = [tuple(numbers(take())) for _ in range(int(take()))]
        markers = []
        if version >= 2:
            row = numbers(take())
            markers = row[1:1 + row[0]]
        motions.append(dict(index=index, name=header.group(1), fps=fps, state=state,
                            frame_start=frame_start, frame_count=frame_count,
                            exit_from=exit_from, exit_motion=exit_motion,
                            exit_frame=exit_frame, exit_cmd=exit_cmd,
                            exit_tween=exit_tween, exit_keep_state=exit_keep,
                            back_motion=back_motion, back_frame=back_frame,
                            transitions=transitions, signals=signals, markers=markers))
    return dict(file=path, version=version, states=states, motions=motions)


def state_name(skl, index):
    states = skl["states"]
    return states[index] if 0 <= index < len(states) else "?%d" % index


def motion_name(skl, index):
    motions = skl["motions"]
    return motions[index]["name"] if 0 <= index < len(motions) else "?%d" % index


def dump(skl):
    out = ["# %s  (motion list version %d)" % (skl["file"], skl["version"]), "", "States:"]
    for index, name in enumerate(skl["states"]):
        out.append("  %3d 0x%02x %s" % (index, index, name))
    out += ["", "Motions:"]
    for m in skl["motions"]:
        out.append('[%d] "%s" state %d %s, %d frames at %g fps (global %d)'
                   % (m["index"], m["name"], m["state"], state_name(skl, m["state"]),
                      m["frame_count"], m["fps"], m["frame_start"]))
        out.append('    exit at f%d -> [%d] "%s" f%g, %s %gs%s'
                   % (m["exit_from"], m["exit_motion"], motion_name(skl, m["exit_motion"]),
                      m["exit_frame"], CMD_NAMES.get(m["exit_cmd"], "?"), m["exit_tween"],
                      ", keepState" if m["exit_keep_state"] else ""))
        for t in m["transitions"]:
            out.append('    if %s -> [%d] "%s" f%g, %s %gs%s'
                       % (state_name(skl, t["desired"]), t["to_motion"],
                          motion_name(skl, t["to_motion"]), t["to_frame"],
                          CMD_NAMES.get(t["cmd"], "?"), t["tween"],
                          ", keepState" if t["keep_state"] else ""))
        if m["signals"]:
            out.append("    signals: " + ", ".join("f%d:%d (0x%x)" % (f, v, v)
                                                 for f, v in m["signals"]))
        if m["markers"]:
            out.append("    markers: %s" % m["markers"])
    return "\n".join(out)


def compact(skl):
    out = ["# %s  states: %s" % (skl["file"], " ".join(
        "%d=%s" % (i, s) for i, s in enumerate(skl["states"])))]
    for m in skl["motions"]:
        signals = " ".join("f%d:%d" % (f, v) for f, v in m["signals"])
        routes = " ".join("%d>%d%s" % (t["desired"], t["to_motion"], CMD_SHORT.get(t["cmd"], "?"))
                          for t in m["transitions"])
        out.append("[%d] '%s' st=%d(%s) n=%d exit@%d->%d %s%s | sig[%s] mk%s | tr: %s"
                   % (m["index"], m["name"], m["state"], state_name(skl, m["state"]),
                      m["frame_count"], m["exit_from"], m["exit_motion"],
                      CMD_SHORT.get(m["exit_cmd"], "?"),
                      " keep" if m["exit_keep_state"] else "", signals, m["markers"] or "",
                      routes))
    return "\n".join(out)


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    parser.add_argument("files", nargs="+", help=".SKL files")
    style = parser.add_mutually_exclusive_group()
    style.add_argument("--json", action="store_true", help="emit JSON")
    style.add_argument("--compact", action="store_true", help="one line per motion")
    args = parser.parse_args()

    parsed = [parse(path) for path in args.files]
    if args.json:
        json.dump(parsed if len(parsed) > 1 else parsed[0], sys.stdout, indent=1)
        print()
        return
    render = compact if args.compact else dump
    print("\n\n".join(render(skl) for skl in parsed))


if __name__ == "__main__":
    main()
