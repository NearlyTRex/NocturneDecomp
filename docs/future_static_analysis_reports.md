# Future Static Analysis Reports for Decompiled Code

Reports that detect **compiling but semantically wrong** code — things that would crash, corrupt memory, or silently produce wrong behavior when linked and run. The end goal is a runnable binary linked against shims (DirectDraw, DirectSound, etc.), so every wrong memory address, missing arg, or incorrect global is a real crash, not just a cosmetic issue. These reports are essential infrastructure for reaching that goal.

## Priority 1: High crash/corruption risk

### 1. Function Call Arg Count Mismatch

**What it catches:** Decompiler dropped or added phantom arguments to function calls. At runtime, the callee reads garbage from the stack or the stack pointer drifts.

**Method:** For each function call in a `.cpp`/`.keep.cpp`, compare the argument count against the corresponding `ADD ESP,N` cleanup in the `.asm` file. In `__cdecl`, `ADD ESP,N` after a `CALL` tells you exactly how many bytes of args were pushed. Divide by 4 to get the arg count. Flag mismatches.

**Would have caught:**
- `handleFootstep` called with 3 args instead of 4 (missing `volume = 1.0f`)
- `setWeaponState` called with 4 args instead of 2 (decompiler resolved through wrong vtable union member)
- `multiplyQuaternion` with wrong args (code cave mangling)

**Complexity:** Medium. Needs to parse `.asm` for CALL/ADD ESP pairs and `.cpp` for function call arg lists. Indirect calls (vtable) are harder — need to match the `CALL [reg+offset]` to the vtable method and check the function pointer typedef's parameter count.

### 2. Wrong Global Symbol Resolution

**What it catches:** The Watcom 1-based indexing optimization shifts array base addresses, causing Ghidra to resolve a memory access to the wrong overlapping global. The code compiles but reads/writes to the wrong memory region.

**Method:** For each global variable access in the `.cpp`, find the corresponding `MOV`/`LEA`/`FSTP` instruction in the `.asm` and check the global annotation comment (e.g., `; g_SetDisplayListSortBuffer`). Flag when the `.cpp` uses a different global than the `.asm` annotates.

**Would have caught:**
- `g_VertexNormalArray[20000].y` instead of `g_SetDisplayListSortBuffer[count].actor`
- `(&g_SetDisplayListCount)[iVar1 * 2]` instead of `g_SetDisplayListSortBuffer[count].distance_sq`

**Complexity:** Medium-High. The `.asm` annotations are reliable (Ghidra labels them correctly even when the decompiler picks the wrong one). Main challenge is matching `.cpp` lines to `.asm` addresses — could use the function's address range and instruction ordering.

### 3. Wrong Struct Field Access

**What it catches:** The decompiler accessed the wrong field within a struct, often due to the base-shift or stack tracking errors. The code reads a float where it should read a pointer (or vice versa).

**Method:** For struct field accesses through pointer arithmetic (e.g., `*(int *)((int)ptr + 0x1fbb0)`), verify the offset corresponds to a real field in the pointed-to struct type. Cross-reference against `data_types.json` struct definitions. Also flag cases where the `.asm` annotates a field name that doesn't match the `.cpp` field access.

**Would have caught:**
- `local_280.distance_max` instead of `local_280.interacting_actor` (offset 0xC vs 0x4)
- `transformed_vertices[0x19].y` instead of `weapon_type` (wrong path to offset 0x2E0)

**Complexity:** Medium. Struct definitions are in `data_types.json`. The `.asm` often annotates field names on struct accesses.

### 4. Vtable Method Resolution Mismatch

**What it catches:** The decompiler resolved a vtable call through the wrong union member (e.g., `_uc` CCharacter instead of `_uw` CWeapon), calling a method with the wrong signature, arg count, or semantics.

**Method:** For each indirect vtable call `CALL [reg+offset]`, determine which actor type the object actually is from context. Then verify the vtable offset resolves to the same method in the `.cpp` as it would in the correct vtable union member. Flag when the method name or arg count differs.

**Would have caught:**
- `CCharacter_vtable::kill` (4 args) instead of `CWeapon_vtable::setWeaponState` (2 args)

**Complexity:** High. Requires tracking object types through the function and knowing which vtable union member is correct. Could simplify by just checking arg count: if `ADD ESP` after an indirect call doesn't match the typed method's parameter count, flag it.

## Priority 2: Logic errors (no crash, but wrong behavior)

### 5. Dead Code from Always-True/False Guards

