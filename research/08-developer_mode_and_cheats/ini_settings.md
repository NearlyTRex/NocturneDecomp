# INI Settings

Four files with the `.ini` extension ship with the game. Only two are true INI-format files (sections + key=value); the other two are plain text with the extension. Two are read by `nocedit.exe` itself, one by the active renderer DLL, and one by the in-game skeleton editor.

| Filename | Format | Read by | Purpose |
|---|---|---|---|
| `system\nocturne.ini` | True INI | `nocedit.exe` (`CIniFile`) | Main game configuration: graphics, sound, controls, debug, editor |
| `system\RENDER.INI` | True INI | Renderer DLL (loaded via `rendererDLLPath`) | Renderer-DLL-specific texture/zbuffer settings |
| `pod.ini` | Plain text (count + filenames) | `nocedit.exe` | Optional list of `.pod` archives to mount; absent = scan `*.pod` |
| `skeledit.ini` | Plain text (skeleton-editor view-model state) | `nocedit.exe` | Persisted state of the in-game skeleton editor's last view; not user-facing |

Why `RENDER.INI` doesn't show up in `nocedit.exe` literals: the renderer is a swappable DLL (`tridx6.dll` / `tridx7.dll` / `trid3d.dll` / `tri3dfx.dll` shipped). The main binary loads whichever path is configured in `nocturne.ini`'s `rendererDLLPath`, then the DLL reads its own ini independently. So the literal `"RENDER.INI"` lives inside the renderer DLLs, not in `nocedit.exe`.

## `system\nocturne.ini`

