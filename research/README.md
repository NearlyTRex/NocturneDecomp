# Nocturne Decompilation Research

This directory contains technical research documentation for the Nocturne reverse engineering project.

## Project Context

| Component | Details |
|-----------|---------|
| **Target Binary** | nocedit.exe (Nocturne level editor, 1999) |
| **Compiler** | Watcom C/C++ 11 |
| **Architecture** | x86 32-bit, little-endian |
| **Ghidra Version** | 12.1 (built from source with custom patches) |
| **Total Functions** | ~7,154 |

## Research Areas

### [01-file_structure/](01-file_structure/)

Initial analysis of the binary's class hierarchy and file organization.

| File | Description |
|------|-------------|
| `actor_hierarchy.txt` | Game object inheritance tree |
| `classes.txt` | Class name enumeration |
| `files.txt` | Source file mapping |
| `structures.txt` | Key data structure definitions |

**Status:** Reference material

---

### [02-mrgl_initial_investigation/](02-mrgl_initial_investigation/)

Investigation into Nocturne's MRGL (Model/Rendering Graphics Library) 3D rendering system.

| File | Description |
|------|-------------|
| `3d-rendering-system-analysis.md` | Overview of rendering architecture |
| `MRGL-file-format.md` | MRGL file format specification |
| `MRGL_DISPATCH_TABLE_ANALYSIS.md` | Vtable and dispatch analysis |
| `NEW_RENDER_FUNCTIONS_ANALYSIS.md` | Analysis of additional render functions found after the initial sweep |
| `FUNCTION_RENAMING_GUIDE.md` | Naming conventions for render functions |
| `VERTEX_PREPROCESS_MODE_VERIFIED.md` | Ground-truth dispatch for `g_VertexPreprocessMode` (renamed from `g_RenderStateFlag2`; supersedes the inferred equate names) |
| `RENDER_STATE_FLAGS_VERIFIED.md` | Bit-by-bit semantics for `g_RenderStateFlags`; 3 bits need renames, all combo `#define`s should be deleted |
| `*.h` | Render-flag equate headers (`NOCTURNE_RENDER_FLAGS_EQUATES.h`, `nocturne-render-flags-ghidra.h`) |
| `*.py` / `*.json` / `*.txt` | Analysis scripts and their extracted render-function reports |

**Status:** Complete - Rendering system documented

---

### [03-rendering_primitives/](03-rendering_primitives/)

Deep dive into rendering primitive structures and data formats. Contains 48 documents
tracking the progressive understanding of MRGL primitives, keyframe formats, and
renderer internals.

| Key Documents | Description |
|---------------|-------------|
| `00_RESEARCH_PROGRESSION_INDEX.md` | Index of all research documents |
| `19_ALL_PRIMITIVE_FORMATS_FINAL.md` | Complete primitive format reference |
| `38_MODEL_FILE_FORMATS_COMPLETE.md` | Model file format specification |
| `48_GLOBE_RENDERING_FINALIZED.md` | Globe/sphere rendering analysis |

**Status:** Complete - All primitive formats documented

---

### [04-mp3_audio_system/](04-mp3_audio_system/)

Complete analysis of MP3 decoding and DirectSound integration.

| File | Description |
|------|-------------|
| `README.md` | Overview and key findings |
| `mp3_audio_system_analysis.md` | Full technical analysis |
| `QUICK_REFERENCE.md` | Developer quick reference |
| `sound_structures_analysis.md` | Audio structure definitions |

**Key Findings:**
- MP3 decoder outputs 16-bit PCM (standard WAV format)
- Two playback modes: full decode and streaming
- Replaceable with modern libraries (dr_mp3, minimp3)

**Status:** Complete

---

### [05-badspacebase_investigation/](05-badspacebase_investigation/)

Investigation into Ghidra's BADSPACEBASE decompilation errors affecting 22.7% of functions.
Led to custom Ghidra patches and the per-function decompiler helper system.

