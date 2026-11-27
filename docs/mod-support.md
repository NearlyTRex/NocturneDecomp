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
or a mod can change it without code. Each game's file is in `recreation/data/games/`, Nocturne's
`nocturne.toml`. Past the game's name and copyright, every table belongs to a section and is
named under it, `[hud.health_bar]` in `hud`, so a table's name says where it is documented and
where it sits in the games' files, which are laid out in the same order. A table a package
leaves out is Nocturne's.

When several packages set these, a scalar takes the last value set, stories and loading screens
merge by id, and labels and translations merge per key.

### The game

| Key | What it sets |
|---|---|
| `title`, `copyright`, `copyright_os_font` | The game's name and copyright line, the last with the (c) only the OS fonts have |

### `menu`: the front end

| Key | What it sets |
|---|---|
| `[menu.styles]` | The style of each front-end part, named for how it is drawn and for the table it is drawn from: `backdrop` (Nocturne's `sky_scene`, BW1's and BW2's `figure_scene`, BW3's `tiled_scroll`), `loading_indicator` (Nocturne's and BW1's `moon`, BW2's `progress_bar`, BW3's `icon`), `credits` (Nocturne's and BW1's `column_scroll`, BW2's `fade_loop`, BW3's `two_column`) and `select` (Nocturne's and BW1's `story_list`, BW2's and BW3's `direct_start`). A mod can change one part and keep the rest |
| `[menu.backdrop.sky_scene]` | The menus' moon, bats, clouds and title animation |
| `[menu.backdrop.figure_scene]` | A still backdrop with animated models before a fixed camera, and the title animation; the backdrop and models are optional |
| `[menu.backdrop.tiled_scroll]` | A picture tiled and scrolling, a picture over it fading in and out, and an overlay |
| `[menu.credits]` | Credits text, image and music, and in `[menu.credits.column_scroll]`, `[menu.credits.fade_loop]` or `[menu.credits.two_column]` how they scroll and look |
| `[menu.startup]` | The picture and "Loading..." label while the game starts, and the opening movie |
| `[menu]` and its other tables | Where the menus sit and how they look: alignment, a point per main-menu line, colours, fonts, spacing, glow, a drop copy under each line, each page's top, where the copyright and build line go, calibration, slider, sound page, music and attract movies |

Each still picture's table (`[menu.startup]`, `[[stories.loading]]`,
`[menu.backdrop.figure_scene]`, `[menu.backdrop.tiled_scroll]`, `[menu.credits]`,
`[menu.calibration]`) says how it fills a wide screen: `fit = "keep_aspect"` with an optional
`anchor = "centre" | "left" | "right"`, or `fit = "stretch"`. What stands on the picture, such as
BW1's figures or the credits' lines, moves with it. A footer line's `edge = "backdrop"` keeps it
in the title picture's corner.

### `hud`: in play

