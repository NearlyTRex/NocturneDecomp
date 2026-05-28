# Developer Tools Menu (Ctrl+D)

A separate, fully-blown editor/debug menu hidden behind a `Ctrl+D` (or `Ctrl+L`) keypress on the main menu. Every build of `nocedit.exe` exposes it — the binary is the "Nocturne editor" build, not the shipped retail player. This is distinct from the in-game [`developer_mode_enabled`](runtime_debug_flags.md) hotkey suite (TAB console etc.); the developer tools menu is a *modal sub-program* that takes over the screen and exposes the engine's content-pipeline editors.

## Entry points

The trigger is `Ctrl+D` (or `Ctrl+L` as an alias) while the main menu is up. From `core/main.c:enterMainGameMenu_FUN_00507a50`:

```c
iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr, DIK_LCONTROL);
if ((iVar4 != 0) &&
   ((iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_D), iVar4 != 0 ||
    (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_L), iVar4 != 0)))) {
    if (g_UseDirect3D != 0) {
        // ... draws "3D acceleration has been turned off!" + "Press any key to continue..."
    }
    g_UseDirect3D = 0;
    core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
    core_main_c_showDeveloperToolsMenu_FUN_005073a0();
    core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
}
```

The mirror handler in `core/menu.cpp:showMainGameMenu_FUN_00512f40` is identical.

**Side effects of entering**:
- **`g_UseDirect3D` is forced to `0`** — the editor renders through the software path. If the user had D3D on, they get a "3D acceleration has been turned off!" warning + a key press before the menu appears. The flag stays `0` after returning to the game; users have to re-enable in `nocturne.ini` or via Options.
- Sound is reset on the way in (`CSound::reset`) and reconfigured on the way out (`CSound::configure`).

## The on-screen banner

Every render pass through `core/menu.cpp:renderMenuAndGetChoice_FUN_00510000` unconditionally draws:

```
NON-RELEASE EDITOR BUILD                      (top-left, line 0)
Press CTRL+D to access the editor menu        (top-left, line 0x14)
```

These show up on the main menu, options menu, load/save screens — anywhere `renderMenuAndGetChoice` is the active menu renderer. Both strings are hardcoded literals — there's no `developer_mode_enabled` check around them, because as far as Terminal Reality was concerned, this binary is *always* the editor build. The retail Nocturne shipped a different player executable (not in this decompilation).

**In this decompilation** the "unconditional" behavior above is the *original* binary's, preserved in the raw `.cpp`. The `.keep` files gate the banner *and* the `Ctrl+D` / `Ctrl+L` hotkeys behind `NOCTURNE_AUTHENTIC_DEV_TOOLS` (`shims/shim_config.h`), which defaults to `0` — so a default build **hides** them and behaves like a retail player. Build with `-DNOCTURNE_AUTHENTIC_DEV_TOOLS=1` to restore the original always-on editor banner + dev-tools access. Affected keeps: `renderMenuAndGetChoice_FUN_00510000.keep.cpp`, `showMainGameMenu_FUN_00512f40.keep.cpp`, `enterMainGameMenu_FUN_00507a50.keep.c`.

## License-agreement gate

First-run only. Before showing the menu, the function checks `[Editor] AcceptedLicenseAgreement` in `nocturne.ini`. If unset, it decrypts and displays `g_LicenseAgreement` (a 14616-byte encrypted blob) in a scrollable view with two buttons:

- **"I accept the terms of the license agreement"** → sets `AcceptedLicenseAgreement=1` in the ini and proceeds to the menu.
- **"I DO NOT accept the terms of the license agreement"** → returns to the main menu without showing dev tools.

Once accepted, the gate doesn't fire again. The license blob uses the same encryption as the cheat strings (`decryptMessage_FUN_00544270`); see [`cheats.md`](cheats.md) for the algorithm.

## Menu options

The menu is rendered as a flat key-driven list. `getNextKeypress` returns the typed character; `toupper` normalizes it; the function dispatches:

| Key | Label | Calls | What it does |
|---|---|---|---|
| `1` | "Play a mission" | `CGame::showChapterSelect_FUN_004e1cb0(g_CGamePtr, 0)` | Standard chapter/mission select. Same screen as in-game. |
| `2` | "Enter the Demented(R) Shape Editor(TM)" | `showShapeEditorMenu_FUN_0046f290` | Model/shape editor for `.shp` content. |
| `4` | "Enter the Demon Set System" | `CDemonSet::showEditorMenu_FUN_00584940` | Level/set editor — places actors, edits room layout, vdir boxes, etc. |
| `5` | "Enter the Demon Keyframed Model System" | allocates `CKeyFramedModel`, calls `showEditorMenu_FUN_0047cbc0`, then frees it | Animation editor for `.kfm` keyframed-model files. |
| `6` | "Procedural texture system" | `CProceduralTexture::showMenu_FUN_00554880` | Procedural-texture generator/editor. |
| `7` | "Enter the Demon course system" | constructs a stack-local `CCourse`, calls `showEditorMenu_FUN_00443040`, dtors it | Course/path/spline editor. |
| `A` | "File Manager" | `CDemonFileManager::showEditorMenu_FUN_004be270` | POD archive manager — mount/unmount, file extraction, search. |
| `B` | "Enter the Demon Morph System" | allocates `CMorph`, calls `editMorph_FUN_0052bcb0`, frees it | Morph-target editor (face/expression blend shapes). |
| `M` | "Enter the Demon Mission System" | `CDemonMission::showEditorMenu_FUN_005381e0` | Mission/scripting editor — events, conditions, dialogue. |
| `S` | "Enter the Demon Skeletal System" | `core/skeledit.cpp:viewModel_FUN_00598fc0` | Skeleton/bone editor — uses `skeledit.ini` to remember last view (see [`ini_settings.md`](ini_settings.md)). |
| `Z` | "Display memory usage info" | `displayMemoryDiagnostics_FUN_004a2590` + dumps to `memdump.txt` | Allocator + tracked-pointer summary in a popup; also writes a full memdump to disk. |
| `ESC` | (no label) | exits the menu loop | Returns to main menu, restores sound config. |

Numeric branches `3` and any other unmapped keys are ignored. The menu is single-keystroke — no Enter required, no multi-character commands.

The "(R)" / "(TM)" branding on entries 2 and 5 matches the lifestyle of late-90s Terminal Reality marketing, where their tooling was branded as if it were a sellable product. The `Demon*` prefix (Demon Set, Demon Mission, Demon Course, etc.) is the engine's class-naming convention — pre-dating the renamings we've done in Ghidra.

## What each sub-editor does

Each menu pick takes over the screen with its own editor. They use the same key-driven dispatch loop pattern (`getNextKeypress` + uppercase + dispatch + ESC to exit). Most echo a heading line, draw their menu options at fixed Y-offsets, then handle one keypress per loop iteration. Except where noted, none of them save state automatically — leave each editor with the action that triggers a save (typically option `2`).

### `1` — Chapter select

Just calls `CGame::showChapterSelect_FUN_004e1cb0(g_CGamePtr, 0)`. This is the same chapter/mission select screen the retail menu uses; from the dev-tools menu it's a quick "play through the level I'm working on" path that bypasses the cutscene chain.

### `2` — Demented(R) Shape Editor(TM) (`shape/design.c`)

`.shp` model authoring. Heading line shows `Demented Shape Editor    Build date: %s %s` with `__DATE__` / `__TIME__` baked in (`Jan 10 2000` / `12:03:47` in this build). Menu:

| Key | Option |
|---|---|
| `1` | Point Editor — vertex-level edit |
| `2` | Facet/Part Editor — face/material edit |
| `3` | Model Editor — top-level model ops |
| `4` | Center object |
| `5` | Inside out — flip face winding |
| `6` | Simple texture |
| `7` | Scale model |
| `8` | Vertex reducer |
| `9` | Polygon reducer |
| `A` | Ground center object |
| `B` | Key frame model — convert to .kfm |
| `C` | Squash model for 3D morph |
| `D` | Crush model |
| `E` | Create center vertex |
| `F` | Globe gen — procedural sphere |
| `G` | Shell gen |
| `I` | Octant gen |
| `J` | Scale X,Y,Z |
| `K`–`N` | Size in single dimension / to X/Y/Z feet |
| `O` | Size stadium |
| `P` | Combine texture maps |
| `Q` | Tile texture maps |
| `R` | Multicram |
| `S` | Detach faces |
| `T` | Mesh smooth |
| `U` | Bisect mesh |

The 28 options here are the most extensive of any sub-editor — `design.c` is essentially a full DCC-tool inside the binary.

### `4` — Demon(R) Set Editor(TM) (`core/setedit.cpp:CDemonSet::showEditorMenu_FUN_00584940`)

Per-set (level/room) authoring.

| Key | Option |
|---|---|
| `1` | Load set |
| `2` | Save set |
| `3` | Import set |
| `4` | View set — opens the interactive set viewer |
| `7` | Light editor |
| `9` | Camera editor |
| `A` | Fog editor |
| `C` | Rebuild thumbs (thumbnails) |
| `D` | Default ground type: `%s` (cycles among ground-type files) |
| `F` | Export lights/cameras to `.LC` file |
| `G` | Virtual director box editor |
| `H` | Weather: `%s` (cycles weather mode) |
| `I` | Edit ground types |