| Key Documents | Description |
|---------------|-------------|
| `README.md` | Complete investigation index |
| `01_PROBLEM_DESCRIPTION.md` | What BADSPACEBASE looks like |
| `02_ROOT_CAUSE.md` | Why Ghidra fails with Watcom ESP-relative code |
| `17_GHIDRA_STACK_ANALYSIS_DEEP_DIVE.md` | Complete pipeline analysis |
| `18_RESOLVESPACEBASERELATIVE_PATCH.md` | **IMPLEMENTED** - EBP-frame tracing fix |
| `24_STACK_PROBE_CALLFIXUP_FIX.md` | Stack probe callfixup solution |
| `26_VARIADIC_ARGUMENT_LOSS_FIX.md` | Proto override for variadic calls |

**Key Outcomes:**
- Custom `x86watcom.cspec` calling convention
- `resolveSpacebaseRelative()` C++ patch for EBP-frame tracing
- P-code override system via `DecompileCallback.java`
- Call fixup system for `_chkstk`/`__alloca_probe`
- Proto override system for variadic functions

**Status:** Ongoing - Core fixes implemented, per-function helpers available

---

### [06-per_function_decompiler_helpers/](06-per_function_decompiler_helpers/)

Research into extending Ghidra's decompiler with per-function controls without
modifying the program database. Builds on solutions from the BADSPACEBASE investigation.

| File | Description |
|------|-------------|
| `README.md` | Overview and navigation |
| `01_OVERVIEW_AND_OPPORTUNITIES.md` | Complete list of opportunities by difficulty tier |
| `02_GHIDRA_SOURCE_REFERENCE.md` | Source code paths and line numbers |
| `03_QUICK_IMPLEMENTATION_GUIDE.md` | Copy-paste implementation code |
| `04_PCODE_OVERRIDE_VALIDITY.md` | P-code override stability/validity across Ghidra versions |

**Already Implemented:**
1. **Call Fixups** - Replace function calls with custom P-code
2. **Decompiler Fixes** - Per-function experimental fix flags (MULTIEQUAL tracing)
3. **Proto Overrides** - Per-call-site function signatures
4. **P-code Overrides** - Per-instruction P-code replacement

**Identified Opportunities:**
- Tier 1 (Trivial): inline, noreturn, varargs, calling convention overrides
- Tier 2 (Easy): extrapop, flow overrides, indirect call resolution
- Tier 3 (Moderate): comment injection, symbol name overrides
- Tier 4 (Speculative): New DFIX flags for pointer inference, loop recovery

**Status:** Active research - Core system implemented, expansion opportunities documented

---

### [07-mmx_functions/](07-mmx_functions/)

Inventory and byte-for-byte decoding of the 34 MMX/SIMD functions in `nocedit.exe`.
Ghidra cannot produce compilable pseudocode for these (nested `CONCAT`/`SUB`/`uint7`
artifacts), so the pipeline replaces them with `__asm { }` blocks and tracks portable
`.keep.cpp` rewrites here.

| File | Description |
|------|-------------|
| `MMX_FUNCTIONS_ANALYSIS.md` | Full inventory of all 34 MMX functions, categories, and rewrite feasibility |
| `MMX_BLEND_FAMILY_DECODED.md` | Unified blend formula covering ~10 pixel-blend variants + blur/corona routines |
| `RENDER_PERSPECTIVE_SCANLINE16_DECODED.md` | `renderMMXPerspectiveScanline16/32` decoded into portable C |
| `RECOMMENDED_MMX_RENAMES.md` | Consistent naming proposal for the 12 blend-family functions + outliers |

**Status:** Active - Inventory complete; portable rewrites in progress

---

### [08-developer_mode_and_cheats/](08-developer_mode_and_cheats/)

Game debugging and options: the `VELOCITY` and `SPOOKHOUSE` env-var gates (Velocity
Engine vs. Nocturne project codenames), runtime debug flags on `CGame` (console,
camera, geometry, collision, profile, single-step), all 44 encrypted typed-cheat-codes
(god mode, weapons, ammo, weather, dismemberment, etc.) plus the event-triggered
`headOfHorror` cheat, and the full ini schema across `nocturne.ini`, `pod.ini`, and
`skeledit.ini`.

