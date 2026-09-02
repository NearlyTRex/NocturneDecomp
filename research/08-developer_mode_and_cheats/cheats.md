# Cheat Codes

Typed character sequences matched against an input history (`g_InputHistory[20]`). The shift loop runs `for (i = 18; i > 0; i--) hist[i+1] = hist[i]` and then writes `hist[1]`, so slots **1..19 hold the last 19 uppercased keystrokes** and `hist[0]` is never used — 19 characters is the longest code that can ever match. Each cheat name has a corresponding **encrypted byte array** in `globals/include/constants/constants_620000.h`:

```
g_CheatStr_<Name>[N]   // 50–54 bytes of XOR-mixed ciphertext
```

Decryption happens at the call site via `support/newmsg.cpp:decryptMessage_FUN_00544270`. We've **recovered the cleartext offline** by reimplementing the algorithm — see `scripts/Python/decrypt_cheats.py` — so all 45 cheat codes are listed below as you'd type them in-game. Re-run the script after a re-export to verify nothing changed:

```
python3 scripts/Python/decrypt_cheats.py
```

## Decryption algorithm (for the curious)

```
key = buf[0]                              # initial key from byte 0
for i in 2..len-1:
    plain[i] = encrypted[i] ^ key         # XOR with current key
    if plain[i] == 0: break               # null terminator
    key = (key * 0xBD + 1) & 0xFF         # multiplicative-step key schedule
```

Header sanity check: `buf[2] ^ buf[0] == 0x3E` (== `'>'`). The first 21 decrypted bytes (offsets 2..0x16) are a fixed filler header — `>>>ENCRYPTED_MESSAGE[` — and the actual cheat keyword starts at offset `0x17` and runs to the null terminator. So the on-disk format is roughly: `[key][?][>>>ENCRYPTED_MESSAGE[][CHEATCODE][\0]`, all XOR-encoded after the first byte.

The cheat name (and the in-game message it displays) tells you what each one does. All cheats play `cheat-1.wav` on activation unless noted.

> **The effect columns below describe what each cheat's field does where it is *read*, not what its name suggests.** Several entries previously read "debug logging" for flags that actually gate an on-screen overlay, and three were simply wrong (`NOLOCK`, `T2000`, `BLANK`). The read site is cited wherever the behaviour is not obvious from the name, so the next reader does not have to re-derive it.

## Reaching them without typing

Typing the code is how the shipped binary offered these, and it still works. A build with `NOCTURNE_AUTHENTIC_CHEAT_MENU=0` also carries an **Options > CHEATS** screen — three pages (Gameplay, Weapons & ammo, Debug) of On/Off lines, persisted in `[Cheats]` in `system/nocturne.ini` and applied at `CDemonMission::startMission`. Thirty of the forty-five are presets there; `shims/cheats.h` lists the fifteen that cannot be (dialog prompts, one-shot actions, stopwatches and cycles) and why.

## Cheat-input control flow

Located in `CGame::processCheatCodes_FUN_004ddaf0`:

1. The whole loop is gated by `if (g_ModalDialogActive == 0)` — cheat input is suppressed whenever a pick-list pop-up dialog has focus. See [`runtime_debug_flags.md`](runtime_debug_flags.md) for what else this gate covers; under normal play it's `0` so cheats are accepted.
2. **`F10` opens an explicit dialog** (`CEditorTools::showCheatInputDialog`); the typed text is enqueued as fake key presses via `wincore_winrun_cpp_enqueueInput_FUN_005f2f30`.
3. Otherwise the loop polls real keystrokes via `wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00`, uppercases them via `engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470`, and prepends to `g_InputHistory`.
4. For each cheat, the encrypted string is decrypted, length is computed, and the suffix of `g_InputHistory` is character-by-character compared (with `toupper`).
5. On a match, the input history is reset (`g_InputHistory[1] = '\0'`) so the same keys don't re-trigger immediately.

## No flag-backed cheat survives a mission transition

Worth knowing before chasing a "cheat stopped working" report, and not visible from `processCheatCodes` alone. `CDemonMission::run`'s loop is:

```
loadSet -> buildActiveSetActorList -> CGame::runGameSession   (mission plays, returns)
        -> teardown -> load -> createHeros -> startMission -> loop
```