Skipped: 5, 6, 8, B, E (unmapped). Notable: `D` and `H` are stateful toggles whose label updates per cycle.

### `5` — Nocturne(R) Keyframed Model Editor(TM) (`core/dmodel.cpp:CKeyFramedModel::showEditorMenu_FUN_0047cbc0`)

`.kfm` animation editing. Header shows `Frame: %d of %d` with the current playback position.

| Key | Option |
|---|---|
| `1` | Load model |
| `2` | Save model (warns "You haven't crammed this model. Save anyway?" if not crammed) |
| `3` | Import `.S3D` |
| `4` | Get model and textures from network |
| `5` | Put model and textures to network |
| `6` | CramTex — texture-cram operation; prompts for cram count + base name |
| `7` | Reduce |
| `8` | Remove Null/duplicate faces |
| `9` | Export `.S3D` |
| `B` | Bias model using manual value |
| `C` | Reorient to put model on course |
| `D` | Demented(TM) Shape Editor (jump to option `2`'s editor) |
| `E` | Exact collision (currently `ENABLED`/`DISABLED`) |
| `F1` | Hide menu (toggles overlay) |
| `G` | Ground bias |
| `I` | Interactive bias is now `ACTIVE`/`INACTIVE` |
| `R` | Recenter bias |
| `S` | Scale |
| `T` | Transparent pixel (currently `ENABLED`/`DISABLED`) |
| `X` | Reorient model |

Stat line at top: `Vertex count: %d`, `Poly count: %d`, `Frame count: %d` for the currently-loaded model. The "network" prefix on options 4/5 refers to the Terminal Reality LAN model-asset share — not netplay.

### `6` — Procedural texture system (`core/procedur.cpp:CProceduralTexture::showMenu_FUN_00554880`)

Tiny menu — just one real option:

| Key | Option |
|---|---|
| `1` | Water |

Header: `Procedural texture menu`. The "Well, what's it gonna be?" string is the prompt for a single keypress. Looks unfinished — likely Terminal Reality only ever shipped the water-procedural texture.

### `7` — Demon Course system (`core/course.cpp:CCourse::showEditorMenu_FUN_00443040`)

Spline/path editor for vehicle paths, animation tracks, etc.

| Key | Option |
|---|---|
| `1` | Load course from `.PTH` file |
| `2` | Save course to `.PTH` file |
| `3` | Import course from `.CRS` file |
| `4` | Import course from `.BON` file |
| `5` | View course (prompts: "Select model to fly around") |
| `6` | Rotate all course orientations on local axis |
| `7` | Scale course about its center |
| `8` | Remove bank |
| `L` | Loop flag is now `ON`/`OFF` (toggles open/closed-loop) |

The state-flag toggle on `L` shows the new value in the menu line.

### `A` — Demon File Manager (`core/fileman.cpp:CDemonFileManager::showEditorMenu_FUN_004be270`)

POD archive admin. Heading: "Demon File Manager / Advanced option list".

| Key | Option |
|---|---|
| `1` | Rebuild last `.POD` |
| `2` | Extract all files from `.POD` |
| `4` | Build a `.POD` from an old-school response file |
| `5` | Catalog a `.POD` file |
| `7` | Move a set into `.POD` file |
| `9` | Extract files from `.POD` interactively |
| `A` | Create `.POD` file from extended response file |
| `C` | Mount/dismount PODs |
| `L` | Compare files in pod vs. local files |
| `Q` | Test sound files (prompts for source directory) |
| `R` | Refresh sound directory |
| `S` | Search for files in mounted PODs |
| `T` | View audit trail for a pod |
| `V` | Verify `.POD` CRC |
| `X` | Cross reference PODs for duplicates |

Also reachable directly via `Ctrl+F` on the main menu (skips the dev-tools menu entirely).

### `B` — Demon Morph System (`core/morph.cpp:CMorph::editMorph_FUN_0052bcb0`)

Morph-target editor. Unlike the others, this isn't a key-driven menu — it goes straight into a GUI flow:

1. File picker: `Select 1st model file` (filter `*.dfm` in `models/`)
2. File picker: `Select 2nd model file` (same filter)
3. Loading screen: `Loading...`
4. Mouse-driven control-point editor (constrained by `MAX_CONTROL_POINTS`; shows `"Can't add any more control points. MAX_CONTROL_POINTS reached."` when full)
5. `Select motion` picker for keyframe selection

Output is `.dfm` (deformable model) with morph-target deltas baked in.

### `M` — Demented(R) Mission Editor (`core/msnedit.cpp:CDemonMission::showEditorMenu_FUN_005381e0`)

Mission/scripting authoring. Header shows `Sec...` (timer?) and either `No misison loaded` (sic — typo in the binary) or `Current mission: %s.msn`. Sets-in-mission listed below the menu.

| Key | Option |
|---|---|
| `1` | Load mission |
| `2` | Save mission |
| `3` | Create mission from single set |
| `4` | Add set |
| `5` | Remove set |
| `6` | Edit actors in a set |
| `7` | Precompute lights for rooms with mirrors |
| `8` | Save mission with a different name |
| `A` | Play mission |
| `B` | Enemy randomizer |
| `C` | Import actors from another mission |
| `D` | Difficulty statistics |
| `G` | Gore editor |
| `H` | Display actor class heirarchy (sic) |
| `S` | Show sound files needed |
| `U` | Update all mission files to latest file and actor versions |
| `W` | Rebuild waypoint connectivity |
| `Z` | Display memory usage info (same as the parent menu's `Z`) |

Notable: `H` and the comment about "actor class heirarchy" both contain the typo "heirarchy" — it's in the binary.

### `S` — Nocturne(R) Skeleton system editor (`core/skeledit.cpp:viewModel_FUN_00598fc0`)

Skeleton/bone viewer. Single option:

| Key | Option |
|---|---|
| `3` | View a deformable model in action! |

Header: `Nocturne(R) Skeleton system editor menu`. Persistence via `skeledit.ini` (see [`ini_settings.md`](ini_settings.md)) — last-viewed model name and view state survive across runs. If `skeledit.ini` is unparseable on read, the editor logs `"Deleting old skeledit.ini file."` and removes it.

### `Z` — Memory diagnostics (`shape/edittool.cpp:displayMemoryDiagnostics_FUN_004a2590`)

Pops up a message box summarizing tracked allocations:

```
Blocks: <count> Total: <X.X>k Max: <X.X>k
```

Or `Heap is empty.` when nothing is allocated. If the allocator's red-zone check fires, the message box shows `Memory corruption detected!` instead. Same operation also writes a full memdump to `memdump.txt` via `debugMemdump_FUN_0050f6c0` — a per-block dump with file/line of the call site that allocated each block.

The popup confirms: `"%s\nAlso dumped memory usage to %s"` with the diagnostics text + the literal `memdump.txt`.

## Related main-menu shortcuts

These also exist alongside `Ctrl+D`/`Ctrl+L`:

| Key | Effect |
|---|---|
| `Ctrl+M` | Toggle sound enable/disable + reconfigure (alternative to F5) |
| `Ctrl+F` | Skip the menu entirely; jump straight into `CDemonFileManager::showEditorMenu` |
| `ESC` | Return from main-menu (sets `iVar5 = 99`, exits loop) |

`Ctrl+F` is the "I just need the POD file manager" shortcut — no detour through the menu.

## Source-of-truth files

- `core/main.c/enterMainGameMenu_FUN_00507a50.c` — main-menu entry point (Ctrl+D / Ctrl+L / Ctrl+F / Ctrl+M dispatch)
- `core/menu.cpp/showMainGameMenu_FUN_00512f40.cpp` — mirror entry point (alternate code path with the same dispatch)
- `core/main.c/showDeveloperToolsMenu_FUN_005073a0.c` — the dev-tools menu itself: license gate, render loop, key dispatch, sub-editor allocation/lifecycle
- `core/menu.cpp/renderMenuAndGetChoice_FUN_00510000.cpp` — main-menu render path that draws the "NON-RELEASE EDITOR BUILD" + "Press CTRL+D" banner unconditionally
- `include/constants/constants_630000.h:633` — the literal `"Press CTRL+D to access the editor menu"`
- `include/constants/constants_630000.h:2477` — `g_LicenseAgreement[14616]` encrypted blob
- `include/constants/constants_630000.h:385/388` — `"AcceptedLicenseAgreement"` ini-key string

## Why this exists in the binary you have

Nocturne's retail player and its level-editor build were almost certainly compiled from the same codebase with different `#define`s. The `nocedit.exe` you decompile here is the editor build — it carries every developer tool plus the "NON-RELEASE EDITOR BUILD" banner regardless of `VELOCITY` / `SPOOKHOUSE` env vars. Those env vars and the [in-game `developer_mode_enabled` hotkeys](runtime_debug_flags.md) gate behavior *during gameplay*; the editor menu is gated only by the license agreement and a Ctrl+D keypress.