| File | Description |
|------|-------------|
| `README.md` | Folder overview + project codenames + "enable everything" recipe |
| `environment_variables.md` | All seven `getenv()` callees, dev gates split from CRT/Windows infrastructure |
| `runtime_debug_flags.md` | `CGame` debug flags + hotkey table + `g_ModalDialogActive` (input-suppression gate during pick-list pop-up dialogs) |
| `cheats.md` | All 45 cheats by category (cleartext recovered via `decrypt_cheats.py`) |
| `developer_tools_menu.md` | The `Ctrl+D` main-menu shortcut into the editor menu (mission play, shape/set/skeletal/mission editors, POD file manager, etc.) — gated by a one-shot license agreement |
| `retail_vs_editor_mysteries.md` | Open mysteries about retail-vs-editor build differences (D3D disabled in options, missing cutscene voice, flat `.msn` picker vs curated chapter list, 640×480 resolution cap + non-persisting graphics options) — investigation notes with definitive vs partial labels |
| `cut_content.md` | Features whose code exists in the binary but were never UI-exposed in *any* shipped Nocturne build (cut, not editor-gated). |
| `ini_settings.md` | Full `nocturne.ini` (5 sections), plus `RENDER.INI`, `pod.ini`, and `skeledit.ini` formats |

**Status:** Reference - All 45 cheat cleartext strings recovered via
`scripts/Python/decrypt_cheats.py`; in-game effect of `debug_toggle_flag` not yet mapped.

---

### [09-flashlight_lighting_investigation/](09-flashlight_lighting_investigation/)

Open investigation into the flashlight / set spot-light failing to illuminate world geometry
(and the volumetric cone rendering as discrete circles instead of the original's smooth colorful
glow). Ground-truthed against the original `nocedit.exe` run under Wine.

| File | Description |
|------|-------------|
| `01_INVESTIGATION_STATE.md` | Resumable state: symptom + Wine reference shots, full lighting pipeline map (FUN addresses/files), confirmed fixes, open root cause, next steps, and gdb/capstone probe recipes |

**Key outcomes so far:**
- Rasterizer `-O2` per-file build fix (the Debug `-O0` was the framerate stutter)
- §20 missing-cave-copy fix in `calculateSpatialLighting` (uninit reflected pos/normal)
- Ghidra fix: `transformMirrorVertex` signature → `CVector3i*` (FISTP-proven)
- `missing_cave_copy` detector widened 16→12 bytes (now catches `CVector3i`/`CVector3f` caves)

**Status:** OPEN - root cause (garbage/stale vertex normals; whether the flashlight is gathered) not yet nailed

---

### [10-tridx7_crt_identification/](10-tridx7_crt_identification/)

Identification, naming, and signatures for the MSVC VC6 C runtime statically linked into
`tridx7.dll` (everything ≥ 0x10005400; the `APIDLL*` driver code is below it). 248 CRT functions
catalogued with snake_case parameters.

| File | Description |
|------|-------------|
| `crt_functions.md` | Human catalog: addr, proposed name, signature, confidence, evidence — per CRT source bucket |
| `crt_functions.tsv` | Machine data the apply tools consume (generated from the md by `extract_crt_catalog.py`) |

**Key outcomes:**
- All 248 named; 200 signatured (return/params/`__cdecl` + snake_case names)
- 8 scalar typedefs added + `_LDOUBLE` as a 10-byte struct (export-safe)
- Tooling: `name_crt_functions.py`, `apply_crt_signatures.py`, `extract_crt_catalog.py`

**Status:** essentially complete (only the naked `_chkstk` left unsignatured)

---

### [11-tridx7_3d_renderer_dll/](11-tridx7_3d_renderer_dll/)

`tridx7.dll` is the retail DirectX7 hardware renderer nocedit.exe loads at runtime; its 37
`APIDLL*` exports are the render API, called through nocedit's typed `g_APIDLL_*` pointers.

| File | Description |
|------|-------------|
| `apidll_signatures_and_bridge.md` | Missing-struct specs for the 7 blocked APIDLL sigs; the 3 exports nocedit couldn't type, derived from DLL asm; and a field-by-field verification of `CExternalRendererBridge` vs the DLL's actual usage |

**Key outcomes:**
- 27/37 APIDLL signatures applied from nocedit funcdefs (`apply_apidll_signatures.py`)
- 3 untyped exports derived from asm (`GetDisplayContext`→`void(HDC*)`, `ReleaseDisplayContext`→`void(HDC)`, `setVideoMode`→`int(void**)`)
- `CExternalRendererBridge` size/layout confirmed (35 dwords / 0x8c); 3 fields proven mislabeled, 11 flagged as DLL-unreferenced guesses

