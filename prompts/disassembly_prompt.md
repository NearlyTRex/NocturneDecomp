# Watcom C++ Disassembly Analysis Context Prompt

You are analyzing x86 32-bit disassembly and decompilation output from Ghidra for a game engine compiled with Watcom C++. Your task is to provide detailed analysis of functions, including signatures, calling conventions, structures, and purpose.

## CRITICAL: Assembly is Ground Truth

**IMPORTANT**: The pseudocode signatures and calling conventions shown in the exported files are GUESSES from Ghidra's auto-analysis and are frequently INCORRECT. They have NOT been verified unless explicitly documented. You MUST:

1. **Always verify calling conventions from the assembly code** - do not trust the "Convention:" line in pseudocode headers
2. **Verify parameter counts and types from assembly** - the signature may be wrong
3. **Check register usage at function entry** - this determines the actual calling convention
4. **Examine call sites** - see what's actually being pushed/passed to understand true parameters
5. **Treat the assembly as the only source of truth** - pseudocode is a helpful hint, not fact

## CRITICAL: Check the Sibling Binary Before Analyzing From Scratch

**This repository contains two sibling builds of the same game, plus a renderer DLL:**

| Binary | What it is | State |
|---|---|---|
| `nocedit.exe` | The **level editor** build. This is the binary that was solved first and that the compiling decompilation is based on. | ~99.99% solved - names, signatures, structs, and ~2595 hand-verified `.keep` files |
| `nocturne.exe` | The **shipping game** build. Imported later as a sibling; most of its knowledge was transferred automatically from `nocedit.exe`. | ~63% named; signatures largely transferred, struct layouts **not** reliable |
| `tridx7.dll` | The DirectX 7 renderer DLL. Not a sibling of either - separate codebase. | Separately catalogued |

`nocedit.exe` and `nocturne.exe` were built **from the same source tree**, but they are not the same source. They differ because of:
- **`#ifdef`-gated code** - editor-only subsystems compiled out of the game build
- **Genuine source drift** - the two builds are different *versions*; roughly 36% of translation units changed between them (measured by line-pin diffing)

**Therefore: before analyzing any function, look for its counterpart in the other binary.** In most cases the answer already exists and only needs verifying, not deriving. Deriving it again from scratch wastes effort and produces a *worse* answer than the one already recorded.

### Lookup Procedure

Function **addresses differ between the two binaries** - never look up by address across binaries. Look up by name and by translation unit.

1. **Try the same translation-unit directory.** The directory names are the original source paths and are stable across builds:
   ```
   annotations/nocturne.exe/pseudocode/src/core/dcamera.cpp/CDemonCamera_resetSceneCamera_FUN_00440270.cpp
   annotations/nocedit.exe/pseudocode/src/core/dcamera.cpp/     <- look here for the counterpart
   ```
2. **Grep by function name** (drop the `_FUN_<addr>` suffix, since the address differs):
   ```bash
   ls annotations/nocedit.exe/pseudocode/src/core/dcamera.cpp/ | grep resetSceneCamera
   grep -rl "resetSceneCamera" annotations/nocedit.exe/pseudocode/src/
   ```
3. **Use the precomputed mapping** when name lookup fails or when you need the confidence of a match. `research/13-sibling_struct_layout_diff/verified_mapping.json` records 4707 matched pairs:
   ```json
   {"a": "00401010",            // nocedit.exe virtual address
    "b": "00401010",            // nocturne.exe virtual address
    "name": "engine_2d.c_initGraphicsSystem_FUN_00401010",
    "confidence": 0.75,
    "ambiguous": false,
    "shape_agreement": "identical",   // identical | same_mnemonics | similar_size | unshaped | size_mismatch
    "conv": "__cdecl", "ret": "void",
    "sig_verdict": "agree"}           // agree | unverifiable | conflict
   ```
   The file also carries `editor_only` (351 functions with no game counterpart), `unmatched_a`, and `unmatched_b`.
4. **Prefer the counterpart's `.keep` file if one exists**, then its `.asm`, then its `.cpp`.
5. **Search the sibling's existing names before inventing one - for functions AND globals.** Never propose a name for something the other binary has already named well. Grep the global headers and the sibling's decompiled body first:
   ```bash
   grep -rn "g_ColorCubeLookup" annotations/nocedit.exe/pseudocode/include/globals/
   grep -rhoE "g_[A-Za-z0-9_]*(Palette|Light|Blend|Lookup)[A-Za-z0-9_]*" \
        annotations/nocedit.exe/pseudocode/include/globals/ | sort -u
   ```
   A global that looks anonymous in the binary you are analyzing is very often already named in the sibling - reached through a *different* function than the one you are reading. When the sibling has a name, **transfer that name; do not coin a competing one.** Two names for one structure across sibling binaries is a defect you are introducing.

Treat `verified_mapping.json` as a **snapshot**, not live truth. If a lookup contradicts it, the binaries win.

### What Transfers Safely Across the Sibling Boundary

**SAFE to carry over (verify, but expect agreement):**
- **Function names.** Same source, same identifiers.
- **Function signatures** - return type, parameter count, parameter types, calling convention. Every class in this codebase is passed **by pointer**, so signatures are invariant to struct layout drift. Measured agreement across the sibling pair is ~99% over 2447 verifiable pairs.
- **Purpose, algorithm, and control flow.** 2471 of 4707 matched pairs (52%) have **byte-identical bodies**; another 1408 have identical mnemonic sequences. If the sibling body is byte-identical, the sibling's analysis applies verbatim.
- **Global variable *meaning*** - but not its address, which differs.

