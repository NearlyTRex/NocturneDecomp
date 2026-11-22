# Front-end schema

The manifest keys that carry every front-end value, shown with Nocturne's. Each value's source
line and BW change are in [front-end-inventory.md](front-end-inventory.md). Built so far:
`[front_end]`'s `title_backdrop`, `loading_indicator`, `credits` and `story_select`; `[labels]`;
every `[menu]` table below not marked *not built*; `[list]` and `[dialog]`; `[credits]` with
`[credits.column_scroll]`; `[story_select.story_list]` with its difficulties, and
`[chapter_title]`; `[title_backdrop.sky_scene]`; `[loading_indicator.moon]`; `[startup]`; and
the `[[loading]]`, `[[story]]` and `[translation]` tables. The rest is design.

## Rules

- **Every key comes from a package.** The base game's manifest gives all of them; the code has
  no defaults. A table missing one of its keys fails to read, the error naming the key; a table
  no package gives is fatal when the game first needs it. A table marked *optional* turns its
  feature off when no package gives it.
- **Merging.** `[front_end]` merges part by part. Every other table, with the tables inside it,
  is replaced whole by a later package's, so a package changing one `[menu]` value gives all of
  `[menu]`. A list is replaced whole; stories and loading pictures merge by id; labels and
  translations key by key.
- **Units.** Positions are in the 640x480 layout. Colours are palette indices (0-0xff) unless
  named a cube colour. Alphas are 0-0xffff. Times are seconds.
- **Fonts** are named by their `[[font]]` id.
- **Labels** are written in the engine's English. `[labels]` maps an English label to the
  game's text before translation, so a game lists only the labels it changes. It applies to all
  of the engine's localized text, the menus' and the rest.
- **Lines.** Each page's lines are one shared list in code, the recreation's lines and the
  originals' together. `[menu.features]` switches on the lines for a feature only some games
  have.
- **Part values.** A part's style takes its values from a table named for the part and style,
  such as `[title_backdrop.sky_scene]`, so a mod can give values for another style.

## `[front_end]`

```toml
[front_end]
title_backdrop = "sky_scene"      # sky_scene | figure_scene | tiled_scroll (BW2 is figure_scene)
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
width = 0xfa
height = 0x23f
transparent = 0x00
own_colours = false               # true: the sheet's own colours, not the text colour (console)
y_offsets = [{ offset = 3, first = 0x20, last = 0x7e }, { offset = 0, first = 0xc0, last = 0xdf },
             { offset = 1, first = 0xe0, last = 0xff }]
space_width = 8
shadow_x = 2
os_font = { height = 18, y_offset1 = 0, y_offset2 = 0 }   # left out: the font takes no OS text
```

Each of the six ids is required; an id outside them is fatal. A later package's font replaces an
earlier one's with the same id.

BW1-3 add `hand` (dochand.raw); BW3 adds `menu` and `small_menu` (BW3_font.raw, BW3_font2.raw).
Not built: those ids, and a `[fonts]` table naming the Menu text setting's two choices
(`menu_large = "theme"`, `menu_small = "small_editor"` in Nocturne).

## Menus

```toml
[menu]
left = 160
top = 250
titled_top = 225
align = "left"                    # optional: left | centre (BW2's: each line about x 320)
trademark = { x = 518, y = 99, glyph = 0x99, alpha = 0x8000 }

[menu.title]
colour = 7
shadow = 0                        # -1 for none
gap_lines = 2
drop = { x = 1, y = 1, colour = 2 }  # optional: BW2's copy under the line, drawn first

[menu.item]
font = "theme"
colour = 0xf8
selected_colour = 0xff
alpha = 48000
shadow = -1
spacing_titled = 1
spacing_untitled = 2
drop = { x = 0, y = 1, colour = 4 }  # optional, as the title's (BW2's)
positions = []                    # not built: a point per main-menu item

[menu.item.glow]
colour = 7
copies = 5
flicker = true

[menu.footer]
font = "small_editor"
colour = 0xf8
shadow = 0
version_x = 4
version_alpha = 0x8000
version_corner = "bottom_left"    # optional: bottom_left | top_right (BW2 drew "1.2" there)
format = "{copyright}"            # not built: {copyright}, {version}
right = 639                       # not built: the copyright's right edge (BW1 619)

[menu.music]                      # what configure plays, by the output's rate (30000 and under)
low_rate = "splash-music-22.wav"  # BW2: XBLAIRMENU.wav for both
high_rate = "splash-music-44.wav"

[menu.flat_set]                   # not built, optional: BW's flat-lit set behind each page
colour = [50000, 50000, 0x10000]
ambient = 0xdac
animate_backdrop = false

[menu.features]
difficulty = false                # BW1's puzzle and combat difficulty lines, on the Gameplay page
crosshair = false                 # not built: BW3's
health_numbers = false            # not built: BW3's
point_and_click = false           # not built: BW1's and BW3's control mode
mouse_only = false                # not built: BW2's control mode

[menu.page_tops]                  # a titled page's own top, by id: options, gameplay, display,
                                  # graphic, sound, controls; one not listed takes titled_top

[menu.options]
hero = 2                          # the hero type whose controls the options pages show

[menu.slider]
width_share = 3                   # three quarters of the screen wide
width_parts = 4
height = 0x2c
bar_colour = 0x04
trough_colour = 0x00
border_colour = 0xff
text_colour = 0xff
text_shadow = 0

[menu.sound]
effects_sample = "colt45-0.wav"

[menu.sound.spectrum]             # optional: BW3 has none
frames = ["F0100.RAW", "F0300.RAW", "F0500.RAW", "F0700.RAW",
          "F0900.RAW", "F1100.RAW", "F1300.RAW", "F1500.RAW"]
fps = 24
pitch = 4
half_width = 16
margin_divisor = 20
height_percent = 25
alpha = 0x8000
mirrored = false                  # optional: BW2's, a bar right of x 320 drawn at 640 - (x - 320)

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


[labels]                          # English = the game's text; Nocturne's is empty
```

