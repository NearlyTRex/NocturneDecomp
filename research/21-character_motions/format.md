# The `.SKL` motion list: format and runtime

A skeleton file carries, after its bones and keyframes, the state machine its
`CMotionController` runs: named states, motions, the transitions between them, and
the signals a motion emits to game code. This page is the format and what each
field does at runtime. Per-character tables are in [heroes.md](heroes.md).

`scripts/Python/dump_skl_motions.py` dumps any `.SKL` (readable, `--compact`,
`--json`). Paths below are under `annotations/nocedit.exe/pseudocode/src/core/`.

## Key facts

- **A desired state with no route is never taken, and nothing says so.**
  `findAndStartTransition` looks only in the *current motion's* transition list.
  With no entry the request stays pending, retried every sub-step, while the
  current motion keeps looping. Code that asks for a state the current motion
  cannot reach has done nothing. Check the routes before setting a state.
- **Signals are the game's hooks into animation.** `CMotionController::advance`
  returns the first signal value crossed and stops the frame just past it; each
  class's handler loops `advance` and switches on the value. Pickups, door opens,
  lever pulls, melee hits, jump impulses and footsteps happen there, not in the code
  that chose the motion.
- **Two signals on one frame: only the last listed fires.** The scan keeps
  overwriting (`advanceFrameAndCheckSignals.keep:24-35`, asm `0052e12e`).
- **Some states are request-only aliases.** A state with no motions of its own is
  still a valid request when other motions route it somewhere: the Stranger's
  FALLEND_SPLAT lands in "fallendSplat" (DIE), DIE_1 in "die1". keepState then
  folds the desired state onto where it landed.
- **Layered motions are never played by the controller.** Draw, shoot and recoil
  motions have no route in; the class poses them directly by marker position, and
  their state tag means nothing.
- **Root motion comes from the canceled-movement list**, not the root offset.

## File layout

CRLF text. Each field group is preceded by exactly one `//` line, which the loader
skips unread (`CSkeleton_loadStream_FUN_00599bb0.keep`,
`CMotionList_load_FUN_0052cd70.keep`).

| Section | Contents |
|---|---|
| skeleton version | 2..`g_CSkeletonVersion`; every shipped file is 3 |
| bonecount, frameCount | frameCount is the total over all motions |
| boneList | `"name",parentIndex` |
| angle list | `w,x,y,z` per frame per bone, frame-major, indexed by global frame |
| root offset list | per global frame |
| canceled movement list | per global frame |
| motion list version | ≤ 2; markers exist from 2 |
| state list | count, then one name per line |
| motion count | then per motion, below |
| bone scales | `x,y,z` per bone (skeleton version ≥ 3) |

Per motion:

```
"name",fps,state,frameStart,frameCount
exitForwardFromFrame,exitForwardToMotion,exitForwardToFrame
exitForwardCmd,exitForwardTweenTime,exitForwardKeepState
exitBackwardToMotion,exitBackwardToFrame
transitionCount, then: desiredState,cmd,toMotion,toFrame,tweenTime,keepState
signalCount, then: frame,value
markerCount markers...
```

Limits: 80 states, 120 motions, 45 transitions, 15 signals, 10 markers per motion.

The field names come from the authoring importer,
`skeledit.cpp/CSkeleton_importSkeletonFile_FUN_00592690.keep`. Its script syntax is
`if <STATE> <cmd> "<anim>" [frame] [over <secs>] [keepState]` for a transition,
`-> (loop) | (stop) | "<anim>" ...` for the exit, and `signal`, `markers`,
`cancel`. A state may have only one `if` per motion, and a signal value may not
be 0.

## Frames and exits

The frame is local to the motion, `[0, frameCount)`, and advances by
`delta_time * fps`. Pose lookups use `frameStart + frame`. A motion leaves at
`exitForwardFromFrame` through its exit record, which is a transition like any
other. A skipTo exit to itself at frame 0 is a loop; to its own last frame is
"(stop)", a hold. For tween exits the importer sets the exit frame so the crossfade
ends as the source reaches its last frame.

## `cmd`

| Value | Importer name | Behaviour |
|---|---|---|
| 0 | none | A matching transition does nothing; as an exit command it is fatal ("Invalid transition command") |
| 1 | `skipTo` | Cut at once |
| 2 | `flowTo` | Let the current motion run to its exit frame, then go to the transition's target using the *exit's* cmd and tween. Transitions only |
| 3 | `tweenPoseToPose` | Crossfade, both frozen |
| 4 | `tweenPoseToMotion` | Source frozen, destination plays |
| 5 | `tweenMotionToPose` | Source plays, destination frozen |
| 6 | `tweenMotionToMotion` | Both play |

A target frame of -1 picks the destination frame closest to the current pose
(`CDeformableModelInstance_findPatchToFrame`). A tween of `tweenTime` seconds runs
to its midpoint, swaps current and target (`reverseTransition`, which also swaps
types 4 and 5 so the same motion keeps playing), and runs down the other half.

## State, desired state and keepState

`SMotion.state_index` is the state a motion belongs to.
`CMotionController.state_index` is the **desired** state, -1 for none.
`setDesiredState` stores it (reversing a tween still in its first half) and, with
`force_immediate`, tries the route at once.

`keepState` sets the desired state to the landed motion's state when the transition
lands: at once for a cut, at the midpoint for a tween. One-shot motions exit to STAND
with keepState, which stops STAND from re-triggering the one-shot, and it is what
resolves an alias request to the state that was actually entered.

`getStateBlendWeight(state)` is 1 or 0 outside a tween and the crossfade fraction
inside one. Classes use it for footstep loudness, push detection and movement: a
strafe state's weight is what moves Gabriella sideways.

## Signals

Fired when playback crosses their frame, in any motion including the source of a
tween. The earliest frame crossed in a step wins, ties go to the last listed, and a
target-motion signal crossed in the same step as a current-motion one is lost.
Signals after `exitForwardFromFrame` only fire if the exit tween keeps the source
playing (cmd 5 or 6). Frame-0 signals in a loop fire every loop.

`advance` runs at most five sub-steps per call and drops whatever time is left.

Unhandled values fall to `CCharacter_processMotion_FUN_0042ec40`, which handles only
footsteps, and only on the ground: 1 left and 7 right at volume 1.0, 0x1f left and
0x25 right at 1.7. What each class does with the rest is in
[heroes.md](heroes.md#signal-values).

## Markers

Strictly increasing frames splitting a motion into segments; position *n* is the
start of segment *n*, and the whole motion spans `0..markerCount+1`. With no markers
that is normalised time. Uses: push (position past 1.0 means the hands reached the
box), the ammo-box lid while rummaging, and posing layered draw/shoot motions.

## Root motion

The canceled-movement list holds each frame's root displacement on the cancelled
axes (Z by default); the root offset list holds the root position with those axes
zeroed, used for the pose. `accumulateScaledRootMotion` sums the canceled movement
over the frames played into `accumulated_root_motion`, which each class's process
zeroes and then applies.

## Never read

`exitBackwardToMotion/Frame`. Only load, save and the importer touch them, and every
shipped file holds (self, 0). `reverseTransition` is unrelated: it mirrors an active
tween.

## Open questions

- The layout of `SMotion` from 0x44 on (an exit-backward "from frame" and a second
  embedded transition record) is inferred from offsets; nothing reads it.
- The middle word of the importer's `signal <value> <word> <frame>`.
- What the importer's `cancel` P/H/B rotation path does to the angle list.
- During a tween, root motion is scaled by `tween_progress` for the current motion
  and `1 - tween_progress` for the target, the reverse of the pose weights. Whether
  that was intended is not known.
