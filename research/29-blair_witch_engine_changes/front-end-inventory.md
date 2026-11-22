# Front-end values

Every front-end value the recreation hard-codes for Nocturne, the Blair Witch rows that change it,
and its manifest key. "Stays in code" marks a value that isn't front-end design: a format value,
a fixed-point scale, a count derived from a list.

Theme names abbreviate `themes/`: fe-menu = front-end-menu, fe-opt = front-end-options, fe-bind =
front-end-bindings, fe-load = front-end-loading. Paths are relative to `recreation/`.

## Rules

- All four games run one menu system: the originals' lines and the recreation's own (display
  page, upscaler, anti-aliasing, movie volume, pad tuning, hotkeys, multiplayer, attract
  movies, font choices). A game's item lists differ only where the game does, such as BW1's
  difficulty selections.
- Every original main menu is START, OPTIONS, LOAD, QUIT (nocedit `showMainGameMenu`
  0x00512f40; BW3 drops the letter spacing). None shows multiplayer, though all four carry
  netplay code. The recreation's PLAY submenu (CONTINUE, START, LOAD) and MULTIPLAYER (HOST,
  JOIN) are its own, in every game.
- Every game draws "Loading..." at startup. The originals measured it and never drew it, and
  BW2 has none.
- No code tests which game runs. The manifest chooses each front-end part by a style value.

## Points the schema covers

1. **Page tops.** Each original page has its own y (Nocturne options 250, sound 225; BW1 50/25,
   BW2 290, BW3 200). The recreation has one `titled_top`, so a page takes its own top,
   defaulting to `titled_top`.
2. **Item lists carry actions.** BW1's options add difficulty toggles; control modes and
   binding rows differ per game. Lists are `{label, action}` entries. `menu_bindings.cpp:102` static_asserts the row
   count against the action count, which becomes a load-time check.
3. **Colours by place.** Menu text is 0xf8 and slider and list text 0xff; 0xf8 is also the
   credits, startup, loader and chapter-title colour. Each place has its own key.
4. **Units.** `fitMenuTop` (`core/menu/menu_page.cpp:100-107`) compares a layout top with the
   window height. Manifest positions are in the 640x480 layout.
5. **Tint scale.** Nocturne's moon tints are 0..0xff00; BW1's loader colour is
   (0xd7,0xdc,0xe0), and whether BW pre-shifts it is unchecked.
6. **Not ported:** save/load pickers, pause menu, act stats and the continue prompt. The
   continue prompt's values below are nocedit's.
7. **Part styles.** The manifest's `[front_end]` table names a style per part
   (`title_backdrop`, `loading_indicator`), each merged on its own, so a mod can change one.
   `checkFrontEnd` (`core/main/main.cpp`) refuses a style this build doesn't draw; the built
   ones are in `core/frontend.h`. Each further part (credits, story select, continue prompt)
   is another key there.
8. **Window title.** The window and its message boxes take the manifest's `title` once the
   packages load (`CWinRun::setTitle`), `"Nocturne"` until then.
9. **Year 0.** A story with year 0 shows its title alone over its chapters.

## Menus (`core/menu/`)