`startMission` prepares the *next* mission and the loop then re-enters `runGameSession`, whose prologue unconditionally resets a block of `CGame` state. In source order, everything it sets to 0 — **cheat-relevant fields in bold**:

```
camera_view_index          is_paused                  camera_debug_enabled
debug_toggle_flag          screen_clear_enabled*      god_mode_enabled*
gratuitous_dismemberment*  freeze_enemies_enabled*    event_processing_enabled*
subtitle_system_enabled*   screen_clear_condition     console_enabled
scripted_sequence_active*  render_mode*               editor_tools_enabled*
bitmap_width               bitmap_height              is_processing
cutscene_skippable         skip_frame_render*         allow_hero_controls_flag
profile_mode*              show_customizable_keys     goggles_active
flashlight_active          player_hit_flag            geometry_debug_enabled*
collision_render_enabled*  developer_mode_enabled*
```

`*` marks a field one of the cheats above writes. The same block also sets `is_game_active = 1`, `time_scale_factor = 1.0` (undoing `TIME`), `bitmap_filename[0] = '\0'` and `g_ModalDialogActive = 0`; `developer_mode_enabled` is then set back to 1 only if the `VELOCITY` environment variable is present.

So typing `GODGAMES` and walking into the next chapter **loses god mode** — the engine clears the flag itself and nothing puts it back. The same goes for `FREEZER`, `GOREMODE`, `GOLDMODE` and every debug toggle in the first table. What *does* survive a transition: inventory grants (`CInventory::load` carries them), `big_hat_cheat`, `g_SoundDebugEnabled` (a global, not a `CGame` field), and the weather, which lives on `CWeather`.

Anything that wants a cheat to persist across missions has to re-apply it *after* this prologue, not at the end of `startMission`.

## Master / debug

| Cheat global | Type | In-game message | Effect |
|---|---|---|---|
| `g_CheatStr_DebugMode` | `GOLDMODE` | "Buy Fly! today!" | Toggles `developer_mode_enabled`; plays `buy-fly-today.wav`. The in-joke unlock for full dev mode. |
| `g_CheatStr_GeometryDebug` | `PORTER` | (generic ack) | Toggles `geometry_debug_enabled`. |
| `g_CheatStr_CollisionDebug` | `COLLISION` | (generic ack) | Toggles `collision_render_enabled`. |
| `g_CheatStr_EventDebug` | `EVENT` | "Event debug on/off" | Toggles `event_processing_enabled`. Despite the name it gates nothing in the event *system* — `CGame::processFrame` reads it to decide whether to call `CEventList::render`, i.e. it is an **on-screen event-list overlay**, not logging. |
| `g_CheatStr_ScriptDebug` | `SCRIPT` | "Script debug on/off" | Toggles `subtitle_system_enabled` **and** sets `screen_clear_enabled` to match, then calls `CDemonSet::reinitCamera(0, 0, on ? 240 : g_WindowHeight)` to shrink the 3D view to the top 240 lines. `processFrame` requires *both* flags before drawing `CScript::renderEditor` into the space that frees up. An **on-screen script-state overlay**, not logging. |
| `g_CheatStr_MemoryDebug` | `MEMORY` | "Memory debugging on/off" | Toggles `editor_tools_enabled`, which `processFrame` reads to draw `CEditorTools::displayMemoryDiagnostics` near the bottom of the screen. An **overlay**, not allocator logging. |
| `g_CheatStr_SoundDebug` | `SFXDEBUG` | (sound debug ack) | Toggles `g_SoundDebugEnabled`, which makes `processFrame` walk the active-SFX list and draw each sample's name down the left edge. An **overlay**, not logging. |
| `g_CheatStr_ProfileMode` | `PROFILE` | (profile-mode ack) | Cycles `profile_mode` through 0 → 1 → 2 → 0 (perf-counter readout style). |
| `g_CheatStr_ShowFPS` | `NOLOCK` | "FPS: %3.2lf" | **Not an overlay** — a two-press benchmark. The first press sets `skip_frame_render`, which makes `processFrame` skip the 3D render entirely, and starts a frame counter; the second clears it and displays the frame rate measured over that interval. The screen stays blank while it runs. |
| `g_CheatStr_SingleStep` | `STEP` | "Single step on/off" | Toggles `wait_for_keypress` — a pause-the-world frame stepper. |
| `g_CheatStr_TimeFactor` | `TIME` | (asks via dialog) | Opens an `Enter time factor` prompt; sets `time_scale_factor`. |
| `g_CheatStr_MovieRecording` | `MOVIE` | "Press CTRL+V to begin recording." | Walks user through FPS / frame count / width / height prompts; arms movie recording. Triggered by Ctrl+V while armed. |
| `g_CheatStr_ToggleRenderMode` | `T2000` | (generic ack) | **Chrome/mirror finish on the world** — the name is the T-1000 joke. A boolean toggle, not a cycle: `render_mode = (render_mode == 0)`. The `CDemonSet` batch renderers read it as `if (render_mode != 0 && getFaceCount() == 0)` and divert the batch into `renderEnvMapBatchTri`/`Quad` → `renderEnvMapPrimitives`, which calls `captureTexture(&g_EnvMapTexture)` and generates each vertex's UV from its **normal** (`g_VertexNormalArray[i].x + 0x8000`, `0x8000 - .y`) — a classic sphere map. Two modes exist: **1** (what the cheat gives) fades the reflection with distance via `(0xffff - g_PerspectiveReciprocal) * alpha`; **2** is solid, using `g_CurrentAlphaValue << 8`. `CSvetlana::renderOpaque` forces the field to 2 around its own draw and restores it afterwards — that env-mapped sheen *is* the ghost's material, so the cheat is really "render the world the way Svetlana is rendered". |
| `g_CheatStr_ToggleCutscene` | `NOD3D` | (generic ack) | **A boolean toggle** of `scripted_sequence_active`. All five `CDemonSet` batch render paths (`renderFaceBatchOrEnvMap`, `renderFaceListOrEnvMap`, `renderPrimitiveBatch`, `renderPrimitiveList`, `renderTexturedPrimitiveListVariant`) open with `if (g_CGamePtr->scripted_sequence_active == 0)`, so setting it **suppresses set geometry rendering**. `CGame::ctor` and `CGame::runGameSession` both clear the field, so it does not survive the start of a session. |
| `g_CheatStr_ClearFramebuffer` | `BLANK` | (generic ack) | **Not a toggle and nothing to do with `screen_clear_enabled`**: a one-shot `CDemonCamera::clearFramebufferAndWorkBuffers(&g_CDemonCameraInstance, 0xff00ff)`, filling the framebuffer and work buffers with magenta. |
| `g_CheatStr_RaiseEvent` | `RAISE` | (asks via dialog) | Opens `Raise an event` prompt — type any event name to trigger it. |

