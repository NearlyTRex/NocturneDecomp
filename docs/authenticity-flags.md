# Authenticity flags

This is not a byte-for-byte matching decompilation, but it is a *faithful* one: where the
project deviates from what the shipped binary does, the deviation is deliberate, documented and
switchable. That is what `NOCTURNE_AUTHENTIC_*` is for.

All of them live in
[`shims/config/shim_config_authentic.h`](../annotations/nocedit.exe/pseudocode/shims/config/shim_config_authentic.h),
which opens with a table of every flag, its default and its kind. That table is the index; the
doc comment beside each flag is the authority, and it explains *why*.

## The convention

```
1 = shipped behaviour, bugs included
0 = the alternative
```

Most flags default to `0`. Two default to `1` — `FORMAT_STRINGS` and `SAVE` — and each says in
its doc comment why the shipped answer is the one worth having.

Flip any of them on the configure line:

```sh
cmake --preset exe-linux-asan-x86_64 -DNOCTURNE_AUTHENTIC_HUD_SCALE=1
```

`CMakeLists.txt` forwards every `NOCTURNE_AUTHENTIC_*` and `NOCTURNE_EDITOR_BUILD` set that way
into the compile definitions of the whole build, and prints what it forwarded. Clear one again
with `-UNOCTURNE_AUTHENTIC_HUD_SCALE` to fall back to the header's default.

They are global on purpose: `shim_config.h` reaches every translation unit through `nocturne.h`,
so a toggle that reached only some targets would leave two halves of the build disagreeing about
what the game does. Changing one is therefore a full rebuild.

Each flag carries a doc comment stating what the original did, what the alternative does, and —
importantly — the evidence. Several cite the exact instruction that proves the shipped
behaviour, so the claim can be rechecked rather than trusted.

`NOCTURNE_EDITOR_BUILD` is the one flag in that file without the `AUTHENTIC_` prefix. Its axis
is *which binary* — `1` is nocedit.exe, `0` is nocturne.exe — so neither value is less faithful
than the other. It lives there because it is read the same way and belongs in the same list.

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
doc comment rather than minting a near-duplicate. A flag earns its place by being something
somebody would want to set on its own; two flags nobody would ever set differently are one
flag.

## What is gated

37 flags. The kinds below are the same ones the header's table names, and a flag's kind is the
honest reason its default is what it is.

**`host` — the shipped behaviour depends on Win32 + DirectDraw and cannot be reproduced**

| Flag | Off |
|---|---|
| `FORMAT_STRINGS` | pointers print at their native width on 64-bit *(defaults on)* |
| `WINDOWS` | the game keeps running unfocused and the window stays put |
| `UI_CURSOR_WARP` | no `SetCursorPos` warping; the cursor moves freely |
| `SOUND_DEVICE` | the Sound Options Device line names the host audio API SDL opened |
| `RENDERER_DLL` | a compiled-in renderer loads without a file on disk |

**`defect` — the shipped binary is wrong, and the doc comment carries the instruction that proves it**

| Flag | Off |
|---|---|
| `MIRROR_CULL` | actors appear in mirrors |
| `MIRROR_PROJECTION` | accelerated geometry lines up with the backdrop it sits on |
| `IRIS_FADE` | an opening iris no longer teleports part-way through |
| `ENVMAP_OVERLAY` | a reflection comes out whole rather than speckled |
| `MENU_LIGHTING` | the menu's moon puts back the lighting it found |
| `CAMERA_SHAKE_TRACE` | the shake trace prints its value and a newline |
| `HUD_ICON_SPACE` | inventory icons stay on screen above 640x480 |
| `GOD_MODE_FALL` | god mode survives a lethal-height fall |
| `STREAM_LENGTH` | a streamed MP3 ends where the sample actually ends |
| `ACTOR_DELETE` | references to a deleted actor are cleared before the memory is freed |
| `HERO_WEAPON` | each hero class starts holding what it can actually use |
| `HERO_ACTIONS` | the other eight classes can interact, and can escape a grab |
| `CHAPTER_SELECT` | START offers the chapter lists whether or not pod.ini is present |
| `FRIENDLY_FIRE` | heroes cannot damage each other in a network game |
| `INPUT_REPEAT` | a held button starts an action once instead of restarting it every frame |
| `ITEM_HELP_POSITION` | the pickup help text does not sit on top of the pickup name |
| `DEATH_MESSAGE_POSITION` | the death banner is centred, clear of the message line |
| `TEXT_RENDER_ALPHA` | 2D text blends at its own alpha, not the last pass's leftover |

**`choice` — the shipped binary is not wrong; we prefer something else**

| Flag | Off |
|---|---|
| `PICKUP_WIELDS` | a weapon picked up is never drawn without the player asking |
| `OPTIONS_RESUMES_GAME` | leaving Options returns to the pause menu, simulation held |
| `MENU_RESOLUTION` | a picked resolution applies straight away |
| `SAVE` | saves are written as readable plain text *(defaults on, i.e. compressed)* |

**`addition` — neither binary did this**

| Flag | Off |
|---|---|
| `AUTOMAP` | a bindable Doom-style map that fills in as you explore |
| `GAMEPAD` | SDL's game-controller layer instead of 1999's joyGetPos |
| `WINDOW_MESSAGES` | the window proc sees a mouse wheel |
| `CHEAT_MENU` | a CHEATS entry on Options, and WARPS on the pause menu |
| `RESOLUTION_LIST` | one ordered table drives both the label and the stepping |
| `HUD_SCALE` | HUD bitmaps, text and the goggles scale with the framebuffer |
| `CONSOLE` | the console fills the window and keeps scrollback |
| `FMV` | the opening movie actually plays |
| `ATTRACT_MOVIES` | the menu cycles NOC1..NOC4 after its splash music |
| `ENVMAP_SHADING` | reflections are shaded per pixel rather than flat per facet |
| `NETPLAY` | netplay is reachable, with its fixes |
| `NET_CONFIG` | network parameters come from `system/netplay.ini` |
| `RNG` | every draw goes through the sim/cosmetic funnel |

**`binary` — which of the two binaries this build is**

| Flag | Off |
|---|---|
| `EDITOR_BUILD` | the build presents as retail nocturne.exe — the default |
| `D3D_OPTIONS` | hardware acceleration can be turned on |

`D3D_OPTIONS` is deliberately not part of `EDITOR_BUILD`: the editor holds acceleration off from
four places, so folding it in would leave an editor build unable to render an accelerated frame.

## Keeping the list honest

`scripts/Python/check_authentic_flags.py` checks five things, each because one of them got
through review once:

1. every flag has at least one gate site outside `config/`
2. every flag referenced in the tree is defined in the header
3. flags gated inside another flag's gate are reported for review — sometimes correct, sometimes
   a flag that is dead at its own default
4. this document names exactly the header's flags, and the header's index table matches its
   `#define`s
5. every doc comment has a `1:` line, a `0:` line and an override line

Reviewed exemptions live in `scripts/Python/check_authentic_flags_skip.txt`, each with the
reason it is one.

```sh
python3 scripts/Python/check_authentic_flags.py
```

## When not to gate

A `.keep` that fixes a **decompiler artifact** — a wrong type, a dropped store, an unrolled
`memcpy`, a phantom cast — is not a deviation and needs no flag. The shipped binary did the
right thing; only Ghidra's rendering of it was wrong. Gates are for places where the shipped
binary's own behaviour is being changed.