Nocturne's manifest lists no page tops, so every titled page sits at `titled_top`, as the
recreation draws them; the originals' own tops (Nocturne's options 250, sound 225) are a value
change for later.

## Controls

```toml
[[controls.mode]]                 # in the order the Control line steps through them
id = "keyboard"                   # also: keyboard_mouse, gamepad
label = "Control : Keyboard"
manual_aim = false                # the aim mode restoring the defaults sets
[controls.mode.defaults]          # each play action's codes, as the INI stores them
walk = [0x148]                    # DIK_UP; [] or left out: unbound
fire = [0x39]

[[controls.binding]]              # the rows the bindings page lists above Hotkeys, in order
action = "walk"
label = "Forward"
```

An action is named by its INI key without `key`, in snake case (`keyStrafeLeft` is
`strafe_left`). How a mode reads the devices is the engine's, by id. A mode id, or an action, the
engine lacks is fatal at use, as is a hotkey in a mode's defaults or a row. The hotkeys and their
defaults stay in code, the same in every game and mode. Actions are one engine-wide list, every
game's together.

Not built: BW's actions (`sps`, `compass`, `journal`, `voodoo_doll`, `drop`, `action`, ...), the
`point_and_click` (BW1, BW3) and `mouse_only` (BW2) modes, a row shown only in some modes (BW1's
point & click leaves out its first 11 rows, Fire / Action to Quick turn), the point & click
mouse-button lock, and the bindings list's Select/Close button texts. BW1's joystick defaults
(`DIJ_BUTTON1`-`4`) are codes the recreation's pad never sends, so its gamepad mode takes
Nocturne's pad table.

## List widget and dialogs

The pick lists, windows, prompts, progress bar, scroll bars and bevelled controls every
front-end and editor dialog draws. Times are game-clock ticks, 18 x 65536 a second.

```toml
[list]
item_colour = 0xff
disabled_colour = 0xf8
selected_colour = 0x02
confirmed_colour = 0xfa
separator_colour = 0x07
alpha = 0xffff
shadow = -1
column_padding = 8
margin_width = 8
margin_height = 6
field_gap_divisor = 40
row_extra = 1
reserved_lines = 4
width_share = 7                   # seven eighths of the screen's width
width_parts = 8
double_click_ticks = 0x48000      # a quarter second

[list.pointer]
cube_colours = [0x0000, 0x7fff, 0x03e0, 0x7c1f]
size = 9
default_height = 11

[list.scroll_bar]
first_repeat_ticks = 0x48000      # a quarter second, then a thirtieth
repeat_ticks = 0x9999
track_fill_colour = 0x00
track_border_colour = 0x07

[dialog]
content_colour = 0x00
border_colour = 0x07
title_colour = 0xfb
text_colour = 0xff
warning_colour = 0xff
window_status_colour = 0xff
status_colour = 0xff
progress_background_colour = 0x00
progress_border_colour = 0xff
progress_fill_colour = 0x04
bevel_highlight_colour = 0xff
bevel_shade_colour = 0xf8
bevel_face_colour = 0x07
bevel_mark_colour = 0x00
margin_width_divisor = 128
margin_height_divisor = 96
grid_divisor = 48
button_margin_divisor = 80
prompt_padding_chars = 4
prompt_padding_lines = 2
```

