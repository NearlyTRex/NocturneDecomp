# Authenticity flags

This is not a byte-for-byte matching decompilation, but it is a *faithful* one: where the
project deviates from what the shipped binary does, the deviation is deliberate, documented and
switchable. That is what `NOCTURNE_AUTHENTIC_*` is for.

All of them live in
[`shims/config/shim_config_authentic.h`](../annotations/nocedit.exe/pseudocode/shims/config/shim_config_authentic.h).

## The convention

```
1 = shipped behaviour, bugs included
0 = the dev-friendly default
```

Every flag defaults to `0` and can be flipped on the configure line:

```sh
cmake --preset exe-linux-asan-x86_64 -DNOCTURNE_AUTHENTIC_HUD_SCALE=1
```

Each flag carries a doc comment stating what the original did, what the alternative does, and —
importantly — the evidence. Several cite the exact instruction that proves the shipped
behaviour, so the claim can be rechecked rather than trusted.

## How a gate is written

Both paths stay visible in the source, at the call site:

```c
#if NOCTURNE_AUTHENTIC_HUD_SCALE
    iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr_00, *text);
#else
    iVar7 = nocturne_ui_text_width(this_ptr_00, *text, ui_scale);
#endif
```

Not hidden inside a helper that silently returns the shipped value — a reader of the `.keep`
must be able to see what the binary did without opening another file.

When a function has several gated sites, hoist the decision to one variable near the top rather
than repeating the `#if` at every call:

```c
#if !NOCTURNE_AUTHENTIC_HUD_SCALE
  int ui_scale;

  ui_scale = nocturne_ui_scale();
#endif
```

Before adding a flag, check whether an existing one already covers the behaviour — extend its
doc comment rather than minting a near-duplicate.

## What is gated

39 flags at present, grouped by what they touch.

**Presentation and resolution**

| Flag | Off (default) |
|---|---|
| `RESOLUTION_LIST` | one ordered table of 8 modes, driving both label and stepping |
| `RESOLUTION_STEP` | left from 1280x1024 steps down instead of snapping to 320x240 |
| `HUD_SCALE` | HUD bitmaps, text and the goggles scale with the framebuffer |
| `HUD_ICON_SPACE` | inventory icon panel *and its text* live in the camera's space |
| `WINDOWS` | windowed / fullscreen / borderless instead of exclusive fullscreen only |
| `UI_CURSOR_WARP` | cursor handling suited to a windowed game |

**Renderer**

| Flag | Off (default) |
|---|---|
| `RENDERER_DLL` | built-in module registry, so a compiled-in renderer loads without a file |
| `D3D_OPTIONS` | the editor's permanently-disabled acceleration options are usable |
| `SHADER_LIGHTING` | per-pixel light/fog grid path |
| `ENVMAP_SHADING`, `ENVMAP_SOFTWARE` | environment-map corrections |
| `MIRROR_CULL`, `MIRROR_PROJECTION` | actors appear in mirrors |
| `OVERLAY_DEPTH`, `MENU_LIGHTING`, `IRIS_FADE`, `CAMERA_SHAKE_TRACE` | assorted render fixes |

**Audio and video**

| Flag | Off (default) |
|---|---|
| `SOUND_DEVICE` | the Sound Options device line names the real host audio API |
| `VOICE`, `FMV` | speech and full-motion-video corrections |

**Gameplay**

| Flag | Off (default) |
|---|---|
| `ACTOR_DELETE` | references to a deleted actor are cleared before the memory is freed |
| `HERO_WEAPON`, `HERO_INTERACT`, `HERO_GRAB`, `SHEATHED_FIRE` | hero-behaviour fixes |
| `FRIENDLY_FIRE`, `GOD_MODE_FALL` | damage-rule corrections |
| `SAVE`, `CHAPTER_SELECT`, `OPTIONS_RESUMES_GAME` | progression and menu flow |

**Netplay and determinism**

| Flag | Off (default) |
|---|---|
| `NETPLAY` | netplay additions active |
| `RNG` | the RNG funnel that keeps lockstep peers in step |

**Editor and dev tools**

| Flag | Off (default) |
|---|---|
| `CONSOLE`, `DEV_TOOLS`, `CHEAT_MENU`, `GAMEPAD` | additions to the dev surface |
| `EDITOR_BRANDING`, `EDITOR_BUTTON` | editor-build UI that retail did not show |
| `FORMAT_STRINGS` | printf-family corrections |

The table above is a summary; the header is the authority, and it explains *why* in each case.

## When not to gate

A `.keep` that fixes a **decompiler artifact** — a wrong type, a dropped store, an unrolled
`memcpy`, a phantom cast — is not a deviation and needs no flag. The shipped binary did the
right thing; only Ghidra's rendering of it was wrong. Gates are for places where the shipped
binary's own behaviour is being changed.