**Status:** 27 applied; 7 pending user-added structs; bridge audited

---

## Standalone Documents

### [ghidra_suspect_patterns.md](ghidra_suspect_patterns.md)

Reference guide for common Ghidra decompiler artifacts and how to fix them:

- BADSPACEBASE - Stack frame resolution failure
- `in_stack_XXXX` - Unresolved stack parameters
- `in_EAX`, `in_ECX` - Inferred register parameters
- `CONCAT44`, `CONCAT22` - Value concatenation artifacts
- `SUB84`, `SUB42` - Value extraction artifacts
- `SBORROW` - Signed borrow detection

---

## Implementation Files

The research in this folder has led to implementation code in:

```
scripts/Python/ghidra_annotations/annotations/pseudocode/
├── callfixups.py         # Call fixup registration
├── decompiler_fixes.py   # Per-function fix flags
├── proto.py              # Prototype overrides
├── transforms.py         # P-code overrides and text transforms
├── suspects.py           # Suspect pattern detection
└── exporter.py           # Main export orchestration

spec/Ghidra/Processors/x86/data/languages/
├── x86watcom.cspec       # Custom Watcom calling conventions
├── x86watcom.ldefs       # Language definition
└── ia.sinc.patch         # SLEIGH customizations
```

---

## Custom Ghidra Build

This project uses Ghidra 12.1 built from source with custom patches:

| Patch | Location | Purpose |
|-------|----------|---------|
| MULTIEQUAL stack trace | `heritage.cc` | Enhanced stack variable tracing |
| Call fixup registry | `DecompileCallback.java` | Per-function call replacement |
| P-code override registry | `DecompileCallback.java` | Per-instruction P-code injection |
| Proto override registry | `HighFunction.java` | Per-call-site signatures |
| Decompiler fix flags | `DecompInterface.java` + C++ | Per-function fix flag system |

Ghidra source location: `~/Repositories/Ghidra/`

---

## Quick Links

| Topic | Document |
|-------|----------|
| Understand BADSPACEBASE | [05-badspacebase_investigation/02_ROOT_CAUSE.md](05-badspacebase_investigation/02_ROOT_CAUSE.md) |
| Fix suspect patterns | [ghidra_suspect_patterns.md](ghidra_suspect_patterns.md) |
| Add per-function helpers | [06-per_function_decompiler_helpers/03_QUICK_IMPLEMENTATION_GUIDE.md](06-per_function_decompiler_helpers/03_QUICK_IMPLEMENTATION_GUIDE.md) |
| Understand render system | [02-mrgl_initial_investigation/3d-rendering-system-analysis.md](02-mrgl_initial_investigation/3d-rendering-system-analysis.md) |
| Primitive formats | [03-rendering_primitives/19_ALL_PRIMITIVE_FORMATS_FINAL.md](03-rendering_primitives/19_ALL_PRIMITIVE_FORMATS_FINAL.md) |
| Audio system | [04-mp3_audio_system/mp3_audio_system_analysis.md](04-mp3_audio_system/mp3_audio_system_analysis.md) |
| tridx7 CRT catalog | [10-tridx7_crt_identification/crt_functions.md](10-tridx7_crt_identification/crt_functions.md) |
| tridx7 render API + bridge | [11-tridx7_3d_renderer_dll/apidll_signatures_and_bridge.md](11-tridx7_3d_renderer_dll/apidll_signatures_and_bridge.md) |

---

## Changelog

