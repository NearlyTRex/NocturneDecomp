# Retail vs Editor — Open Mysteries and Stubbed Features

The `nocedit.exe` you decompile here is the *editor build*. The retail Nocturne shipped a separate (probably very similar) player executable that we don't have. Some user-facing features that exist in the binary's code never reach the user — either because the editor build hardcodes them off, or because the menu entry that would have invoked them is missing.

This doc collects mysteries about retail-vs-editor differences as they're investigated. Each section: **the question** → **what we found** → **what remains uncertain**.

## 1. Why is 3D acceleration permanently disabled in the Graphics Options menu?

**Question:** In the editor binary's options screen, the "3D API" line shows `Acceleration disabled in editor` and the user can't enable hardware rendering — only software. Where's the gate?

**Answer (definitive): two redundant hardcoded kills.**

### Kill #1 — Graphics options menu re-render (per frame)

In `core/menu.cpp:configureGraphicsOptions_FUN_00510c80` (line 192–195), every render pass through the options screen unconditionally clobbers the flag:

```c
g_UseDirect3D = 0;
pcVar14 = getLocalizedString("Acceleration disabled in editor");
_sprintf(g_GraphicsMenuTextBuffers[2], pcVar14);
```

That's why even if the user hits the "3D API" cycle option (`case 3:` in the same function — which would normally rotate `g_RendererDllPath` between `tridx6.dll` / `tridx7.dll` / `trid3d.dll` / `tri3dfx.dll`), the next frame's render-pass writes `g_UseDirect3D = 0` again before the user sees it stick. The menu line itself is overwritten with the localized "Acceleration disabled in editor" string each frame, so cycling has no visible effect.

The string `"Acceleration disabled in editor"` is a literal in the binary at this exact spot — not gated by `VELOCITY` / `SPOOKHOUSE` env vars, not gated by any runtime flag. If the editor build's compile-time switch is on, this line runs.

### Kill #2 — Dev-tools menu entry

`core/main.c:enterMainGameMenu_FUN_00507a50` (line 173) also force-zeroes the flag when the user presses Ctrl+D / Ctrl+L to enter the developer tools menu, displaying "3D acceleration has been turned off!" before opening the menu. See [`developer_tools_menu.md`](developer_tools_menu.md) for context.

### Restoration plan — `NOCTURNE_AUTHENTIC_D3D_OPTIONS`

The flag follows the `NOCTURNE_AUTHENTIC_*` polarity convention — `1` means "match `nocedit.exe` as-shipped" (kills active, 3D forced off) and `0` (default) means "dev-friendly mode" (the working retail-like behavior). Required keep edits:

- `core/menu.cpp/configureGraphicsOptions_FUN_00510c80.keep.cpp` — wrap lines 192–195 (the per-frame `g_UseDirect3D = 0` clobber + "Acceleration disabled in editor" text) in `#if NOCTURNE_AUTHENTIC_D3D_OPTIONS`. When the flag is `0`, the existing "3D API : DirectX 5/6/7" / etc. strings on lines 197–220 take over and 3D-API cycling sticks.
- `core/main.c/enterMainGameMenu_FUN_00507a50.keep.c` and `core/menu.cpp/showMainGameMenu_FUN_00512f40.keep.cpp` — wrap the `g_UseDirect3D = 0` line that runs on Ctrl+D entry (and the "3D acceleration has been turned off!" splash) in `#if NOCTURNE_AUTHENTIC_D3D_OPTIONS`.

Default (`= 0`) leaves the kill code compiled out, exposing 3D-API cycling. Override with `-DNOCTURNE_AUTHENTIC_D3D_OPTIONS=1` to compile the kill code in and match the shipped editor binary.

### What about the ini round-trip?

`useDirect3D` in `nocturne.ini`'s `[Graphics]` section reads into `g_UseDirect3D` at startup (per [`ini_settings.md`](ini_settings.md)). Setting `useDirect3D=1` in the ini *does* survive long enough to reach the renderer-DLL load path — but the next time the user opens Graphics Options, the per-frame clobber kicks in and writes `0` back. The save path then writes `0` to disk on shutdown. So the only way to actually run with D3D in the editor binary is to (a) skip the Graphics Options menu, (b) skip the dev-tools menu, and (c) make the ini read-only — at which point the in-game render path would honor the flag.

The retail build presumably doesn't have the line-192 clobber; it probably has the Graphics Options menu actually do what the user clicks.

## 2. Why don't cutscene voices play (.mp3) when the subtitles still show?

**Question:** Subtitles render correctly during cutscenes, but the voice MP3s never play. Is there a hardcoded "voices off" flag like the D3D one?

