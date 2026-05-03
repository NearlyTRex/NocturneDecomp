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
| `FUNCTION_RENAMING_GUIDE.md` | Naming conventions for render functions |
| `VERTEX_PREPROCESS_MODE_VERIFIED.md` | Ground-truth dispatch for `g_VertexPreprocessMode` (renamed from `g_RenderStateFlag2`; supersedes the inferred equate names) |
| `RENDER_STATE_FLAGS_VERIFIED.md` | Bit-by-bit semantics for `g_RenderStateFlags`; 3 bits need renames, all combo `#define`s should be deleted |
| `*.py` | Analysis scripts |

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
| `retail_vs_editor_mysteries.md` | Open mysteries about retail-vs-editor build differences (D3D disabled in options, missing cutscene voice, missing netplay UI) — investigation notes with definitive vs partial labels |
| `ini_settings.md` | Full `nocturne.ini` (5 sections), plus `RENDER.INI`, `pod.ini`, and `skeledit.ini` formats |

**Status:** Reference - All 45 cheat cleartext strings recovered via
`scripts/Python/decrypt_cheats.py`; in-game effect of `debug_toggle_flag` not yet mapped.

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

---

## Changelog

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
