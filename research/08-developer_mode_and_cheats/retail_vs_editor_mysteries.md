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

## How to add a new mystery

When you find another retail-vs-editor difference worth investigating, follow the per-section template:

1. **Question** — short framing of what's observable.
2. **What we found** — evidence with file:line references and concrete claims separated from speculation.
3. **What remains uncertain** — open questions that would resolve the picture if answered.

Keep "definitive" answers and "partial" answers labeled in the section heading; don't bury uncertainty in prose.