**NOT SAFE to carry over (must be re-derived from the target binary's own `.asm`):**
- **Struct and class layouts.** 112 classes have different sizes between the two builds, in 17 shift groups (`research/13-sibling_struct_layout_diff/reports/drift_spec.md`). `CDemonActor` is 344 bytes in nocedit and 336 in nocturne; `CCharacter`-derived classes shift by -0x198. **Never state a field offset for one binary based on the other binary's header.**
- **Field *order*.** Some drift is a reorder that **preserves total size**, so a matching `sizeof` does not prove a matching layout (e.g. `CDemonCamera` swapped fields). A named field being accessed at sub-offsets in the disassembly is the tell.
- **Vtable slot indices.** The editor build inserts a block of 7 editor-only methods. Align vtables by method *identity* (shape and translation unit), never positionally, and never fill a gap by index.
- **Addresses.** Function VAs, global VAs, and string literal addresses all differ. **Never bridge them with a delta** - a constant offset measured between two confirmed globals is valid at those two points only, because `.bss` follows per-TU declaration order and diverges wherever the builds do. Place a global only from a real reference in the target binary.
- **Assert-string line numbers.** A file shifts by different deltas in different regions (e.g. `../core/actor.cpp` shifts +2 below line ~1378 and +15 above it), so a line number is a weak hint, not an identity.

### Editor-Only Code

Some classes and functions exist **only** in `nocedit.exe` - `CObj`, `CPoly`, and `CCameraView` are entirely editor-only, along with 351 editor-only functions. **Absence of a counterpart in `nocturne.exe` is a valid result, not a failed search.** Say so explicitly rather than forcing a match.

### Directionality

The check runs **both ways**, but the two directions carry different weight:

- **Analyzing `nocturne.exe`**: `nocedit.exe` is the authority. Its analysis is human-verified and its decompilation compiles and runs. Start there, then verify against nocturne's own `.asm`.
- **Analyzing `nocedit.exe`**: `nocturne.exe` is *corroboration only*. Its annotations were machine-transferred **from nocedit**, so agreeing with it is not independent confirmation of a name or signature. What it *does* provide independently is its own bytes - a byte-identical sibling body confirms a reading of the logic, and a *divergent* one localizes exactly what the build changed.

### Back-Porting: The Already-Solved Binary Is Not Finished

**The sibling check runs in both directions, and the corrections flow both ways.**

`nocedit.exe` is ~99.99% solved, but "solved" means *every symbol has a name*, not *every name is right*. A large class of its symbols were named from evidence that the editor build does not contain. When the game build supplies that evidence, **nocedit's annotation is now known to be wrong and must be fixed.**

**This is a required output, not an optional aside.** Whenever analysis of one binary reveals that the other binary's existing annotation is wrong, dummied-out, or a placeholder, you MUST report it as a correction - even when the user only asked about the binary you were analyzing.

#### The Highest-Value Back-Port Pattern: Stubs and Dead Code

A function compiled to a **bare `RET`** (or an empty body) in one build carries **zero semantic evidence** in that build. Whoever solved it had nothing to go on and named it descriptively - `doNothing1`, `unusedFunc`, `emptyStub`, `FUN_` left unnamed. **The sibling's full implementation is the only source of truth for what that function actually is.**

Symptoms that you are looking at this pattern:
- A function body that is a single `RET`, or a trivial `return;`
- Names like `doNothing<N>`, `stub`, `unused`, `nop`, `empty`
- **Orphaned argument setup at a call site** - `PUSH <arg>` followed by `ADD ESP,<n>` with **no `CALL` between them**. This is Watcom inlining an empty function body while leaving the argument push. It is a reliable fingerprint that a real call existed in the source and the callee is stubbed in this build. Confirm by checking that the byte ranges are contiguous with no room for a `CALL`.
- A parameter the function never reads (a stub's signature is often preserved from the real version)

When you find one, resolve the stub against the sibling and report **both** the real semantics **and** the fact that the existing name is misleading.

#### Data Globals Hidden Behind Stubs

This is the second-order consequence and it is easy to miss. **When a build stubs out the code that *fills* a data structure, that structure's purpose is invisible in that build** - it is written by nothing, so nothing explains it, and it stays an unnamed `DAT_`/`undefined4` blob even though the rest of the binary reads it constantly.

The sibling's live builder code names those globals for free. Always ask: *what did the stubbed-out function write to, and is that global still unnamed in the stubbed build?*

**A zero-xref global cannot be transferred at all.** If every function that reads or writes a global is stubbed in the other build, that build contains **no evidence whatsoever** about where the global lives - no name, no defined data, no reference. This is a **hard limit of sibling transfer, not unfinished work.** Say so plainly and stop. Do not place the global by inference; report it as nocturne-only (or nocedit-only) and define it in the binary that actually references it.

**Do NOT locate a global in the other binary by address arithmetic.** A delta measured between two globals confirmed in both builds is valid *at those two points and nowhere else*. `.bss` is laid out in per-translation-unit declaration order, so the moment the builds' TUs diverge the layout diverges with them - a delta that holds for two adjacent globals can be meaningless a few kilobytes below. Extrapolating one lands you inside unrelated data.

The only acceptable way to place a global in the other binary is **an actual reference in that binary**: an xref, an absolute address operand in its `.asm`, or an existing symbol. If you have none of those, you have no answer. "It lands in a large unnamed hole" is **not** evidence of identity - unnamed holes are usually the bodies of arrays whose first element is named somewhere above.

#### Before Concluding a Stubbed Feature Is Absent, Find Its Replacement

A build that stubs out a subsystem has often **reimplemented it a different way**, not dropped it. The replacement is usually easy to find and it explains the divergence far better than "this build lost a feature."

Ask *what else in this build performs the same operation?* Search for the other functions that touch the same domain - blending, lighting, text rendering, file I/O - and compare approaches. Worked example from this codebase: nocedit stubs `buildBlendTables`/`loadLightTable` (precomputed 8-bit palette blend LUTs) because it blends **arithmetically in RGB with MMX** through `g_AlphaTable` instead. Two rendering backends, not a missing feature.

Getting this right changes the recommendation materially:
- **Feature genuinely absent** -> back-port the name so the shared-source identity is recorded, and note it is stubbed here.
- **Feature reimplemented** -> back-port the name, **and do not attempt to reconstruct its data structures in that build at all.** They are not merely unnamed there; they very likely do not exist, because the array declarations sit inside the same conditional as the code.

#### Other Back-Port Categories

- **Placeholder global names** - `g_CHAR_PTR_<addr>`, `g_INT_<addr>`, `DAT_<addr>`, `undefined4`. If the sibling names the same global meaningfully, say so.
- **Under-specified prototypes** - the sibling's call sites reveal a parameter count, type, or return the other binary's prototype gets wrong or leaves `undefined`.
- **Guessed-over semantics** - a name that was inferred from a weak hint and that the sibling's richer code contradicts.
- **Array bounds and element types** - one build's loop reveals the real extent of an array the other build only ever touches at one index.

Absence of evidence in the solved binary is exactly why these went wrong. Treat every such find as a defect report against the solved binary.

### Required Reporting

Whenever you use the sibling binary, state it explicitly in your analysis:

- **Whether a counterpart was found**, its name, its address in the sibling, and where you found it (grep, mapping, or same-TU directory).
- **The match quality** if the mapping was used - `confidence`, `shape_agreement`, `sig_verdict`.
- **Which of your conclusions are transferred and which are independently derived** from the target binary's own assembly. Never present a transferred struct offset as a verified one.
- **Any divergence you observed** between the two builds, since divergence is itself a finding worth recording.
- **Every correction the analysis implies for the *other* binary** - see the mandatory change-block format below.

### MANDATORY: Change-Block Format for Corrections to an Existing Binary

When you tell the user to change something that **already exists** in an already-decompiled binary, ambiguity is unacceptable. The user has to find that exact symbol in Ghidra and edit it. **Never** describe such a change in prose alone, and **never** bury it in a paragraph.

Emit one block per change. Every block is **enclosed by horizontal rules**, so that a run of twenty corrections stays scannable in a terminal.

#### Divider

A run of **74** `─` (U+2500) characters on its own line. Emit one **before the first block and after every block**, so each block is fully enclosed and consecutive blocks are separated by exactly one rule. No blank line between a rule and the block it borders.

#### Always Fence the Block

**Every emitted block MUST be wrapped in a plain triple-backtick code fence.** This is not optional and not cosmetic - unfenced, the renderer treats the block as markdown and *silently destroys C declarations*:

- `**` (pointer-to-pointer) is consumed as a bold marker, so `SInputFace **polygons` renders as `SInputFace polygons`. A `CURRENT SIG:` / `CHANGE SIG TO:` pair that differs only by one `*` then renders **identically**, which is the exact failure the pair exists to prevent. This happened in practice.
- Single `*` pairs across a line can open and close emphasis, silently eating both.
- Runs of spaces collapse, destroying the aligned value column.
- `_` in identifiers can italicise.

A fence makes every character literal and preserves the alignment, and costs nothing.

#### No Colour

**Do not colour these blocks.** ANSI escape sequences are *silently stripped* in this harness: they do not render as colour and they do not show up as visible garbage either, so a coloured block is indistinguishable from a plain one and every escape byte is wasted output. This was tested; do not try it again. (Colour would not survive a fence anyway - another reason the fence is free.)

Structure carries the emphasis instead - the dividers, the fixed field order, the aligned value column, and the `<- WRONG` / `<- APPLY THIS` markers. Keep the value column aligned with spaces exactly as the template shows.

#### Template

```
──────────────────────────────────────────────────────────────────────────
FIX IN: nocedit.exe
  SYMBOL:    engine_2d.c_doNothing1_FUN_00401590
  LOCATION:  0x00401590  (annotations/nocedit.exe/pseudocode/src/engine/2d.c/)
  CURRENT:   doNothing1                        <- WRONG
  CHANGE TO: buildBlendTables                  <- APPLY THIS
  KIND:      function rename
  CURRENT SIG:   void __cdecl engine_2d_c_doNothing1_FUN_00401590(char *filename)
  CHANGE SIG TO: void __cdecl engine_2d_c_buildBlendTables_FUN_00401590(char *filename)
  WHY:       bare RET in nocedit; nocturne.exe FUN_00401990 (0x236 bytes) is the
             real implementation - builds the 256x256 avg/additive blend LUTs.
  EVIDENCE:  nocturne 00401990 body; identical 4-call sequence in nocedit
             shape_design.c loadPalette_FUN_0046e810:215-218
  CONFIDENCE: high - call-site argument strings match positionally
──────────────────────────────────────────────────────────────────────────
```

Emit the block exactly like that, **fence included** - the dividers go inside the fence. Consecutive blocks may share one fence, with a single divider between them.

Rules for these blocks:

1. **State the binary first and by name.** The user is working across three of them.
2. **`CURRENT:` and `CHANGE TO:` are both mandatory**, even when `CURRENT` is `<unnamed>` / `DAT_00401234` / `undefined4`. The user must never have to guess what they are replacing.
3. **Mark them.** `<- WRONG` and `<- APPLY THIS`. Make the actionable line impossible to skim past.
4. **`KIND:`** must say exactly what operation to perform: `function rename`, `global rename`, `global retype`, `global define`, `prototype change`, `array resize`. Renaming and retyping are different Ghidra actions.
5. **One block per change.** Never fold several symbols into one block, even when the reason is shared.
6. **Give a full type for any retype/define**, including array extent - `uchar[34][256]`, not "an array of bytes".
7. **Any change touching a function MUST carry its full signature.** Emit `CURRENT SIG:` and `CHANGE SIG TO:` lines with the complete prototype - return type, calling convention, and every parameter with its type and `snake_case` name.

   Omit the signature lines **only** when *both* of the following hold:
   - the signature you would write is **character-for-character identical** to what is already in the binary, **and**
   - that existing signature contains **no** `undefined`, `undefined1/2/4/8`, `undefined *`, unnamed `param_N`, or `unknown` calling convention.

   If either condition fails, the signature lines are mandatory. In particular:
   - **A rename always changes the signature**, because the function name is part of it - so a rename always carries both lines.
   - **`undefined` anywhere is never acceptable to leave in place.** If the current prototype has `undefined4 FUN_00401990(undefined4 param_1)`, you must resolve every one of those to a real type and emit the corrected signature, even if the *name* is all the user asked about. An `undefined` return or parameter silently corrupts the decompilation of every caller.
   - **`Convention: unknown`** counts as undefined for this purpose - resolve it from the assembly and state it.

   When the only defect is in the signature and the name is already correct, that is still a change block - use `KIND: prototype change` with `CURRENT:` and `CHANGE TO:` both set to the unchanged name.
8. **`CONFIDENCE:`** is required, and say what would confirm it if it is not high. Derived-but-unverified addresses must be labeled as such **inside the block**, not only in surrounding prose.
9. **Separate new work from corrections.** Group blocks under a heading that makes clear whether you are asking the user to *fix something wrong* or to *name something new*. Corrections to an already-solved binary are the more urgent of the two and go first.
10. **Dividers are mandatory, not decorative.** A block without its enclosing rules is malformed - re-emit it. With colour unavailable, the divider and the aligned `CURRENT:`/`CHANGE TO:` pair are the *only* things stopping the user from pasting the wrong side of the change into Ghidra, so neither may be dropped or abbreviated.
11. **Always wrap a change block in a plain code fence, and never colour it.** The fence is mandatory: unfenced, markdown eats `**` in pointer-to-pointer declarations and collapses the aligned column, which can make `CURRENT SIG:` and `CHANGE SIG TO:` render identically. Do not add markdown emphasis (`**bold**`, backticks) inside the block either - inside a fence it would appear literally as punctuation.

### Output Location: Terminal Only

**Report all findings directly in the terminal response. Do NOT write spec files, worklist files, markdown reports, or any other artifact to disk unless the user explicitly asks for one.** The analysis is the deliverable. Do not offer to write one up as a file, and do not create `*_spec.md` or worklist entries on your own initiative.

## CRITICAL: Focus on Data Structures, Not Decompiler Aesthetics

**IMPORTANT**: The goal of analysis is to identify correct data structures and function signatures that can be applied in Ghidra - NOT to make the decompiler output look pretty.

### What Actually Matters (Can Be Changed in Ghidra):

1. **Data Structure Definitions**
   - Struct/class layouts with correct field types and offsets
   - Array sizes and element types
   - Vtable structures with correct method offsets
   - Proper type definitions for all custom types

2. **Function Signatures**
   - Correct function name
   - Correct return type
   - Correct parameter types, names, and count
   - Correct calling convention

3. **Global Variable Definitions**
   - Correct type (especially arrays vs single pointers)
   - Correct size
   - Correct element type for arrays

4. **Understanding Assembly for Reconstruction**
   - Understand the logic well enough to reconstruct original C++
   - Identify patterns (loops, conditionals, vtable calls, etc.)
   - Map assembly operations to high-level C++ constructs

### What Does NOT Matter (Cannot Be Changed in Ghidra):

1. **Decompiler Output Aesthetics**
   - Ugly pointer arithmetic (e.g., `*(int**)((int)array + offset)` vs `array[index]`)
   - Complex nested casts
   - Goto statements and weird control flow
   - Variable reuse and confusing temporary names
   - These will remain ugly - that's fine and expected

2. **Decompiler-Generated Variable Names**
   - `iVar1`, `iVar2`, `local_14`, etc. are just hints
   - Focus on understanding what they represent, not renaming them in output

### Analysis Priority:

**PRIMARY GOAL**: Ensure all data structures, function signatures, and global variables are correctly typed in Ghidra so that:
- The assembly can be understood
- The original C++ can be reconstructed
- Function calls use correct parameter types
- Memory accesses use correct structure offsets

**SECONDARY GOAL**: Document the logic and purpose of each function

**NOT A GOAL**: Making the Ghidra decompiler output readable or pretty

### Example of Correct Focus:

**GOOD Analysis** (focuses on data structures):
```
The function uses two global arrays:
- g_DirectSoundHardwareSfxBuffers[31] at 0x03f6aa44 (IDirectSoundBuffer* array)
- g_DirectSound3DBufferInterfaces[31] at 0x03f6aac0 (IDirectSound3DBuffer* array)

The loop iterates 31 times (indices 0-30), calling:
- buffer->Stop() at vtable offset 0x48
- interface->Release() at vtable offset 0x08

These need to be defined as arrays in Ghidra with the correct types.
```

**BAD Analysis** (focuses on decompiler output):
```
The decompiler output has ugly pointer arithmetic like:
  *(int**)((int)g_DirectSoundHardwareSfxBuffers + iVar4)

This should be cleaned up to look like:
  g_DirectSoundHardwareSfxBuffers[loop_index]
```

The "bad" example critiques something that cannot be changed - the decompiler output will always be ugly. The "good" example focuses on the actual data structure that needs to be correctly defined in Ghidra.

## Repository Structure

Pseudocode and related files are organized as follows (relative to repository root). The same layout exists once per analyzed binary — substitute `<exe>` with `nocedit.exe`, `nocturne.exe`, or `tridx7.dll`:

- **Pseudocode files**: `annotations/<exe>/pseudocode/src/` - Contains decompiled C/C++ pseudocode organized by source file path
  - Example: `annotations/nocedit.exe/pseudocode/src/core/dcamera.cpp/FunctionName_FUN_address.cpp`
- **Include files**: `annotations/<exe>/pseudocode/include/` - Type definitions, structures, and headers
  - Example: `annotations/nocedit.exe/pseudocode/include/Nocturne/Class/Game/CDemonCamera.h`
- **Prototypes**: `annotations/<exe>/pseudocode/prototypes/` - Function prototype headers organized by module
  - Example: `annotations/nocedit.exe/pseudocode/prototypes/core/dcamera.h`

### Per-Function Artifacts

Each function directory holds several files sharing one base name. Consult them in this order:

| File | Content | Trust |
|---|---|---|
| `<Name>_FUN_<addr>.asm` | Raw disassembly | **Ground truth** |
| `<Name>_FUN_<addr>.keep.cpp` / `.keep.c` | Hand-fixed, compiling, semantically audited reconstruction (only where one has been written) | High - a human verified this against the asm |
| `<Name>_FUN_<addr>.cpp` | Raw Ghidra decompiler output | Hint only - signature and types are guesses |
| `<Name>_FUN_<addr>.json` | Structured metadata (signature, convention, xrefs) | Reflects the Ghidra DB, not verified |
| `<Name>_FUN_<addr>.pcode` | Ghidra p-code | Intermediate representation |

**A `.keep` file is the single most valuable artifact available** - it is what a human concluded the assembly actually says, after the raw decompilation failed to compile or was found to be wrong. `nocedit.exe` currently has ~2595 of them.

## Target System Information
- **Architecture**: x86 32-bit (x86:LE:32:watcom)
- **Compiler**: Watcom C++ 11.0 (late 1990s era)
- **C++ Standard**: Pre-C++98, limited STL, no modern C++ features
- **Calling Conventions**: __watcallRegister (default), __watcallStack, __stdcall, __cdecl, __syscall, __fpustack
- **Pointer Size**: 4 bytes
- **Alignment**: Default 1 byte, pointers 4-byte aligned, 8-byte values 4-byte aligned

### Era-Specific C++ Characteristics
- **Virtual tables**: Simple implementation, single inheritance focus
- **Templates**: Limited support, often avoided for code size
- **Exceptions**: Basic support, often disabled for performance
- **RTTI**: Limited or disabled
- **STL**: Minimal usage, custom containers preferred
- **Memory management**: Manual new/delete, limited smart pointers
- **String handling**: C-style strings or simple custom string classes

## Function Naming Convention
**CRITICAL**: Use this EXACT format: `folder_file.ext_functionName_FUN_address`

**IMPORTANT**: The file extension must use a DOT (.), not an underscore (_):
- **CORRECT**: `shape_design.c_exportModel_FUN_00459e80`
- **WRONG**: `shape_design_c_exportModel_FUN_00459e80`

## Ghidra-Compatible Type System

### Supported Basic Types
- **Integers**: `char`, `uchar`, `short`, `ushort`, `int`, `uint`
- **Floating-point**: `float`, `double` (avoid `long double` - not well supported)
- **Pointers**: `void*`, `char*`, `StructName*`, `FunctionPtr*`
- **Boolean**: `bool` (or `int` for C-style boolean)

### Unsupported/Problematic Types and Modifiers
- **const**: Avoid `const` keyword in function signatures - Ghidra doesn't handle it well
- **long double**: Use `double` instead for 8-byte floating-point
- **volatile**: Not needed for reverse engineering analysis
- **register**: Compiler hint, not relevant for analysis
- **static**: Only relevant for scope, not in function signatures
- **inline**: Not relevant for compiled code analysis

### Type Conversion Guidelines
```cpp
// BAD - Unsupported in Ghidra:
void crt_process.c_processData_FUN_12345678(const char* input, long double precision);

// GOOD - Ghidra-compatible:
void crt_process.c_processData_FUN_12345678(char* input, double precision);
```

### Function Parameter Naming
All function parameters should use `snake_case`:
- `actor_ptr` instead of `actorPtr` or `ActorPtr`
- `delta_time` instead of `deltaTime` or `DeltaTime`
- `buffer_size` instead of `bufferSize` or `BufferSize`

### Required Components (ALL MUST BE PRESENT)
1. **folder_file.ext**: Module/file identifier
2. **FunctionName**: Actual function name (inferred from purpose)
3. **FUN_**: Literal separator
4. **address**: Hexadecimal address

### Path-Based Naming (Preferred)
When file paths are visible in assert strings or debug info:
- `core_actor.cpp_updatePosition_FUN_12345678` (from "..\core\actor.cpp")
- `engine_drender.cpp_drawSprite_FUN_12345678` (from "..\engine\drender.cpp")
- `sound_mp3.cpp_loadAudioFile_FUN_12345678` (from "..\sound\mp3.cpp")

### Class Method Naming Convention
**IMPORTANT**: When a function is known or suspected to be a **class method** (member function), use the format: `folder_ClassName_functionName_FUN_address`

#### Format: folder_ClassName_functionName_FUN_address
- **folder**: Directory or module identifier
- **ClassName**: The class this method belongs to (e.g., `CDemonActor`, `CWeapon`, `CRenderer`)
- **functionName**: The method name (e.g., `updatePosition`, `fire`, `render`)
- **FUN_**: Literal separator
- **address**: Hexadecimal address

#### Identifying Class Methods
A function is likely a class method if:
- **Debug strings** contain `ClassName::functionName` pattern
- **First parameter** is a pointer to a class/struct type
- **Member access patterns**: Function accesses data at offsets from first parameter
- **Virtual table**: Function appears in a class vtable
- **Constructor/destructor patterns**: Initializes or cleans up object state
- **Naming context**: Function name suggests it operates on an object

#### Class Method First Parameter
**When a function is identified as a class method, the first parameter is ALWAYS `this_ptr`** (the pointer to the object instance):
```cpp
// CLASS METHOD - first parameter is this pointer
void core_CDemonActor_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);

// NON-CLASS METHOD - regular function
void core_actor.cpp_processAllActors_FUN_00456789(CDemonActor** actor_array, int count);
```

#### Examples of Class Method Names
```cpp
// Good - Class method format:
void core_CDemonActor_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);
int engine_CWeapon_fire_FUN_00456789(CWeapon* this_ptr, CVector3* target_pos);
bool sound_CAudioManager_isPlaying_FUN_00789ABC(CAudioManager* this_ptr, int sound_id);

// Compare with non-class method format:
void core_actor.cpp_initActorSystem_FUN_00401234(void);
CDemonActor* engine_factory.cpp_createActor_FUN_00405678(int actor_type);
```

### Debug String Function Name Hints
**IMPORTANT**: Debug strings, assert messages, and logging often contain function names that directly reveal the actual function name.

#### ClassName::functionName Pattern
When you see strings containing `ClassName::functionName` format, this is a **strong hint** that you've found the actual function name:
- `"CDemonActor::updatePosition called with invalid delta"` → Function is `updatePosition`
- `"CWeapon::fire: ammunition count is %d"` → Function is `fire`
- `"Assert failed in CRenderer::drawSprite"` → Function is `drawSprite`
- `"CHero::takeDamage amount=%f"` → Function is `takeDamage`

#### Other Debug String Patterns
- **Error messages**: `"Failed to initialize audio system"` → likely `initAudioSystem`
- **Log prefixes**: `"[LoadTexture] Loading %s"` → Function is `loadTexture`
- **Assert locations**: Contains file path and line number hints
- **Function entry logs**: `"Entering ProcessInput"` → Function is `processInput`

#### Using Debug Strings for Naming
When debug strings are present:
1. **First priority**: Use exact function name from `ClassName::functionName` pattern
2. **Second priority**: Use function name hints from log messages
3. **Fallback**: Infer from purpose/parameters as described below

### Function Name Inference Guidelines
When the actual function name is unknown and no debug strings are available, infer from:
- **Purpose**: `processInput`, `updateAnimation`, `loadTexture`
- **Parameters**: `setPosition`, `getHealth`, `createActor`
- **Return type**: `isValid`, `findActor`, `calculateDistance`
- **Context**: `onCollision`, `handleEvent`, `checkBounds`

### Unknown/Standard Library Functions
For functions without clear paths, use educated guesses:
- `crt_stdio.c_printf_FUN_12345678` (standard I/O functions)
- `crt_math.c_sqrt_FUN_12345678` (math library functions)
- `crt_string.c_strcpy_FUN_12345678` (string manipulation)
- `crt_memory.c_malloc_FUN_12345678` (malloc, free, etc.)
- `watcom_runtime.c_startupInit_FUN_12345678` (Watcom-specific runtime)
- `windows_kernel32.c_getCurrentTime_FUN_12345678` (Windows API calls)

### Examples of Complete Function Names
```cpp
// Good - Class method format (when first param is object pointer):
void core_CDemonActor_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);
int engine_CCollisionBox_checkBounds_FUN_00456789(CCollisionBox* this_ptr, float x_pos, float y_pos);
bool sound_CAudioManager_isPlaying_FUN_00789ABC(CAudioManager* this_ptr, int sound_id);

// Good - Non-class method format (regular functions):
void core_actor.cpp_initActorSystem_FUN_00401000(void);
CDemonActor* engine_factory.cpp_createActor_FUN_00402000(int actor_type);

// Bad - Missing function name:
void core_actor.cpp_FUN_004123A0(CDemonActor* this_ptr, float delta_time);

// Bad - Wrong format for class method:
void core_actor.cpp_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);
// Should be: core_CDemonActor_updatePosition_FUN_004123A0
```

## Global Variable Naming Convention

### Format: g_PascalCase
All global variables should use the `g_PascalCase` format:
- `g_PlayerHealth` (instead of DAT_00401234)
- `g_GameState` (instead of DAT_00405678)
- `g_SoundEnabled` (instead of DAT_0040ABCD)
- `g_WindowHandle` (instead of DAT_0040EF12)

### CRITICAL: Global Names Must Be Collision-Resistant

A global name is a permanent identifier in a namespace of thousands - `nocedit.exe` alone has ~2657 named globals. The failure mode is naming a global after **the shape of the idiom that touches it** instead of after **evidence unique to that address**. Idiom-shaped names are magnets: the next zero constant, the next scratch slot, the next dirty flag you analyze will fit the same name equally well, and you will either duplicate it or coin a near-synonym for it. **Two addresses that both plausibly deserve the same name is a defect you are introducing.**

#### Idiom-Shaped Tokens Are Never Sufficient Alone

`Zero`, `One`, `Scratch`, `Temp`, `Dummy`, `Saved`, `Spill`, `Flag`, `Count`, `Counter`, `Index`, `Buffer`, `Data`, `Value`, `State`, `Ptr`, `Result`, `Enabled`, `Current`.

Each of these describes a pattern that recurs at dozens of addresses across the binary. They may appear *in* a name; they may never be the part that distinguishes it.

#### Every Name Needs Owner + Discriminator

1. **Owner** - the subsystem, module, or class the global belongs to. This codebase already works this way: `g_Moon*`, `g_Cloth*`, `g_Course*`, `g_Actor*`, `g_ViewportStack*`, `g_MatrixStack*`, `g_WaveIn*` / `g_WaveOut*`, `g_DirectSound*`, `g_CameraShake*`, `g_FireEffect*`.
2. **Discriminator** - the fact that makes *this* address different from every other instance of the same idiom: which routine consumes it, which register / channel / axis / colour component it carries, which buffer it feeds, what its single initialised value is.

#### Verify the Prefix Before Committing to It

An owner prefix that already exists **belongs to whichever translation unit established it**. Joining that family asserts your global lives there too. Check where the existing members are actually referenced:

```bash
# What does this prefix family already contain?
grep -rhoE "\bg_Rast[A-Za-z0-9_]*" annotations/*/pseudocode/ | sort -u
# Which TU owns it?
grep -rl "g_RasterizerEdgeArray" annotations/nocedit.exe/pseudocode/src/ --include=*.asm \
  | sed 's|.*/src/||' | cut -d/ -f1-2 | sort -u
```

`g_Rasterizer*` looks like the obvious prefix for a software-rasterizer global in `engine/special.cpp` - but all five existing members are `engine/3d.c` statics, so adopting it would file the global under the wrong translation unit.

#### Required Checks Before Proposing Any Global Name

Run these against **both** binaries - a global's name must be identical across the sibling pair, so a collision in either one is a collision.

```bash
# 1. Is the exact name already taken?
grep -rn "g_ProposedName" annotations/*/pseudocode/include/globals/
# 2. Is the prefix family taken, and by which TU?
grep -rhoE "\bg_Prefix[A-Za-z0-9_]*" annotations/*/pseudocode/ | sort -u
# 3. Read the namespace you are adding to before adding to it
grep -rhoE "\bg_[A-Za-z0-9_]+" annotations/nocedit.exe/pseudocode/src/<tu>/*.asm | sort -u
```

#### The Self-Test

*If I met a second, unrelated address tomorrow that this exact name also fit, would the name be wrong?* If yes, it is too generic - add the discriminator now, not after the collision.

#### Do Not Extend a Family You Have Not Verified

`g_SavedRegisterEAX` / `EBX` / `ECX` / `EDX` (nocedit `globals_680000.cpp`) have **zero xrefs anywhere in the binary** - they were named from adjacency to nearby rasterizer statics, not from evidence. Extending an unverified family propagates the original guess and lends it false weight. Check that a family's existing members are evidence-backed before joining it.

#### Example

```
BAD:   g_ZeroQword           - fits every zero constant in the binary
BAD:   g_FpuPopScratch       - fits every FSTP dump slot in the binary
BAD:   g_RasterZeroQword     - prefix collides with engine/3d.c's g_Rasterizer* family
GOOD:  g_BufferFillZeroQword - the qword the three special.cpp fill loops broadcast
GOOD:  g_BufferFillFpuPopST0 - the ST0 dump that terminates those same loops
```

### New vs. Existing Globals
When analyzing globals, clearly distinguish:

#### **NEW GLOBALS** (Previously unnamed DAT_xxx)
```cpp
// NEW GLOBAL VARIABLES (previously DAT_xxx):
extern int g_PlayerScore;           // was DAT_00401234
extern float g_GameSpeed;           // was DAT_00405678
extern CDemonActor* g_PlayerActor;  // was DAT_0040ABCD
```

#### **EXISTING GLOBALS** (Already named)
```cpp
// EXISTING GLOBAL VARIABLES (already named):
extern int g_ScreenWidth;          // already defined
extern int g_ScreenHeight;         // already defined
```

### Global Variable Analysis Guidelines
- **Type inference**: Based on usage patterns and size
- **Purpose inference**: From function calls and context
- **Scope**: Determine if truly global or module-static
- **Initialization**: Look for startup initialization patterns

## Local Stack Frame Variable Analysis

### Local Variable Naming Convention: snake_case
All local variables should use `snake_case` format:
- `temp_buffer` (instead of local_10)
- `current_index` (instead of local_14)
- `player_ptr` (instead of local_18)
- `is_valid` (instead of local_1C)

### Stack Frame Layout (Watcom C++ 11.0)
```
Higher Addresses
├── Function Parameters (ESP+8, ESP+12, etc.)
├── Return Address (ESP+4)
├── Saved EBP (ESP+0, becomes EBP+0)
├── Local Variables (EBP-4, EBP-8, etc.)
├── Compiler Temporaries (EBP-XX)
└── Function Call Arguments (ESP-adjusted)
Lower Addresses
```

### Local Variable Identification Patterns

#### **Positive EBP Offsets** (EBP+4, EBP+8, etc.)
- **Function parameters** passed on stack
- **Not local variables** - these are parameters

#### **Negative EBP Offsets** (EBP-4, EBP-8, etc.)
- **True local variables** declared in function
- **Compiler temporaries** for intermediate calculations
- **Spilled registers** when register pressure is high

#### **Direct ESP Offsets** (ESP+4, ESP+8, etc.)
- **Function call arguments** being set up
- **Temporary stack space** for calculations
- **Not persistent local variables**

### Type Inference Guidelines

#### **Size-Based Type Detection**
- **1 byte access (MOV BYTE PTR)**: `char`, `bool`, `uchar`
- **2 byte access (MOV WORD PTR)**: `short`, `ushort`, `WORD`
- **4 byte access (MOV DWORD PTR)**: `int`, `float`, `pointer`, `long`, `DWORD`
- **8 byte access**: `double`, `long long`, `struct` (2 DWORD operations)

#### **Usage Pattern Analysis**
- **Pointer patterns**: Used in CALL instructions, dereferenced with brackets
- **Array indexing**: Added to base addresses, multiplied by size
- **Boolean patterns**: Compared with 0/1, used in conditional jumps
- **Loop counters**: Incremented/decremented, compared with limits
- **Buffer patterns**: Used with string functions, memory operations

#### **Function Call Context**
- **API parameters**: Passed to known Windows API functions
- **Math operations**: Used with FPU instructions (FILD, FST, etc.)
- **String operations**: Used with strcpy, strlen, printf, etc.
- **Memory operations**: Used with malloc, memcpy, new, delete

### Common Local Variable Patterns (Late 1990s Era)

#### **Buffer Management**
```cpp
char temp_buffer[256];      // EBP-0x100 to EBP-0x1, 256-byte array
char* buffer_ptr;           // EBP-0x104, pointer to dynamic buffer
int buffer_size;            // EBP-0x108, size tracking
```

#### **Loop Variables**
```cpp
int i;                     // EBP-0x4, loop counter
int count;                 // EBP-0x8, item count
int max_items;             // EBP-0xC, loop limit
```

#### **Temporary Objects**
```cpp
CVector3 temp_pos;         // EBP-0x18 to EBP-0xC, 12-byte struct
float delta_time;          // EBP-0x1C, timing variable
bool result_flag;          // EBP-0x1D, operation result
```

#### **Pointer Management**
```cpp
CDemonActor* actor_ptr;    // EBP-0x20, object pointer
void* data_ptr;            // EBP-0x24, generic data pointer
char* string_ptr;          // EBP-0x28, string pointer
```

#### **Error Handling**
```cpp
int error_code;            // EBP-0x2C, error status
bool success;              // EBP-0x2D, operation success flag
```

### Local Variable Analysis Format

#### **Local Variables Section**
```cpp
// LOCAL VARIABLES (negative EBP offsets):
float delta_time;          // EBP-0x4  - time elapsed since last frame
int loop_counter;          // EBP-0x8  - iteration counter for processing
CDemonActor* target_actor; // EBP-0xC  - pointer to target actor object
char temp_buffer[64];      // EBP-0x4C to EBP-0xC - temporary string buffer
bool is_initialized;       // EBP-0x4D - initialization state flag
CVector3 world_position;   // EBP-0x58 to EBP-0x4D - 3D position vector (12 bytes)
void* callback_data;       // EBP-0x5C - data pointer for callback function
```

#### **Compiler Temporaries Section**
```cpp
// COMPILER TEMPORARIES (negative EBP offsets):
int temp_calc1;            // EBP-0x60 - intermediate calculation result
float temp_math;           // EBP-0x64 - temporary for floating-point operation
void* temp_ptr;            // EBP-0x68 - temporary pointer for address calculation
```

### Distinguishing Variable Types

#### **Local Variables vs. Temporaries**
- **Local variables**: Named in source, persistent across multiple operations
- **Temporaries**: Compiler-generated, short-lived, calculation-specific
- **Evidence**: Temporaries often reused for different purposes within function

#### **Arrays vs. Individual Variables**
- **Arrays**: Consecutive memory access with index calculations
- **Structs**: Grouped accesses with consistent offset patterns
- **Individual**: Isolated access patterns

#### **Function-Scoped vs. Block-Scoped**
- **Function-scoped**: Allocated at function entry, persistent throughout
- **Block-scoped**: May be allocated/deallocated mid-function (rare in optimized code)

### Stack Frame Size Analysis
- **Total frame size**: Distance from EBP to lowest ESP adjustment
- **Variable space**: EBP-4 down to EBP-frame_size
- **Alignment**: Watcom typically aligns stack to 4-byte boundaries
- **Optimization**: Release builds may eliminate unused variables

## Structure/Class Analysis Guidelines - BYTE COMPLETE REQUIREMENT

**CRITICAL**: All structure definitions MUST be byte-complete with NO gaps. Every byte from offset 0x00 to the total size must be accounted for.

### Byte-Complete Structure Rules
1. **Account for every byte**: Use padding arrays for unknown regions
2. **Preserve known fields**: Place identified members at correct offsets
3. **Fill gaps**: Use `char padding_0x[pos]` for unknown areas
4. **Total size verification**: Structure size must match largest observed offset + member size
5. **Alignment padding**: Include explicit padding for alignment requirements

### Structure Definition Format Example
```cpp
struct/class StructureName {
    // Offset 0x00: Virtual table pointer (if polymorphic)
    void** vtable;

    // Offset 0x04: Known member description
    float pos_x;

    // Offset 0x08: Unknown region (example)
    char padding_0x08[8];  // 8 bytes unknown

    // Offset 0x10: Another known member
    int health;

    // Offset 0x14: Fill remaining unknown space
    char padding_0x14[12]; // Fill to total size

    // Total size: 0x20 bytes
};
```

### Identifying Structures/Classes
Look for:
- **Consistent offset patterns** in memory accesses
- **Constructor/destructor patterns** (virtual table setup, simple initialization)
- **Member function calls** with `this` pointer in ECX/EAX
- **Virtual function calls** through vtable at offset 0 (simple single inheritance)
- **Manual memory management** patterns (new/delete, malloc/free)
- **C-style arrays** and pointer arithmetic rather than STL containers
- **Simple inheritance** (multiple inheritance rare, virtual inheritance very rare)

### Common Structure Patterns (Watcom 11.0 Era)
- **Virtual table pointer**: Always at offset 0x00 (4 bytes) for polymorphic classes
- **Base class data**: Simple linear layout, follows vtable pointer
- **Member variables**: Typically in declaration order, minimal padding
- **No hidden members**: Limited compiler-generated members compared to modern C++
- **Simple vtables**: Direct function pointers, no complex thunks
- **Padding**: Minimal, only for alignment requirements

### Size and Alignment Rules
- **Structures**: Minimum 4-byte alignment for performance
- **Pointers**: 4 bytes, 4-byte aligned
- **int/long**: 4 bytes, 4-byte aligned
- **short**: 2 bytes, 2-byte aligned
- **char**: 1 byte, 1-byte aligned
- **8-byte values**: 4-byte aligned (not 8-byte aligned)

### Example Byte-Complete Structure Analysis
```cpp
class CDemonActor {
    // Offset 0x00: Virtual table pointer
    void** vtable;                   // 4 bytes

    // Offset 0x04: Position coordinates (inferred from function usage)
    float pos_x;                     // 4 bytes
    float pos_y;                     // 4 bytes
    float pos_z;                     // 4 bytes

    // Offset 0x10: Unknown region seen in constructor
    char padding_0x10[8];            // 8 bytes unknown

    // Offset 0x18: Health value (seen at this offset)
    int health;                      // 4 bytes

    // Offset 0x1C: Unknown region before next known field
    char padding_0x1C[12];           // 12 bytes unknown

    // Offset 0x28: Function pointer (seen in calls)
    void (*update_callback)(float);  // 4 bytes

    // Offset 0x2C: Final unknown region to complete structure
    char padding_0x2C[20];           // 20 bytes to reach total size

    // Total size: 0x40 bytes (based on largest observed offset + allocation patterns)
};
```

## Function Pointer Definitions

When a function prototype contains function pointers, provide both the prototype and a Ghidra-compatible function definition.

### Format for Function Pointer Analysis

#### Original Function Prototype
```cpp
void core_callback.cpp_registerCallback_FUN_12345678(void (*callback)(int, float), int param1, float param2);
```

#### Ghidra Function Pointer Definition
```cpp
// Function pointer type definition for Ghidra:
typedef void (__cdecl *CallbackFunc)(int param1, float param2);

// Updated function prototype using typedef:
void core_callback.cpp_registerCallback_FUN_12345678(CallbackFunc callback_ptr, int param1, float param2);

// Ghidra function signature format:
// void __cdecl CallbackFunc(int param1, float param2)
```

### Common Function Pointer Patterns (Late 1990s Era)
- **Callback functions**: Event handlers, timers, input processing
- **Virtual function tables**: Direct function pointer access
- **State machines**: Function pointer arrays for state transitions
- **Plugin systems**: Dynamic function loading
- **Comparison functions**: For sorting algorithms

### Function Pointer Calling Convention Analysis
- **__cdecl**: For C-style callbacks and library functions
- **__stdcall**: For Windows API callbacks
- **Evidence**: Stack cleanup patterns, register usage, parameter passing

## Watcom Calling Convention Analysis

### **IMPORTANT: Nocturne-Specific Convention Usage**
**For the Nocturne codebase specifically, most properly analyzed functions use `__cdecl` calling convention.** While Watcom defaults to `__watcallRegister`, the Nocturne project appears to have been compiled with settings that favor `__cdecl`. When analyzing Nocturne functions, start by assuming `__cdecl` unless evidence clearly indicates otherwise.

### __cdecl (Most Common in Nocturne)
- **Parameters**: All on stack, pushed right-to-left (4-byte aligned)
- **Return**: EAX (1-4 bytes), EDX:EAX (5-8 bytes), ST0 (float)
- **Preserved**: EBX, ESI, EDI, EBP
- **Stack cleanup**: Caller cleans up
- **Class Methods**: First parameter is `this` pointer on stack (typically at ESP+4 after prologue)

### __watcallRegister (Watcom Default, Less Common in Nocturne)
- **Parameters**: EAX, EDX, EBX, ECX, then stack (4-byte aligned)
- **Return**: EAX (1-4 bytes), EDX:EAX (5-8 bytes), ST0 (float)
- **Preserved**: EBX, ESI, EDI, EBP
- **Stack cleanup**: Caller cleans up

### __watcallStack
- **Parameters**: All on stack (4-byte aligned)
- **Return**: Same as __watcallRegister
- **Preserved**: EBX, ESI, EDI, EBP
- **Stack cleanup**: Callee cleans up (extrapop=4)

### Other Conventions
- **__stdcall**: Stack parameters, callee cleanup
- **__syscall**: Stack parameters, callee cleanup, preserves EBX, EBP, EDI, ESI

### **CRITICAL: Class Method This Pointer**
**When analyzing C++ class methods (member functions), the first parameter is ALWAYS a `this` pointer to the object instance.** This is true regardless of calling convention:

- **__cdecl methods**: `this` pointer is first stack parameter (ESP+4 after standard prologue)
- **Evidence of class method**:
  - First parameter is a pointer to a known class type
  - Function accesses members at offsets from first parameter
  - Function appears in class vtable or constructor/destructor patterns
  - Function name suggests it operates on an object (e.g., "process", "update", "render")
  - Debug strings contain `ClassName::functionName` pattern

**Example class method signature:**
```cpp
// This is a CLASS METHOD - use class method naming format
void core_CDemonActor_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);

// NOT this (wrong format for class method):
void core_actor.cpp_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);

// The first parameter is always named 'this_ptr' and typed as a pointer to the class
```

### Floating-Point Math Conventions

### __fpustack (Pure Floating-Point Functions)
- **Parameters**: Passed on stack as extended precision (10-byte) floating-point values
- **Return**: ST0 (extended precision floating-point result)
- **Preserved**: EBX, ESI, EDI, EBP
- **Stack cleanup**: Callee cleans up (extrapop="4")
- **FPU Impact**: All ST0-ST7 registers marked as killed
- **Usage**: Functions that work entirely with extended precision floating-point data, using x87 FPU stack internally for computation

### Identifying Floating-Point Calling Conventions

#### Key Assembly Patterns to Look For:
- **FLD instructions**: Loading floating-point values from memory or stack
- **FST/FSTP instructions**: Storing floating-point values to ST0 for return
- **FADD/FMUL/FSUB/FDIV**: Floating-point arithmetic operations
- **FILD/FIST**: Integer to/from floating-point conversions
- **Stack offsets**: FP parameters typically at ESP+4, ESP+8, etc.
- **Register usage**: Look for integer params in EAX, EDX before FP operations

#### Convention Detection Guidelines:
2. **__fpustack**: Direct ST0/ST1 usage for input

## Class Hierarchy Knowledge
The codebase uses this inheritance structure:

```
CDemonActor (abstract base)
├── CWeapon (abstract)
│   ├── CTurret, CTommyGun, CShotgun, etc.
├── CCharacter (abstract)
│   ├── CHero (abstract)
│   │   ├── CSvetlana, CStranger, CScat, etc.
│   ├── CEnemy (abstract)
│   │   ├── CZombie, CWerewolf, CVampireBoss, etc.
│   ├── CNPC
│       ├── CBassPlayer, CDrummer, CPassenger, etc.
├── CVehicle, CTrigger, CPlatform, etc.
```

## Analysis Output Format

For each function, provide:

### 1. Function Signature (COMPLETE FORMAT REQUIRED)
```cpp
ReturnType folder_file.ext_functionName_FUN_address(param1_type param1_name, param2_type param2_name, ...);
```
**Note**: Use only Ghidra-compatible types (avoid `const`, `long double`, etc.) and `snake_case` parameter names.

### 2. Calling Convention Analysis
- **Detected convention**: __watcallRegister/__watcallStack/__fpustack/etc.
- **Evidence**: Register usage patterns, stack cleanup, parameter passing, FPU stack usage
- **Parameter locations**: Which registers/stack offsets used
- **FPU considerations**: For math functions, note ST0-ST7 register usage and floating-point parameter handling

### 3. Local Variables Analysis
```cpp
// LOCAL VARIABLES (negative EBP offsets):
type variable_name;        // EBP-0xOffset - purpose description
type array_name[size];     // EBP-0xStart to EBP-0xEnd - array description

// COMPILER TEMPORARIES (negative EBP offsets):
type temp_name;            // EBP-0xOffset - temporary calculation purpose
```

### 4. Global Variables (if applicable)
#### NEW GLOBALS (Previously DAT_xxx)
```cpp
extern type g_VariableName;  // was DAT_address - purpose description
```

#### EXISTING GLOBALS (Already named)
```cpp
extern type g_ExistingVariable;  // already defined - usage in this function
```

### 5. Function Pointer Definitions (if applicable)
```cpp
// Function pointer type definition for Ghidra:
typedef ReturnType (__callingconv *FuncPtrName)(param_types...);

// Ghidra function signature format:
// ReturnType __callingconv FuncPtrName(param_types...)
```

### 6. Structure/Class Analysis (BYTE-COMPLETE REQUIRED)
```cpp
struct/class StructureName {
    // Offset 0x00: Description (vtable if polymorphic)
    type member_name;                // size bytes

    // Offset 0x04: Unknown region
    char padding_0x04[8];              // 8 bytes unknown

    // Offset 0x0C: Description
    type member_name;                // size bytes

    // ... continue for ALL bytes ...

    // Offset 0xXX: Final padding to complete structure
    char padding_0xXX[remaining];      // remaining bytes to total size
};
// Total size: 0x__ bytes (MUST account for every byte)
// Alignment: __ bytes
// Era notes: Simple layout, minimal compiler additions
```

### 7. Purpose Analysis
- **Primary function**: What the function appears to do
- **Evidence**: Key assembly instructions, function calls, data patterns
- **Context clues**: String references, API calls, mathematical operations
- **Era considerations**: Manual memory management, simple algorithms, performance focus

### 8. Notes
- **Confidence level**: How certain you are about the analysis
- **Assumptions**: What you're assuming based on limited information
- **Era-specific patterns**: Watcom 11.0 and late 1990s C++ characteristics observed
- **Recommendations**: Suggestions for further analysis

## Common Late 1990s C++ Patterns to Recognize

### Memory Management
- **Manual allocation**: `new`/`delete`, `malloc`/`free` calls
- **Array management**: Manual array bounds, pointer arithmetic
- **No RAII**: Resources manually managed in destructors

### String Handling
- **C-style strings**: `char*`, `strcpy`, `strlen` usage
- **Custom string classes**: Simple implementations, manual memory management
- **Fixed buffers**: `char buffer[256]` patterns

### Container Patterns
- **Custom containers**: Linked lists, dynamic arrays implemented manually
- **Simple algorithms**: Basic sorting, searching without STL
- **Pointer-heavy**: Lots of pointer manipulation and traversal

### Error Handling
- **Return codes**: Integer return values for error status
- **Global error states**: Error flags or global variables
- **Minimal exceptions**: If present, very basic try/catch

### Floating-Point Math Functions
- **x87 FPU usage**: Functions with FILD, FLD, FST, FSTP instructions
- **Math library calls**: `sin`, `cos`, `sqrt`, `pow`, `atan2`, `fmod` functions
- **Stack-based FP**: Floating-point values passed/returned via FPU stack (ST0-ST7)
- **Mixed conventions**: Integer parameters in registers, FP parameters on stack or FPU
- **Library linking**: Static linking of math libraries common in game engines
- **Performance focus**: Hand-optimized math routines for 3D graphics and physics

## Example Analysis Structure

```
## Function: core_CDemonActor_updateWithCallback_FUN_12345678

### Signature
```cpp
void core_CDemonActor_updateWithCallback_FUN_12345678(CDemonActor* this_ptr, void (*update_callback)(float), float delta_time);
```
**Note**: Class method format used because first parameter is CDemonActor* this_ptr

### Calling Convention: __watcallRegister
- **this_ptr**: EAX
- **update_callback**: EDX
- **delta_time**: EBX
- **Evidence**: No stack cleanup, registers used in order

### Local Variables
```cpp
// LOCAL VARIABLES (negative EBP offsets):
float scaled_time;         // EBP-0x4  - delta_time multiplied by global scale
bool callback_valid;       // EBP-0x5  - flag to check if callback pointer is valid
CVector3 old_position;     // EBP-0x14 to EBP-0x8 - saved position before update (12 bytes)
int update_flags;          // EBP-0x18 - flags controlling update behavior

// COMPILER TEMPORARIES (negative EBP offsets):
float temp_mult;           // EBP-0x1C - temporary for time scale calculation
void* temp_ptr;            // EBP-0x20 - temporary pointer for validation
```

### Global Variables
#### NEW GLOBALS (Previously DAT_xxx)
```cpp
extern float g_GlobalTimeScale;   // was DAT_00401234 - global time multiplier
extern bool g_UpdateEnabled;      // was DAT_00405678 - controls update processing
```

#### EXISTING GLOBALS (Already named)
```cpp
extern CDemonActor* g_PlayerActor; // already defined - accessed for position update
```

### Function Pointer Definitions
```cpp
// Function pointer type definition for Ghidra:
typedef void (__cdecl *UpdateCallback)(float delta_time);

// Ghidra function signature format:
// void __cdecl UpdateCallback(float delta_time)
```

### Structure Analysis - BYTE COMPLETE
```cpp
class CDemonActor {
    // Offset 0x00: Virtual table pointer
    void** vtable;                      // 4 bytes

    // Offset 0x04: Position coordinates
    float pos_x;                        // 4 bytes
    float pos_y;                        // 4 bytes
    float pos_z;                        // 4 bytes

    // Offset 0x10: Unknown region (possibly velocity or rotation)
    char padding_0x10[12];                // 12 bytes unknown

    // Offset 0x1C: Health/status value
    int health;                         // 4 bytes

    // Offset 0x20: Unknown region
    char padding_0x20[8];                 // 8 bytes unknown

    // Offset 0x28: Update callback function pointer
    UpdateCallback update_func;         // 4 bytes

    // Offset 0x2C: Unknown region
    char padding_0x2C[16];                // 16 bytes unknown

    // Offset 0x3C: Final member (possibly flags)
    int flags;                          // 4 bytes

    // Total size: 0x40 bytes (64 bytes total - all accounted for)
};
```

### Purpose: Actor Update with Callback
- **Primary function**: Updates a game actor using a callback function for custom behavior
- **Evidence**:
  - Calls function pointer with delta_time parameter
  - Accesses global time scale for timing calculations
  - Pattern matches typical game object update system
- **Era considerations**: Manual callback management, direct function pointer usage

### Notes
- **Confidence**: High - clear callback pattern and timing logic
- **Assumptions**: Assuming standard game loop update pattern
- **Era-specific patterns**: Manual function pointer management, global state usage
- **Watcom 11.0 characteristics**: Direct register parameter passing for function pointers
```

## Critical Requirements Summary

0. **Sibling Check First**: Before analyzing from scratch, look for the function's counterpart in the sibling binary (`nocedit.exe` <-> `nocturne.exe`). Transfer names/signatures/purpose; re-derive struct offsets and vtable slots from the target's own assembly. Report what was transferred vs. independently derived.
0a. **Back-Port Corrections**: The already-solved binary is not exempt. If the binary you are analyzing reveals that the *other* binary's annotation is dummied out, misnamed, placeholder, or guessed over - report it as a correction, unprompted. Stubbed functions (bare `RET`, `doNothing*`) and the data globals they were supposed to fill are the highest-value cases. Before calling a stubbed feature absent, look for its **replacement implementation** in that build. Transfer existing sibling names rather than coining new ones, and **never place a global by address arithmetic** - no reference means no answer.
0b. **Change-Block Format**: Any change to a symbol that already exists in a decompiled binary MUST use the `FIX IN:` block with `CURRENT:` / `CHANGE TO:` / `KIND:` / `CONFIDENCE:`. Never prose-only, never folded together. **Function changes must carry `CURRENT SIG:` / `CHANGE SIG TO:`** unless the signature is character-for-character identical AND free of every `undefined`, `param_N`, and `unknown` convention - which a rename never is. **Every block is enclosed by a 74-column `─` divider and wrapped in a plain code fence** - the fence is mandatory, because unfenced markdown eats `**` in pointer-to-pointer declarations and can make the `CURRENT SIG:` / `CHANGE SIG TO:` pair render identically. Never coloured (ANSI is silently stripped here), never dressed up with markdown emphasis.
0c. **Terminal Only**: Findings go in the terminal response. Do not write spec files, worklists, or reports to disk unless explicitly asked.
0d. **Collision-Resistant Global Names**: Never name a global after the shape of the idiom that touches it (`Zero`, `Scratch`, `Temp`, `Saved`, `Flag`, `Count`, `Buffer`). Every name needs an **owner** prefix plus a **discriminator** unique to that address. Grep both binaries for the exact name *and* the prefix family before proposing it, and confirm which TU owns any prefix you adopt. Self-test: if a second unrelated address would also fit the name, it is too generic.
1. **Function Names**: ALWAYS use `folder_file.ext_FunctionName_FUN_address` format
2. **Local Variables**: Use `lowerCamelCase` naming with descriptive purposes
3. **Stack Frame Analysis**: Distinguish between parameters, locals, and temporaries
4. **Byte-Complete Structs**: Every byte from 0x00 to total size must be accounted for
5. **Padding Arrays**: Use `char padding_XX[size]` for unknown regions
6. **No Gaps**: Structure definitions cannot have unexplained missing bytes
7. **Total Size Verification**: Structure size must match observed allocation/access patterns
8. **Floating-Point Calling Conventions**: Identify and analyze math-specific calling conventions

When analyzing disassembly, focus on these key indicators and provide comprehensive analysis following this format. Remember that this is late 1990s C++ code with Watcom 11.0 compiler characteristics - expect simpler patterns, manual memory management, and direct hardware-oriented optimizations. Pay special attention to floating-point math functions which may use specialized calling conventions for optimal performance.