### Common drawing

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| item colour | 0xf8 | menu.cpp:35 | fe-menu renderMenuAndGetChoice bw3: other colours | menu.item.colour |
| title colour / shadow | 7 / 0 | menu.cpp:38-39 | bw2 shadowed title; bw3 other colours | menu.title.colour, .shadow |
| glow colour | 7 | menu.cpp:40 | bw3 | menu.item.glow.colour |
| selected colour | 0xff | menu.cpp:41 | bw3 | menu.item.selected_colour |
| item alpha | 48000 | menu.cpp:42 | — | menu.item.alpha |
| glow copies / jitter | 5; x,y -2..+1, random alpha | menu.cpp:43, 199-203 | — | menu.item.glow.copies, .jitter |
| glow flickers with the moon | on | menu.cpp:178 | bw2 off | menu.item.glow.flicker |
| footer shadow | 0 | menu.cpp:44 | bw2 shadowed | menu.footer.shadow |
| trademark (and build line) alpha | 0x8000 | menu.cpp:45, 237 | — | menu.trademark.alpha |
| trademark glyph | "\x99" | menu.cpp:47 | bw1 moved (already data); bw2 none | menu.trademark.text |
| build line x | 4 | menu.cpp:48 | bw2 '1.2'; bw3 'Ver %1.2f' in footer | menu.footer.version_x |
| left edge | `menu.left` 160 | menu.cpp:167-169 | bw1 differs; bw2 centred; bw3 per item | menu.left (exists), menu.align |
| title gap | 2 lines | menu.cpp:171 | — | menu.title.gap_lines |
| item spacing titled / untitled | 1 / 2 lines | menu.cpp:188; menu_page.cpp:28-34 | — | menu.item.spacing_titled, _untitled |
| item font | theme font | menu.cpp:165 | bw3 own fonts (render-font initFonts) | menu.item.font |
| footer font | small editor font | menu.cpp:228 | bw3 | menu.footer.font |
| copyright bottom-right | y 479-text height | menu.cpp:231-236 | bw2 none; bw3 footer format | menu.footer.anchor, .format |
| page top | titled_top / top | menu_page.cpp:66-67 | see point 1 | menu.pages.<page>.top |
| backdrop | moon animated | menu_page.cpp:94-98 | bw-menu-flat-backdrop root, bw1-3: flat set (50000,50000,0x10000), ambient 0xdac; moon still on bw1/bw3 | menu.backdrop.flat_colour, .ambient, .animate |
| stays in code | 640x480, 0xffff, 'X' (twice), ':' marks a steppable line, wrap, fitMenuTop clamp, layout error text | menu.cpp:32-37, 210, 254-273; menu_page.cpp:24 | — | — |

