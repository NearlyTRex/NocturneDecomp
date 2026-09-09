# Script Event Flags — the developer warps and the one easter egg

> **Content note.** Nocturne (Terminal Reality / Gathering of Developers, 1999)
> shipped with an ESRB **M (Mature 17+)** rating for animated blood and gore and
> animated violence, and with a built-in content switch — `[Graphics] nudityFlag`,
> mastered by `quimbyFlag` — that the developers used to gate a small amount of
> optional adult material. Documenting the engine's flag system means naming the
> identifiers the shipped scripts use for that material, and a few of them are
> crude. They appear below verbatim, as they appeared in the original binary.

The 45 typed `g_CheatStr_*` codes in [`cheats.md`](cheats.md) are not the whole
debug surface. A second, larger one lives in the **mission data**, not the
executable: names the shipped `.SCR` scripts test for and that nothing in the
shipped data ever raises. The only way in was the `RAISE` cheat, which is behind
`developer_mode_enabled` and wants the name typed from memory with nothing on
screen listing them.

This doc is the recovered list and the mechanics needed to use it.

## Where the data lives

Mission data is plain CRLF text inside the POD archives. Pull it with the
project's own extractor:

```bash
python3 scripts/Python/extract_pod.py ACT1.POD .scr /tmp/scr
python3 scripts/Python/extract_pod.py ACT1.POD .msn /tmp/msn
```

- **`.SCR`** — the mission script. `:label`, `idle`, `if (Flag && !Guard) {...}`,
  `goto`, `flagon(X)`, `gameflagon(X)`, `raise(X)`, `warpto`, `dbsay`.
- **`.MSN`** — the actor list, `"value"    // fieldName`. Event *producers* are
  `onName`, `openEvent`, `eventToTriggerWhenOpen`, `useEvent`, `talkToMeEvent`,
  `breakEvent`, …; the event *consumer* is `createEvent` (the actor is built when
  that event fires). An `onName` may hold a whole command string, not just a
  name — `"displaybitmap(bullet1927.raw, 640, 480)"`,
  `"BriefDoorClose; SendGeneralAway"`.
- **`.SET`** — the level (geometry, lights, cameras).

Grepping the decompiled C for a flag name finds nothing: the C is only the
interpreter.

## The three stores, and why the difference matters

`CEventList::resolveVariable` (`004adc10`) answers a script's `if (Name)` from
four places, all `_stricmp`, so `cheat1` and `Cheat1` are one flag:

| Written by | Store | Lifetime | Cap |
|---|---|---|---|
| a bare name, no parentheses | `events` → `current_events` | **one frame** | 100, name ≤ 31 chars |
| `flagOn(X)` / `flagOff(X)` | `persistent_events` | the mission; saved in savegames | 100 |
| `gameFlagOn(X)` / `gameFlagOff(X)` | `game_flags` | across missions | **10** |
| `setTimer(X, secs)` | `timers` | until it expires | — |

`CEventList::process` (`004aaac0`) does `current_events = events; events.count = 0`
once per frame, and `CGame::process` steps the script *before* that call — so an
event raised at any point in frame N is visible to the script on frame N+1 and
on no other frame.

`CDemonMission::startMission` calls `CEventList::reset`, which zeroes
`current_events`, `persistent_events`, `timers`, `counters`, `actor_vars`,
`sfx_handles` and `events`. `game_flags` survives it and is cleared only by
`CGame::showChapterSelect` and `CGame::loadGame`.

**A one-frame raise and a persistent flag are not interchangeable**, and the
script decides which one a name wants:

- Guarded — `if (Name && !AlreadyDidIt)` — takes either. A persistent flag is
  the reliable choice because it does not depend on which tick the script reads
  it on, and the guard still limits it to one firing.
- Unguarded — `if (cheatpits) { warpto($, CheatPits) }` — takes **only** a raise.
  As a persistent flag it would re-warp the player every script tick, forever.

Every warp below is unguarded.

## `RAISE` takes commands, not just names