**What it catches:** Watcom self-assignment guards (`if (stack_addr != global_addr)`) that the decompiler emitted as real conditionals. These don't crash but create unreachable branches that confuse readers.

**Method:** Detect patterns where `&stack_local` is compared against `&global` or `(type *)0x0` is compared against a non-null pointer. These comparisons are always true/false at runtime.

**Would have caught:**
- All the `&stack0x00000000 != &g_SomeGlobal` guards we removed

**Complexity:** Low. Pattern matching on the `.cpp` AST or even regex.

### 6. Float-as-Pointer / Pointer-as-Float Surviving in .keep Files

**What it catches:** Stack slot reuse artifacts that compiled but store pointer bits in float fields or vice versa. These produce garbage values silently.

**Method:** Scan `.keep.cpp` files for patterns:
- `(float)some_pointer` or `(SomeType *)some_float` 
- `*(float *)&pointer_var` or `*(int *)&float_var`
- Variables declared as one type but cast to incompatible types at use sites

**Would have caught:** Any unfixed stack slot reuse that we missed.

**Complexity:** Low-Medium. Regex or simple AST analysis.

### 7. Printf/Sprintf Format String vs Argument Verification (beyond compiler checks)

**What it catches:** Cases where the compiler's `-Wformat` didn't fire because the arg type happens to be compatible but semantically wrong — e.g., passing a `CDemonActor *` for `%s` (works because `actor_name` is at offset 0, but fragile and wrong if the struct layout changes).

**Method:** For each printf-family call with `%s`, verify the argument is actually a `char *` or `char[]`, not a struct pointer that happens to start with a string field.

**Would have caught:**
- `(CDemonActor *)this_ptr` passed to `%s` instead of `actor->actor_name`

**Complexity:** Medium. Needs type tracking through the function.

## Priority 3: Standard C++ static analysis tools

These are off-the-shelf tools that can run on the `.keep` files (and the raw `.cpp` files) without any decompilation-specific knowledge. They won't catch Ghidra-specific issues like wrong globals, but they'll find standard C/C++ bugs that could exist in both the original code and our reconstruction.

### 8. Clang Static Analyzer (`scan-build`)

**What it catches:** Null pointer dereferences, use-after-free, uninitialized reads, dead stores, logic errors, division by zero. Uses path-sensitive analysis that reasons about branches.

**How to run:** `scan-build clang++ -fsyntax-only -m32 ...` on each file. Generates HTML reports.

**Relevance:** High for `.keep` files where we split variables or restructured control flow — we might have introduced a path where a pointer is used before being assigned. Also catches cases where the decompiler emitted a null check but we removed it thinking it was a dead guard when it was actually load-bearing.

### 9. Cppcheck

**What it catches:** Buffer overruns, out-of-bounds array access, memory leaks, redundant conditions, signed/unsigned mismatches, variable scope issues.

**How to run:** `cppcheck --enable=all --std=c++11 file.keep.cpp`

**Relevance:** Good for catching array index issues in the raw decompiler output — things like `g_Array[20000]` that index way past the declared size. Also catches unreachable code paths that might indicate we broke control flow in a `.keep`.

### 10. Clang-Tidy

**What it catches:** Modernization issues aside, the `bugprone-*` and `cert-*` checks find real problems: suspicious casts, implicit conversions, integer overflow, dangling references.

**How to run:** `clang-tidy --checks='bugprone-*,cert-*,clang-analyzer-*' file.keep.cpp`

**Relevance:** The `bugprone-suspicious-memory-comparison`, `bugprone-sizeof-expression`, and `bugprone-casting-through-void` checks are directly relevant to the kinds of decompiler artifacts we fix. Could flag pointer-as-int patterns we missed.

### 11. AddressSanitizer / UBSan (runtime validation)

**Status:** Wired up behind the `NOCTURNE_ASAN` CMake option (preset `exe-linux-asan`). `build/<preset>/run.sh` is generated at configure time with sanitizer-friendly env defaults and execs the binary.

**What it catches:** Runtime memory errors — out-of-bounds access, stack buffer overflow, use-after-free, undefined behavior (signed overflow, null dereference, type punning violations, wrong-type dynamic casts, misaligned loads, out-of-range enum stores).

**Flag set.** For a decomp project the instinct is to disable UBSan checks that "seem noisy," but most of them catch exactly the type/layout mistakes we want to find. Disable only what's genuinely architectural and can't be fixed by correcting a decompilation:

- **Keep on** — `vptr` (wrong class casts, ties directly into the actor cast mismatch report), `enum` (Ghidra-mistyped fields), `bounds` (wrong array sizes and real overruns), `alignment` (wrong struct layout — usually means a field offset is shifted), `unsigned-integer-overflow`, `null`, `return`, `shift`, `object-size`, `integer-divide-by-zero`.
- **Triage per-hit, don't globally disable** — `signed-integer-overflow`. Intentional in hashes/RNGs (noise), bug elsewhere (usually a wrong integer type). Suppress per-function via an ignorelist when confirmed noise.
- **Suppress narrowly** — `function`. Watcom's array ctor/copy/dtor runtime dispatches through type-erased `void(*)(void*)` slots; every target has a different real signature. Marked with `WATCOM_TRAMPOLINE` (`__attribute__((no_sanitize("function")))`) on the trampoline entry points only, so real indirect-call mismatches elsewhere still fire.
- **ASan side** — turn off leak detection by default (`ASAN_OPTIONS=detect_leaks=0`) because game engines intentionally leak at shutdown; flip back on for leak-hunting sessions.

**Env knobs** (baked into the generated `run.sh`; overridable inline):

```sh
ASAN_SYMBOLIZER_PATH=$(which llvm-symbolizer)        # readable stack traces, not raw addresses
UBSAN_OPTIONS=print_stacktrace=1:halt_on_error=1     # full backtrace on first hit
ASAN_OPTIONS=detect_leaks=0:print_stacktrace=1       # suppress shutdown-leak noise
```

Without `llvm-symbolizer` installed (`apt install llvm`), every report prints `nocturne+0xNNNNNN` instead of `function at file.cpp:line`, which makes triage roughly impossible on a codebase this size.

**Bug classes discovered via ASan once wired up:**

1. **Broken `adj()` in `*_ptr_N` adjusted-pointer typedefs.** The exporter emits a wrapper struct per Watcom adjusted-pointer type (`CDeformableModelInstance_ptr_88` = "pointer that is 88 bytes past a `CDeformableModelInstance`"). The name encodes the offset but the generated `adj()` method was casting the raw pointer without subtracting it, so every `ADJ(ptr)->field` write landed at `base + N + field_offset` instead of `base + field_offset`. Fixed in `scripts/Python/ghidra_annotations/annotations/pseudocode/headers.py`. Re-export regenerates every typedef with the correction.

2. **Adjacency-sentinel init loops.** See §12 — the decompiler faithfully preserves `while (p != &next_global)` loop bounds that only work if the linker replicates the original binary's memory layout. Surfaced as global-buffer-overflow across every pool-init function in the game.

**Relevance:** The ultimate validation. Every wrong global, wrong struct field, and arg count mismatch surfaces as a runtime error with a full stack trace pointing to the exact `.keep` file and line. The static reports (1-10, 13) exist to catch as much as possible *before* hitting runtime; ASan/UBSan catch what's left plus the classes of bug that are genuinely runtime-only (like the adjacency-sentinel pattern, which is invisible to any static check that doesn't know the target memory layout).

### 12. Linker-stage global address validation

**What it catches:** Decompiled code that depends on the original binary's global-to-global memory layout.

**Concrete pattern observed** (`CFireEffect::init`, every pool-init in the game):

```cpp
this_ptr_00 = g_SmokeParticlePool;
do {
    CSmokeParticle_reset(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
} while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount);
```

Watcom emitted this loop because in the original `.exe`, `&g_BulletHoleActiveCount` was placed immediately after `g_SmokeParticlePool[2047]`, so pointer-equality against the next global was a cheap end-of-array check. Our linker places globals in arbitrary order, so the sentinel never matches and the loop walks past the pool.

**Three candidate fixes — tradeoffs below:**

#### Option A: Per-function `.keep.cpp` rewrites (what we're doing today)

Replace each `while (p != &next_global)` with `while (p != &pool[N])` using the array size from the global's declaration. Confirmed working on `CFireEffect::init`.

- **Pro:** targeted, obviously correct per-function, plays well with existing `.keep` workflow, doesn't change build infra.
- **Con:** every pool-init in the game likely has the same shape — this is hand-patching a *category* of bugs one function at a time.

#### Option B: Exporter-side detector and rewrite

Teach the exporter to recognize `while (<iter> != (T*)&<global>)` where `<iter>` was derived from a declared array pool, and rewrite the sentinel to `&pool[size]`.