**Answer (partial): no flag found, but the streaming-playback entry point is orphaned.**

### What we found

**Dialog filename resolution.** `core/script.cpp:CScript::dbLoad_FUN_005603c0` (lines 95–113) loads dialog entries from script files. For each dialog string, it tries the filename + `.wav` first, falls back to `.mp3` if the wav is missing, and falls back to the bare name (no extension) if both are missing. The resolved name is stored in the dialog database.

**MP3 playback path is wired.** `sound/sndmain.cpp:startSfx_FUN_005a8e90` (lines 117–184) detects `.mp3` extensions on incoming filenames, allocates a `CMP3Decoder`, calls `openFile`, sets `streaming_flag = 1`, and queues the sample for playback. So when *anything* calls `startSfx` with an MP3 path, the streaming pipeline runs. The full MP3 decoder in `sound/mp3.cpp` is intact.

**`loadStreamingSoundFile` is orphaned.** `sound/sndmain.cpp:loadStreamingSoundFile_FUN_005a5200` is a separate, fully-implemented streaming-load function that allocates a `CMP3Decoder`, calls `openFile`, computes streaming buffer size, and stores the slot. **It has zero callers anywhere in the binary** (only its own prototype declaration in `prototypes_5A0000.h`). This looks like the dedicated dialog/cutscene streaming entry point — wired into the data side (CMP3Decoder, CSfxSample.streaming_flag, CSfxSlot tracking) but **the call site that would have invoked it during cutscene playback is missing**.

**No "voices off" global flag.** Searched for `voice_*`, `speech_*`, `dialog_disabled`, `cinematic_audio` — nothing matches.

**Subtitle render is purely visual.** `core/script.cpp:CScript::renderSubtitles_FUN_00559b20` only touches the framebuffer. It doesn't trigger audio.

### Best-guess explanation

The dialog filenames resolve to `.mp3` (since the retail data ships that way), the script-step interpreter probably calls something like `loadStreamingSoundFile` or a sibling — but **the line that does that has been compiled out of the editor build**. The dialog database is built (and subtitles render from it), but the audio-trigger call is missing.

Alternative explanation we couldn't rule out: file-not-found at runtime. If the user's `sound/` POD doesn't actually contain the `.mp3` voice files (because the editor build ships only sound effects, not dialogue audio), `dbLoad` falls back to the bare-name path and `startSfx` never gets called.

### What remains uncertain

- **Where does the script interpreter trigger dialog audio?** We didn't trace `CScript::step` (the giant scripting interpreter) end-to-end. The trigger could be there in a form we missed, or it could be missing entirely. Worth a thorough search for any caller of `loadStreamingSoundFile` in `core/script.cpp` once that function gets analyzed in depth.
- **Is the data even shipped?** Run the editor build with file-access logging (or `pod.ini` debug) to see whether the cutscene `.mp3`s exist in any mounted POD. If they don't, that's the real answer regardless of the call-site investigation.
- **Did the retail build remove the orphan or did the editor build remove the caller?** Without the retail binary it's hard to say which side dropped the link.

### Restoration plan — `NOCTURNE_AUTHENTIC_VOICE`

The flag follows the `NOCTURNE_AUTHENTIC_*` polarity convention — `1` means "match `nocedit.exe` as-shipped" (silent cutscenes, no voice playback) and `0` (default) means "dev-friendly mode" (voices play). It's currently a placeholder — no keep file is wired to read the flag yet because the missing call site hasn't been pinned down. Two paths forward:

- **Path A (preferred): find the original caller.** Investigate `core/script.cpp/CScript_step_FUN_0055a810` end-to-end (or the dialog opcode dispatch within it). Find where `dialog_entries[i].data` (the resolved filename) gets passed to a sound-system function. Compare against the retail build's behavior: a `loadStreamingSoundFile` call (or equivalent through `startSfx` with the resolved `.mp3` filename) probably belongs there. Once located, write a keep that wraps the call in `#if !NOCTURNE_AUTHENTIC_VOICE`.
- **Path B (decoupled): add a shim helper.** Define `nocturne_play_dialog(name)` in `shims/dump.cpp` (or a new `shims/dialog.cpp`). Internally call `loadStreamingSoundFile` + `startSfx` when `!NOCTURNE_AUTHENTIC_VOICE` (dev-friendly); no-op otherwise. Have the script-step keep call this shim from wherever subtitles are queued — even if it's not at the original retail call site, the audio will play in sync with the subtitle.

Default (`= 0`) plays voices. Override with `-DNOCTURNE_AUTHENTIC_VOICE=1` to revert to the shipped editor binary's silent cutscenes.

