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
  until you choose it. A total conversion can leave the games out.
- **Each game is a package like any mod.** Copy each game's install into a folder of its own,
  for example `games/nocturne/` and `games/blairwitch1/`. The PODs are matched to
  `recreation/data/releases.toml`, and each game found gets a manifest written in its folder,
  its id the game's: `nocturne`, `blairwitch1`, `blairwitch2`, `blairwitch3`. Without a
  `loadorder.txt` the first game found is turned on. One game runs at a time, since the games
  share POD names: the first one turned on loads, and the others are left out with a note. To
  play another, turn the one you have off and the other on:

  ```text
  # nocturne
  blairwitch1
  ```

## Game content in the manifest

What the original binary hard-coded about its own game lives in the manifest, so another game
or a mod can change it without code. Nocturne's is `recreation/data/games/nocturne.toml`.

| Key | What it sets |
|---|---|
| `title`, `copyright` | The game's name and copyright line |
| `[front_end]` | The style of each front-end part, named for how it is drawn: `title_backdrop` (Nocturne's `sky_scene`, BW1's and BW2's `figure_scene`, BW3's `tiled_scroll`) and `loading_indicator` (Nocturne's `moon`, BW2's `progress_bar`), `credits` (Nocturne's `column_scroll`, BW2's `fade_loop`) and `story_select` (Nocturne's `story_list`, BW2's `direct_start`). A mod can change one part and keep the rest |
| `[menu]` | Where the menus sit and how they look: alignment, colours, fonts, spacing, glow, a drop copy under each line, footer, calibration, slider, sound page, music and attract movies |
| `[controls]` | The control modes the Control line steps through (`keyboard`, `keyboard_mouse`, `gamepad`), each with its label, aim and default codes per action, and the bindings page's rows. The hotkeys are the engine's |
| `[[font]]` | Each bitmap font by role (`medium`, `tiny`, `theme`, `small_editor`, `console`, `micro`): its sheet, spacing, character offsets, shadow and OS font size. A mod's font replaces the one with its id |
| `[list]`, `[dialog]` | How pick lists, dialog windows, prompts, the progress bar, scroll bars and buttons look |
| `[labels]` | The game's text for the engine's English labels, before translation |
| `[title_backdrop.sky_scene]` | The menus' moon, bats, clouds and title animation |
| `[title_backdrop.figure_scene]` | A still backdrop with animated models before a fixed camera, and the title animation; the backdrop and models are optional |
| `[startup]` | The picture and "Loading..." label while the game starts, and the opening movie |
| `[[loading]]` | Loading screens and their moon placement and tint |
| `[loading_indicator.moon]` | The loading moon's model, glow, windows, light and status line |
| `[[story]]`, `[[story.chapter]]` | The episodes, their chapters and missions, and unlock codes |
| `[story_select.story_list]`, `[story_select.direct_start]`, `[chapter_title]` | How START picks a story and its difficulty, or starts the first story at once, and how the chosen story's title shows over the game |
| `[credits]` | Credits text, image and music, and in `[credits.column_scroll]` or `[credits.fade_loop]` how they scroll and look |
| `[translation.<lang>]` | Text translations, picked by `language=` in `nocturne.ini` |

When several packages set these, a scalar takes the last value set, stories and loading screens
merge by id, and labels and translations merge per key.

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
  file and executable it shipped. Each has a `data/games/` file with its title and its
  front-end part styles. An install is recognised, then startup stops at the first part this
  build doesn't draw.

Still to do:

- Structs, enums and typedefs the games use without class records. They hold back about 400–480
  signatures per game.
- Decompiling each game's own units and porting them into the recreation, selected by the data
  that reaches them.
- Each game's front-end part styles drawn, and its menu layout and stories in its
  `data/games/` file.

Progress per binary is on the [progress page](progress.md).

## Other mods

Anything that fits the package model works the same way: a new episode, replaced assets, a
translation, or a whole new game on the engine. Still open:

- Loading a missing package's save should fail with a message.
- Netplay should check that both sides have the same load order.
- Load notes should be shown to players, not only written to the developer log.
- The 100-POD limit.