Read by `core/inivar.cpp:readIniData_FUN_004fbd90` at startup, written by `writeIniData_FUN_004fc510` on shutdown / settings save. The path is hard-coded as `.\\system\\nocturne.ini` (relative to the binary's working directory). At startup it asserts the file is **not** read-only — if it is, the game halts with `"Please copy Nocturne to your hard drive"`.

Five top-level sections, in read order: `[Graphics]`, `[Sound]`, `[Control]`, `[Debug]`, `[Editor]`.

### `[Graphics]`

| Key | Type | Field | Notes |
|---|---|---|---|
| `gamePIXX` | int | `g_CGamePtr->game_pixx` | Render width in pixels |
| `gamePIXY` | int | `g_CGamePtr->game_pixy` | Render height in pixels |
| `gameBPP` | int | `g_CGamePtr->game_bpp` | Color depth (16 or 32) |
| `useDirect3D` | int (bool) | `g_UseDirect3D` | Selects the external D3D renderer DLL vs. internal software path |
| `useAGPFlag` | int | `g_AGPTextureMode` (also written into `CExternalRendererBridge.agp_texture_mode` for the renderer DLL) | AGP-bus texture-mode hint passed to the renderer DLL. **Effectively dead in the ini** — `initializeGameSystems:62` hard-overwrites the loaded value with `2` immediately after `readIniData()`, so whatever you put here gets clobbered. The `2` is then what flows to the DLL. The save path still writes the (clobbered) value back, so editing `useAGPFlag` survives one game session at most. |
| `rendererDLLPath` | string (250 char buffer) | `g_RendererDllPath` | Path to the external renderer DLL (used when `useDirect3D != 0`) |
| `gamma` | int | `g_CGamePtr->gamma` | Gamma correction value |
| `heroNumber` | int | `g_CGamePtr->hero_number` | Currently-selected hero index |
| `haloMode` | int | `g_CGamePtr->halo_mode` | Lighting halo render mode |
| `firstTimeFlag` | int (bool) | `g_FirstTimeFlag` | When `1`, the game shows the calibration-test screen on next launch (and forces 640×480×32 video mode), then sets the flag to `0` so subsequent launches skip the prompt. When `0`, normal launch. Useful to set back to `1` if you want to re-run the calibration. |
| `subtitleMode` | int | `g_CGamePtr->subtitle_mode` | Subtitle rendering mode |
| `bloodFlag` | int (bool) | `g_CGamePtr->blood_flag` | Enable blood effects |
| `nudityFlag` | int (bool) | `g_CGamePtr->nudity_flag` | Enable nudity content (one specific cutscene per shipping notes) |
| `foulLanguageFlag` | int (bool) | `g_CGamePtr->foul_language_flag` | Enable explicit dialogue |
| `shadowFlag` | int (bool) | `g_CGamePtr->shadow_flag` | Enable dynamic shadows |
| `quimbyFlag` | int (bool) | `g_CGamePtr->quimby_flag` | **Censorship master switch.** When `1`, forces `nudityFlag`, `foulLanguageFlag`, `bloodFlag` all to `0` immediately after read. |
| `currentBoard` | int | `g_GraphicsCardHandle` | Index of selected graphics card |

The `quimbyFlag` name is a *Simpsons* reference (Mayor Quimby; "kid-friendly mode"). It overrides the three content-mature toggles unconditionally — setting `bloodFlag=1 quimbyFlag=1` results in blood being off.

### `[Sound]`

Read by `sound/sndmain.cpp:readIni_FUN_005abf20`. Keys (no nested per-device sections in the binary; they're top-level):

| Key | Type | Notes |
|---|---|---|
| `DeviceName` | string (256 char) | Audio output device name |
| `RecordingDeviceName` | string (256 char) | Audio capture device name |
| `HwMixingEnabled` | int (bool) | Use hardware mixing if available |
| `MaxSwLatency` | float | Software-mixing latency cap (seconds, presumably) |
| `Bits` | int | Sample bit depth (typically 16) |
| `Channels` | int | Channel count (1 = mono, 2 = stereo) |
| `Hz` | int | Sample rate (e.g. 22050, 44100) |
| `Mute` | int (bool) | Force-mute toggle |

### `[Control]`

Each `key*` value is a DirectInput scancode (`DIK_*`); the game first calls `restoreDefaultControls` to populate defaults, then overrides with whatever the ini specifies.

| Key | Field | Action |
|---|---|---|
| `gameControl` | `game_control` | Top-level input mode (keyboard, gamepad, etc.) |
| `keyWalk` | `key_walk` | Walk forward |
| `keyBackup` | `key_backup` | Walk backward |
| `keyRun` | `key_run` | Run modifier |
| `keyStrafe` | `key_strafe` | Strafe modifier (turns turn-keys into strafes) |
| `keyStrafeLeft` | `key_strafe_left` | Strafe left direct |
| `keyStrafeRight` | `key_strafe_right` | Strafe right direct |
| `keyRight` | `key_right` | Turn right |
| `keyLeft` | `key_left` | Turn left |
| `keyFire` | `key_fire` | Fire weapon |
| `keyUseItem` | `key_use_item` | Use selected item |
| `keyLight` | `key_light` | Toggle flashlight |
| `keyInfrared` | `key_infrared` | Toggle infrared vision |
| `keyDraw` | `key_draw` | Draw/holster weapon |
| `keyJump` | `key_jump` | Jump |
| `keyPointUp` | `key_point_up` | Aim up |
| `keyPointDown` | `key_point_down` | Aim down |
| `keyWeapon1`–`keyWeapon5` | `key_weapon_1`..`key_weapon_5` | Direct weapon-slot select |
| `keyNextWeapon` / `keyPrevWeapon` | `key_next_weapon` / `key_prev_weapon` | Cycle weapons |
| `keyNextItem` / `keyPrevItem` | `key_next_item` / `key_prev_item` | Cycle inventory items |
| `keyItemDesc` | `key_item_desc` | Show item description |
| `keyNextAmmo` | `key_next_ammo` | Cycle ammo type |
| `invertMouseYAxis` | `invert_mouse_y_axis` | Invert Y axis (bool) |
| `alwaysRun` | `always_run` | Always-run toggle (bool) |
| `xMouseSensitivity` / `yMouseSensitivity` | `x_mouse_sensitivity` / `y_mouse_sensitivity` | Per-axis mouse sensitivity |
| `xCenter` / `yCenter` | `x_center` / `y_center` | Joystick deadzone center |
| `xStickMin` / `xStickMax` / `yStickMin` / `yStickMax` | `x_stick_*` / `y_stick_*` | Joystick range calibration |
| `aimMode` | `aim_mode` | Aim mode selector |
| `autoUseHealth` | `auto_use_health` | Auto-consume health items when low (bool) |

### `[Debug]`

Two keys — both useful for testing/debugging:

| Key | Type | Field | Notes |
|---|---|---|---|
| `logConsoleFlag` | int (bool) | `g_CConsolePtr->file_logging_enabled` | When `1`, every `CConsole::printf` call appends to the file at `g_ConsoleLogFilename` (in addition to the in-memory ring buffer that the on-screen TAB overlay shows). **Independent of the on-screen overlay** — the two visibility paths don't gate each other. `CConsole::reset` deletes the log file at startup, so it gets cleared each run. |
| `headOfHorrorCheat` | int | `g_CGamePtr->head_of_horror_cheat` | Persistence cell for the `headOfHorror` event-cheat. Set to `666` (= `0x29a`, the consumed-sentinel) to force-unlock at boot. See [`cheats.md`](cheats.md). |

### `[Editor]`

Read by two delegate functions (`CDemonMission::readIni` and `CDemonSet::readIni`) called consecutively after the `readIniHeader("Editor")`:

| Key | Type | Field | Notes |
|---|---|---|---|
| `renderSkyInEditor` | int (bool) | `CDemonMission->render_sky_in_editor` | Show sky when in editor view |
| `renderWaterInEditor` | int (bool) | `CDemonMission->render_water_in_editor` | Show water when in editor view |
| `fullLightInEditor` | int (bool) | `CDemonMission->full_light_in_editor` | Use full lighting (vs. simplified) in editor |
| `disableMouseHitOnBarriers` | int (bool) | `g_DisableMouseHitOnBarrier` | Disable mouse-pick on barrier actors |
| `dynamicRenderMode` | int | `g_DynamicRenderMode` | Dynamic-render mode selector |
| `confirmNewActorNames` | int (bool) | `g_ConfirmNewActorNames` | Prompt before naming new actors |
| `groundTypeDirectory` | string (260 char) | `g_GroundTypesBuffer` | Path to the ground-types asset directory |

## `system\RENDER.INI` — renderer DLL configuration

A true INI file (sections + key=value), but **not read by `nocedit.exe`** — the consumer is whichever renderer DLL is loaded via `rendererDLLPath` in `nocturne.ini`. The four shipped renderer DLLs are:

| DLL | Renderer |
|---|---|
| `tridx6.dll` | DirectX 6 (default per shipped `nocturne.ini`) |
| `tridx7.dll` | DirectX 7 |
| `trid3d.dll` | Generic Direct3D (early, possibly D3D 5) |
| `tri3dfx.dll` | 3dfx Glide |

All four DLLs share the same `RENDER.INI` schema since they implement the same renderer interface. Two sections.

### `[Textures]`

Pool sizes by texture dimension. The DLL pre-allocates these counts at startup; running out forces eviction. Setting all four to `0` would presumably disable that bucket entirely; the shipped `RENDER.INI` zeros only `maxTextures32`, suggesting Nocturne never uses 32×32 textures.

| Key | Type | Notes |
|---|---|---|
| `maxTextures32` | int | Pool size for 32×32 textures |
| `maxTextures64` | int | Pool size for 64×64 textures |
| `maxTextures128` | int | Pool size for 128×128 textures |
| `maxTextures256` | int | Pool size for 256×256 textures |
| `mipMapFlag` | int (bool) | Enable mipmap generation |

### `[Graphics]`

| Key | Type | Notes |
|---|---|---|
| `masterZBufferCount` | int | Number of z-buffers allocated (`1` = single, higher = multiple — useful for layered/portal rendering) |
| `useHoldBuffer` | int (bool) | Enable hold buffer (probably triple-buffering / present-queue depth) |

Shipped contents (for reference):

```ini
[Textures]
maxTextures32=0
maxTextures64=192
maxTextures128=4
maxTextures256=32
mipMapFlag=0

[Graphics]
masterZBufferCount=1
useHoldBuffer=1
```

### What the keys actually do

The renderer DLLs aren't in our decompilation scope (we only decompile `nocedit.exe`), so the consuming code paths are unknown. The above interpretations are inferred from key names + shipped values. To pin down semantics: dump strings from one of the `tri*.dll` PEs and find the `GetPrivateProfile*` / `CIniFile_*` call sites inside the DLL.

## `pod.ini` — POD archive list (plain text, not a true INI)

Read by `core/podmain.cpp:CDemonPod_load_FUN_005519c0` at startup. Format is plain-text-with-fscanf:

```
<count>
<archive_filename_1>
<archive_filename_2>
...
```

The first integer is the count; each subsequent line is one filename to mount. If the file is **absent**, the game falls back to scanning the working directory for `*.pod` files via `CFileFinder` and mounts them all in alphabetical order. The game then calls `resolveDependenciesAndSort` to reorder mounts based on declared dependencies.

So `pod.ini` is just a manual override for which pods to load and in what order — useful for development builds where you have many archives present but only want a subset mounted.

**Secondary effect — chapter-select UI.** `core/game.cpp:CGame_showChapterSelect_FUN_004e1cb0` also probes for `pod.ini` near the top (open + immediate close, contents ignored). If the file exists, the START menu skips the curated Volume 1–5 / Chapter pick-list and opens a generic flat ".msn file picker" instead. So `pod.ini`'s mere presence flips the chapter-select UI into "dev mode" regardless of what's inside it. See [`retail_vs_editor_mysteries.md`](retail_vs_editor_mysteries.md) §3.

## `skeledit.ini` — skeleton editor state (plain text, not a true INI)

Read/written by `core/skeledit.cpp:viewModel_FUN_00598fc0` (via `fopen("skeledit.ini", ...)`). Persists the last-used model viewer state — model name, zoom, rotation, etc. — so the editor reopens at the same view next time.

If the file's format is unparseable on read, the editor displays "Deleting old %s file." and removes it, then proceeds with defaults. Format is internal to the editor; not user-facing config.

## Source-of-truth files

- `core/inivar.cpp/readIniData_FUN_004fbd90.cpp` — full nocturne.ini schema, top to bottom (this is the canonical key list)
- `core/inivar.cpp/writeIniData_FUN_004fc510.cpp` — write-back path (mirror keys for save)
- `sound/sndmain.cpp/readIni_FUN_005abf20.cpp` — `[Sound]` section delegate
- `core/msnedit.cpp/CDemonMission_readIni_FUN_00537530.cpp` — `[Editor]` section (mission-level)
- `core/setedit.cpp/CDemonSet_readIni_FUN_00584900.cpp` — `[Editor]` section (set-level)
- `engine/ini.cpp/` — `CIniFile` class implementation (`ctor`, `readIniHeader`, `getInteger`, `getString`, `getFloat`, `setInteger`, etc.)
- `core/podmain.cpp/CDemonPod_load_FUN_005519c0.cpp` — `pod.ini` parser
- `core/skeledit.cpp/viewModel_FUN_00598fc0.cpp` — `skeledit.ini` reader/writer
- `tridx6.dll` / `tridx7.dll` / `trid3d.dll` / `tri3dfx.dll` — `RENDER.INI` consumers (not in our decompilation scope; the literal `"RENDER.INI"` lives inside these binaries)
