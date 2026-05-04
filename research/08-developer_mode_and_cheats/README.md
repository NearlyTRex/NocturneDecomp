# Developer Mode, Debug Flags, and Cheats

Mapping of every developer/debug/options surface in `nocedit.exe`: env-var gates, runtime flags, typed-cheat-codes, and ini configuration. Split into four topic docs.

## Project codenames (background)

Two project names show up throughout the binary as gating tokens:

| Name | What it refers to |
|---|---|
| **Velocity** | Terminal Reality's in-house engine. Nocturne, BloodRayne, Aeon Flux, 4×4 EVO, Monster Truck Madness 2, etc. all run on the Velocity Engine. The `VELOCITY` env var is the engine-wide "internal build" check. |
| **Spookhouse** | Internal codename for Nocturne specifically. Also the in-game name of the supernatural-detective agency the protagonist works for, so the codename was an in-joke. The `SPOOKHOUSE` env var is the project-specific dev gate. |

## Topics

| Doc | Scope |
|---|---|
| [`environment_variables.md`](environment_variables.md) | All seven `getenv()` callees, with the two dev gates (`VELOCITY`, `SPOOKHOUSE`) split out from CRT/Windows infrastructure |
| [`runtime_debug_flags.md`](runtime_debug_flags.md) | `CGame` debug flags (`developer_mode_enabled`, `console_enabled`, camera/geometry/collision/profile, etc.), how each is toggled, plus the `g_ModalDialogActive` input-suppression gate that runs during pick-list pop-up dialogs |
| [`cheats.md`](cheats.md) | All 45 `g_CheatStr_*` cheats with **decrypted typeable cleartext** (recovered via `scripts/Python/decrypt_cheats.py`), organized by category; the encrypted-input pipeline; the special event-triggered `headOfHorror`; and the `F10` cheat-input dialog |
| [`developer_tools_menu.md`](developer_tools_menu.md) | The `Ctrl+D` (or `Ctrl+L`) main-menu shortcut into the full editor/debug menu (`showDeveloperToolsMenu`): mission play, shape/set/keyframed-model/morph/mission/skeletal editors, file manager, procedural textures, memory diagnostics. License-agreement gate, side effects (forces D3D off), and the "NON-RELEASE EDITOR BUILD" banner. |
| [`retail_vs_editor_mysteries.md`](retail_vs_editor_mysteries.md) | Open mysteries about retail-vs-editor build differences. Currently covers: (1) why D3D is permanently disabled in Graphics Options (definitive — hardcoded clobber every frame), (2) why cutscene voices don't play despite subtitle render (partial — orphan `loadStreamingSoundFile`). |
| [`cut_content.md`](cut_content.md) | Features that exist in the binary as orphan infrastructure but were never UI-exposed in any shipped Nocturne build. |
| [`ini_settings.md`](ini_settings.md) | Full `nocturne.ini` reference (`[Graphics]` / `[Sound]` / `[Control]` / `[Debug]` / `[Editor]`); `RENDER.INI` (renderer-DLL config — read by `tridx6.dll` / `tridx7.dll` / `trid3d.dll` / `tri3dfx.dll`, not by `nocedit.exe`); plus `pod.ini` and `skeledit.ini` (misleadingly-named plain-text lists, not true ini files) |

## Quick "enable everything for debugging" recipe

```bash
VELOCITY=1 SPOOKHOUSE=1 ./nocedit.exe
```

In `system\nocturne.ini`:

```ini
[Debug]
logConsoleFlag = 1
```

In-game with `VELOCITY=1`:
- **TAB** — toggle on-screen console overlay
- **Ctrl+Z** — toggle camera debug overlay
- **Ctrl+W** — toggle screen-clear (overdraw visible)
- **Ctrl+V** — toggle `debug_toggle_flag`
- **Ctrl+Y** — pause + sound shutdown
- **Ctrl+E** — toggle virtual director (cinematic camera)
- **F10** — open cheat-code input dialog

Plus any cheat by typing its (decrypted) keyword — works whenever no pick-list pop-up dialog is up (i.e. `g_ModalDialogActive == 0`, which is the normal-play default).

## Open questions / followups

- **`debug_toggle_flag`** — gated on Ctrl+V but its rendering-side consumers haven't been mapped.
- **Editor surfaces** — `CEditorTools::showCheatInputDialog` and `getInteger/setInteger` prompts share the editor toolkit, confirming this is a unified game+editor binary (`nocedit.exe` literally = "nocturne editor"). Editor-mode features may be unlockable via the same dev-mode gates.
