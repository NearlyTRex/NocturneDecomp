# Scripted walk pathfinding

Why actors walked by a cutscene script get stuck and stall it, and what it would take to fix: a
guaranteed-finish fallback first, then real pathing around the level and around actors. Live
combat AI is out of scope, though most of this code is shared with it.

Paths are relative to `annotations/nocedit.exe/pseudocode/src/core/`. **[V]** means read in the
keep (and the asm, where noted). **[I]** means inferred and not yet checked in game.

## STATE — read this first

**FEASIBLE at every level of ambition.**

**The planner is a real search, but it sees only floor height.** It is a 4-connected BFS over a
100×100 integer height grid centred on the goal. **Actors, props and doors are not in the
grid**, though the walker collides with them while moving. So the plan can lead straight into
something the walker can't pass.

**Every planning failure quietly becomes "walk straight at the target".** `walkToPoint` treats
only result 0 as failure, and 0 is never returned.

**The engine already has a walk timeout that moves the actor to its target, and nothing ever
switches it on.** See *The dormant timeout*.

**`waitFor reachedDest(actor)` has no timeout.** One stuck walker stalls the cutscene forever.

**No decomp or 64-bit bug was found on this path.** DON'T RE-CHASE one without new evidence.

## How a scripted walk runs

### Script side [V]

- `walkTo(actor, target[, minDist=0][, maxDist=1e10])`, at
  `script.cpp/CScript_step…keep.cpp:3004-3086`, calls the vtable `setWalkTarget`. The target is
  always an actor, usually a `CWayPoint`.
- `cancelWalkTo` (an actor, or `all`) is at `:575-615`. `turnToFace` uses
  `setWalkTargetImmediate` (`:2952`).
- `waitFor reachedDest(actor)`, at `event.cpp/CEventList_evaluateAtom…keep.cpp:890-915`, is true
  when `isWalkComplete` is: `walk_state == IDLE`.

### Per frame [V]

`charactr.cpp/CCharacter_processWalking_FUN_0042ca70.keep.cpp` runs each frame:

1. Counts down the walk timeout (lines 37–52; see below).
2. If the target is a waypoint, `CWayPoint::findNearestReachable` runs Dijkstra over the waypoint
   graph to choose the next waypoint. If none is reachable, it prints
   `"%s can't figure out next waypoint trying to reach %s"` and returns **with no movement**.
3. `followActor` (`…0042c5f0.keep.cpp`) checks range and arrival:
   - The arrival distance is `minDist`, with a floor of 0.01 (line 62).
   - A target more than 40 units away horizontally or 20 vertically is "confused" (line 41). The
     state becomes NO_PATH, and **the walk never completes**.
4. `walkToPoint` (`…004286e0.keep.cpp:71`) asks `CPathMap::findPathWithRetry` for a heading, then
   steers like a tank toward it.
5. `moveAndCollide` (`…00428f40.keep.cpp:119-144`) moves the actor and collides it with
   characters and props through `CDemonSet::testCylinderCollision`.

### The planner [V]

`path.cpp/`:

- **`getOrCreatePathMap(location)`** returns one of 12 `CPathMap`s in a function-static LRU cache,
  keyed by the *goal's* voxel. `updateIfNeeded` centres the 100×100 grid on the goal. Each update
  draws one sim RNG value (`updateIfNeeded:35-37`).
- **`findPathWithRetry`** returns the cached heading if the mover's position is *exactly* the last
  one asked about (line 15). Otherwise it calls `findPathToDestination` with a maximum climb of 1,
  then 2, then 3 voxels.
- **`findPathToDestination`** tries, in order:
  1. Straight line (`isLineWalkable`).
  2. Axis-aligned L path (`checkAxisAlignedPath`).
  3. BFS (`searchGrid`), then follows the parent directions back from the mover to choose the first
     step. `getDirection` smooths over the last three steps.

  It returns 2 ("head straight at the target") when:
  - the mover is more than 49 voxels from the goal on either axis (lines 88, 103);
  - the mover is outside the grid;
  - the goal's floor is more than 3 voxels from the mover's height (line 177);
  - the BFS fails (line 240).
