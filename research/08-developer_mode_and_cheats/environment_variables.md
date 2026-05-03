# Environment Variables

`getenv()` is called for seven distinct names in `nocedit.exe`. Two are developer gates; the rest are CRT/Windows infrastructure that the user wouldn't toggle to change game behavior.

## Developer gates

| Var | Set in | Effect |
|---|---|---|
| **`VELOCITY`** | `core/game.cpp:CGame_runGameSession_FUN_004daf80` (line 86) | When set to *any* non-empty value, `g_CGamePtr->developer_mode_enabled` (formerly `velocity_debug_enabled`) is initialized to `1`. Master gate for almost every dev hotkey: Ctrl+E (virtual director), Ctrl+Y (pause+sound shutdown), Ctrl+Z (camera debug — also OR'd with SPOOKHOUSE), Ctrl+W (screen clear toggle), Ctrl+V (`debug_toggle_flag`), TAB (console — also OR'd with SPOOKHOUSE), and several others scattered through `processHotkeys`. |
| **`SPOOKHOUSE`** | `core/game.cpp:CGame_processHotkeys_FUN_004dcee0` (multiple sites), `CGame_processFrame_FUN_004da100` (re-checked every frame) | OR'd with `developer_mode_enabled` to gate **only two** specific hotkeys: TAB (console toggle) and Ctrl+Z (camera debug). A weaker dev gate than `VELOCITY` — likely intended for game-team builds that want some debug visibility without unlocking the full engine-dev hotkey suite. |

Both checks are *presence-only* (`getenv(...) != NULL`), not value-parsing. Set to any non-empty string:

```bash
VELOCITY=1 SPOOKHOUSE=1 ./nocedit.exe
```

### Why two separate gates?

- `VELOCITY` matches the engine name (Velocity Engine) — Terminal Reality's all-titles internal-build flag.
- `SPOOKHOUSE` matches the project codename — Nocturne-team-specific.

The split likely reflects build-time access policy: engine-team developers who set `VELOCITY` get the full debug suite across any TR title; game-team people on Nocturne who don't have engine-internal access could set `SPOOKHOUSE` to get the project-specific subset (mainly the in-game console). Both being present means the developer's running the full engine-debug build.

`SPOOKHOUSE` is checked *every frame* in some call paths (e.g. `processFrame`), not just at startup, so it can be turned on/off via env-var changes between frames if you're pulling stunts with an injector — though there's no in-game UI for it.

## Identity / system

| Var | Used by | Purpose |
|---|---|---|
| `USERNAME` | `engine/fileio.cpp:establishUserIdentity_FUN_004b1c00`, `core/netgame.cpp:CNetGame_init_FUN_0053f780`, `sound/sndmain.cpp:logSoundError_FUN_005adba0`, `core/sound.cpp:playSfxInternal_FUN_005b1fd0` | Player name in netgame; primary username in the version-control session struct (`g_VersionControlSession.primary_username`); included in sound-error logs. |
| `COMPUTERNAME` | Same files as USERNAME | Fallback when `USERNAME` is unset. Falls further back to literal `"MyComputer"` if both are unset. |
| `PROCESSOR_LEVEL` | `core/main.c:initializeGameSystems_FUN_00507a60` | CPU detection (Pentium-class etc.) — historical artifact from when MMX support was probed at startup. |
| `ComSpec` | `crt/stdlib.c:system_FUN_00602130` | Standard CRT `system()` shell-path lookup (Windows). |
| `TZ` | `crt/time.c:tzset_FUN_006072f8` | Standard CRT timezone init. |

These five system vars are infrastructure — not levers to change game behavior. `USERNAME` and `COMPUTERNAME` show up in netplay and version-control session naming; the others are CRT plumbing.

## Sample call-site shapes

`USERNAME` → `COMPUTERNAME` → `"MyComputer"` fallback chain (`CNetGame::init`):

```cpp
pcVar3 = getenv("USERNAME");
if (pcVar3 == NULL) {
    pcVar3 = getenv("COMPUTERNAME");
}
if (pcVar3 == NULL) {
    pcVar3 = "MyComputer";
}
// ... copied into this_ptr->player_name
```

`VELOCITY` presence check (`CGame::runGameSession`):

```cpp
this_ptr->developer_mode_enabled = 0;
core_game_cpp_CGame_setGameRes_FUN_004dade0(this_ptr);
pcVar2 = getenv("VELOCITY");
if (pcVar2 != NULL) {
    this_ptr->developer_mode_enabled = 1;
}
```
