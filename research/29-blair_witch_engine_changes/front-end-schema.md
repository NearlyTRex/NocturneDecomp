# Front-end schema

The manifest keys that carry every front-end value, shown with Nocturne's. Each value's source
line and BW change are in [front-end-inventory.md](front-end-inventory.md). Not built beyond
`[front_end]`'s two parts, `[menu]`'s layout keys and the tables the manifest already had.

## Rules

- **Every key comes from a package.** The base game's manifest gives all of them; the code has
  no defaults. A key no package gives is fatal at startup and the error names it. A table marked
  *optional* turns its feature off when no package gives it.
- **Merging.** A table merges key by key, the later package winning; a list is replaced whole.
- **Units.** Positions are in the 640x480 layout. Colours are palette indices (0-0xff) unless
  named a cube colour. Alphas are 0-0xffff. Times are seconds.
- **Fonts** are named by their `[[font]]` id.
- **Labels** are written in the engine's English. `[menu.labels]` maps an English label to the
  game's text before translation, so a game lists only the labels it changes.
- **Lines.** Each page's lines are one shared list in code, the recreation's lines and the
  originals' together. `[menu.features]` switches on the lines for a feature only some games
  have.
- **Part values.** A part's style takes its values from a table named for the part and style,
  such as `[title_backdrop.sky_scene]`, so a mod can give values for another style.

## `[front_end]`

```toml
[front_end]
title_backdrop = "sky_scene"      # sky_scene | figure_scene | flipbook | tiled_scroll
loading_indicator = "moon"        # moon | progress_bar | icon
credits = "column_scroll"         # column_scroll | fade_loop | two_column
story_select = "story_list"       # story_list | direct_start
continue_prompt = "text"          # text | wait | none
```

## Fonts

```toml
[[font]]
id = "theme"                      # also: medium, tiny, small_editor, console, micro
file = "menufont.raw"
size = { width = 0xfa, height = 0x23f }
transparent = 0
y_offsets = [{ offset = 3, first = 0x20, last = 0x7e }, { offset = 0, first = 0xc0, last = 0xdf },
             { offset = 1, first = 0xe0, last = 0xff }]
finish = [8, 2]                   # finishFont's two values
os_font = { height = 18, y_offsets = [0, 0] }

[fonts]
menu_large = "theme"              # the Menu text setting's two choices
menu_small = "small_editor"
```

BW1-3 add `hand` (dochand.raw); BW3 adds `menu` and `small_menu` (BW3_font.raw, BW3_font2.raw).

## Menus

```toml
[menu]
left = 160
top = 250
titled_top = 225
align = "left"                    # left | centre
trademark = { x = 518, y = 99, glyph = 0x99, alpha = 0x8000 }

[menu.title]
colour = 7
shadow = 0
gap_lines = 2

[menu.item]
font = "theme"
colour = 0xf8
selected_colour = 0xff
alpha = 48000
shadow = -1                       # -1 for none
spacing_titled = 1
spacing_untitled = 2
positions = []                    # a point per main-menu item, or empty for a column

[menu.item.glow]
colour = 7
copies = 5
flicker = true

[menu.footer]
font = "small_editor"
shadow = 0
alpha = 0x8000
format = "{copyright}"            # {copyright}, {version}
version_x = 4

[menu.flat_set]                   # optional: BW's flat-lit set behind each page
colour = [50000, 50000, 0x10000]
ambient = 0xdac
animate_backdrop = false

[menu.labels]                     # English = the game's text; Nocturne's is empty

[menu.features]
difficulty = false                # BW1's puzzle and combat difficulty lines
crosshair = false                 # BW3's
health_numbers = false            # BW3's
point_and_click = false           # BW1's and BW3's control mode
mouse_only = false                # BW2's control mode

[menu.page.options]               # also: gameplay, display, graphic, sound, controls
title = "Option Menu"
top = 225
hero = "stranger"

[menu.slider]
width_share = 0.75
height = 0x2c
colours = { bar = 4, trough = 0, border = 0xff, text = 0xff }

[menu.sound]
effects_sample = "colt45-0.wav"

[menu.sound.spectrum]             # optional: BW3 has none
frames = ["F0100.RAW", "F0300.RAW", "F0500.RAW", "F0700.RAW",
          "F0900.RAW", "F1100.RAW", "F1300.RAW", "F1500.RAW"]
fps = 24
pitch = 4
margin_divisor = 20
half_width = 16
height_share = 0.25
alpha = 0x8000
mirrored = false

[menu.calibration]
image = "brightness"
steps = ["1. Turn off all the lights in your room.", "...", "You're done with calibration."]
title = "Monitor calibration"
prompt = "  Press any key to continue."
font = "small_editor"
colour = 0xf8
title_lines = 2
prompt_lines = 3

[menu.attract]                    # optional: BW has none
directory = "video"
movies = ["noc1.avi", "noc2.avi", "noc3.avi", "noc4.avi"]
```

The page tops all equal `titled_top` in Nocturne's manifest, as the recreation draws them;
the originals' own tops (Nocturne's options 250, sound 225) are a value change for later.

## Controls

```toml
[[controls.mode]]                 # in the order the Control line steps through them
id = "keyboard"                   # also: keyboard_mouse, gamepad; point_and_click, mouse_only
label = "Control : Keyboard"
devices = ["keyboard"]            # keyboard, mouse, joystick
lock_mouse_buttons = false

[[controls.binding]]              # the rows the bindings page lists, in order
action = "walk"
label = "Forward"
modes = []                        # the modes it shows in, or empty for every one

[controls.defaults.keyboard]      # each mode's default codes by action, from restoreDefaultControls
walk = ["..."]

[controls]
skip_auto_bindings = false
```