## Gameplay / hero state

| Cheat global | Type | In-game message | Effect |
|---|---|---|---|
| `g_CheatStr_GodMode` | `GODGAMES` | "God mode enabled/disabled" | Toggles `god_mode_enabled`. On the enabling edge it also sets the hero's `hit_points` to 100. **Does not cover a lethal-height fall** — see below. |
| `g_CheatStr_RestoreHealth` | `HEALME` | "Health restored." | Sets the hero's `hit_points` to 100. |
| `g_CheatStr_RestoreBattery` | `RECHARGE` | "Flashlight battery restored" | Sets `inventory.battery_charge` to 100. |
| `g_CheatStr_FreezeEnemies` | `FREEZER` | "Enemies frozen/thawed" | Pauses all enemy AI. |
| `g_CheatStr_KillNearby` | `BIGBOOM` | (generic ack) | Walks `g_CDemonSetPtr->enemies` and deals a 100-point `SDamageInfo` to every one within **50 world units** of the hero. |
| `g_CheatStr_Dismemberment` | `GOREMODE` | "Gratuitous dismemberment enabled/disabled" | Toggles the (already-extra) gore system on top. |
| `g_CheatStr_ResetEffects` | `DARK` | (generic ack) | One-shot `CDemonCamera::setEffectIntensity(&g_CDemonCameraInstance, 0.0)` — clears the active camera effect. |
| `g_CheatStr_ManualAim` | `MANUAL` | "Manual aim enabled" | Switches aim mode. |
| `g_CheatStr_AutoAim` | `AUTO` | "Auto aim enabled" | Switches aim mode (counterpart of above). |
| `g_CheatStr_FlamingAmmo` | `BURNINGSTAKE` | "Flaming ammo enabled" / "...only on the crossbow." | Sets `ammo_type` to `AMMO_TYPE_FLAMING` on **`inventory.selected_weapon` only**, and refuses unless that weapon `isOfClass("CCrossbow")`. Toggling it back sets `AMMO_TYPE_GENERIC`. Nothing happens at all if no weapon is selected. |
| `g_CheatStr_WeatherRain` | `THUNDERSTORM` | (generic ack) | Forces rain weather. |
| `g_CheatStr_WeatherSnow` | `SNOWSTORM` | (generic ack) | Forces snow weather. |
| `g_CheatStr_OldHat` | `OLDHAT` | (generic ack) | Equips `oldhat.kfm`. |
| `g_CheatStr_BigHat` | `BIGHEAD` | (generic ack) | The hat swap (`big-hat.kfm` vs. `stranger-hat.kfm`) is the *smaller* half. It also multiplies the rest pose of the `Bip01 head`, `bipltit02` and `biprtit02` bones — and every bone parented to them, via `scaleBoneRecursive` — by **4.0** on every character in the current set, and by **0.25** to undo. It is a delta, not a state: the code picks the factor from the toggle and never reads the flag, so re-applying compounds. Plays `burp2.wav` / `burp1.wav` rather than `cheat-1.wav`. Only the set that is loaded when it fires is scaled. |
| `g_CheatStr_GasMask` | `IFARTED` | "You've got a gasmask!" | Spawns a `CGasMask` actor. |
| `g_CheatStr_SkeletonKey` | `SKELETONKEY` | "You have the skeleton key" | Adds `Skeleton_key` to inventory; spawns `CKeyActor`. |

