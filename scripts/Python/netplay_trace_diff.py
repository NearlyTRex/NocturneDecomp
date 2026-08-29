#!/usr/bin/env python3
"""Diff a host/guest pair of netplay traces and name the first divergence.

Reads the files shims/sim_trace.cpp and shims/rng.cpp write on each machine:

  nocturne_simtrace.log   per-frame header + one line per character + the
                          actors whose position/area changed that frame
  nocturne_rngtrace.log   one line per sim-stream draw: frame, index, and the
                          caller's offset from generateRandomValue

and reports, separately, the first frame at which each kind of state parts. They
are separate on purpose - which one fires first says what kind of bug it is:

  RNG draws differ first        the two machines made different random draws:
                                a decision that reached the sim from something
                                machine-local (a camera, a mixer, a framerate).
                                Convert the site to the cosmetic stream (rng.h).

  state differs, RNG identical  the draws matched and the world still parted, so
                                nothing random caused it. Something is simulated
                                on one machine and not the other, or from
                                different inputs. This is the harder class and
                                the character/actor line names the object.

The actor lines are change-filtered by the writer, so they are replayed into a
per-index timeline rather than compared positionally: the two machines emit
different subsets by construction, and an actor that moves on one machine and
not the other is precisely the signal being looked for.

Usage:
    python3 scripts/Python/netplay_trace_diff.py [host_dir] [guest_dir]

Defaults to build/netplay/Host and build/netplay/Client.
"""
import os
import sys
from collections import defaultdict


def sim_frames(path):
    """Yield (frame, header, {slot: line}, {actor_index: (name, pos, area)}, [event]).

    The actor dict is cumulative - the writer emits an actor only when it moved,
    so state carries forward until the next change. The event list is per-frame:
    raised events and flag/timer transitions, which is what names a scripted
    thing happening at a different time on the two machines.
    """
    actors = {}
    frame = None
    header = ''
    chars = {}
    events = []
    with open(path, encoding='utf-8', errors='replace') as fh:
        for line in fh:
            parts = line.split(None, 3)
            if len(parts) < 2:
                continue
            try:
                seq = int(parts[0])
            except ValueError:
                continue

            if parts[1] == 'F':
                if frame is not None:
                    yield frame, header, chars, actors, events
                frame, header, chars, events = seq, line.rstrip('\n'), {}, []
            elif parts[1] == 'E':
                events.append(' '.join(line.split()[2:]))
            elif parts[1] == 'A':
                if len(parts) < 4:
                    continue
                rest = parts[3].split()
                name = rest[0] if rest else ''
                pos = area = ''
                for tok in rest:
                    if tok.startswith('pos='):
                        pos = tok[4:]
                    elif tok.startswith('area='):
                        area = tok[5:]
                actors[parts[2]] = (name, pos, area)
            elif frame is not None:
                chars[parts[1]] = line.rstrip('\n')
    if frame is not None:
        yield frame, header, chars, actors, events


