# Cheat Codes

Typed character sequences matched against an input history (`g_InputHistory[20]`, holding the last 20 uppercased keystrokes). Each cheat name has a corresponding **encrypted byte array** in `globals/include/constants/constants_620000.h`:

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

## Cheat-input control flow

Located in `CGame::processCheatCodes_FUN_004ddaf0`:

1. The whole loop is gated by `if (g_ModalDialogActive == 0)` — cheat input is suppressed whenever a pick-list pop-up dialog has focus. See [`runtime_debug_flags.md`](runtime_debug_flags.md) for what else this gate covers; under normal play it's `0` so cheats are accepted.
2. **`F10` opens an explicit dialog** (`CEditorTools::showCheatInputDialog`); the typed text is enqueued as fake key presses via `wincore_winrun_cpp_enqueueInput_FUN_005f2f30`.
3. Otherwise the loop polls real keystrokes via `wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00`, uppercases them via `engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470`, and prepends to `g_InputHistory`.
4. For each cheat, the encrypted string is decrypted, length is computed, and the suffix of `g_InputHistory` is character-by-character compared (with `toupper`).
5. On a match, the input history is reset (`g_InputHistory[1] = '\0'`) so the same keys don't re-trigger immediately.

## Master / debug

| Cheat global | Type | In-game message | Effect |
|---|---|---|---|
| `g_CheatStr_DebugMode` | `GOLDMODE` | "Buy Fly! today!" | Toggles `developer_mode_enabled`; plays `buy-fly-today.wav`. The in-joke unlock for full dev mode. |
| `g_CheatStr_GeometryDebug` | `PORTER` | (generic ack) | Toggles `geometry_debug_enabled`. |
| `g_CheatStr_CollisionDebug` | `COLLISION` | (generic ack) | Toggles `collision_render_enabled`. |
| `g_CheatStr_EventDebug` | `EVENT` | "Event debug on/off" | Toggles event-system debug logging. |
| `g_CheatStr_ScriptDebug` | `SCRIPT` | "Script debug on/off" | Toggles script-engine debug logging. |
| `g_CheatStr_MemoryDebug` | `MEMORY` | "Memory debugging on/off" | Toggles memory-allocator debug logging. |
| `g_CheatStr_SoundDebug` | `SFXDEBUG` | (sound debug ack) | Toggles sound-system debug logging. |
| `g_CheatStr_ProfileMode` | `PROFILE` | (profile-mode ack) | Cycles `profile_mode` (FPS/perf counter readout style). |
| `g_CheatStr_ShowFPS` | `NOLOCK` | "FPS: %3.2lf" | Toggles permanent FPS overlay. |
| `g_CheatStr_SingleStep` | `STEP` | "Single step on/off" | Pause-the-world frame stepper. |
| `g_CheatStr_TimeFactor` | `TIME` | (asks via dialog) | Opens an `Enter time factor` prompt; sets `time_scale_factor`. |
| `g_CheatStr_MovieRecording` | `MOVIE` | "Press CTRL+V to begin recording." | Walks user through FPS / frame count / width / height prompts; arms movie recording. Triggered by Ctrl+V while armed. |
| `g_CheatStr_ToggleRenderMode` | `T2000` | (generic ack) | Cycles render mode. |
| `g_CheatStr_ToggleCutscene` | `NOD3D` | (generic ack) | Toggles cutscene-related state. |
| `g_CheatStr_ClearFramebuffer` | `BLANK` | (generic ack) | Toggles the framebuffer-clear behavior (`screen_clear_enabled`). |
| `g_CheatStr_RaiseEvent` | `RAISE` | (asks via dialog) | Opens `Raise an event` prompt — type any event name to trigger it. |

## Gameplay / hero state