## God mode does not survive a fall

Verified by playing it: with `GODGAMES` on, enemies deal no damage and the hero makes no pain sounds — and then a jump off a staircase kills them at 100 hit points.

The guard itself is only ever `damage_info->damage_amount = 0.0;`, in each playable class's `processDamage` (`CStranger`, `CSvetlana`, `CScat`, `CGabriella`, `CColonel`, `CIcePick`, `CHaystack`), plus two early-outs in `CHero::testCylinderCollision` / `testLineIntersection` that make the hero untargetable. Everything that deals damage goes through that, including `CCharacter::kill` — the vtable slot crushing platforms, the pendulum trap and script commands use — because `kill` just builds an `SDamageInfo` with `damage_amount = 9999.0` and calls `processDamage`. So god mode covers all of it.

Falling is the exception, and only because of the order the landing handler works in. `CStranger::processFrame`:

```c
fVar17 = -this_ptr->fall_velocity_snapshot;         // downward speed on landing
if (fVar17 < 20) { /* soft landing animation */ }
else {
    lethal = 0;
    SDamageInfo_ctor(&dmg);
    dmg.damage_amount = (fVar17 - 20.0f) * 5.0f;
    if (dmg.damage_amount > 100.0f) {
        lethal = 1;                                  // latched from SPEED, before any damage
        dmg.damage_amount = 9999.0;
    }
    this_ptr->base.invincibility_timer = 0.0;
    processDamage(this_ptr, &dmg);                   // god mode zeroes the damage here
    if ((hit_points <= 0.0) || lethal) {             // ...but the latch still stands
        setDesiredState(motion_controller, 0x12, 1); // death animation
```

The fatality is decided from fall speed *before* the damage is dealt, and OR'd with the health test rather than folded into it. God mode zeroes the damage, so `hit_points` never moves — and it makes no difference, because the latch alone takes the death branch. `CCharacter::getDeathState` then reports `DEATH_STATE_DEAD` from the **animation state name** (`"DIE*"` → DYING, `"DEAD"` → DEAD), not from health, so a hero at full health in the death animation is dead.

Confirmed in the asm, where the latch is unambiguous — one stack slot, integer-compared:

```
005bda98  MOV [ESP+0x280],EDX        ; latch = 0   (ESP 4 lower here; same slot as 0x27c)
005bdac1  CMP [ESP+0x38],0x42c80000  ; damage > 100.0f ?
005bdad5  MOV [ESP+0x27c],EDX        ; latch = 1
005bdadc  MOV [ESP+0x38],0x461c3c00  ; damage = 9999.0f
005bdaf6  CALL [EDX+0x11c]           ; processDamage
005bdafc  FLD [EBX+0x243c] / FLDZ / FCOMPP   ; hit_points <= 0 ?
005bdb0c  JNC 005bdb18               ; yes -> die
005bdb0e  CMP [ESP+0x27c],0x0        ; else test the latch
005bdb16  JZ  005bdb4b               ; clear -> survive
005bdb18  PUSH 1 / PUSH 0x12 / setDesiredState
```

