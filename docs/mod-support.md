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
| `[front_end]` | The style of each front-end part, named for how it is drawn: `title_backdrop` (Nocturne's `sky_scene`, BW1's and BW2's `figure_scene`, BW3's `tiled_scroll`), `loading_indicator` (Nocturne's and BW1's `moon`, BW2's `progress_bar`, BW3's `icon`), `credits` (Nocturne's and BW1's `column_scroll`, BW2's `fade_loop`, BW3's `two_column`) and `story_select` (Nocturne's and BW1's `story_list`, BW2's and BW3's `direct_start`). A mod can change one part and keep the rest |
| `[menu]` | Where the menus sit and how they look: alignment, a point per main-menu line, colours, fonts, spacing, glow, a drop copy under each line, each page's top, where the copyright and build line go, calibration, slider, sound page, music and attract movies, and in `[menu.features]` whether the options page has the puzzle and combat difficulty lines |
| `[controls]` | The control modes the Control line steps through (`keyboard`, `keyboard_mouse`, `gamepad`), each with its label, aim and default codes per action, and the bindings page's rows. The actions and hotkeys are the engine's, the Blair Witch games' own included: compass, field notes, quick turn, SPS, drop, action and voodoo doll |
| `[[font]]` | Each bitmap font by role (`medium`, `tiny`, `theme`, `small_editor`, `console`, `micro`), or of the game's own under any other id: its sheet, spacing, character offsets, shadow and OS font size. A mod's font replaces the one with its id |
| `[list]`, `[dialog]` | How pick lists, dialog windows, prompts, the progress bar, scroll bars and buttons look |
| `[labels]` | The menus' text by id (`main_play = "P L A Y"`), before translation. Every game lists every id; a mod can change one |
| `[title_backdrop.sky_scene]` | The menus' moon, bats, clouds and title animation |
| `[title_backdrop.figure_scene]` | A still backdrop with animated models before a fixed camera, and the title animation; the backdrop and models are optional |
| `[title_backdrop.tiled_scroll]` | A picture tiled and scrolling, a picture over it fading in and out, and an overlay |
| `[startup]` | The picture and "Loading..." label while the game starts, and the opening movie |
| `[[loading]]` | Loading screens: each picture, with its moon placement and tint or its icon |
| `[loading_indicator.moon]` | The loading moon's model, glow, windows, light and status line |
| `[loading_indicator.progress_bar]` | The loading bar's size and colours, and its status line's box, font and colour |
| `[loading_indicator.icon]` | Where the loading picture's icon sits, its size, and how it fades in |
| `[[story]]`, `[[story.chapter]]` | The episodes, their chapters and missions, and unlock codes |
| `[story_select.story_list]`, `[story_select.direct_start]`, `[chapter_title]` | How START picks a story and its difficulty, or starts the first story at once, and how the chosen story's title shows over the game |
| `[credits]` | Credits text, image and music, and in `[credits.column_scroll]`, `[credits.fade_loop]` or `[credits.two_column]` how they scroll and look |
| `[translation.<lang>]` | Text translations, picked by `language=` in `nocturne.ini` |

When several packages set these, a scalar takes the last value set, stories and loading screens
merge by id, and labels and translations merge per key.

Each still picture's table (`[startup]`, `[[loading]]`, `[title_backdrop.figure_scene]`,
`[title_backdrop.tiled_scroll]`, `[credits]`, `[menu.calibration]`) says how it fills a wide
screen: `fit = "keep_aspect"` with an optional `anchor = "centre" | "left" | "right"`, or
`fit = "stretch"`. What stands on the picture, such as BW1's figures or the credits' lines,
moves with it. A footer line's `edge = "backdrop"` keeps it in the title picture's corner.

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
- Each game's retail install is in `recreation/data/releases.toml`: its PODs, and every loose
  file and executable it shipped.
- Each game's front end runs from its `data/games/` file: its title backdrop, menus, fonts,
  controls, loading screens and indicator, credits and story select, all drawn by the
  recreation. The differences between the games are keys in the manifest, not code. See the
  [screenshots](../screenshots/README.md).
- Each game's own actions, such as the compass and field notes, can be bound on its controls
  page.

Still to do:

- Structs, enums and typedefs the games use without class records. They hold back about 400–480
  signatures per game.
- Decompiling each game's own units and porting them into the recreation, selected by the data
  that reaches them. Until then, starting a story stops where the recreation's port does, as
  it does for Nocturne.

Progress per binary is on the [progress page](progress.md).

## Other mods

Anything that fits the package model works the same way: a new episode, replaced assets, a
translation, or a whole new game on the engine. Still open:

- Loading a missing package's save should fail with a message.
- Netplay should check that both sides have the same load order.
- Load notes should be shown to players, not only written to the developer log.
- The 100-POD limit.