The prompts' titles ("Message", "Warning", "Error") are labels. The list's font is the editor
font, `small_editor`. Not built: BW1 and BW3 cycle the pointer through palette indices
(`palette_colours = [0, 0xff, 2, 0xfd]`) in place of `cube_colours`.

## Credits

```toml
[credits]
text = "credits.txt"
image = "stats"
music = "faded-remix.mp3"

[credits.column_scroll]           # the column runs from column_left to the screen's right
font = "theme"
column_left = 414
top_strip_bottom = 30
bottom_strip_top = 439
strip_colour = 0x00
text_colour = 0xf8
heading_colour = 0x02
shadow_colour = 0
scroll_speed = 32                 # layout pixels a second
start_y = 480
end_line = "end"
marker = "\\"                     # a line starting with the marker drops it and the character
heading = "b"                     # after; with heading after, the line is a heading
```

`column_scroll` ends with its music or on Cancel and draws its image at the layout's top left.

```toml
[credits.fade_loop]               # BW2's (bw2 CGame::rollCredits 0x004be430)
font = "theme"
image_x = 10                      # the image's top left
image_y = 7
text_colour = 0xf8
heading_colour = 0x02
shadow_colour = 0
scroll_speed = 32
start_y = 480
loop_below = -2500                # once the top is above this, it starts again from restart_y
restart_y = 500
fade_centre = 240                 # alpha = (1 - |y - fade_centre| / fade_reach) * 0xffff
fade_reach = 240
end_line = "end"
marker = "\\"
heading = "b"
```

Every line is centred across the layout. As `column_scroll`, a line is drawn from row 0 to above
479 less a line, and the screen is redrawn only when the rounded scroll moves.
Not built: `two_column` (BW3), with its columns at 100/300 and its `\1`/`\2` markers.

## Stories and the chapter title

```toml
[story_select.story_list]
full_install_probe = "enemy.pod"  # without it the install is partial
loading_frames = 10

[[story_select.story_list.difficulty]]  # optional: BW1's picker under the story's title
label = "Normal Puzzles, Hard Combat"   # Cancel goes back to the stories
puzzle = 0                        # the modes it sets: 0 normal, 1 hard
combat = 1

[chapter_title]                   # optional: BW3 shows none
seconds = 8
format = "{year} - {title}"       # a story with no year shows its title alone
colour = 0xf8
shadow = 0
alpha = 0xffff
inset_across = 2                  # glyph widths in from the left, and up from the foot
inset_up = 1

[[chapter_title.font]]            # the first whose height the screen is under; the last any
below_height = 384
font = "small_editor"

[[chapter_title.font]]
below_height = 480
font = "tiny"

[[chapter_title.font]]
font = "medium"
```

