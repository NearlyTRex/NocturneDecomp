# Debugging

When a `.keep` compiles but the game misbehaves — hangs, trips a sanitizer, renders nothing,
leaks NaN through animation — the tooling below is what the project uses instead of adding
`printf`s to the source.

## dbg.sh

[`scripts/Bash/dbg.sh`](../scripts/Bash/dbg.sh) wraps the generated `debug.sh --tmux` so a
session can be driven a command at a time. Probe output always lands in
`/tmp/nocturne_dbg.log`.

```sh
scripts/Bash/dbg.sh build            # ninja build, re-globbing new .keep files
scripts/Bash/dbg.sh start            # launch in tmux 'nodebug', paused at gdb
scripts/Bash/dbg.sh cont             # resume
scripts/Bash/dbg.sh probe file.gdb   # pause -> source <file> -> resume
scripts/Bash/dbg.sh cmd 'p g_FooBar' # one-shot command, output to stdout
scripts/Bash/dbg.sh log [N]          # tail the probe log
scripts/Bash/dbg.sh status           # pane snapshot + log size
scripts/Bash/dbg.sh stop
```

Attach with `tmux attach -t nodebug` to watch while it is driven.

## Probe patterns

**Counters — "where does this chain die?"** Silent breakpoints on every link, run for a few
seconds, then print the counters. The first zero is where the gate fails, and it costs far less
than instrumenting the source.

**State tracing — "what does this function see?"** A breakpoint whose `commands` block prints
the fields and continues, so the game keeps running while a per-call trace accumulates. Filter
with `if`/`end` inside `commands` rather than a conditional breakpoint; the latter is slower per
hit.

Always `source` multi-line gdb blocks from a file. Sent line by line through `send-keys` they
tangle.

Redirect to a log when the volume is high — a per-frame probe will overrun the tmux scrollback
and eat the earlier, more interesting lines.

### Gotchas that have cost time

- **A bad field in a probe `printf` kills the whole `commands` block** before it reaches `cont`,
  which freezes the game rather than printing an error.
- **`$bl`, `$cx` and friends are registers, not free convenience variables.** Prefix probe state
  with something unambiguous.
- **Function-name breakpoints survive re-exports; line numbers do not.**
- **Floats need `%g`, not `%f`**, and memory reads need casting through a type.
- **Verify the process is alive before trusting counters** — gdb will happily print stale values
  from a dead inferior. Include a liveness counter in the probe.

## Dump tools

Callable from gdb, each writing a sidecar `.txt` with state and derived statistics — far more
useful in one shot than a series of `print`s. See `shims/debug/dump.cpp`.

```gdb
call (int)nocturne_dump_screenshot("/tmp/frame.ppm")
call (int)nocturne_dump_zbuffer("/tmp/zbuf.ppm")
call (int)nocturne_dump_display_list("/tmp/actors.txt")
call (int)nocturne_dump_actor_state("/tmp/hero.txt", g_HeroActors[g_LocalHeroIndex])
call (int)nocturne_dump_lighting_state("/tmp/lighting.txt")
call (int)nocturne_dump_collision_grid("/tmp/grid.txt", 0)
```

`nocturne_auto_capture` drives a sequence of frames from a per-frame breakpoint, for capturing a
window of gameplay rather than a single moment.

## FPU trap

NaN symptoms usually appear a long way from the operation that produced them — a loop that hangs
because `(int)NaN` is `INT_MIN`, geometry that clips to nothing, an actor falling through the
world. The build carries a configurable x87 trap:

```gdb
call (int)nocturne_fpu_trap_on(1)     # FE_INVALID — NaN producers
call (int)nocturne_fpu_trap_off()
```

Drive the game into the state of interest **first**, then arm it. Intro and menu paths produce
benign NaN every frame. Do not try to step past a `SIGFPE` with `signal 0` — the exception status
survives and the next FP instruction re-raises.

## Sanitizers

`debug.sh` defaults to halting on the first sanitizer error, which is right for triaging one bug
and wrong for counter passes — the program aborts before the counters accumulate. Set
`halt_on_error=0` for the sanitizer in question when investigating something downstream of a
known non-fatal trap. ASan SEGVs abort regardless.

## Capture discipline

Two rules learned the hard way, both in
[research/17-shader_renderer_migration/](../research/17-shader_renderer_migration/):

- **Sync frame captures to the actual swap**, not to a renderer-internal hook — an out-of-band
  hook may not exist on every path, and the comparison silently becomes meaningless.
- **Establish the noise floor in the same run.** Two conclusions in that work turned out to be
  smaller than the frame-to-frame noise they were measured against. Never compare across scenes
  or resolutions.