### 2026-07-27 (transfer)
- **Names, signatures and struct sizes transferred into nocturne and exported.** nocturne is now **94.1% named** (5302/5633), **2437 functions carry a USER_DEFINED signature**, 2004 have typed parameters (4534 total), and **184 of 231 struct layouts match their own RTTI**
- `shift_struct_fields.py`: closed the gaps a resized base leaves in its subclasses — **128 structures**, every edit checked against RTTI, cascading to a fixpoint (`CDemonActor` → 43 direct subclasses → `CFlame`/`CCharacter` −400 → the whole enemy tree). The `CDemonActor` cascade is fully resolved with zero residual
- `import_sibling_types.py`: 35 missing types imported (+74 with dependencies), which took full-prototype transfers from **261 → 1718** in one pass
- `transfer_custom_storage.py`: 50 functions where nocedit hand-assigned storage (`ST0:10`/`ST1:10` for the Watcom FPU conventions, plus 33 `__cdecl` overrides). **I broke 7 `crt_math.c` functions first** by setting a calling convention after a failed `updateFunction`, making them throw on any parameter access; diagnosed, repaired, and the tool now resets storage instead
- `find_junk_functions.py`: 5 junk functions removed from nocturne (4 alignment-padding, 1 phase-shifted decode). Needed tail-merge awareness — a function can legitimately fall through into the next one's `RET` — which cut false positives from 46 to 14
- **Known remaining:** 3629 functions still have no declared parameters, so the decompiler invents `param_N`. Not a name-transfer bug — nocedit supplies real names for 3860/3862 parameters; the gate is too narrow. ~1660 more are unlockable — widen the confidence gate in `apply_sibling_annotations.py`

### 2026-07-27 (later)
- **Signature transfer unblocked.** It was paused on struct drift; that never applied. Of 4615 matched pairs, 1576 name a drifted class in their signature and **100% do so by pointer, 0 by value** — parameter count, types, stack offsets, convention and return type are all drift-invariant. Only *field naming inside bodies* depends on the layouts
- **Code caves were corrupting every body comparison.** Caves live only in the Ghidra DB, but an allocated cave attaches to its borrowing function as an extra body fragment: 287 nocedit functions contaminated, **108 lost their shape entirely** (a cave in the unmapped `RUNTIME_HEAP` block sank the whole function to `None`). Now excluded via `code_caves.json`; whole-mapping `identical` 51.3%→53.7%, `size_mismatch` 2.9%→2.0%, `unshaped` 7.2%→4.9%, +92 exact seeds
- **Fixed an off-by-one bug in order matching**, found by nocturne's hand-assigned names disagreeing — a 35-function bracket where an add and a remove kept the counts equal while shifting every slot. Neither the holdout test nor the pin oracle could see it (wrong population, same source file). `bracket_aligns()` now validates a bracket as a whole
- `apply_sibling_annotations.py` reworked for hand-assigned units: transfers **only the class-and-method core**, preserves nocturne's TU, and blocks on unit disagreement (`SKIP_TU`). Its `is_unnamed()` check would have skipped all 2192 `<tu>_FUN_<addr>` functions

### 2026-07-27
- Added **order-constrained function matching** to `map_sibling_functions.py` (`order` / `order_multi` signals, `--no-order` to A/B). A translation unit's functions keep their source order in both builds, so two matched functions bracket a region and an equal-count bracket fixes the alignment without consulting similarity at all — the only signal here that can match a function whose *body was edited*. 3986 → 4615 pairs (70.7% → 81.9% of nocturne). Validated two independent ways: 883 held-out exact pairs recovered with **0 errors**, and **0 conflicts** against the `__FILE__` pin oracle, 15 of which are pin-confirmed edited functions
- `CPickList` resolved: `char[100]` + `hotkey_capacity`/`hotkey_array` (8) + a 460-byte tail of two `CEdButton`s and one int = 568 exactly. Supersedes the earlier "468-byte tail" split
- 343 functions are now *positively* editor-only (bracketed by matched neighbours with nothing between them), not merely unmatched
- `sibling_match.py` gained `tu_of()` / `Image.tu_groups()` — the shared translation-unit partition, measured at 216 of 252 units contiguous and 98.3% order-preserving

### 2026-07-26
- Sibling struct-layout diff (reports now in `annotations/nocturne.exe/reports/sibling_*`): nocturne.exe now carries its own WatcomTypeInfo RTTI, so sibling struct sizes are measured rather than inferred. 127 differing classes reduce to **14 roots**; `CDemonActor`, `CKeyFramedModel`, `CDeformableModel`, `CTextureList` and `CSkeleton` resolved to concrete edits. New tooling: `compare_sibling_struct_sizes.py`, `diff_sibling_layout.py`, `validate_drift_against_rtti.py`, `emit_layouts_json.py`
- **Fixed two bugs in `derive_struct_drift.py`** that made it report confident wrong shifts: `[esp+N]` stack slots (47% of observations) and `call [edx+N]` vtable dispatch were both counted as struct field offsets. Re-derive anything from before this date
- Gated the `export_annotations.py` struct-size assertion on `--strict` so exports complete and record `typeinfo_size` (the 32-bit ground truth) rather than aborting