### Main menu and attract movies

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| main items | P L A Y, M U L T I P L A Y E R, O P T I O N S, Q U I T (the original's S T A R T, O P T I O N S, L O A D, Q U I T) | menu_main.cpp:53-58 | — | stays in code |
| play items | C O N T I N U E, S T A R T, L O A D (indices 0-2) | menu_main.cpp:60-63 | — | stays in code |
| label text | letter-spaced ("S T A R T") | menu_main.cpp:53-66 | fe-menu showMainGameMenu bw3: unspaced ("START") | menu.labels |
| multiplayer items | H O S T   G A M E, J O I N   G A M E | menu_main.cpp:65-67 | — | stays in code |
| dialog font | menu font | menu_main.cpp:204 | bw3 own | menu.dialog.font |
| attract movies | video/noc{1-4}.avi | menu_main.cpp:43-44, 141 | BW has none | menu.attract.movies, .directory |
| stays in code | quit 99, too-small 1, 480 min height, 640x480 software, black first frame, Ctrl/Ctrl+Shift browsers, movie gaps 0.25/0.4/0.5 s | menu_main.cpp:36-41, 89-130, 245-252; attractmovies.cpp:13-16 | — | — |

### Options pages

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| options title | "Option Menu" | menu_options.cpp:49 | — | menu.options.title |
| options items | Gameplay, Graphic, Display, Sound, Control options, Cheats, Credits | menu_options.cpp:31-39 | fe-opt showOptionsScreen bw1: + Puzzle/Combat difficulty; bw3: 'Graphic Options' etc. | menu.options.items |
| hero while in options | HERO_TYPE_STRANGER (2) | menu_options.cpp:54 | bw1-3: 9 | menu.options.hero_number |
| bindings after control-type change | opens | menu_options.cpp:91-97 | fe-bind getKeyDisplayName bw1/bw3: skipped if already opened | menu.controls.skip_auto_bindings |
| gameplay title / lines | "Gameplay"; AlwaysRun, Aiming, AutoHealth, Subtitles, TextFont, MenuText, Rating | gameplaypage.cpp:23-31, 64-87 | bw3 drops auto health; bw1/bw3 no rating | menu.gameplay.title, .items |
| gameplay labels | "Always run : ON/OFF", Aiming x3, "Auto use health : On/Off", "Subtitles : On/Off", "Rating: Mature/Teen" | gameplaypage.cpp:34-35, 70-85 | bw3 'Always Run : On' | menu.gameplay.<line>.labels |
| display title / lines | "Display Options"; Display, Resolution, Window, FullscreenSize, RefreshRate, Vsync, Widescreen, Calibration | displayoptionspage.cpp:29-38, 118-152 | BW has these on the graphics page | menu.display.title, .items |
| resolutions | 17, 320x240..3840x2160 incl. 1280x1024 | displayoptionspage.cpp:49-67 | fe-opt configureGraphicsOptions bw1-3: 1280x960 for 1280x1024 | menu.display.resolutions |
| calibration line | "Monitor calibration" | displayoptionspage.cpp:151 | bw3 'Monitor Calibration' | menu.display.calibration.label |
| graphic title / lines | "Graphic Options"; Acceleration, Api, Card, Bits, Upscaler, Sharpness, Antialias, Halo | graphicoptionspage.cpp:24-33, 70-99 | bw1 no halo; bw2 no halo, + Particle Density; bw3 no API/halo, + Crosshair, Health/Mana Numbers | menu.graphic.title, .items |
| graphic labels | "Acceleration : On/Off", "3D API : ...", "No 3D Hardware detected", "3D Card : ", "Bits per pixel : ", halo x3 | graphicoptionspage.cpp:36-37, 78-146 | bw2 + 'Not enough video memory for 3D card'; bw3 'Bits Per Pixel' | menu.graphic.<line>.labels |
| sound title / lines | "Sound Options"; Mute, Effects, Dialog, Music, Movie, Rate, Quality, Type, Device | soundoptionspage.cpp:23-33, 90-118 | fe-opt configureSoundOptions bw3 reordered; bw1-3 + Hardware mixing | menu.sound.title, .items |
| sound labels | "Sound effects : ", "Dialog : ", "Music Vol : " (+ ": Off"), "Sound : Muted/On", "Output rate/quality/type", "Device : ", "Select sound device" | soundoptionspage.cpp:72-117, 270 | bw3 'Sound Effects Volume', 'Output Type : Stereo' | menu.sound.<line>.labels |
| test sample | colt45-0.wav | soundoptionspage.cpp:51 | — | menu.sound.effects_sample |
| spectrum frames / fps | F0100..F1500.RAW (8), 24/s | menu.h:189-198; menu_sound.cpp:24-27 | bw3 none | menu.sound.spectrum.enabled, .frames, .fps |
| spectrum layout | pitch 4, margin 1/20, half width 16, height 0.25, alpha 0x8000 | menu_sound.cpp:30-40 | bw2 mirrored about x 320 | menu.sound.spectrum.*, .mirrored |
| control title / lines | "Control Options"; Type, Keys, X/Y sensitivity, Invert Y, pad lines | controloptionspage.cpp:22-33, 63-93 | fe-opt configureCustomKeys bw3 cases 0-6 | menu.controls.title, .items |
| control modes | Keyboard, Keyboard/Mouse, Gamepad | controloptionspage.cpp:47-49 | bw1/bw3 + Point & Click; bw2 + Mouse | menu.controls.modes |
| control labels | "Customize Keys", "X-/Y-axis sensitivity : ", "Invert Y Axis : ON/OFF", "Adjust X-/Y-Axis sensitivity" | controloptionspage.cpp:70-112 | bw3 'X-Axis Sensitivity' | menu.controls.<line>.labels |
| slider | 3/4 width, height 0x2c; bar 4, trough 0, border 0xff, text 0xff | menu_controls.cpp:28-36 | bw2 reuses it for particle density | menu.slider.* |
| stays in code | display/upscaler/AA/window/pad/movie labels (recreation's own), bit depths, rates, volume steps, sensitivity range, fixed-point, spectrum texels/blend | various | — | — |

### Key bindings and calibration

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| binding rows | 28, Forward .. Map | menu_bindings.cpp:45-74 | fe-bind configureCustomKeyBindings: each BW game its own rows (bw1 SPS, Journal, Compass, Quick turn; bw2 Revolver, Cross, Lantern, Drop; bw3 Voodoo Doll, staves, ...) | menu.bindings.rows |
| Run row when always running | "Walk" | menu_bindings.cpp:236-237 | — | menu.bindings.run_alt_label |
| hotkey rows | 23 (recreation's own) | menu_bindings.cpp:77-101 | — | menu.bindings.hotkey_rows |
| labels and prompts | "Restore defaults", "Hotkeys", "Edit key settings", "Add binding", "OK - you can release...", "Press new key or button for ", invalid-bindings message | menu_bindings.cpp:133-134, 232-371 | bw1/bw3 'Mouse buttons cannot be redefined' | menu.bindings.labels, .prompts |
| list buttons | defaults | menu_bindings.cpp:230 | bw1-3 Select / Close | menu.bindings.buttons |
| mode devices | 3 rules | menu_bindings.cpp:203-212 | new modes need rules | menu.controls.modes[].devices |
| calibration | 5 steps, image "brightness", "  Press any key to continue.", "Monitor calibration", title 2 lines down, prompt 3 lines up, small editor font, 0xf8 | menu.cpp:50-56, 88-152 | bw3 'Monitor Calibration' | menu.calibration.* |
| stays in code | device names (20), separators, DIK_ESCAPE, single column | menu_bindings.cpp:110-136, 193, 231 | — | — |

## List widget and dialogs (`shape/edittool/`)

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| columns | 10 max | picklist.h:73 | fe-menu calculateLayoutAndCreateComponents bw1-3: 16 | stays in code (superset: 16) |
| insert/remove/sort/swap | fatal once items enabled | picklist.cpp:31-50 | picklist-item-flags bw1-3: shift flags | stays in code (superset) |
| item colours | enabled 0xff, disabled 0xf8, selection 2, confirmed 0xfa, separator 7, alpha 0xffff | picklist_dialog.cpp:24-29 | — | list.item.colour, .disabled_colour, list.selected.colour, list.confirmed.colour, list.separator.colour |
| spacing | column pad 8, margins 8/6, field gap 1/40, row +1, rows fit height-4 lines, 7/8 width | picklist_dialog.cpp:31-35, 106, 155-157 | — | list.* |
| font / shadow | editor font (menu font in menus) / none | picklist_dialog.cpp:256, 262 | — | list.font, list.text.shadow |
| double click | 1/4 s | picklist_input.cpp:23 | — | list.double_click |
| pointer colours | cube 0, 0x7fff, 0x3e0, 0x7c1f | editortools_pointer.cpp:15 | fe-menu getTimeCycledColorByte bw1/bw3: palette 0, 0xff, 2, 0xfd | list.pointer.colours |
| pointer size | 11 high, 9x9 | editortools_pointer.cpp:16; editortools.h:173-174 | — | list.pointer.size |
| window colours | border 7, title bar 0xfb, font/warning/status 0xff, content 0, progress 0xff/4 | editortools.cpp:53-55; editortools.h:175, 182 | — | dialog.colours.* |
| window layout | margins w/128, h/96; prompt pad 4 chars, 2 lines; titles "Message"/"Warning"/"Error" | editortools.cpp:24-26, 137-138, 184-185 | — | dialog.* |
| scroll bar | repeat 0x48000/0x9999, fill 0 / border 7, width 1/48 | edscrollbar.cpp:18-22; edcontrols.cpp:11 | — | list.scrollbar.* |
| bevels | 0xff / 0xf8 / 7 / 0, button margin h/80 | edcontrols.h:25-28; edcontrols.cpp:12 | — | dialog.bevel.colours |
| stays in code | 99-char search, key mask, -1/-2 results, 5 windows, 20x200 title wrap, 'j' metric | various | — | — |

## Credits (`core/game/game_credits.cpp`)

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| text / image / music | credits.txt, stats, faded-remix.mp3 | nocturne.toml:10-13 | fe-menu rollCredits bw1 music splash-music-44.wav; bw2 title_bw, XBLAIRMENU.WAV; bw3 no image, no music | already: credits.* |
| image position | 0,0 | :92, 128 | bw2 10,7 | credits.image.position |
| column | 414..right | :35, 93 | bw2 0..640; bw3 two columns 100/300 | credits.column |
| strips | 30 / 439, from 414, colour 0 | :36-39, 134-138 | bw3 full width | credits.strips.* |
| colours | text 0xf8, heading 2, shadow 0, alpha 0xffff | :33, 40-42 | bw2 alpha by distance from y 240 | credits.text.* |
| scroll | 32 px/s from y 480 | :46-47 | bw2 restarts at 500 | credits.scroll_speed, .start_y |
| markers / end | '\\' + 'b' heading, "end" | :48-51 | bw3 '\1'/'\2' columns | credits.markers, .end_marker |
| ending | music end or Cancel | :131, 142 | bw2 loops at -2500; bw3 loops, Escape only | credits.loop.*, .end_on_music |

## Chapter select (`core/game/game_chapters.cpp`, `game_overlay.cpp`)

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| stories and chapters | 5 stories, 33 chapters | nocturne.toml:42-192 | fe-menu showChapterSelect: one story each | already: story[] |
| ini file | .\\system\\nocturne.ini | core/inivar/inivar.h:13 | bw3 system\\bw3.ini | game.ini_file |
| list title | "Choose a story to play" | :116 | — | stories.list_title |
| full-install probe | enemy.pod | :178 | bw1/bw2 blairhero.pod | stories.full_install_probe |
| loading frames / title time | 10 / 8 s | :31-32 | bw2 title never shown | stories.loading_frames, .title_seconds |
| chapter title | "{year} - {title}", bottom-left 2 glyphs in, 0xf8/0/0xffff, font by height | game_overlay.cpp:27-42, 72-80, 206-210 | bw3 none | chapter_title.* (and point 9) |
| stays in code | "Game" section, mission browser, "world" | :30, 98, 183-185 | — | — |

## Loading screen (`core/level/`) and startup (`core/main/main.cpp`)

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| indicator | "moon" | nocturne.toml:6; main.cpp:123-129 | bw2 progress bar, bw3 icon | already: loading_indicator → loading.style |
| pictures | load1..4, moon windows, tints | nocturne.toml:23-40 | fe-load CLevelLoader::show: bw1 load1 only; bw2 loadscreen; bw3 load_0..3 | already: loading[] |
| random pick | rand() % pool | levelloader.cpp:84-96 | bw3 always rand()%4 | loading.random_mode |
| window | 90 square; corner 447,0 192x192; tint 0xff00 | levelloader.cpp:24-28, 49-52 | bw1/bw2 60x60 | loading.moon_window.size, .corner_window |
| moon | moon.kfm, MOONGLOW.RAW, projection 56/84, depth 36, light 37000, ambient 0x280, glow half 1856 | levelloader.cpp:35, 57; levelloader_render.cpp:27-61 | bw3 none | loading.moon.*, loading.glow.* |
| status | box 32,448 576x24 black; theme font 0xf8; only without window | levelloader_render.cpp:45-46, 85-87, 135-146 | bw2 bar; bw3 no text | loading.status.* |
| startup picture | fangs at 0x8000, "Loading..." at 320,240 0xf8 | main.cpp:37-43, 79-107 | fe-load initializeGameSystems bw2: test_logo at 0xffff, no label | startup.picture, .alpha, .label |
| opening movie | video/opening.avi | main.cpp:184 | — | startup.movie |
| file order | pods, then loose | main.cpp:160-164 | game-mission bw3 loose first | files.loose_before_pods |
| stays in code | 640x480 sizes, flags 0x205, step strings (msglist), -1/-2 image ids, first-run mode | various | — | — |

## Title backdrop (`core/moon/`)

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| model | moon.kfm (head cheat taylor_head.kfm) | moon.cpp:19, 75-80 | fe-menu CMoon::init bw1 titletwana/b/c.kfm; bw2/bw3 none | title_backdrop.models, .cheat_model |
| bats | menubat.kfm, 3 menu{n}.pth, 30 bats, speed 20, 30 fps, scatter ±5, light, ambient curve | moon.cpp:27-29, 51-88; moon.h:63; moon_render.cpp:34-35; moon_functions.cpp:9-16 | none in BW | title_backdrop.bats.* |
| cloud | menucld2 256x256, scroll dt<<5, dt<<4 | moon.cpp:20, 31-32, 82 | bw2 none; bw3 slot is bwp3_menu_scroll | title_backdrop.cloud.* |
| frames | 30 noc{:05} 640x278 at 0,0, alpha 48000 additive, 12/s, wrap 60 | moon.h:64-67; moon.cpp:25-26, 84, 133-139; moon_render.cpp:41, 84-94 | bw1/bw3 30 blair_* 640x165 (bw1 at 0,315 opaque); bw2 75 blairwitch_*; wraps 30/74 | title_backdrop.frames.* |
| moon turn | 0.25 start, 0.0125/s, rest 0.58 | moon.cpp:21-24 | none | title_backdrop.moon.turn |
| camera / light | projection 112, swing 48, depth 72; light ±37000, ambient 0x280, flat 0x10000 | moon_render.cpp:27-32 | bw1 fixed camera, projection 43.153214, flat 50000/50000/0x10000, ambient 0x1964 | title_backdrop.camera, .light |

## Fonts (`core/dfont/dfont.cpp`)

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| bit fonts | menufont.raw (theme), nocfont, nocsmall, fnte_pfd, fnte_f, micro | dfont.cpp:88-117 | render-font initFonts bw1-3 + Hand dochand.raw; bw3 + BW3_font.raw, BW3_font2.raw | fonts[] |
| OS font sizes | 14/18/12/10 | dfont.cpp:29-34 | — | fonts[].os_font |
| menu font choice | small editor or theme | dfont.cpp:198-200 | — | fonts.menu |

## Outside the front end

| Name | Nocturne | Where | BW change | Key |
|---|---|---|---|---|
| continue prompt (deferred) | "Press any key to continue..." at 0x27f, 0x1db; act stats | demonmission_start.cpp:49-55 | fe-load CDemonMission::run bw1/bw3 none; bw2 waits, no stats | continue_prompt.mode, act_stats_between_missions |
| mission actor limit | 2000 | demonmission_load.cpp:40 | game-mission bw1 6000, bw2 3000, bw3 6000 | limits.max_mission_actors |
| HUD bitmaps | 14 | core/inv/inventoryassets.cpp:30, 44 | inventory-hud bw1 + sps/compass; bw2 + compass; bw3 own 20 | hud.inventory_bitmaps[] |

## BW additions with no Nocturne value

These need a new key or a style value; Nocturne's code has nothing to move.

| Rows | What BW does | Key |
|---|---|---|
| fe-menu renderMenuAndGetChoice bw2, bw3 | centred, shadowed items (bw2); a position per item (bw3); version in the footer | menu.align, menu.item.shadow, menu.item.positions, menu.footer.format |
| fe-menu CMoon::* bw1-3 | another title backdrop: bw1 models + frames, fixed camera; bw2 frame loop; bw3 tiled scroll, hand ping-pong 5000..0xffff step 500, overlay | front_end.title_backdrop = sky_scene \| figure_scene \| flipbook \| tiled_scroll, with its values |
| fe-menu rollCredits bw2, bw3 | fade-loop credits; two-column credits | credits.style |
| fe-menu showChapterSelect bw1; bw2, bw3 | difficulty picker after the story; START begins the one story | stories.difficulty_picker, stories.direct_start |
| fe-opt showOptionsScreen bw1 | Puzzle / Combat difficulty toggles | an options item type |
| fe-opt configureGraphicsOptions bw2, bw3 | particle density slider; crosshair, health/mana numbers | menu.graphic.items entries |
| fe-opt configureSoundOptions bw1-3 | Hardware mixing line | menu.sound.items entry |
| fe-opt configureCustomKeys, fe-bind bw1-3 | Point & Click / Mouse modes; the first 11 rows (Fire / Action to Quick turn) hidden in point & click; mouse buttons locked; per-mode defaults with new actions | menu.controls.modes, menu.bindings.rows[].modes, .lock_mouse_buttons, controls.defaults.<mode> |
| fe-load CLevelLoader::* bw2, bw3; bw1, bw3 | progress bar; icon per picture at (0x4b,0x12a) with alpha ramp, 12 frames; draws only at 480 lines | loading.style = moon \| progress_bar \| icon, loading[].icon, loading.draw_only_at_480 |
| fe-load CDemonSet::initScene bw2 | clears the screen at scene start | loading.clear_at_scene_init |
| game-mission CDemonMission::reset bw1-3 | set-transition picture (fangs / test_logo) for 3 frames | mission.set_transition_picture |
| render-font bw1-3 | Hand font; bw3 Menu/Small menu fonts; OS text mask fill, colour mode | fonts[], fonts.os_text, fonts.os_colour_mode |
| inventory-hud loadAssets bw1-3 | extra HUD bitmaps, compass arrow, slot per entry | hud.inventory_bitmaps[].slot, hud.compass_arrow |
