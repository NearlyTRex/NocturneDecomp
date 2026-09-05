# Iris fade transition — the opening circle teleports mid-growth

The circle that widens as a room loads can jump part-way through and appear to start over,
centred on the main character as he walks into the shot. Reproduces 100 % in one mission.
**Fixed**, behind `NOCTURNE_AUTHENTIC_IRIS_FADE` (default 0).

An original-game defect, not a reconstruction artefact — the mechanism is present in the
shipped binary and was verified instruction by instruction.

## How the transition works

`g_IrisFadeType` drives a five-state machine in `CGame::updateFadeTransition` (`0x4e09c0`):

| type | meaning |
|---|---|
| 0 | idle |
| 1 | fade-in start; next update promotes it to 2 |
| 2 | opening — radius grows; when `radius > g_WindowWidth` it returns to 0 |
| 3 | closing — radius shrinks; when `radius < 0` it sets radius 0 and type 4 |
| 4 | promoted to 5 on the next update |
| 5 | terminal, screen fully black |

`CGame::renderIrisFade` (`0x4e0aa0`) paints every pixel outside a disc of `g_IrisFadeRadius`
around `(g_IrisFadeCenterX, g_IrisFadeCenterY)` black — and for type 1 or type ≥ 4 fills the
screen black outright.

Triggers, all four of them: `CGame::runGameSession` calls `beginFadeIn` once at session
start and `beginFadeOut` on the mission-end path; `CScript::step` implements `beginFadeIn`
and `beginFadeOut` script opcodes.

## Cause

`CGame::beginFadeIn` seeds the centre to the middle of the window, then calls
`calculateIrisFadeCenter`. `CGame::renderIrisFade` calls it **again on every frame** the
iris is open — the `CALL` at `0x4e0add`, confirmed in the assembly, so the continuous
re-centring is genuine and deliberate: the iris is meant to follow the script's focus actor.

But `calculateIrisFadeCenter` only writes the centre when
`CDemonCamera::worldToScreenWithFrustumCull` reports that actor on screen:

```c
worldToScreenWithFrustumCull(&g_CDemonCameraInstance, &CStack_54, &CStack_24);
...
if (aiStack_2c[1] != 0) {          /* only when visible */
    g_IrisFadeCenterX = iStack_30 / 0x10000;
    g_IrisFadeCenterY = aiStack_2c[0] / 0x10000;
```

In a mission where the hero enters the shot *after* the load, he is culled when the fade
begins, so the centre keeps the window-middle fallback — and snaps onto him the instant he
becomes visible, part-way through an already-growing circle.

## Measured

`iris_fade_probe.gdb` then `iris_jump_probe.gdb`, on the reproducing mission.

The trigger side is clean — exactly one `beginFadeIn`, from `runGameSession:136`, with the
state machine running `1 → 2 → 0` once. No second trigger, no script opcode. What moves is
the centre:

```
before   162 centre changes in one fade
         held (320,240) until radius 295.79  (46 % of the fade)
         jumped to (400,477)                 (~250 px, disc radius only ~296)
         then tracked smoothly onto the hero

after      1 centre change
         set (320,240) at radius 0.00, stable for the whole fade
```

A ~250 px move while the visible disc's radius is ~296 means the circle shifts nearly its
own radius in one frame, which is why it reads as the transition restarting.

## Fix

One condition in `CGame::renderIrisFade`:

```c
#if NOCTURNE_AUTHENTIC_IRIS_FADE
  calculateIrisFadeCenter();
#else
  if (g_IrisFadeType != 2) {      /* an opening iris keeps the centre it began with */
    calculateIrisFadeCenter();
  }
#endif
```

Only the **opening** iris is pinned. The closing iris (`type == 3`) still re-centres every
frame — that is what makes it converge on the hero, and by then he is on screen, so there
is nothing to snap to. The "black hole closing on the character" transition is unchanged.

**Known consequence.** In the reproducing mission the iris now opens from the middle of the
window rather than from the hero, because he genuinely is not on screen when the fade
starts and there is no correct position to open from. That is the sane fallback rather than
a teleport. Opening *from* him would need a different and larger change — holding the fade
until the focus actor is visible.

## Probes

| file | what it captures |
|---|---|
| `iris_fade_probe.gdb` | every `beginFadeIn`/`beginFadeOut` with a backtrace, plus every `g_IrisFadeType` transition |
| `iris_jump_probe.gdb` | every centre change during a fade, with the radius and its percentage of the full extent |

### Probe hygiene

Convenience-variable names must avoid **every** x86 register name. `$cx` is the CX
register exactly as `$bl` is BL: `set $cx = ...` inside a breakpoint writes the inferior's
register instead of creating a variable, so the change-gate never holds and the probe
prints every frame. Prefix them — `$ic_x`, `$ic_y`. Also: no `\` line continuations inside
an `if` nested in a `commands` block; the nesting breaks and the body runs unconditionally.