## 3. Why does START show every `.msn` file in a flat picker instead of the curated chapter list?

**Question:** Booting the editor build with a retail data set, pressing START on the main menu opens a generic "Select mission to play" dialog listing every `.msn` file in `world/`. The retail player binary instead shows a curated Volume 1–5 pick list, then a Chapter 1–N pick list once a volume is chosen. Data files are identical between the two runs — only the exe differs. What's the gate?

**Answer (definitive): the presence of `pod.ini` in the working directory.**

### What we found

`core/game.cpp:CGame_showChapterSelect_FUN_004e1cb0` opens `pod.ini` near the top, closes it immediately, and **keeps the file pointer's non-null-ness as a sentinel**:

```c
p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0("pod.ini", (char *)0x0, "rt", ...);
if (p_Var3 != (_FILE *)0x0) {
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3, ...);
}
// p_Var3 retains the opened-pointer value here (used as boolean below)
```

A few lines later, the dispatch:

```c
if (bVar8 || p_Var3 != (_FILE *)0x0) {
  iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr, "Select mission to play", "world", "*.msn",
                     local_144, 0);
  // → generic flat .msn picker, then jump straight to load
}
else {
  // → curated Volume 1–5 / Chapter pick-list UI
}
```

`bVar8 = (select_mode == 1)` — the other trigger, set by the caller. The pod.ini trigger fires whenever the file simply *exists* in cwd; contents don't matter (the file is closed without being read).

### Verified empirically

Removing `pod.ini` from `nocedit.exe`'s working directory restores the curated chapter UI on START.

### Why this gate exists

`pod.ini` is the dev/editor-side pod override list ([`ini_settings.md`](ini_settings.md) §`pod.ini`) — present when you're running from a working dir that has loose `.pod` overrides to mount in a specific order, absent in retail installs where the pod scanner just picks up everything in cwd alphabetically. So "pod.ini exists" is being repurposed here as "this is a dev environment, show the dev UI." Retail ships without `pod.ini`, falls through to the chapter list.

### What remains uncertain

- The retail player binary (`nocturne.exe`) presumably never reaches this function at all — or has a different/simpler version. The editor binary's "if dev environment, show the editor picker" branch is a likely candidate for the divergence between the two builds.
- It's possible the retail build inverts the test or removes the branch entirely.

### Restoration plan — none needed

This isn't a "kill" the editor build hardcoded — it's a runtime decision driven by an external file. Users who want the curated chapter UI just delete (or rename) `pod.ini`.

## 4. Why is video resolution capped at 640×480, and why don't graphics-options changes (e.g. flashlight halo) persist?

**Question:** In the editor binary's Graphics Options screen you can never pick a resolution above 640×480, and tweaks made there (flashlight halo, etc.) appear not to survive a relaunch. Two separate causes, so two answers.

**Answer (resolution): definitive — a consequence of §1 (hardware acceleration is force-disabled).**
**Answer (persistence): the save path is correct and works on Windows; on the Linux port it silently fails because of an un-normalized `remove`/`rename` in the shim layer.**

### Part A — Resolution is capped at 640×480 (definitive)

The cap is downstream of §1: because the editor build forces `g_UseDirect3D = 0`, the software-render path applies *three* independent clamps to 640×480 (`0x280`×`0x1e0`):

1. **Per-frame menu clamp.** `core/menu.cpp:configureGraphicsOptions_FUN_00510c80` (lines 144–148) runs at the top of every menu frame:

   ```c
   if ((g_UseDirect3D == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
     g_CGamePtr->game_pixy = 0x1e0;   // 480
     g_CGamePtr->game_pixx = 0x280;   // 640
   }
   ```

   So even if some other code (or a hand-edited ini) sets a taller mode, the first frame of the Graphics Options screen knocks it back to 640×480 while acceleration is off.

2. **High-res modes are gated behind the external D3D renderer.** In the resolution-cycle handler (`case 0`, lines 397–492) the 800×600 / 1024×768 / 1280×1024 branches are all guarded by `bVar12` (`_stricmp(g_RendererDllPath,"trid3d.dll") != 0`, i.e. an *external hardware* renderer DLL is loaded) **and** video-memory thresholds (`local_1c[0]` from `getVideoMemory`, e.g. `> 12 MB`, `> 24 MB`). The software path satisfies neither, so the cycle only ever exposes 320×240 … 640×480.

3. **Mode-set fallback.** `core/game.cpp:CGame_setGameRes_FUN_004dade0` calls `setScreenResolution(pixx,pixy,bpp)`; if it returns 0 (failure) it overwrites the fields with 640×480 and retries, only hard-erroring if *that* also fails. So any mode the backend can't actually set silently degrades to 640×480.