- **`searchGrid`** (`…005487a0.keep.cpp`) is a BFS from the goal outward over a 5000-entry ring
  queue. `g_PathfindingVisited` holds each cell's parent direction (1–4).
  - A neighbour is accepted when the height difference is below `g_PathfindingMaxClimbHeight`.
  - A cell is expanded only if *all four* of its neighbours are within the climb limit, except
    for the start and goal. That keeps paths off ledges.
  - The globals' names are backwards: `g_PathfindingCurrentX/Z` is the goal cell (the grid
    centre, 50,50) and `g_PathfindingDestX/Z` is the mover.
- **Heights:** `getCachedVoxelHeight` reads a cell lazily, scanning down from `h+5` through the
  static set (`CDemonRaytrace::getVoxelHeightAtVoxelCoords`), tagged by the query height. This is
  integer-only and read-only.

### The dormant timeout [V]

At `processWalking:37-52`, when `walk_timeout ≥ 0` it counts down by `delta_time`. At zero it:
- sets `walk_state` to IDLE;
- copies `walk_to_target`'s location and orientation onto the actor;
- clears any door target.

`CCharacter::setWalkTimeout` (`charactr.cpp/…0042ca20`) exists, but **nothing calls it**. The
constructor, `setWalkTarget` and `setWalkTargetImmediate` all set the timeout to −1.

Latent bug: the timeout branch reads `walk_to_target` even on a door-only walk, where it is null
(line 41). It's harmless while the timeout is never armed; guard it before arming one.

## Why scripted walkers stick

| # | Failure | Why | Verified |
|---|---|---|---|
| 1 | Walks into an actor, prop or closed door forever | The planner can't see them; the fallback is a straight line | V |
| 2 | Never arrives at a waypoint up against something solid | Default arrival distance is 0.01 | V (mechanism) / I (in practice) |
| 3 | "Confused", stands still | Target more than 40 units across or 20 up | V |
| 4 | "Can't figure out next waypoint", stands still | `isReachable` needs the waypoint within 30 units across / 10 up **and** a BFS success (`waypoint.cpp/…isReachable.cpp:27`) | V |
| 5 | Keeps a stale heading after the world changes | The heading is cached by the mover's exact position, so a pinned walker never replans | V |
| 6 | Plan fails outright beyond 49 voxels | The grid is 100×100, centred on the goal | V |
| 7 | Oscillates at corners | Tank steering, plus the `walk_turn` shim's zero forward step beyond 90° | I |

## Constraints on any fix

- **Netplay is lockstep.** Any planner must give the same answer on every machine:
  - integer grid maths only;
  - no RNG draws;
  - iterate actors in `CDemonSet` order;
  - no wall-clock time.
- **Don't touch the 12-entry path-map cache from new code.** Every `getOrCreatePathMap` call can
  draw RNG and reorders the shared LRU, and it is rewound per mission for netplay
  (`shims/net/net_pathcache.cpp`). A new planner needs its own scratch grid and must read heights
  straight from `CDemonRaytrace`.
- **Scope to scripted walks** to begin with: only while a script has set `walk_to_target`, and
  only for characters the hero isn't controlling. This keeps combat AI exactly as shipped.
- New behaviour goes behind a `NOCTURNE_AUTHENTIC_*` flag, with the logic in a shim and minimal
  hooks in the keeps.

## Options

### A. Guaranteed finish (cheap)

| # | Change | Hook | Cost |
|---|---|---|---|
| A1 | **Arm the timeout** for script walks, with a default length plus a per-mission override from `shims/game/script_quirks` (a new `SCRIPT_QUIRK_WALK_TIMEOUT` kind). Guard the door-only null first. | After `setWalkTarget` in the `walkTo` handler (`script.cpp:3084`) | Trivial |
| A2 | **Finish at once on a dead end.** On "confused" (failure 3) or "can't figure" (failure 4), take the timeout path right away. | `processWalking` / `followActor` | Low |
| A3 | **Stuck detection.** No progress toward the target over N seconds of sim time → snap, or (with B) replan. | `processWalking`, before `followActor` | Low |
| A4 | **Arrival floor for script walks**, e.g. the walker's radius instead of 0.01. | `followActor:62` | Trivial |

The snap is the original game's own. Its cost is a visible jump if it fires on camera. A is
worth doing even alongside B, as the backstop that guarantees no cutscene can stall.

### B. Real pathing around the level and around actors (expensive)