- **Pro:** one implementation fixes every instance. Re-exports stay clean.
- **Con:** pattern-matching on decompiled source is fragile — Ghidra sometimes emits the sentinel as `(<T>*)&g_Other + N`, through a local, or via `do/while` vs `while`, each needing its own matcher. Initial investment is real, and ongoing maintenance grows as Ghidra's output drifts.

#### Option C: Linker script that reproduces original `.data`/`.bss` order

Emit an `ld` linker script at export time that places every global at its original binary address (or at least preserves pairwise adjacency). Original addresses come from the Ghidra symbol table we already produce.

- **Pro:** fixes every adjacency-sentinel loop at once, **without touching a single source file**. Also fixes hypothetical `&g_A + k == &g_B` pointer arithmetic patterns the decompiler might have baked in elsewhere.
- **Cons (the important part):**
  1. **It silences the tool that just caught the bug.** ASan pads global-variable redzones between every global *because* the linker normally places them with gaps. If we force globals into a specific contiguous layout via a linker script with hard addresses, ASan either can't insert redzones (if we pin addresses explicitly) or its redzones sit *outside* our enforced region — either way, overruns like the ones we just found will silently succeed instead of tripping ASan. You end up with a binary that runs, but any *real* out-of-bounds bug that was being masked by the wrong-sentinel behavior now corrupts the next global instead of being caught. The bug category gets hidden, not fixed.
  2. **Watcom padding/alignment isn't reproducible by ld.** Watcom's linker applied its own rules for `.data`/`.bss` padding, section alignment, and segment-start alignment. Even with identical global ordering, byte-for-byte layout is unlikely to match, so the adjacency loops might still end at the wrong offset (`&pool[2048]` vs `&pool[2048] + padding`). Partial fix at best.
  3. **Unnamed / synthesized globals can't be placed.** Original Watcom output includes globals that our export doesn't name — compiler-generated thunks, string literals coalesced by the CRT, `.bss` tail blocks, etc. These sat between named globals in the original layout; we have no symbol to place them by. Ordering the named globals only reproduces a subset of the original adjacencies — the rest are random.
  4. **COMDAT / weak sections interfere.** C++ inline functions, template instantiations, and vtables live in COMDAT sections whose ordering is controlled by the toolchain, not our script. Anywhere the original binary placed a COMDAT between two named globals, our layout diverges.
  5. **Every generated global declaration needs an attribute.** To put a global into a script-addressable section, each declaration needs `__attribute__((section("nocturne_data_<N>")))`. That means modifying the globals generator to emit the attribute, and the linker script has to list every section name. Re-exports must stay in sync with the script; a renamed global becomes a link failure.
  6. **Struct-size mismatches aren't addressed.** Option C ensures globals *start* at the right offset but does nothing if `sizeof(CSmokeParticle)` differs between clang and Watcom (padding, alignment, a missing field). The pool still ends at the wrong byte, and an ending-based sentinel still walks past. Report #13 (struct layout verification) is the real fix for that, and is prerequisite.
  7. **Couples the rebuild to a specific original binary.** The decomp project's end goal is a *portable, runnable* reconstruction, not a byte-identical re-link. Locking memory layout to the original `.exe` makes future modernization (replacing hand-written pools with STL containers, moving globals into namespaces, 64-bit port) much harder.
  8. **Fragile across re-exports.** Any rename or global-removal in Ghidra breaks the script silently (link errors at best, wrong placement at worst). The script becomes a parallel source of truth that must be regenerated on every export.

**Recommendation.** Start with Option A for immediate progress, build Option B once the pattern is well-understood enough that the detector is cheap. Option C is a last resort, mostly because con #1 (silencing ASan) actively works against the goal of catching the decomp misunderstandings we care about most.

**Address-table validation as a lighter-weight alternative:** the original spirit of §12 (comparing linked addresses against expected ones) is still useful as a *report*, not a *fix*. Emit a link-map diff after every build and flag globals whose distance from their neighbors changed. That tells us which adjacency sentinels are at risk of breaking before the first run, without trying to enforce layout.

### 13. Struct layout verification

**What it catches:** Struct definitions where clang's layout (padding, alignment) differs from Watcom's original layout.

**Method:** Compile a test harness that `static_assert(sizeof(SomeStruct) == EXPECTED)` and `static_assert(offsetof(SomeStruct, field) == EXPECTED)` for every struct in `data_types.json`. Run at compile time.

**Relevance:** If clang pads a struct differently than Watcom did, every field access after the padding divergence point reads the wrong memory. This is especially risky for the large structs (CDemonActor at ~0x158 bytes, CHero at ~0x1FC00 bytes) where a single padding difference cascades.