| Cheat global | Type | In-game message | Effect |
|---|---|---|---|
| `g_CheatStr_GodMode` | `GODGAMES` | "God mode enabled/disabled" | Hero invincibility toggle. |
| `g_CheatStr_RestoreHealth` | `HEALME` | "Health restored." | Refills hero HP. |
| `g_CheatStr_RestoreBattery` | `RECHARGE` | "Flashlight battery restored" | Refills the flashlight. |
| `g_CheatStr_FreezeEnemies` | `FREEZER` | "Enemies frozen/thawed" | Pauses all enemy AI. |
| `g_CheatStr_KillNearby` | `BIGBOOM` | (generic ack) | Damages all enemies within radius. |
| `g_CheatStr_Dismemberment` | `GOREMODE` | "Gratuitous dismemberment enabled/disabled" | Toggles the (already-extra) gore system on top. |
| `g_CheatStr_ResetEffects` | `DARK` | (generic ack) | Resets active particle/visual effects. |
| `g_CheatStr_ManualAim` | `MANUAL` | "Manual aim enabled" | Switches aim mode. |
| `g_CheatStr_AutoAim` | `AUTO` | "Auto aim enabled" | Switches aim mode (counterpart of above). |
| `g_CheatStr_FlamingAmmo` | `BURNINGSTAKE` | "Flaming ammo enabled" / "...only on the crossbow." | Crossbow flaming bolts. |
| `g_CheatStr_WeatherRain` | `THUNDERSTORM` | (generic ack) | Forces rain weather. |
| `g_CheatStr_WeatherSnow` | `SNOWSTORM` | (generic ack) | Forces snow weather. |
| `g_CheatStr_OldHat` | `OLDHAT` | (generic ack) | Equips `oldhat.kfm`. |
| `g_CheatStr_BigHat` | `BIGHEAD` | (generic ack) | Equips `big-hat.kfm` (vs. `stranger-hat.kfm`). |
| `g_CheatStr_GasMask` | `IFARTED` | "You've got a gasmask!" | Spawns a `CGasMask` actor. |
| `g_CheatStr_SkeletonKey` | `SKELETONKEY` | "You have the skeleton key" | Adds `Skeleton_key` to inventory; spawns `CKeyActor`. |

## Weapons & ammo

Each gives the named weapon (or ammo) and announces it.

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
| `g_CheatStr_AllWeapons` | `WINBLOWS` | All of the above + `MoreAmmo` for `CGun` (Silver/Lithium/Mercury) + Holy ammo for crossbow | "You've got all the weapons" |
| `g_CheatStr_MoreAmmo` | `MOREAMMO` | +100 standard rounds | "You just got 100 more bullets" |
| `g_CheatStr_SilverAmmo` | `SILVER` | `AMMO_TYPE_SILVER` for `CGun` | (generic ack) |
| `g_CheatStr_LithiumAmmo` | `AQUA` | `AMMO_TYPE_LITHIUM` for `CGun` | (generic ack) |
| `g_CheatStr_MercuryAmmo` | `MERCURY` | `AMMO_TYPE_MERCURY` for `CGun` | (generic ack) |

## Special: `headOfHorror`

Unlike all other cheats, `headOfHorror` is **event-system-triggered**, not key-typed. `CGame::processCheatCodes` (line 233) checks:

```cpp
iVar9 = CEventList::evaluateCondition(g_CEventListPtr, "headOfHorror");
if (iVar9 != 0 && g_CGamePtr->head_of_horror_cheat != 0x29a) {
    g_CGamePtr->head_of_horror_cheat = 0x29a;   // sentinel: cheat consumed
    displayMessage("The horror has been unleashed.");
    playSound("cheat-1.wav");
}
```

The cheat fires when the script/event system raises a condition named `"headOfHorror"`. **Persistence**: `head_of_horror_cheat` (CGame offset `0x214`, initially `0`) gets set to `0x29a` when consumed; this value is written to / read from `nocturne.ini`'s `[Debug] headOfHorrorCheat` so the unlock survives restarts. The sentinel `0x29a` decimal == 666 — strong hint at gore/lore-related content.

What it actually unlocks needs runtime testing. The fact that it short-circuits via the CGame field rather than triggering content directly suggests it's checked elsewhere in script/event code as a one-shot reward gate.

## Notes on the encryption choice

The scheme is **trivially recoverable**: a single-byte XOR key with a deterministic 8-bit multiplicative-step schedule, plus a fixed `>>>ENCRYPTED_MESSAGE[` filler tag in every encrypted blob. Anyone with the binary can recover all cheats with ~50 lines of Python (see `decrypt_cheats.py`). The intent was probably just to keep the strings out of `strings(1)` output for casual disassembly — not a real protection mechanism. The filler tag itself acts as a self-test that decryption ran correctly (every blob's offsets 2..0x16 must decrypt to the same string), and the `buf[2] ^ buf[0] == 0x3E` header check catches double-decryption attempts (decrypted text won't have `'>'` at offset 2 unless it starts with that letter, which isn't typeable).