A planner of our own, used for script walks, that knows about obstacles and plans the whole
route.

**B1. Obstacle-aware grid.** A scratch grid, separate from `CPathMap` and owned by the shim.
- **Window:** covers both the mover and the goal plus a margin, rather than centring on the goal.
  This removes the 49-voxel limit (failure 6). Cap the size (e.g. 256×256) and fall back to A
  beyond it.
- **Heights:** read straight from `getVoxelHeightAtVoxelCoords`, with the same climb and ledge
  rules as `searchGrid`, so walkable floor matches the shipped planner.
- **Obstacles:** stamp blocked cells for:
  - other characters' collision cylinders, inflated by the walker's radius;
  - props and actors that `testCylinderCollision` would stop on;
  - closed doors.

  The walker and its target are excluded. Re-stamp only when replanning, not every frame.
- **Cost:** a 256×256 byte grid is 64 KB, and stamping is O(actors).

**B2. Search.** A* with an octile heuristic, 8-connected. Corners can't be cut past blocked
cells. Step cost adds a small penalty for height change. Use integer costs only, with a fixed
neighbour order and a deterministic tie-break (by cell index). This fixes failures 1 and 6.

**B3. Path to motion.**
- Smooth the cell path with a line-of-sight check (string-pulling over the same grid) down to a
  few corner points.
- The walker steers through the corners using the existing `walkToPoint` steering, with each
  corner as an intermediate point. This bypasses `findPathWithRetry` for script walks.
- Advance to the next corner when within a radius. Arrival at the real target still goes
  through `followActor`, so `reachedDest` behaves as shipped.

**B4. Replanning.**
- Plan once when the walk starts.
- Replan when:
  - the next corner's line of sight is blocked;
  - stuck detection (A3) fires;
  - an actor moves into a remaining path cell;
  - every N sim seconds.

  This fixes failure 5. Moving actors, such as two scripted walkers crossing, are handled by the
  replan and by B5.

**B5. Local avoidance (optional).** Between replans, a small steering push away from nearby
characters, so two walkers passing each other sidestep instead of pushing head-on. It must be
deterministic: fixed actor order and no RNG.

**B6. Waypoint graph fixes (optional).** Failures 3 and 4 come from the waypoint layer's range
limits, not from the grid planner. With B in place:
- `findNearestReachable` can accept a waypoint that B's planner can reach, instead of requiring
  the 30/10 range plus a `searchGrid` success.
- `followActor`'s 40/20 "confused" limit can be lifted for script walks.

**Why this is expensive:**
- Hooks are needed in four keeps (`walkTo`, `processWalking`, `followActor`, `walkToPoint`).
- The planner shim itself is about 500–800 lines, and needs tests to 100% coverage.
- Netplay determinism has to be proven: both machines must produce the same corner list, which a
  netplay trace can check.
- It needs in-game tuning across many cutscenes. Script authors placed waypoints around the
  shipped planner's quirks, so a better planner can choose a *different* route than the one the
  camera was framed for. Keep A as the backstop and let script quirks turn B off per line where
  the shipped route is wanted.

**Optional later: B for live AI.** The same planner could serve enemies' chases. That changes
gameplay balance (enemies stop getting stuck on props), so it would need its own flag and
playtesting. It is not part of this work.

### C. Smaller steps toward B

If B is too much at once, each of these helps on its own:
- **C1.** Stamp only *characters* into a copy of the shipped grid and rerun `searchGrid`'s logic
  on the copy. That covers failure 1 for the common case of another actor in the way.
- **C2.** Invalidate the exact-position heading cache when the walker hasn't moved for a few
  frames (failure 5).
- **C3.** Let the BFS window centre between the mover and the goal, removing the 49-voxel limit.

## Suggested order

1. A1 + A2 + A4, so no cutscene can stall. Small, and keeps the shipped feel.
2. B1 + B2 + B3 behind their own flag, scripted walks only.
3. B4, then B5 and B6 as the cutscenes show they are needed.

## Open questions

- The voxel size (`g_CDemonRaytraceInstance.adjusted_size`), which converts the 49-voxel and
  climb limits to world units. Not yet measured.
- Do any cutscenes depend on a walker *failing* (for example, being blocked on purpose until a
  door opens)? A1's timeout must be long enough not to cut those short.