The same per-frame clamp is re-applied on entry to the main menu (`core/main.c:enterMainGameMenu_FUN_00507a50` lines 24–27; `core/menu.cpp:showMainGameMenu_FUN_00512f40` lines 26–29) and the one-time `firstTimeFlag` calibration path forces 640×480×32 outright (`core/main.c:initializeGameSystems_FUN_00507a60` lines 124–131).

**Resolution doesn't persist either — and that's the clamp, not a save bug.** Because clamp #1 *writes* 640×480 into `g_CGamePtr->game_pixx/pixy` in memory, the next `writeIniData` (on Options exit) serializes the clamped 640×480 back to `gamePIXY`/`gamePIXX`. So a hand-edited `gamePIXY=600` is overwritten the first time you open and close the Options screen with acceleration off.

### Part B — Why other settings (flashlight halo) don't seem to persist

The persistence machinery itself is **correct**:

- **Write.** `core/inivar.cpp:writeIniData_FUN_004fc510` writes `haloMode` (and ~60 other keys) via `CIniFile::setInteger` → `setString` → `writeProfileString` → `engine/ini.cpp:CIni_writeProfileString_FUN_004fb660`, which rewrites `nocturne.ini` through a temp file (`fopen` original "rt" + temp "wt", copy/replace the one key, then `remove` + `rename`).
- **Read.** `core/inivar.cpp:readIniData_FUN_004fbd90` reads `haloMode` straight back into `g_CGamePtr->halo_mode` (lines 38–39). `CIniFile::getInteger` seeds the destination with its current value before parsing, so a *missing* key never clobbers the default.
- **No false skip.** The `CIni::initialized` flag tested in `writeProfileString` (line 29) is **not** an init guard — `findLineNumberOfVariable_FUN_004fb470` sets it to `1` on entry and only to `0` when the on-disk value already equals the new value (a "skip rewrite if unchanged" optimization). Changing the halo (different value) always proceeds to the rewrite.

So on the **original Windows `nocedit.exe`**, changing the halo in Graphics Options and backing all the way out of the Options screen *does* persist. (The catch worth knowing: `writeIniData` has exactly two callers — `core/menu.cpp:showOptionsScreen_FUN_00512d30` (lines 73/76) and `core/msnedit.cpp:CDemonMission_showOptionsMenu_FUN_00537680` (line 126) — both on the **Esc-exit of an Options menu**. There is *no* save-on-quit. Change a setting and then close the window or jump straight into a mission, and nothing is written.)

**On the decompiled Linux build, every ini write silently fails — this is the real "halo doesn't save" cause here.** `CIni_writeProfileString` finishes with bare CRT calls on the hard-coded Windows path:

```c
remove(filename);                 // filename == ".\\system\\nocturne.ini"
rename(acStack_216 + 2, filename); // temp == ".\\system\\nocturne.inx"
```

The shim layer's `normalize_path()` (`shims/watcom/crt.cpp:298`, translates `\`→`/` + case-insensitive component match) is wired into `fopen` (413), `freopen` (539), `stat` (678) and `utime` (697) — **but not `remove` or `rename`**, which fall through to libc unchanged. So:

- The temp file is *created* via `fopen("wt")` → normalized → written correctly to `system/nocturne.inx`.
- `remove(".\\system\\nocturne.ini")` and `rename("...nocturne.inx", "...nocturne.ini")` receive literal backslash names that don't exist on Linux, fail, and return non-zero — which the game ignores.
- `nocturne.ini` is therefore never replaced; the updated copy is stranded in an orphaned `system/nocturne.inx`.