`CGame::processCheatCodes` runs the typed string through
`CEventList::validateCommands` (a dry run) and then `CEventList::executeCommands`,
so the box accepts the full command language: a bare `EasterEggSex` raises the
event, `flagOn(EasterEggSex)` sets the persistent flag, and `a; b; c` does three
things. A name with no `(` is what falls through to the raise path.

## The developer warps

About fifty across fourteen missions, recovered by diffing every identifier read
in `.SCR` `if (...)` conditions and `.MSN` `createEvent` fields against every
name the shipped data raises. Matched on `CDemonMission::mission_name`, which is
the `.scr` basename — note the shipped casing is inconsistent (`castle1`,
`CHICAGO2`, `Mansion`, `HQ-ACT1`), which does not matter to the engine.

| Mission | Name | What the script's block does |
|---|---|---|
| `castle1` | `Cheat` | `goto IntroTruncated` — skip the intro |
| `CHICAGO2` | `Cheat1` | warp to `CheatPier` |
| `CHICAGO2` | `Cheat2` | warp to `CheatWWorks`, Icepick to `CheatWWorks0` |
| `CHICAGO3` | `Cheat2` | warp to the manhole, Icepick to Pier 7 |
| `dungeon` | `cheat1` | warp to `cheatpoolplat` |
| `dungeon` | `cheatholy` | warp to `cheatboss` |
| `dungeon` | `CheatGem` | give `GemR`, warp to `CheatGem` |
| `dungeon` | `CheatEnd` | raise `CreateSanctumKey`, warp to `CheatFinalRoom`, give `Key_Sanctum` |
| `forest` | `cheattrap1` `cheattrap2` `cheatBridge` `cheatyuri` `cheatpits` `cheatgap` `cheatvampire` `cheatmill` `cheatMillBridge` `cheathorse` `cheatAmbush1` `cheatAmbush3` | warp hero, then Svetlana, to the like-named waypoint |
| `grave` | `Cheat1` | warp to `cheatcenter`, give Key1/2/3, `flagon(Crypt1Solved)`, `flagon(Crypt2Solved)` |
| `grave` | `Cheat2` | `flagon(Crypt2LiteIsOn)` |
| `GTOWN` | `CheatTown` | create + kill Sentinel0–7 in turn, then warp both to `CheatTown` |
| `GTOWN` | `Cheat1` | give `Key_Crypt`, warp to the crypt, Svetlana to `WayPointSvetHurt` |
| `GTOWN` | `CheatMain` | `flagon(Cheating)` — skips the `isDead(Sentinel1) || Cheating` gate |
| `HQ-ACT1` | `CheatBriefEnd` | warp past the briefing, `goto HQPostBriefingLoop` |
| `HQ-ACT4` | `CheatBriefEnd` | warp to `WayPointTalkToDoc`, `flagon(Briefed)` |
| `HQ-ACT5` | `cheat1` | warp to `cheathqhall` |
| `HQ-ACT5` | `cheat2` | warp to `cheathqhall`, give `Key_Holliday` |
| `INTFACT` | `Cheat1` | warp to `cheatmain`, `flagon(emeron)` |
| `INTFACT` | `Cheat2` | warp to `CheatLookOn` |
| `Mansion` | `CheatMoloch` | warp to `CheatMoloch`, give `Matches`, raise `DoorDungeonOpen` |
| `Mansion` | `CheatEnd` | warp to `WaypointHeroExitControl`, `goto EndMission` |
| `Mansion` | `testdumb` / `testsucc` | warp to `CheatDumbKitch` / give `Key-Bedroom` + warp to `CheatSuccubus` |
| `temple` | `CheatEnd` | warp to `CheatStone5` and press fire |
| `theater` | `Cheat2` | warp to `cheatprojector`, give `FilmReel1` |
| `theater` | `CheatEnd` | warp to the movie seat, `goto MeetSmiley` |
| `theater` | `CheatToEnd` | warp to `cheatladder`, `goto endloop` |
| `TOWN` | `cheatdeputy` | `flagOn(playedDepute)`, `flagOn(warpedKey)`, give `SherrifKey`, warp to `WaypointOpenCell` |
| `TOWN` | `cheatcoward` `cheatwhore` `cheatmaandpa` `cheatkids` | warp to that character's pickup point |
| `TOWN` | `cheatMaAndPaChurch` | warp the Smiths and the hero to the church, `raise(cheating)` |
| `TOWN` | `CheatCow` | warp hero and `ZombieCow2` to `PathPoint45` |
| `TOWN` | `cheat1` | give `rumbottle` |
| `TOWN` | `cheaty` | `flagon(playedmascene)`, `flagon(scatrevived)`, set the cellar victim |
| `TOWN` | `cheatyend` | `goto IntroStraightToEnd` |
| `TOWN` | `Cheatend` | `goto boyCrawlInMine` |
| `train` | `Cheat1` | warp to `TriggerConvWithAlpha` |
| `train` | `CheatEnd` | give `Ammo0` + `HealthItem0`, warp to `WayPointJump` |