### Practical considerations for standard tools

- **False positive rate will be high** on raw decompiler output — Ghidra emits many patterns that tools flag (goto into blocks, uninitialized locals that are actually initialized by called functions via pointer, etc.)
- **Best to run only on `.keep` files** where we've manually reviewed the code, not on the 4000+ raw `.cpp` files
- **Cppcheck and clang-tidy can run in CI** as a check that `.keep` fixes don't introduce new issues
- **The clang static analyzer is the most valuable** of the three for our use case since it does path-sensitive analysis and would catch null dereference issues from incorrect guard removal

## Unit Testing Strategy

Separate from static analysis — runtime tests for the reconstructed game code to catch regressions as `.keep` files are edited and to validate correctness before linking the full binary.

### Test categories by priority

**1. Math/transform functions (pure, no global state)**

The foundation everything else depends on. Easy to test since they're pure functions with deterministic inputs/outputs.

- Vector: `normalizeAngleToPi`, `convertDirectionVectorToEulerAngles`, vector length/normalize
- Matrix: `multiplyMatrix3x4`, `buildMatrixFromEulerAndPositionDirect`, `matrixToEulerAngles`, `getTranslation`
- Quaternion: `quaternionFromAngleX/Y`, `multiplyQuaternion`, `slerpQuaternion`, `quaternionToEulerAngles`
- Fixed-point: `worldPositionToVoxelCoords`, fixed-point multiply patterns
- Collision: `CBoundingBox3D_isVisible`, ray-box intersection, `testVoxelRaycast`

**2. String/parsing functions**

- `CCmdParm_setTemplateText` — feed template strings like `<Int:default>`, verify `param_type` and `default_value`
- `decryptMessage` — known encrypted/decrypted pairs
- `formatIPAddress` — known IP bytes to formatted string
- INI file read/write round-trip
- Actor name generation — `generateUniqueActorName` with known actor lists

**3. Game logic state machines (needs mock globals)**

- Motion controller — verify state transitions: `setDesiredState` → `advance` → correct `getCurrentMotion`
- Weapon state — draw/holster/fire via `setWeaponState`, verify `weapon_state` field
- Actor interaction — `getInteractionInfo` → `startInteraction` → `updateInteraction` flow
- Damage pipeline — construct `SDamageInfo`, feed through `processDamage`, verify health changes

**4. Integration tests (needs shims)**

- Scene lifecycle — init renderer, set camera, add actors, render frame, shutdown without crashing
- File I/O — load a `.kfm` model, verify bone count and mesh data
- Sound system — init, play sound, verify no crashes
- Mission load — load a mission file, verify actor count and set structure

### Test infrastructure

- Lightweight C test framework or simple assert macros — the codebase is C/C++98
- Tests link against reconstructed `.keep` files plus stubs for unneeded globals
- Globals initialized from known-good values (hand-constructed or dumped from original binary)
- Run as part of CI alongside the `-fsyntax-only` compilation check
- Start with math functions — zero infrastructure needed, highest-impact bugs caught

### Reference values

For math tests, known-good values from:
- Hand computation (identity matrix multiply, normalize 0/pi/2pi, unit quaternion operations)
- The original binary under a debugger — call functions with test inputs, record outputs
- Cross-validation — compute the same operation two ways (e.g., matrix multiply then invert, should get identity)

## Implementation Notes

- Reports should output function name, line number, the suspicious pattern, and what the `.asm` shows as the ground truth
- Start with report #1 (arg count mismatch) — highest value, most automatable, clear ground truth from `ADD ESP`
- Report #2 (wrong global) is next — the `.asm` annotations make it straightforward
- Reports can run on all `.cpp` and `.keep.cpp` files, not just ones with compilation errors
- False positive rate matters — a report that flags 500 things where 490 are fine won't get used
- Report #13 (struct layout) should be implemented early — it's a compile-time check that's cheap to run and catches silent corruption that no other tool would find until runtime
- Report #12: the "validate, don't enforce" framing (link-map diff vs original) is the practical version. Enforcing layout via a linker script silences ASan on exactly the bug class that motivated #12, so it trades a catchable runtime error for a silent miscompile.
- ASan (#11) is live behind `NOCTURNE_ASAN`. Keep the UBSan check list wide — disable narrowly via `WATCOM_TRAMPOLINE` or per-site ignorelist entries, not via flag removal. The decomp-misunderstanding bugs we want to find show up as `vptr`, `bounds`, `alignment`, and `enum` reports, which are the exact checks one would be tempted to turn off for "noise."
