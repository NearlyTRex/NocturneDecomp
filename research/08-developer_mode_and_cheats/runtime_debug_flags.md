# Runtime Debug Flags

All live on the singleton `CGame` instance (offsets relative to `g_CGamePtr`), with one global counterpart (`g_ModalDialogActive`).

## CGame fields

| Field | Offset | Initial | Toggled by | What it does |
|---|---|---|---|---|
| `developer_mode_enabled` | `0x210` | `0` (set to `1` if `VELOCITY` env var is present) | Cheat: `g_CheatStr_DebugMode` (`processCheatCodes:295`) | Master dev hotkey gate. When `1`, unlocks Ctrl+E, Ctrl+Y, Ctrl+Z, Ctrl+W, Ctrl+V, TAB, and several other hotkeys. The cheat-typed activation displays "Buy Fly! today!" — a Terminal Reality in-joke; *Fly!* was their flight-sim title. |
| `console_enabled` | (CGame; not yet pinned) | `0` (reset every session) | TAB, gated by `developer_mode_enabled \|\| getenv("SPOOKHOUSE")` | Toggles the on-screen `CConsole::render` overlay (printf log, drawn over the framebuffer). Doesn't affect file-log path — see `[Debug] logConsoleFlag` in [`ini_settings.md`](ini_settings.md). |
| `camera_debug_enabled` | `0x1e4` | `0` | Ctrl+Z, gated by `developer_mode_enabled \|\| getenv("SPOOKHOUSE")` | Camera-state debug overlay (matrices, frustum, etc.). Shares the SPOOKHOUSE gate with the console — both deemed safe-enough for game-team builds. |
| `debug_toggle_flag` | `0x1e8` | `0` | Ctrl+V, gated by `developer_mode_enabled` AND `g_MovieRecordingArmed == 0` AND `g_WindowHeight > 0x1df` | Likely a generic "debug visualization on/off". Rendering-side consumers haven't been mapped — it's a known unknown. The `g_MovieRecordingArmed == 0` gate suggests it conflicts with movie capture. |
| `geometry_debug_enabled` | `0x218` | `0` | Cheat: `g_CheatStr_GeometryDebug` (`processCheatCodes:1546`) | Geometry-debug rendering (likely wireframe / face IDs / similar). |
| `collision_render_enabled` | `0x21c` | `0` | Cheat: `g_CheatStr_CollisionDebug` (`processCheatCodes:604`) | Renders collision volumes on top of the world. |
| `profile_mode` | `0x20c` | `0` | Cheat: `g_CheatStr_ProfileMode` (cycles 0..N..0) | Switches between framerate / perf-counter readout styles. The cheat increments by one each invocation, wrapping back to 0. |
| `single_step_mode` | (CGame; not yet pinned) | `0` | Cheat: `g_CheatStr_SingleStep` | Pause-frame debugger: advance one tick at a time. |
| `screen_clear_enabled` | `0x84` | `0` | Ctrl+W (gated by `developer_mode_enabled` and `g_WindowHeight > 0x1df`); also from cheats and F5 | Whether the framebuffer is cleared each frame. Useful for letting trail-debug / overdraw be visible when off. |

## `g_ModalDialogActive` — input-suppression gate

Despite gating cheat input (which led to its earlier misnomer `g_CheatSystemEnabled`), this global is actually a **generic "modal dialog is up" flag**, not cheat-specific. It's set whenever a `CPickList` confirmation dialog opens and cleared when the dialog is dismissed. Cheat input is just one of many systems gated by it.

**Set to `1`** in `CGame::runGameSession` (lines 183, 197) when these pick-list dialogs open:
- "You are connected to a network game. Do you want to leave the game?"
- "You are hosting a network game. Do you want to abort the game?"

**Cleared back to `0`** at lines 269, 277 when the dialog is dismissed.

**What it gates** (all gates check whether the modal is *not* up before running):

| Site | Check | Effect when modal is up (`!= 0`) |
|---|---|---|
| `CGame::processCheatCodes:232` | `if (== 0)` | Cheat input + key-history matching skipped |
| `CGame::processHotkeys:27` | `if (== 0)` | Dev hotkeys (Ctrl+E/Y/Z/W/V, TAB, F10 cheat dialog) skipped |
| `CGame::runGameSession:143` | `if (paused \|\| != 0)` | Per-frame logic skipped during modal |
| `CGame::runGameSession:163` | `if (== 0)` | Main-loop body only runs when no modal |
| `CGame::playerControls:22` | `if (!= 0)` | Different control behavior during modal |

So `developer_mode_enabled` and SPOOKHOUSE/VELOCITY env vars say *whether* dev hotkeys exist; `g_ModalDialogActive` says *when* (any) input is suppressed because a pop-up dialog has focus.

The earlier "Inverted-name warning" was rooted in the misleading old name — with `g_ModalDialogActive` the polarity is now natural: `1` = dialog up = suppress input, `0` = no dialog = normal play.

## Hotkey mapping (with `developer_mode_enabled = 1`)

Sampled from `CGame::processHotkeys_FUN_004dcee0` — many more exist beyond what's listed here; this is the gist:

| Key | Extra gates | Effect |
|---|---|---|
| TAB | `\|\| getenv("SPOOKHOUSE")` | Toggle on-screen console overlay (`console_enabled`) |
| Ctrl+E | `cutscene_skippable == 0`, `is_game_active` flips | Toggle virtual director (`evaluateVirtualDirector`) — cinematic camera mode |
| Ctrl+Y | — | Pause game + shutdown sound |
| Ctrl+Z | `\|\| getenv("SPOOKHOUSE")` | Toggle camera debug overlay (`camera_debug_enabled`) |
| Ctrl+W | `g_WindowHeight > 0x1df` | Toggle framebuffer clear (`screen_clear_enabled`) — also reinitializes camera |
| Ctrl+V | `g_MovieRecordingArmed == 0`, `g_WindowHeight > 0x1df` | Toggle `debug_toggle_flag` |
| Alt+M | (no developer_mode gate) | Toggles `INT_02f43978` — purpose unknown |
| F5 | `subtitle_system_enabled == 0` (alt: Ctrl+M) | Sound enable/disable cycle (system-wide, not per-channel) |
| F2 | `letterbox_mode == 0` | Quick save |
| F3 | — | Prompt-load game |
| F6 | `letterbox_mode == 0` | Save to `quicksavedgame.noc` |
| F10 | `subtitle_system_enabled == 0` | Open cheat-code input dialog |

The F2/F3/F6 quick-save/load keys are **not** dev-gated — they're available to all players. The `developer_mode_enabled` gate is for the more invasive overlays and toggles.

## Source-of-truth files

- `core/game.cpp/CGame_processHotkeys_FUN_004dcee0.cpp` — hotkey dispatch (gated reads of `developer_mode_enabled` and `SPOOKHOUSE`)
- `core/game.cpp/CGame_processCheatCodes_FUN_004ddaf0.cpp` — cheat input + most flag toggles via cheat strings
- `core/game.cpp/CGame_runGameSession_FUN_004daf80.cpp` — initial flag values (env-var reads)
- `core/game.cpp/CGame_ctor_FUN_004d7b40.cpp` — `CGame` constructor zero-inits
- `core/game.cpp/CGame_processFrame_FUN_004da100.cpp` — per-frame consumers (`console_enabled` check before `CConsole::render`)
- `include/types/classes/CGame.h` — field offsets