Thresholds: below 20 units/s is a soft landing, above that costs `(speed - 20) * 5`, and past 100 damage the landing is fatal outright.

**Only `CStranger` has this block** — it is the only function in either binary containing the `"Splat at %3.2f fps\n"` console trace, so the other playable classes have no fall-death path at all.

**Build flag.** `NOCTURNE_AUTHENTIC_GOD_MODE_FALL` (`shim_config_authentic.h`) selects the behaviour: `1` keeps the shipped outcome, `0` (default) clears the latch when `processDamage` zeroed the damage, so god mode covers falls too. It keys off the damage being zeroed rather than off `god_mode_enabled`, so it equally covers the script-driven `allow_damage_flag` — a cutscene that turns damage off otherwise cannot stop a scripted fall from killing the player.

## Weapons & ammo

Each gives the named weapon (or ammo) and announces it.

**None of these is idempotent.** `giveHeroWeapon` calls `createActorByName` and `CInventory::addItem` unconditionally, so typing a code twice puts two of the weapon in the inventory; `giveHeroWeaponAmmo` likewise allocates a fresh `CAmmo` every time. Since `CInventory::load` carries the inventory from one mission to the next, anything that re-applies these across a chapter transition has to guard them itself (`CInventory::hasItemOfClass` for weapons; for ammo, match the `weapon_class_name` + `ammo_type` pair, because every round in there is a `CAmmo`). `SKELETONKEY` is the exception — it checks `findItemByName("Skeleton_key")` first.

| Cheat global | Type | Gives | In-game message |
|---|---|---|---|
| `g_CheatStr_Shotgun` | `GUNRACK` | `CShotgun` | "You have the shotgun" |
| `g_CheatStr_Crossbow` | `STAKEGUN` | `CCrossbow` | "You have the crossbow" |
| `g_CheatStr_Dynamite` | `BLOWME` | `CDynamite` | "DY-NO-MITE" |
| `g_CheatStr_FlameThrower` | `FTHROWER` | `CFlameThrower` | "Fire! Fire! Fire!" |
| `g_CheatStr_TommyGun` | `MACHINEGUN` | `CTommyGun` | "You have the tommy gun" |
| `g_CheatStr_BaronWeapon` | `SATURDAY` | `CBaronWeapon` | "You can now summon the baron" |
| `g_CheatStr_ElephantGun` | `ELEGUN` | `CElephantGun` | "You have the elephant gun" |
| `g_CheatStr_LightGun` | `LITEGUN` | `CLightGun` | "You have the charged radiance emitter" |
| `g_CheatStr_AllWeapons` | `WINBLOWS` | Silver/Lithium/Mercury for `CGun`, then `CShotgun`, `CCrossbow` (+ Holy), `CDynamite`, `CFlameThrower`, `CTommyGun`, `CElephantGun`, `CLightGun`. **Not** `CBaronWeapon` — `SATURDAY` is the only way to get that. Also forces `god_mode_enabled = 1` and sets the hero's `hit_points` to 100. | "You've got all the weapons" |
| `g_CheatStr_MoreAmmo` | `MOREAMMO` | +100 to `inventory.selected_weapon->ammo_count`, whatever weapon that is — not specifically standard rounds. Does nothing if no weapon is selected. | "You just got 100 more bullets" |
| `g_CheatStr_SilverAmmo` | `SILVER` | `AMMO_TYPE_SILVER` for `CGun` | (generic ack) |
| `g_CheatStr_LithiumAmmo` | `AQUA` | `AMMO_TYPE_LITHIUM` for `CGun` | (generic ack) |
| `g_CheatStr_MercuryAmmo` | `MERCURY` | `AMMO_TYPE_MERCURY` for `CGun` | (generic ack) |

## Special: `headOfHorror`

Unlike all other cheats, `headOfHorror` is **event-system-triggered**, not key-typed. It is also the reason the catalogue is "45 codes but 46 cheats": there are exactly 45 `g_CheatStr_*` globals, and this one has none. The check sits at the very top of `CGame::processCheatCodes`, before the keystroke loop:

```cpp
iVar9 = CEventList::evaluateCondition(g_CEventListPtr, "headOfHorror");
if (iVar9 != 0 && g_CGamePtr->head_of_horror_cheat != 0x29a) {
    g_CGamePtr->head_of_horror_cheat = 0x29a;   // sentinel: cheat consumed
    displayMessage("The horror has been unleashed.");
    playSound("cheat-1.wav");
}
```

The cheat fires when the script/event system raises a condition named `"headOfHorror"` — reachable in-game through the `RAISE` cheat, which prompts for any event name. **Persistence**: `head_of_horror_cheat` (CGame offset `0x214`, initially `0`) gets set to `0x29a` when consumed; this value is written to / read from `nocturne.ini`'s `[Debug] headOfHorrorCheat` so the unlock survives restarts. The sentinel `0x29a` decimal == 666.

### What it unlocks: a developer's head replaces the moon

`CMoon::init` is the **only** consumer of the flag anywhere in the binary, and it settles the question outright:

```cpp
if (this_ptr->is_loaded == 0) {
    if (g_CGamePtr->head_of_horror_cheat == 0x29a) {
        CKeyFramedModel::load(&this_ptr->moon, "taylor_head.kfm");
        g_CGamePtr->head_of_horror_cheat = 0;      // consumed
    }
    else {
        CKeyFramedModel::load(&this_ptr->moon, "moon.kfm");
    }
    ...
```

The moon hanging over the main menu — the backdrop `showMainGameMenu`, `showOptionsScreen` and the Cheats pages all draw against — is a `CKeyFramedModel`. With the flag set, it loads **`taylor_head.kfm`** instead: a studio in-joke that puts a team member's head in the sky where the moon should be. "The horror has been unleashed" is the message because the horror is a colleague's face.

The assets ship in `STARTUP.POD` and are still there:

```
MODELS\TAYLOR_HEAD.KFM     62699 bytes
ART\TAYLOR_HEAD.ACT          768 bytes   256-entry palette
ART\TAYLOR_HEAD.RAW        65536 bytes   256x256 8-bit indexed
```

Rendering the `.RAW` through its `.ACT` palette gives a photographic head texture — a bearded man's face front-on, the same head in profile, and a separate hair patch, laid out as one skin for the model. Photo-sourced, not painted. No one named Taylor appears in the game's public credits, so the surname is presumably a Terminal Reality staff member who is not individually credited.

**One-shot per process.** `CMoon::init` zeroes the flag as it consumes it, and its whole body is behind `if (is_loaded == 0)`, so the head appears for the menu of the session in which it is triggered and the ini goes back to `headOfHorrorCheat=0`.

**Retail `nocturne.exe` does the same thing**, so this is not an editor-only joke. `CMoon::init_FUN_004de860` has the identical branch — `CMP ECX,0x29a` on `[EDX+0x214]`, `PUSH 0x58a8ae` (`"taylor_head.kfm"`), then `MOV dword ptr [EAX + 0x214],0x0` to consume it — reached the same way, immediately before the `menubat.kfm` load.

**A widely repeated claim that is wrong:** several cheat sites state that `headOfHorrors` "enables the BigBoom code" — that `BIGBOOM` does nothing until head-of-horror has been triggered. It does not. `BIGBOOM` sits at `LAB_004df408` in `CGame::processCheatCodes`, outside the head-of-horror check *and* outside the `developer_mode_enabled` gate, and never reads `head_of_horror_cheat`. Across both binaries the flag has exactly one reader, and it is the moon.

## Notes on the encryption choice

The scheme is **trivially recoverable**: a single-byte XOR key with a deterministic 8-bit multiplicative-step schedule, plus a fixed `>>>ENCRYPTED_MESSAGE[` filler tag in every encrypted blob. Anyone with the binary can recover all cheats with ~50 lines of Python (see `decrypt_cheats.py`). The intent was probably just to keep the strings out of `strings(1)` output for casual disassembly — not a real protection mechanism. The filler tag itself acts as a self-test that decryption ran correctly (every blob's offsets 2..0x16 must decrypt to the same string), and the `buf[2] ^ buf[0] == 0x3E` header check catches double-decryption attempts (decrypted text won't have `'>'` at offset 2 unless it starts with that letter, which isn't typeable).
