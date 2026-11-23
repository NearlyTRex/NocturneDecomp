# Archive histories

Each actor class registers a version, and a mission or save file records the version it saved
each class's fields at. The builds numbered their versions independently, so in a few classes
one version means different fields in different games. `scripts/Python/archive_version_forks.py`
runs every build's `<Class>_archive` pseudocode at each saved version from 0 to 20 and compares
the fields read.

## Classes

207 classes: 125 same, 14 linear, 1 renamed, 3 fork, 64 with no archive of their own.

- **same**: one version, one format in every build.
- **linear**: the builds stop at different versions of one history; the file's version alone
  says how to read it.
- **renamed**: `CDoc` v6+ describes a field as `gunsDrawn` in bw1 and `gunDrawn` in bw2. The
  reader skips descriptions, so nothing changes.
- **fork**: one version number means different fields in different builds.

| Class | Shared up to | Fork | One history | The other |
|---|---|---|---|---|
| `CCharacter` | v9 (bw2 stops here) | v10 | bw1: v10 script walk, v11 carry pos/orient | bw3: v10 bind/on-fire time, v11 bind type, v12 additive, v13 script walk + carry, v14 been damaged |
| `CHero` | v13 (bw1 stops here) | v14 | bw2: v14 nothing, v15 hero/inventory index, v16 inventory index | bw3: v14 mana, bullets, v15 light radius |
| `CShadow` | v1 | v2 | bw1, bw3: v2 lightUpEyes, scaredByLight | bw2: v2 lightUpEyes, v3 drops guardDistance, v4 chain, v5 type, v6 phase (registers v1, reads up to v6) |

A class name that Ghidra's string analysis starts inside the float before it
(`"?333?CTrigger" + 5`, `"MbP?CZombieCow" + 5`) hides the class from the scan.
`split_offcut_strings.py` re-starts those strings; with them fixed, `CTrigger` is linear and
`CZombieCow` the same everywhere.

## The manifest's `[archive]` table

Not built: the recreation reads Nocturne's versions only, and the tool has no `--manifest`
mode. The design:

Each game's manifest lists the classes it saves at a version other than Nocturne's:

```toml
[archive.CCharacter]
version = 11              # what this game writes
history = "script-walk"   # past v9: v10 script walk, v11 carry
[archive.CHero]
version = 13
[archive.CDoor]
version = 13
```

- `version` is what the game writes, so each game's saves keep its own format and Nocturne's
  are unchanged. The reader accepts every version of the class's history.
- `history` is needed only for a forked class. Histories are named for what they add
  (`script-walk`/`bind`, `inventory-index`/`mana`, `scared-by-light`/`chain`), never for a
  game.
- A class registers its history names with its type. A manifest naming an unknown one fails
  at load and lists the known ones.
- A file past the shared versions of a class the manifest gives no history for is fatal; the
  error names the class and the version.
- Packages merge as `SGameContent` does: a later package's entry for a class wins.

The line's description does not choose the format: the reader skips descriptions, and builds
describe one field differently (`CDoc`). At a fork boundary only, the reader compares the
description with the one the named history expects, and a mismatch is a load note, not fatal.

`archive_version_forks.py --manifest` prints each build's `[archive]` table: every class whose
registered version differs from Nocturne's, and every fork with the history its fields match.
A test compares that with `recreation/data/games/*.toml`, skipped when the annotations are
absent. The test is the only place that maps a build to a game.

## Actor defaults

Not built. A value one game's actor hard-codes and another's sets is an `[actors.<Class>]` field the class
declares; an unknown field fails at load:

```toml
[actors.CGhoul]
turn_rate = 1.5707964
cutscene_turn_rate = 1.5707964
ghost_turn_rate = 1.5707964
```

Nocturne's manifest gives the values that reproduce its constants. Its ghoul turns at
`pi/2 * dt` with no cutscene or ghost case, so all three rates are pi/2 and BW's
`updateTurnSpeed` branches change nothing. Each of the ~30 BW `updateTurnSpeed` callers is
ported this way only where its Nocturne counterpart turns at `rate * dt`; one that doesn't
keeps its own code.

Variant actor types (one script class name resolving to different implementations) are for a
class whose behaviour differs by more than values.