Net effect: on Linux *no* `nocturne.ini` setting persists (halo, subtitles, controls, sound — all of it), which reads as "the editor doesn't save settings." (The temp name also has an off-by-one in the keep reconstruction — `acStack_216[strlen(filename)+1]='x'` overwrites the final `i` to make `…inx` instead of appending `…inix` — but that's harmless next to the missing path normalization.)

### What remains uncertain

- **Did the user's Windows-side "halo didn't save" impression conflate with resolution?** On Windows the halo round-trip is sound, so the most likely explanation for a Windows-only non-persist is either resolution (definitely non-persistent, Part A) generalized to "settings," or exiting without Esc-ing back through the Options screen. A clean Windows repro (change only halo, Esc fully out, relaunch, diff `nocturne.ini`) would confirm.
- **`firstTimeFlag` re-runs.** If something resets `firstTimeFlag` to 1 between runs, every launch forces 640×480×32 *and* re-runs calibration — worth checking whether the save path ever leaves it at 1.

### Restoration / fix plan

- **Persistence (Linux port) — the actionable fix.** Add `remove`/`rename` (and siblings like `_unlink`/`unlink`) shims in `shims/watcom/crt.cpp` that route the path(s) through `normalize_path()`, mirroring the existing `fopen`/`freopen` wrappers. That makes `CIni::writeProfileString`'s temp-swap land on the real `nocturne.ini` and fixes persistence for **all** ini-backed settings at once. (Optionally also fix the temp-name off-by-one so the intermediate file is `nocturne.inix`.) This is a substrate fix, so it follows the runnable-binary goal rather than the `NOCTURNE_AUTHENTIC_*` convention.
- **Resolution.** There is nothing to "restore" independently — the cap is the documented §1 consequence. Anything that lets `g_UseDirect3D` stay non-zero (e.g. the `NOCTURNE_AUTHENTIC_D3D_OPTIONS=0` default, which already removes §1's per-frame clobber) plus an external renderer path would let clamps #1/#2 relax; clamp #3 still requires the backend to actually accept the larger mode.

## 5. Why does the editor ask every renderer DLL for 23 entry points that no shipped DLL has? (definitive)

**Question:** `loadExternalRenderer` probes 60 `APIDLL*` export names, but the shipped
`tridx7.dll` exports 37. Is the editor build missing renderer functionality, and does that
explain why hardware rendering looks wrong in it?

**Answer (definitive): the editor was mid-migration to a hardware-T&L renderer DLL that never
shipped. The 23 extras are bound but never called, so they do not affect runtime behaviour.**

### The counts

Extracted from each build's `loadExternalRenderer`:

- `nocturne.exe` (retail, 1999-11-02) binds **37** names — exactly the set `tridx7.dll`,
  `tridx6.dll`, `trid3d.dll` and `tri3dfx.dll` export. Retail + shipped DLL is a matched pair.
- `nocedit.exe` (editor, 2000-01-10 — the *newer* build by two months) binds **60**.

The 23 the editor adds:

```
setAmbientLight   setLightVector   setLightConstants   setTransform   setViewport
setFog            enableClipping   enableCulling       setTextureClamp
getTextureHandle  getTextureInfo   lockTexture         unlockTexture
selectTextureBGRA updateTextureBGRA selectTextureByHandle
drawPolyList3     polyList
lockFrameX        unlockFrameX     toggleX             setVideoModeX     restoreVideoModeX
```

`setTransform` + `setViewport` + `setAmbientLight` + `setLightVector` + `setLightConstants` is
a transform-and-lighting pipeline — i.e. the DX7 hardware T&L that arrived in exactly that
1999-2000 window. The `*BGRA` / texture-handle group is a matching texture-management
overhaul, and the `*X` suffixes are second-generation variants of existing calls.

### Why it changes nothing at runtime

All 23 are bound with a plain `getProcAddress` and, unlike the required set, do **not** touch
`g_DLLFunctionsMissing` when they come back null — so the DLL still loads and validates. More
decisively: `g_APIDLL_setAmbientLight`, `g_APIDLL_setLightVector`, `g_APIDLL_setLightConstants`
and `g_APIDLL_setTransform` have **zero callers anywhere in the binary** outside
`loadExternalRenderer` / `initializeExternalRenderer` / `shutdownExternalRenderer` (which only
bind, null-check and clear them). They are forward-declared plumbing, not a disabled feature.

### What remains uncertain

- Did a newer renderer DLL ever exist? Nothing in the shipped data set exports these names. A
  later Terminal Reality title on the same engine (BloodRayne) would be the place to look.
- The editor's `unlockFrame` also gained a `g_ExternalFrameLocked = 0` line that retail lacks —
  the only non-identical function in the whole 25-function APIDLL bridge. Whether that is part
  of the same migration or an unrelated editor fix is unresolved.

### Bearing on the accel-on lighting bug

None — see `research/13-accel_per_pixel_lighting/01_INVESTIGATION_STATE.md`, "DON'T RE-CHASE"
item 4. That investigation also established that the *used* 37-entry path is byte-identical
between the two builds.

## How to add a new mystery

When you find another retail-vs-editor difference worth investigating, follow the per-section template:

1. **Question** — short framing of what's observable.
2. **What we found** — evidence with file:line references and concrete claims separated from speculation.
3. **What remains uncertain** — open questions that would resolve the picture if answered.

Keep "definitive" answers and "partial" answers labeled in the section heading; don't bury uncertainty in prose.