`testdumb` and `testsucc` are the same shape under a different prefix; the rest
of the dormant set (~120 more names) is ordinary plot wiring that happens to be
raised from a `.MSN` field the sweep did not classify.

## The one shipped easter egg: `EasterEggSex` (castle1)

Its only producer in the shipped data is a single keyed dungeon gate,
`DoorToDung1b_4` (`keyMask 4`), whose `eventToTriggerWhenOpen` is this name.
Opening it starts a five-step chain:

```
DoorToDung1b_4 opens                      -> raises EasterEggSex
CASTLE1.SCR  if (EasterEggSex && !CreatedTheSex)
                 flagon(CreatedTheSex)
                 if (isNudityEnabled()) raise(CreateEasterEggSex)
CreateEasterEggSex   -> createEvent of TriggerActivateSexRoom
walk into it         -> onName ActivateSexRoom
ActivateSexRoom      -> createEvent of DraculaBride3, DraculaBride4, Succubus1
                        and of TriggerTargetSexRoom (onName TargetSexRoom,
                        which poses them)
cameras cas117/cas118 -> StoppedTheSex, which stands GhoulBunkRoom1 up
```

`isNudityEnabled()` is a real atom in `CEventList::evaluateAtom` reading
`g_CGamePtr->nudity_flag` — the `[Graphics] nudityFlag` ini key, exposed as a
Graphics option and force-zeroed by `quimbyFlag`. With nudity off the flag is
still raised and the script simply declines it.

The same flag drives model swaps at actor-creation time, independently of any
event: `CDraculaBride::setup`, `CSuccubus::setup`, `CSvetlana::setup` and
`CHotDemon::setup` each pick an `x`-suffixed censored `.dfm` when it is zero
(`nbride2x.dfm`, `succubusx.dfm`, `hotdemonx.dfm`, `svetlanax.dfm`).

**A second nudity gate, not an easter egg:** `HQ-ACT3.SCR` answers
`if (ExamineBulletin)` with `displaybitmap(bullet1933.raw)` or
`BULLET1933_CENSORED.RAW`. `TriggerExamineBulletin` also exists in HQ-ACT1, 4 and
5, but only Act 3's is wired to that event name; the others show plain 1927 /
1935 / generic bulletins through an `onName` that is itself a `displaybitmap`
command string.

## Where this is used in the port

- **Pause menu > WARPS** — `shims/game/warps.cpp` holds the table above and
  raises the selected name through `CEventList::executeCommands`, exactly as
  `RAISE` does. It sits on the pause menu because a warp is a one-shot action on
  the mission that is running, like the save/load/skip entries beside it, and
  because a mission has to be running for it to mean anything. Per-mission,
  one-shot, not persisted, and hidden during a network session — a warp moves
  one machine's hero and lockstep would never recover. The entry only appears
  when *Options > Cheats > Gameplay > Mission warps* is on.
  `CGame::runGameSession` carries the guard and the one call; everything else is
  in the shim.
- **Options > Cheats > Gameplay > Easter eggs** — `kEasterEggEvents` in
  `shims/game/cheats.cpp`, armed at mission start as a *persistent* event because
  its script test is guarded.
