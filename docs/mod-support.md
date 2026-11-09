# Mod support

The recreation loads game content as **packages**. Nocturne itself is one, the Blair Witch
games are meant to be others, and community episodes and total conversions are too. This is
recreation-only: the decompilation keeps the original's fixed set of PODs. Packages become
playable when the recreation does.

## Packages

- **A package is a folder with a `nocturne.toml`** in it. Its PODs and loose files are relative
  to that folder, and it can sit anywhere under the install. A folder of PODs without a manifest
  is loaded as a package too, named after its path.
- **ZIP and 7z archives** are recognised by their contents, not their extension. Each one is
  unpacked once into a cache and then read as a folder. An archive holding absolute paths, `..`
  or links is refused whole.
- **`loadorder.txt`** lists package ids one per line, first loaded first, later ones winning.
  `# id` turns a package off. A package it doesn't name is added turned off, so nothing new loads
  until you choose it. A total conversion can leave `nocturne` out.
- **The base game is not special in code.** It is the package with id `nocturne`. The first
  run recognises your install's release from `recreation/data/releases.toml` and writes its
  manifest.

## Game content in the manifest

What the original binary hard-coded about its own game lives in the manifest, so another game
or a mod can change it without code. Nocturne's is `recreation/data/games/nocturne.toml`.

| Key | What it sets |
|---|---|
| `title`, `copyright` | The game's name and copyright line |
| `front_end`, `loading_indicator` | Which menu and loading animation the game uses (Nocturne's moon, BW2's bar) |
| `[menu]` | Where the main menu and trademark sit on screen |
| `[[loading]]` | Loading screens and their moon placement and tint |
| `[[story]]`, `[[story.chapter]]` | The episodes, their chapters and missions, and unlock codes |
| `[credits]` | Credits text, image and music |
| `[translation.<lang>]` | Text translations, picked by `language=` in `nocturne.ini` |

When several packages set these, a scalar takes the last value set, stories and loading screens
merge by id, and translations merge per key.

## The Blair Witch games

Blair Witch Volume 1, 2 and 3 were built on the Nocturne engine. The goal is for each to run as
a package with its own release entry, front end and game code.

Done so far:

- All three binaries are in the Ghidra project beside `nocedit.exe` and `nocturne.exe`, with
  their strings, functions, class records and translation units recovered.
- 60–67% of each game's functions match `nocedit.exe` function for function, and Volume 1
  matches Volumes 2 and 3 at 72–75%. Roughly 1,100–1,300 functions per game are named from
  those matches.
- The units each game added are identified, for example `fldnotes`, `mini3d`, `bmppuzzl` and
  `carved`, plus `shadow` in Volume 2 and `prye`, `tawiscara` and `zombiepriest` in Volume 3.
- Per-game differences found so far (menu placement and loading indicator) are already keys in
  the manifest rather than code.
- Each game's retail install is in `recreation/data/releases.toml`: its PODs, and every loose
  file and executable it shipped. Each has a `data/games/` file with its title. An install is
  recognised, then startup stops because this build has no front end for it.

Still to do:

- Structs, enums and typedefs the games use without class records. They hold back about 400–480
  signatures per game.
- Decompiling each game's own units and porting them into the recreation behind its
  `front_end`.
- Each game's front end, loading indicator, menu layout and stories in its `data/games/` file.

Progress per binary is on the [progress page](progress.md).

## Other mods

Anything that fits the package model works the same way: a new episode, replaced assets, a
translation, or a whole new game on the engine. Still open:

- Loading a missing package's save should fail with a message.
- Netplay should check that both sides have the same load order.
- Load notes should be shown to players, not only written to the developer log.
- The 100-POD limit.