def diff_sim(host_path, guest_path):
    H, G = sim_frames(host_path), sim_frames(guest_path)
    try:
        hf, hh, hc, ha, he = next(H)
        gf, gh, gc, ga, ge = next(G)
    except StopIteration:
        print("  one of the traces is empty")
        return
    # When each machine first emitted a given event line, so an event that
    # happens on both but at different frames is reported as the skew it is
    # rather than as two unrelated divergences.
    h_first, g_first = {}, {}

    found = {}
    common = 0
    while True:
        if hf < gf:
            for e in he:
                h_first.setdefault(e, hf)
            try:
                hf, hh, hc, ha, he = next(H)
            except StopIteration:
                break
            continue
        if gf < hf:
            for e in ge:
                g_first.setdefault(e, gf)
            try:
                gf, gh, gc, ga, ge = next(G)
            except StopIteration:
                break
            continue

        for e in he:
            h_first.setdefault(e, hf)
        for e in ge:
            g_first.setdefault(e, gf)
        common += 1
        if 'header' not in found and hh.split(None, 2)[2] != gh.split(None, 2)[2]:
            found['header'] = (hf, hh, gh)
        if 'character' not in found:
            for slot in sorted(set(hc) & set(gc)):
                if hc[slot] != gc[slot]:
                    found['character'] = (hf, hc[slot], gc[slot])
                    break
        if 'actor' not in found:
            for idx in sorted(set(ha) & set(ga)):
                if ha[idx] != ga[idx]:
                    found['actor'] = (hf, f"{idx} {ha[idx]}", f"{idx} {ga[idx]}")
                    break
            if 'actor' not in found and set(ha) != set(ga):
                only = (set(ha) ^ set(ga))
                idx = sorted(only)[0]
                side = 'host' if idx in ha else 'guest'
                found['actor'] = (hf, f"{idx} only on {side}", '')

        try:
            hf, hh, hc, ha, he = next(H)
            gf, gh, gc, ga, ge = next(G)
        except StopIteration:
            break

    print(f"  frames compared: {common}")
    skewed = sorted(((g_first[e] - h_first[e], e, h_first[e], g_first[e])
                     for e in set(h_first) & set(g_first)
                     if h_first[e] != g_first[e]),
                    key=lambda r: min(r[2], r[3]))
    only = sorted([(h_first[e], 'host ', e) for e in set(h_first) - set(g_first)] +
                  [(g_first[e], 'guest', e) for e in set(g_first) - set(h_first)])
    if skewed:
        print(f"\n  {len(skewed)} event(s) happen on both machines at DIFFERENT frames"
              f" - earliest first:")
        for delta, e, hfr, gfr in skewed[:12]:
            print(f"    host {hfr:6d}  guest {gfr:6d}  ({delta:+d} frames)  {e}")
    if only:
        print(f"\n  {len(only)} event(s) seen on one machine only - earliest first:")
        for fr, side, e in only[:12]:
            print(f"    frame {fr:6d}  {side} only  {e}")
    if not skewed and not only:
        print("  no event-list divergence")
    for kind in ('header', 'character', 'actor'):
        if kind in found:
            frame, a, b = found[kind]
            print(f"\n  first {kind} divergence at frame {frame}")
            print(f"    host : {a}")
            if b:
                print(f"    guest: {b}")
        else:
            print(f"  no {kind} divergence")


def diff_rng(host_path, guest_path):
    def load(path):
        per = defaultdict(list)
        with open(path, encoding='utf-8', errors='replace') as fh:
            for line in fh:
                p = line.split()
                if len(p) == 3:
                    per[int(p[0])].append(p[2])
        return per

    h, g = load(host_path), load(guest_path)
    print(f"  host draws {sum(len(v) for v in h.values())} in {len(h)} frames / "
          f"guest {sum(len(v) for v in g.values())} in {len(g)} frames")

    # Walk the frame NUMBERS, not the keys: a frame in which one machine drew
    # nothing has no lines at all and so no key, and intersecting the keys drops
    # it. That frame is the most interesting one there is - one machine took a
    # branch to a draw the other never reached - and skipping it reports the
    # divergence several frames late - by however many frames pass before the
    # other machine next draws anything at all.
    lo, hi = max(min(h), min(g)), min(max(h), max(g))
    common = range(lo, hi + 1)
    differing = [f for f in common if h.get(f, []) != g.get(f, [])]
    if not differing:
        print(f"  no RNG divergence over {len(common)} common frames")
        return
    first = differing[0]
    print(f"  frames compared {len(common)}, differing {len(differing)}, first {first}")
    print(f"    host : {h.get(first, [])}")
    print(f"    guest: {g.get(first, [])}")
    print("  resolve the caller offsets against generateRandomValue with nm, e.g."
          "\n    nm -C --defined-only build/exe-linux-asan-x86_64/nocturne")


def main(argv):
    host = argv[0] if len(argv) > 0 else 'build/netplay/Host'
    guest = argv[1] if len(argv) > 1 else 'build/netplay/Client'

    for label, name, fn in (('RNG stream', 'nocturne_rngtrace.log', diff_rng),
                            ('sim state', 'nocturne_simtrace.log', diff_sim)):
        hp, gp = os.path.join(host, name), os.path.join(guest, name)
        print(f"=== {label} ===")
        if not (os.path.exists(hp) and os.path.exists(gp)):
            print(f"  missing {name} on one side; skipped")
            continue
        fn(hp, gp)
        print()


if __name__ == '__main__':
    main(sys.argv[1:])