| Key | What it sets |
|---|---|
| `[hud.battery_gauge]` | The flashlight battery's gauge, while `[features.battery]` has one: `place` |
| `[hud.health_bar]` | The hero's health bar while the inventory shows: `place` |
| `[hud.inventory]` | The inventory's weapon and item panels: `place`, and `[[hud.inventory.view]]` for how a model shows in them (below) |
| `[hud.status_bars]` | The other heroes' and characters' bars: `place`, the rest stacked away from its edge |
| `[hud.message]` | The message line, such as an item's pickup: `place` |
| `[hud.death_banner]` | The line over the frame while the hero is dead (`text`; Nocturne's only, the Blair Witch games show none) and its `place` |
| `[hud.chapter_title]` | The chosen story's year and title over the game: how long, its format, colour, shadow, alpha and fonts by screen height, and its `place` |

Every HUD element has a `place`, `{ anchor = "top_left", x = 4, y = 4 }`: a point of the scene's
picture (`top_left`, `top`, `top_right`, `left`, `centre`, `right`, `bottom_left`, `bottom`,
`bottom_right`) and the element's box x and y in from that edge, or right and down from the middle
along an axis the anchor centres on; negative values go the other way. Each element counts in its
own unit, so its default stays where the game put it at every resolution:

| Element | Unit |
|---|---|
| `battery_gauge`, `health_bar` | HUD pixels: 640x480 ones at the HUD's whole-number scale |
| `inventory` | The scene camera's pixels laid onto the frame at its height |
| `status_bars`, `death_banner` | 640x480 shares of the frame |
| `message` | 640x480 pixels at the HUD's text scale, a line clear of the letterbox bar on its edge |
| `chapter_title` | Glyph widths at the HUD's text scale, clear of the letterbox bar on its edge |

A `[hud.inventory]` without a `place` leaves the panels where an earlier package put them, so a
package can add views alone. Each `[[hud.inventory.view]]` says how one model shows in the
panels; a later package's view of the same model, in any case, replaces it:

```toml
[[hud.inventory.view]]
model = "axe1.kfm"            # the item's model, as itemlist.txt names it
turn = { x = -90, z = -90 }   # degrees about each axis; y adds to the panel's own spin
distance = 2                  # the camera's distance in the model's largest half-extents
```

Each value left out takes the item's class's own: no turn, and a distance of 4 for a gun, 2 for
anything else. The weapon's panel turns its model side on, 90° about y; the item's doesn't.
Nocturne's manifest turns its two axes, `axe1.kfm` and `ax.kfm`, as the original did by their
names.

### `features`: how the game's own features behave

| Key | What it sets |
|---|---|
| `[features.battery]` | The flashlight's battery: `gauge`, whether it has its gauge on the HUD (Nocturne's alone; BW2 kept the code but its hero never turns on what shows it) |
| `[features.flashlight]` | The flashlight: `options`, Graphic Options' halo and range lines (Nocturne's and BW1's, whose heroes light their weapons; BW2's and BW3's carry lanterns) |
| `[features.difficulty]` | The puzzle and combat difficulty: `options`, the gameplay page's lines for them (BW1's alone) |

### `controls`

| Key | What it sets |
|---|---|
| `[controls]` | The control modes the Control line steps through (`keyboard`, `keyboard_mouse`, `gamepad`), each with its label, aim and default codes per action, and the bindings page's rows, which the F1 keys help lists too, by a row's `help` where its name there differs. The actions and hotkeys are the engine's, the Blair Witch games' own included: compass, field notes, quick turn, SPS, drop, action and voodoo doll |

### `looks`

| Key | What it sets |
|---|---|
| `[looks.iris]` | The iris scenes fade in and out through: whether a session opens on it (`opens_session`: BW2's doesn't) and how many frames it starts black (`black_frames`: Nocturne's 1, BW1's and BW3's 3) |
| `[[looks.font]]` | Each bitmap font by role (`medium`, `tiny`, `theme`, `small_editor`, `console`, `micro`), or of the game's own under any other id: its sheet, spacing, character offsets, shadow and OS font size. A mod's font replaces the one with its id |
| `[looks.list]`, `[looks.dialog]` | How pick lists, dialog windows, prompts, the progress bar, scroll bars and buttons look |

### `stories`: loading and the stories

| Key | What it sets |
|---|---|
| `[[stories.loading]]` | Loading screens: each picture, with its moon placement and tint or its icon |
| `[stories.loading_indicator.moon]` | The loading moon's model, glow, windows, light and status line |
| `[stories.loading_indicator.progress_bar]` | The loading bar's size and colours, and its status line's box, font and colour |
| `[stories.loading_indicator.icon]` | Where the loading picture's icon sits, its size, and how it fades in |
| `[stories.select.story_list]`, `[stories.select.direct_start]` | How START picks a story and its difficulty, or starts the first story at once |
| `[[stories.story]]`, `[[stories.story.chapter]]` | The episodes, their chapters and missions, and unlock codes |

### `text`

| Key | What it sets |
|---|---|
| `[text.labels]` | The menus' text by id (`main_play = "P L A Y"`), before translation. Every game lists every id; a mod can change one |
| `[text.translation.<lang>]` | Text translations, picked by `language=` in `nocturne.ini` |

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
