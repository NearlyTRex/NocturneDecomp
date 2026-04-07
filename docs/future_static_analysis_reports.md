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

**What it catches:** Runtime memory errors — out-of-bounds access, stack buffer overflow, use-after-free, undefined behavior (signed overflow, null dereference, type punning violations).

**How to run:** Compile with `-fsanitize=address,undefined` and run the binary against DirectDraw/DirectSound shims.

**Relevance:** The ultimate validation. Every wrong global, wrong struct field, and arg count mismatch will surface as a runtime error with a full stack trace pointing to the exact `.keep` file and line. This is the end-state validation tool — the static reports (1-10) are about catching as much as possible *before* hitting runtime so the first link-and-run session isn't just a wall of crashes.

### 12. Linker-stage global address validation

**What it catches:** Globals that the decompiler placed at the wrong address, or that overlap in ways the original binary intended but our reconstruction doesn't preserve.

**Method:** When linking, emit a map file and compare every global's linked address against its expected address from the original binary's symbol table. Flag any global that moved relative to its neighbors — if `g_SetDisplayListSortBuffer` isn't adjacent to `g_SetDisplayListCount` in the linked binary, the Watcom base-shift code will break.

**Relevance:** Critical for the Watcom base-shift pattern. Even if we fix the `.keep` files to use the right global names, the linker might place them at different relative offsets than the original Watcom linker did. We may need linker scripts or explicit section placement to guarantee layout.

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
- Report #12 (linker address validation) becomes critical once we start linking — will need the original binary's global address table as the reference
- ASan (#11) should be enabled from the very first successful link — the earlier we catch memory issues, the fewer cascading bugs to untangle