### 2026-07-14
- Added `11-tridx7_3d_renderer_dll/`: applied 27/37 `APIDLL*` export signatures to `tridx7.dll` from nocedit's `g_APIDLL_*` funcdefs (`apply_apidll_signatures.py`), derived the 3 nocedit-untyped exports from DLL asm, and verified `CExternalRendererBridge` against the DLL — size/layout confirmed (35 dwords), with 3 mislabeled fields and 11 DLL-unreferenced fields flagged
- Added `10-tridx7_crt_identification/` to the indexes: 248 statically-linked MSVC CRT functions named + 200 signatured with snake_case params; catalog (`crt_functions.md`/`.tsv`) + tooling (`name_crt_functions.py`, `apply_crt_signatures.py`, `extract_crt_catalog.py`)

### 2026-05-27
- Added `09-flashlight_lighting_investigation/` (open): flashlight/set spot-light not lighting world geometry + volumetric cone as discrete circles, ground-truthed vs the original under Wine. Along the way: rasterizer `-O2` per-file build fix (Debug `-O0` was the stutter), §20 cave-copy fix in `calculateSpatialLighting`, `transformMirrorVertex`→`CVector3i*` Ghidra retype, and widened the `missing_cave_copy` detector 16→12 bytes (280→300 flags, regression-gated)
- Added retail-vs-editor mystery §4: 640×480 resolution cap (definitive, downstream of §1's forced-software path — three clamps in `configureGraphicsOptions`/`setGameRes`) and non-persisting graphics options (save path is correct on Windows; the Linux port silently drops all ini writes because `remove`/`rename` skip the shim's `normalize_path`). Updated `08-.../README.md` (§3 + §4) and this index's retail-vs-editor blurb
- Synced indexes with the current tree: added `08-developer_mode_and_cheats/` to the repo-root `README.md` research table; listed `06-.../04_PCODE_OVERRIDE_VALIDITY.md` and the `02-...` render-flag headers + `NEW_RENDER_FUNCTIONS_ANALYSIS.md`; extended `03-rendering_primitives/00_RESEARCH_PROGRESSION_INDEX.md` to cover docs 33–48 (keyframe formats, SPrimitive resolution, globe rendering)

### 2026-05-03
- Added `08-developer_mode_and_cheats/` section (env-var gates, runtime debug flags, 45 cheats, dev-tools menu, ini schema, retail-vs-editor + cut-content mysteries)

### 2026-04-14
- Drafted recommended MMX blend-family renames (`RECOMMENDED_MMX_RENAMES.md`)

### 2026-04-13
- Added `07-mmx_functions/` section to this index
- Decoded `renderMMXPerspectiveScanline16/32` into portable C

### 2026-04-12
- MMX blend family decoded — unified formula for ~10 blend variants + blur/corona

### 2026-02-08
- Completed inventory of all 34 MMX/SIMD functions (29 MMX-only, 5 with fallbacks)

### 2026-01-11
- **CORRECTED**: Document 18 status - `resolveSpacebaseRelative()` patch was designed but never committed
- Added `06-per_function_decompiler_helpers/` research folder
- Documented all identified Ghidra per-function helper opportunities
- Created implementation guides for trivial wins

### 2026-01-10
- Completed MP3 audio system analysis
- Added pseudocode annotation support (callfixups, decompiler_fixes, proto, transforms)

### 2025-12-30
- **BREAKTHROUGH**: Complete Ghidra pipeline analysis, identified `resolveSpacebaseRelative()` as fix location
- Designed EBP-frame tracing patch (documented in doc 18, but never committed)

### 2025-12-18
- Implemented P-code override system via `DecompileCallback.java` modification
- Added call fixup registry for stack probe functions

### Earlier
- Rendering system analysis complete (02, 03)
- File structure analysis (01)
