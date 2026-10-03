# Character motions

How characters animate: the motion list carried in every `.SKL` skeleton — states,
motions, the routes between them, and the signals that let animation drive the
game — and what each character actually has.

| Page | Contents |
|---|---|
| [format.md](format.md) | File layout, transition commands, desired state and keepState, signals, markers, root motion |
| [heroes.md](heroes.md) | The nine playable classes: capability matrix, signal values, per-hero notes, every state with its motions and routes |

Dump any skeleton with `scripts/Python/dump_skl_motions.py` (readable, `--compact`,
`--json`). Skeletons live in the PODs; `scripts/Python/extract_pod.py <pod> .skl <dir>`
extracts them, and every hero's is in `hero.pod`.

## Key facts

- **A desired state with no route from the current motion is silently never taken**,
  while the current motion keeps looping. Check the routes before asking for a state.
- **Signals are where animation drives the game.** Pickups, doors, levers, melee hits,
  jump impulses and footsteps happen in each class's signal handler, not where the
  motion was chosen. Two signals on one frame fire only the last listed.
- **Some states are request-only aliases** with no motions of their own, landing in
  another state's motion (the Stranger's FALLEND_SPLAT lands in DIE).
- **Only the Stranger and Gabriella have interaction motions, and only the Stranger
  can jump or fall.** Svetlana's jumps are scripted.