Actions are one engine-wide list, every game's together (BW's `sps`, `compass`, `journal`,
`voodoo_doll`, `drop`, ...). A row naming an action the engine lacks is fatal at load. The
recreation's hotkey rows stay in code, in every game.

## List widget and dialogs

```toml
[list]
font = "small_editor"
colours = { item = 0xff, disabled = 0xf8, selected = 2, confirmed = 0xfa, separator = 7 }
alpha = 0xffff
shadow = -1
column_padding = 8
margins = { width = 8, height = 6 }
field_gap_divisor = 40
row_extra = 1
reserved_lines = 4
width_share = 0.875
double_click = 0.25
pointer = { cube_colours = [0, 0x7fff, 0x3e0, 0x7c1f], height = 11, size = 9 }
scrollbar = { repeat = [4.5, 0.6], fill = 0, border = 7, width_divisor = 48 }

[dialog]
colours = { border = 7, title_bar = 0xfb, text = 0xff, warning = 0xff, status = 0xff,
            content = 0, progress = [0xff, 4] }
bevel = [0xff, 0xf8, 7, 0]
margin_divisors = { width = 128, height = 96, button = 80 }
prompt_padding = { chars = 4, lines = 2 }
titles = { message = "Message", warning = "Warning", error = "Error" }
```

BW1 and BW3 cycle the pointer through palette indices (`palette_colours = [0, 0xff, 2, 0xfd]`)
in place of `cube_colours`.

## Credits

```toml
[credits]
text = "credits.txt"
image = "stats"
music = "faded-remix.mp3"

[credits.column_scroll]
image_position = { x = 0, y = 0 }
column = { left = 414, right = 639 }
strips = { top = 30, bottom = 439, left = 414, colour = 0 }
colours = { text = 0xf8, heading = 2, shadow = 0 }
scroll_speed = 32
start_y = 480
heading_marker = "\\b"
end_marker = "end"
end_on_music = true
```

`fade_loop` (BW2) and `two_column` (BW3) take their own tables: BW2's alpha by distance from
y 240 and its loop points, BW3's columns at 100/300 and its markers.

## Stories and the chapter title

```toml
[stories]
list_title = "Choose a story to play"
full_install_probe = "enemy.pod"
loading_frames = 10
title_seconds = 8

[[stories.difficulty]]            # optional: BW1's picker after the story
label = "Normal Puzzles / Normal Combat"
puzzle = "normal"
combat = "normal"

[chapter_title]                   # optional: BW3 shows none
format = "{year} - {title}"
colour = 0xf8
shadow = 0
alpha = 0xffff
inset = { glyphs = 2, lines = 1 }
fonts = [{ below = 384, font = "small_editor" }, { below = 480, font = "tiny" },
         { font = "medium" }]
```

## Title backdrop: `[title_backdrop.sky_scene]`

```toml
[title_backdrop.sky_scene]
model = "moon.kfm"
cheat_model = { file = "taylor_head.kfm", code = 666 }
turn = { start = 0.25, speed = 0.0125, rest = 0.58 }
camera = { projection = 112, swing = 48, depth = 72 }
light = { direction = [-37000, -37000, 37000], ambient = 0x280, flat = 0x10000 }
bats = { model = "menubat.kfm", courses = ["menu1.pth", "menu2.pth", "menu3.pth"],
         count = 30, speed = 20, fps = 30, scatter = 5,
         light = [-0x4844, -0x4844, 0x4844], ambient = 0x2000 }
cloud = { image = "menucld2", size = 256, scroll = [32, 16] }
frames = { pattern = "noc{:05}", count = 30, size = [640, 278], position = [0, 0],
           alpha = 48000, additive = true, fps = 12, wrap = 60 }
```

`figure_scene` (BW1): backdrop image, three models with frame wraps, fixed camera matrix and
origin, light, frames. `flipbook` (BW2): frames only. `tiled_scroll` (BW3): scroll image,
steps and wraps, the hand image's position and alpha range and step, the overlay image.

## Loading indicator: `[loading_indicator.moon]`

```toml
[loading_indicator.moon]
model = "moon.kfm"
glow = { texture = "MOONGLOW.RAW", half_size = 1856 }
window = { size = 90, default_tint = 0xff00 }
corner_window = { x = 447, y = 0, size = 192 }
projection = { full = 56, window = 84 }
depth = 36
light = { reach = 37000, ambient = 0x280 }
status = { box = [32, 448, 576, 24], font = "theme", colour = 0xf8 }
random_pick = "pool"              # pool | any
```

The `[[loading]]` pictures stay as they are. `progress_bar` (BW2) takes its rectangles and
colour; `icon` (BW3) its position, alpha ramp and frame count, with an `icon` on each picture.

## Startup

```toml
[startup]
picture = "fangs"
alpha = 0x8000
label = "Loading..."
label_colour = 0xf8
label_font = "theme"
movie = "video/opening.avi"
```

## Continue prompt: `[continue_prompt]`

```toml
[continue_prompt]
text = "Press any key to continue..."
position = { right = 0x27f, bottom = 0x1db }
colour = 0xf8
act_stats = true
```

Its code is not ported; the values are nocedit's.

## Stays in code

Format and scale values (640x480, fixed-point, blend flags, texel insets), counts derived from a
list, the recreation's own labels and lines, the list widget's limits (16 columns, raised for
every game), the resolution list (with 1280x960 added for every game), engine error text, and
everything the inventory marks "stays in code".