The story list's title ("Choose a story to play") is a label. The difficulty modes are the
game's `puzzle_difficulty_mode` and `combat_difficulty_mode`; with `[menu.features]`
`difficulty` the Gameplay page lists them last and steps each between normal and hard. BW1 listed
them on its Options page before Credits, and only showed them.
`direct_start` (BW2's, bw2 `CGame::showChapterSelect` 0x004bc840) begins the first story's first
chapter with no list, from `[story_select.direct_start]`'s `loading_frames`; Control alone still
opens the mission browser. BW2's year for it, 0x795 (1941), is BW1's left in its table, and
never shown, since BW2 shows no chapter title; its manifest gives the story's own year, 1886.
Not built: the modes' ini keys (BW1's and BW2's puzzleDifficultyMode and combatDifficultyMode). A story has one
`title` for its list and its chapter title; BW1 quotes the first and not the second
(bw1 `CGame::showChapterSelect` 0x004d7250), and its manifest takes the quoted one.

## Title backdrop: `[title_backdrop.sky_scene]`

```toml
[title_backdrop.sky_scene]
model = "moon.kfm"
cheat_model = "taylor_head.kfm"   # the head-of-horror cheat's
cheat_code = 666
start_phase = 0.25                # the moon's turn: start, rate a second, rest
turn_per_second = 0.0125
rest_phase = 0.58
projection = 112
swing = 48
depth = 72
moon_light = [-37000, -37000, 37000]
moon_ambient = 0x280
moon_flat = 0x10000
bat_model = "menubat.kfm"
bat_courses = ["menu1.pth", "menu2.pth", "menu3.pth"]
bat_count = 30
bat_speed = 20                    # course frames a second
bat_animation_speed = 30          # model frames a second
bat_scatter = 5
bat_light = [-18500, -18500, 18500]  # TOML takes no negative hex
bat_ambient = 0x2000
cloud_image = "menucld2"
cloud_size = 256
cloud_shift_x = 5                 # 16.16 texels a 16.16 second, as shifts of the frame time
cloud_shift_y = 4
frame_prefix = "noc"              # noc00000 to noc00029
frame_digits = 5
frame_count = 30
frame_x = 0
frame_y = 0
frame_width = 640
frame_height = 278
frame_alpha = 48000               # added over the scene
frame_rate = 12
frame_wrap = 60                   # past the frames, the first is held
```

The real numbers are the x87's doubles, compared before they are rounded to float, so a value
from the manifest gives the same turn and timing as the constant did. The bats' quarter-turn yaw
and their ambient curve along a course are the style's, in code.

## Title backdrop: `[title_backdrop.figure_scene]`

BW1's (bw1 `CMoon::init` 0x00521c50, `update` 0x00521dd0, `render` 0x00521e40).

```toml
[title_backdrop.figure_scene]
backdrop = "titlescreen_bw"       # over the whole layout
backdrop_alpha = 0xffff
models = [{ file = "titletwana.kfm", frame_wrap = 60 }, { file = "titletwanb.kfm", frame_wrap = 45 },
          { file = "titletwanc.kfm", frame_wrap = 75 }]
cheat_model = "taylor_head.kfm"   # loaded in the first model's place, the rest left unloaded
cheat_code = 666
camera_rotation = [0.441335, 0.660356, -0.60758,   # row by row
                   -0.279881, 0.74461, 0.605989,
                   0.852579, -0.097394, 0.513443]
camera_origin = [3.16143, 7.6283, -7.03622]
projection = 43.153214
light = [-37000, -37000, 37000]
flat = [50000, 50000, 0x10000]
ambient = 0x1964
frame_prefix = "blair_"           # blair_00000 to blair_00029
frame_digits = 5
frame_count = 30
frame_x = 0
frame_y = 315
frame_width = 640
frame_height = 165
frame_alpha = 0xffff
frame_rate = 12
frame_wrap = 30
```

The models stand at the world's origin. Each model's frame steps once per drawing, not per
second, from 1, and goes back to 0 past its `frame_wrap`; the binary's three counters start at 1
(bw1 0x0061f8ac). The title frame drawn is the timer rounded to nearest, ties to even, where
sky_scene truncates. `isAnimationFirstHalf` tests the timer against the whole wrap (bw1
0x005220b0), so the menu glow never flickers. BW1 also loads `menucld2` and scrolls it, and never
draws it; the recreation loads neither. The 3D is scaled and centred with the layout, so the
models stay on the backdrop on a wide screen.

BW2's backdrop (bw2 `CMoon` 0x005023e0, 0x005024a0, 0x00502510) is this scene without the
backdrop, models or cheat model, which are optional: the same camera, light, flat colour and
ambient, and its 75 frames `blairwitch_00` to `_74`, 640x282 at 0,0, 12 a second, wrapping at 74.
The cheat code is only cleared.
Not built: `tiled_scroll` (BW3): scroll image, steps and wraps, the hand image's position and
alpha range and step, the overlay image.

## Loading indicator: `[loading_indicator.moon]`

```toml
[loading_indicator.moon]
model = "moon.kfm"
glow_texture = "MOONGLOW.RAW"
window_size = 90                  # a picture's moon window
corner_x = 447                    # the corner window, without a picture
corner_y = 0
corner_size = 192
default_tint = [0xff00, 0xff00, 0xff00]
full_projection = 56
window_projection = 84
depth = 36
light_reach = 37000
ambient = 0x280
glow_half_size = 1856             # 256 to a world unit
status_box = [32, 448, 576, 24]   # on a 640x480 screen, scaled to the screen's
status_box_colour = 0x00
status_font = "theme"
status_colour = 0xf8
```

The `[[loading]]` pictures stay as they are, and a random pick draws from those marked
`random`. Not built: BW3's pick of any of its four, `progress_bar` (BW2) with its rectangles and
colour, and `icon` (BW3) with its position, alpha ramp, frame count and an `icon` on each
picture. BW1 and BW3 draw the indicator only on a 480-line screen (bw1 `CLevelLoader::update`
0x004fe9c0); no key says so yet.

## Startup

```toml
[startup]
picture = "fangs"                 # while archives unpack and the game loads
picture_alpha = 0x8000
label_x = 320                     # "Loading..." centred here, on the layout
label_y = 240
label_font = "theme"
label_colour = 0xf8
movie_directory = "video"
movie = "opening.avi"
```

Every game draws the "Loading..." label, a label `[labels]` can change; the originals measured it
and never drew it.

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
