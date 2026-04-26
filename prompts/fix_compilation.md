# Fix Decompiled Function Compilation Errors

You are fixing compilation or address sanitizer errors in Ghidra-decompiled C/C++ pseudocode for a game binary (`nocedit.exe`, Watcom C++ 11.0, x86 32-bit). Your goal is to produce or improve a `.keep` file that compiles cleanly and is semantically faithful to what the assembly is actually doing.

## Rules

### File Handling
- **NEVER modify the original `.cpp`/`.c` file.** Create or update a `.keep.cpp`/`.keep.c` file alongside it.
- **Match the original file extension.** If the original is `.c`, create `.keep.c`. If `.cpp`, create `.keep.cpp`. Do NOT upgrade `.c` to `.cpp`.
- The `.keep` file replaces the original for compilation — the build system picks it up automatically.
- Path: same directory and base name, with `.keep.cpp`/`.keep.c` extension.

### If a `.keep` Already Exists for the Target Function

When the user asks about a function that already has a `.keep.cpp`/`.keep.c`, **audit the existing `.keep` before doing anything else**. An existing `.keep` is not a signal that the function is "done" — it may be:

1. **Out of date.** The original `.cpp` has been re-exported from Ghidra since the `.keep` was written, and the upstream decompilation has improved (better types, better signatures, a bug fix). Diff the `.keep` body against the current `.cpp` body to see whether the `.keep` is still solving a real problem. If the current `.cpp` compiles and is semantically correct, the `.keep` may be obsolete and a candidate for deletion.
2. **Fixing compilation but harboring a runtime trap.** The `.keep` was written to get the function to compile, but the *logic* it ported over may itself be a decompilation artifact that compiles cleanly and silently misbehaves at runtime. Specifically check for:
   - **Adjacency-sentinel loops** (§16) — `while (p != &g_SomeOtherGlobal)` style pool-init loops that depend on original-binary memory layout. These compile fine and trip AddressSanitizer as `global-buffer-overflow` at runtime.
   - **Wrong-global accesses from Watcom 1-based indexing** (§15) — `.keep` carried forward a `g_VertexNormalArray[20000]` that Ghidra resolved incorrectly.
   - **Broken `ADJ()` usage** — an older `.keep` may have kept raw `ADJ(ptr)->field` writes that were landing at the wrong offset before the exporter's `adj()` fix. If the `.keep` pre-dates that fix, it might have worked-around the symptoms (by bypassing ADJ) in a way that's now unnecessary or actively wrong.
   - **Stale pointer-reuse workarounds** — `(float *)&` casts to paper over Watcom stack-slot reuse that has since been correctly retyped upstream.
3. **Reporting `.keep` status honestly.** Before editing an existing `.keep`, tell the user what you found: "this `.keep` predates the `adj()` fix and rewrites the loop bounds manually — both are now unnecessary," or "this `.keep` still fixes a real compile error but the loop inside is pattern §16 and will crash at runtime." Let the user decide between "update minimally," "rewrite to remove obsolete workarounds," or "delete since the upstream `.cpp` now compiles."

Rule of thumb: a `.keep` is a liability that needs to justify its existence on every re-export. Treat the existing one as a hypothesis about what the decompiler got wrong, not as a finished answer.

### Converting `.mmx` or `.byval` Variants into a `.keep`
The `.mmx.*` and `.byval.*` variants are generated alongside the original but are **not compiled** by the build — they exist only as references. When a function has one of these variants, it's usually a sign that the original `.cpp`/`.c` won't compile cleanly and the variant was the historical escape hatch.

- **When the user asks to fix or convert an `.mmx`/`.byval` function, offer to promote the variant into a `.keep` file** as the default path forward, since the variant itself no longer participates in compilation.
- **For `.byval` variants:** stay close to the variant's intent — the transform exists specifically to model Watcom's by-value struct passing that the decompiler fumbles. Port it faithfully.
- **For `.mmx` variants:** do **not** reproduce the inline assembly byte-for-byte. MMX inline asm is non-portable (`__asm` block syntax varies across compilers) and mechanically complex. Instead, write a `.keep` that captures the **spirit** of what the original does in portable C/C++:
  - If the MMX block is an optimized `memcpy`/`memset`/`memmove`, use the standard library call directly.
  - If the MMX block is a bulk copy or fill with a known pattern, express it as a straightforward loop or a standard library call.
  - If the MMX block computes something non-trivial (pixel blending, vector math, etc.), write the scalar C/C++ equivalent. A clean scalar translation is better than a clever but platform-locked asm port.
  - The `.keep` signature must still match the original exactly. Only the body is rewritten for portability/intent.

### Fidelity Requirements
- **Assembly is ground truth.** When the decompiler output is ambiguous or wrong, consult the `.asm` file (same directory, same base name) to understand what the code actually does.
- **The function signature MUST NOT change.** The name, calling convention, parameters, and return type must be identical to the original. This is non-negotiable — the signature comes from Ghidra's analysis and must be preserved exactly. Only the function body internals may be modified.
- **Semantic correctness over compiler appeasement.** Never just slap a cast on an expression to silence a type error. Understand *what the code is actually doing* from the assembly and express that intent. For example, if a `CDemonActor *` is passed to `%s`, don't cast to `(char *)` — the struct has `actor_name[32]` at offset 0x0, so use `actor->actor_name`. If a `CClothList` is accessed through the wrong union member (e.g., `v_kfm_ptr->part_visibility_flags`), replace with the correct member (`v_clothlist_ptr->filenames[i]`). The decompiler frequently picks wrong union members or loses type info — always check what the data really is.
- Keep variable names from the original where possible.
- Keep the overall structure (control flow, statement order) as close to the original as possible.
- **Local variable declarations are NOT off-limits.** Retyping a local (e.g., `CVector3f` → `CQuaternion4f` when Ghidra mis-sized a stack slot), merging two adjacent locals into one struct, or splitting one local into two when Watcom reused a stack slot for different types (§13) are all within the scope of a minimal edit. Fix the declaration to match what the asm actually uses, and any required initializer copy from a sibling local — don't paper over with `(T *)&` casts that hide an underlying size/type mismatch.
- Only change what is necessary to make it compile, be semantically correct, or resolve a flagged suspect (see "Reducing Flagged Suspects" below).
- Do NOT add comments explaining the fix unless the logic is genuinely non-obvious.
- **Remove Ghidra-emitted `/* WARNING: ... */` comments.** These describe the decompiler's confusion about the original output (e.g. `WARNING: Inlined function: ...`, `WARNING: Unable to use type for symbol ...`, `WARNING: Globals starting with '_' overlap...`). They were diagnostics for the upstream decompile and become stale clutter once a manual reconstruction exists. Strip them when creating or editing a `.keep` file.
- **Mark uncertain fixes.** If you can determine the correct types and argument count but cannot precisely verify the exact variables or ordering from the assembly (e.g., which local maps to which bounding box axis), add a `// UNCERTAIN:` comment explaining what is known and what is approximate. This flags the fix for later verification without blocking compilation progress.
- Do NOT refactor, rename variables for style, or "improve" the code beyond what's needed.

### Header Comment
- Preserve the `// Name:` and `// Address:` lines from the original.
- Add `// MANUAL RECONSTRUCTION` after the `// Address:` line. This is required for all `.keep` files.
- Preserve `// Address Range:`, `// Convention:`, `// Signature:` if present (they go after `// MANUAL RECONSTRUCTION`).
- The file must `#include "nocturne.h"`.

### Prefer Ghidra Fixes Over Code Fixes
Before writing a `.keep` file, check whether the compilation error is caused by something that can be fixed upstream in Ghidra. If the root cause is a wrong type annotation in Ghidra, fixing it there will produce correct decompiler output for ALL functions that use it — a `.keep` file only fixes one function.

**If you identify any of these, STOP and tell the user to fix it in Ghidra. Skip the function and move on to the next one:**
- **Wrong global variable type** — e.g., a global typed as `float` that should be a `float *`, or an `int` that should be a struct pointer. Fix the type in Ghidra's data type manager.
- **Wrong function return type** — e.g., a function returning `CPackedBitmapSet *` when it should return `void` (common when Ghidra infers a return from EAX being live at RET but no caller uses it). Fix the function signature in Ghidra.
- **Wrong function parameter types/count or calling convention** — Fix the function signature in Ghidra.
- **Wrong struct field type or layout** — a field typed as `int` that should be `float`, or a struct with wrong size/alignment. Fix the struct definition in Ghidra.
- **Wrong calling convention on a vtable entry** — causes ESP tracking drift for the rest of the function. Fix the convention on the function pointer type in the vtable struct.
- **Missing or wrong function pointer type** — e.g., a vtable slot typed as `int` instead of a function pointer. Fix the vtable struct in Ghidra.

A `.keep` file is the right approach when the error is a **decompiler limitation** (split doubles, MOVSD artifacts, ADJ pointer quirks, format string splitting, etc.) that cannot be fixed by changing types in Ghidra.

### Skip Heavily Mangled Functions
Some functions are so severely mangled by the decompiler that a `.keep` file would be more fiction than reconstruction. **Skip the function and move on** if you see multiple of these symptoms together:
- Massive numbers of `in_stack_XXXXXXXX` parameters (decompiler lost track of the real signature)
- Pervasive `SUB84`/`CONCAT44`/`._0_4_`/`._4_4_` throughout most of the function body (not just a few double returns)
- Large byte buffer locals (`byte[200+]`) with dozens of sub-offset accesses that can't be mapped to known structs
- Control flow that doesn't make structural sense (e.g., gotos into the middle of loops, unreachable code blocks)
- The function body is mostly casts and reinterpretations with very little recognizable logic

A `.keep` file should be a *minimal* edit of the decompiler output. If you'd have to rewrite more than ~30% of the function body to make it compile, the function needs Ghidra-side fixes or manual reverse engineering first — not a `.keep` workaround.

**Tell the user which function you're skipping and why**, so they can prioritize Ghidra fixes for it.

### Reducing Flagged Suspects in `.keep` Files

Beyond compile errors, the exporter flags decompiler artifacts as **suspects** (unrolled library calls, wrong globals, raw address constants, suspicious casts). These don't block compilation but obscure the code's real intent. A `.keep` is the right place to drive a function's flagged-suspect count to zero.

When you are editing a `.keep` for any reason — creating one for a compile error, auditing an existing one, or fixing a runtime bug — also clean up flagged suspects in the same file, with these constraints:

- **One suspect, one edit.** Target exactly the flagged region. Don't restructure surrounding loops, rename variables, remove dead stores, or "tidy" adjacent code in the same pass. Each edit should be small enough to review independently.
- **Keep the rest identical.** Variable names, control flow, statement order, and header comments stay as they were. The goal is a diff that reads "this one pattern became that one standard call" — nothing else. Retyping a local to match the suspect fix is fine (see Fidelity Requirements).
- **Semantics over neatness.** Only rewrite a pattern when it's *unambiguously* equivalent. Unrolled `strcpy`/`memcpy`/`strchr`/`strcat`/`strlen` must be complete, contiguous, and free of interleaved logic. Skip partial copies, copies with bounds checks, or anything with non-obvious control flow — a wrong rewrite silently changes behavior.
- **Don't create a `.keep` just for `mild` suspects.** If the function otherwise compiles and has no active bug, the per-re-export maintenance cost of a `.keep` outweighs removing a stylistic wart. Suspect cleanup is a free rider on `.keep` work that's already happening for another reason.

**Eligible suspect types** and the error pattern section each maps to:
- `unrolled_strcpy`, `unrolled_memcpy`, `unrolled_strlen`, `unrolled_strcat`, `unrolled_strchr` — §17 (Unrolled string/memory copies)
- `pointer_cast` — usually §13 (stack slot reuse) **or** §17 when the cast appears inside a countdown `for`-loop body. The `unrolled_memcpy` detector misses loops whose store target has an arrow (`*(T *)pX->field = ...`) or index (`*(T *)pX[i] = ...`), so those land here as bare `pointer_cast`. Look at the loop header — if it's `for (i = N; i != 0; i = i + -1)` with a `(uint)bVar * -8 + 4` direction idiom, treat as §17.
- `wrong_global`, `displaced_global_access` — §15 (Wrong global due to Watcom 1-based indexing)
- `raw_address_constant` — §11 (Hardcoded memory addresses for known globals)
- `suspicious_cast` — §1 (Pointer-to-float cast) or §7 (Cannot cast from float to pointer type)
- `sub84_truncation`, `double_reconstruction` — §2 (Double return splitting) or §3 (Format string errors). These are EAX:EDX Watcom double-return artifacts that Ghidra cannot fix upstream — they are a decompiler limitation. Eligible only when the pattern is **localized** (a few split doubles in printf-family calls or double-returning assignments). If `SUB84`/`CONCAT44`/`._0_4_`/`._4_4_` is pervasive throughout the function body, this falls under "Skip Heavily Mangled Functions" instead.
- `preinc_loop_idiom` — §19 (Pre-increment-array-walk loop idiom). Always a Ghidra loop-decode artifact; must rewrite as a clean `for`-loop after cross-referencing the asm. The decompile is never correct as-decoded.
- `missing_cave_copy` — §20 (Missing cave-block struct memcpy). Ghidra dropped a post-call struct copy that Watcom emitted, leaving a struct local uninitialized at runtime. Fix by passing the real source local directly or adding the missing assignment; detected via `.cpp`/`.asm` cross-check.

**Ineligible for `.keep` cleanup — fix upstream in Ghidra instead:** structural suspects like `decompilation_failed`, stack/ESP anchor mismatches, `warning_*` (bad spacebase, unmapped variables, type propagation). See "Prefer Ghidra Fixes Over Code Fixes."

## Common Error Patterns and Fixes

### 1. Pointer-to-float cast (`C-style cast from 'SomeType *' to 'float' is not allowed`)

**Cause:** Ghidra misinterprets a pointer dereference as a cast. The assembly is loading a float from a struct field via pointer arithmetic, but the decompiler lost track of types.

**Fix:** Check the `.asm` file to see what memory is being accessed. Replace the cast with the correct struct field access or pointer dereference:
```cpp
// BROKEN (decompiler artifact):
fVar1 = (float)this_ptr;

// FIXED (assembly shows: FLD dword ptr [EAX + 0x10]):
fVar1 = *(float *)((int)this_ptr + 0x10);
// Or if the struct field is known:
fVar1 = this_ptr->position.x;
```

### 2. Double return splitting (`SUB84`/`CONCAT44`/`._0_4_`/`._4_4_`)

**Cause:** Functions returning `double` via EAX:EDX (Watcom convention). Ghidra splits the 8-byte return into two 4-byte halves and reconstructs with `CONCAT44`.

**Fix:** These are handled by `intrinsics.h` macros. If compilation fails, check whether the variable types match. Common issue: a variable declared as `int` being used with `._0_4_` — change its type:
```cpp
// BROKEN:
int iVar1;
iVar1._0_4_ = some_value;  // can't subfield an int

// FIXED:
ulonglong iVar1;
iVar1._0_4_ = some_value;
```

### 3. Format string errors (`format specifies type 'X' but argument has type 'Y'`)

**Cause:** Ghidra inserts `SUB84(__BITCAST_UINT64(dVar), 0)` to pass doubles to printf-family functions. The decompiler is splitting the 64-bit double into two 32-bit pushes (which is what the assembly does), but the format string expects one `%f` per double.

**Fix:** Replace the split-push pattern with a direct double pass:
```cpp
// BROKEN (decompiler splits the double push):
_fprintf(file, "%f", SUB84(__BITCAST_UINT64(dVar1), 0),
         (int)((ulonglong)dVar1 >> 0x20));

// FIXED (one double argument per %f):
_fprintf(file, "%f", (double)this_ptr->value);
```

### 4. `ADJ()` pointer adjustment issues

**Cause:** Ghidra uses offset pointer types (e.g., `CAmmo_ptr_158`) when the decompiler tracks a pointer into the middle of a struct. `ADJ()` adjusts back to the base. Compilation fails when the offset pointer type isn't properly defined.

**Fix:** If the ADJ infrastructure works, keep it. If it causes type errors, replace with explicit pointer arithmetic:
```cpp
// If ADJ(pCVar2)->field fails to compile:
((BaseType *)((char *)pCVar2 - OFFSET))->field
```

### 5. Array type not assignable (`array type 'byte[4]' is not assignable`)

**Cause:** Ghidra tries to assign to an array variable directly.

**Fix:** Use `memcpy` or assign element-by-element:
```cpp
// BROKEN:
byte local_arr[4] = some_expr;

// FIXED:
memcpy(local_arr, &some_expr, 4);
```

### 6. Called object type is not a function (`called object type 'float' is not a function`)

**Cause:** Ghidra confused a function pointer stored in a struct with a float field.

**Fix:** Check the assembly for an indirect CALL. Cast to the correct function pointer type:
```cpp
// BROKEN:
result = field_value(args);  // field_value is typed as float

// FIXED (assembly shows: CALL dword ptr [EAX + 0x1c]):
result = ((int (*)(int))*(void **)((int)vtable + 0x1c))(args);
```

### 7. Cannot cast from float to pointer type

**Cause:** Decompiler has wrong type for a local variable — it's actually a pointer, not a float.

**Fix:** Change the variable declaration from float to the correct pointer type, guided by assembly.

### 8. `const` qualifier discards (`assigning to 'char *' from 'const char *'`)

**Fix:** Remove `const` from the source (Ghidra types don't use `const`), or cast:
```cpp
ptr = (char *)"string literal";
```

### 9. Sign mismatch pointer conversion (`converts between pointers to integer types with different sign`)

**Fix:** Add explicit cast:
```cpp
int_ptr = (int *)uint_ptr;
```

### 10. Undeclared identifier

**Cause:** A global, type, or function used in the code isn't declared in `nocturne.h` or its includes.

**Fix:** Check if it's a typo from the decompiler. If it's a real symbol, add an extern declaration at the top of the `.keep.cpp` (after the include). If it's a Ghidra artifact variable name like `in_stack_XXXXXXXX`, check the assembly to understand what it actually is (usually a function parameter the decompiler missed).

### 11. Hardcoded memory addresses for known globals

**Cause:** The decompiler sometimes emits raw absolute addresses (e.g., `0x2d82d88`) instead of expressing them relative to a known global symbol. This happens when pointer arithmetic on a global array loses its symbolic reference — the decompiler falls back to the computed address.

**Fix:** Identify which global the address belongs to by checking the `.asm` file for symbol annotations near that address. Replace the raw address with the correct symbolic expression (e.g., `0x2d82d88` → `&g_MasterLightStateSaveBuffer[1]` when the base is at `0x2d82d84`). Never leave magic address constants in a `.keep` file when the corresponding global is known.

### 12. Syntax errors from decompiler artifacts

**Cause:** Ghidra occasionally produces syntactically invalid C++ (unbalanced parens, stray tokens, etc.)

**Fix:** Consult the assembly and reconstruct the statement. Keep it as close to the original structure as possible.

### 12. Byte buffer locals that should be structs (`auStack_XX`, `byte[N]`)

**Cause:** Ghidra fails to identify the type of stack-allocated structs, especially when the compiler reuses stack slots across different lifetimes. The decompiler emits raw `byte[N]` arrays with `._offset_size_` sub-accesses instead of proper field names.

**Before reaching for a char buffer in a `.keep`, search for an existing struct.** Any time a function's memory layout (sized byte buffer, fixed-offset field accesses, `._N_M_` sub-accesses, a constructor/initializer call, a cast to a typed pointer) suggests the local is really a struct:

1. **Search the project for an existing struct that matches** by size and field pattern. Look in `annotations/nocedit.exe/pseudocode/include/types/{structs,classes}/` — grep for the byte count (`Ghidra size: 0x<N>`) and cross-check field offsets. Also scan callers/callees: if the buffer is passed to a function, that callee's signature names the real type.
2. **If a matching struct exists:** fix the Ghidra-side type (retype the stack local to that struct) rather than declaring a char buffer in the `.keep`. The `.keep` becomes unnecessary once Ghidra re-exports with the proper type.
3. **If no matching struct exists:** STOP and tell the user what to create. Give them:
   - The proposed struct name and size.
   - The inferred field layout (offsets, names, types) with evidence from the assembly or callsite usage.
   - Which stack locals to retype in which functions after the struct is added.

   Do **not** invent a `char local_XX[N]` buffer as a workaround — that lands in the `.keep` as pure debt that the next re-export won't clean up.

**Diagnosis heuristics:**
- A `byte[56]` or `byte[60]` with a constructor call and field writes at known offsets → likely a struct (e.g., `SDamageInfo` at 60 bytes). Check if an adjacent 4-byte variable completes the struct size.
- A large `byte[N]` accessed at many different sub-offsets with `CVector3f`-sized (12-byte) patterns → likely multiple `CVector3f` temporaries that the compiler packed into overlapping stack slots.
- Sequential fread/fwrite targets with distinct sub-offsets → likely a file-format struct (chunk header, section header, record). Parse the binary format spec and propose the matching struct.

**Fix (in Ghidra, not in `.keep`):** This is best fixed upstream in Ghidra by retyping stack variables. **Stack locals in Ghidra cannot overlap** — each byte of stack space can only belong to one variable. With that constraint:
1. Open the function in the decompiler, right-click the byte array variable, and retype it to the correct struct.
2. If the struct is split across two adjacent variables (e.g., `auStack_cc[56]` + `pCStack_94[4]` = 60 bytes = `SDamageInfo`), merge them by retyping the first variable to the full struct size — the adjacent variable will be absorbed.
3. For scratch buffers where the compiler reuses stack slots across different code phases (e.g., `CVector3f` temporaries for both rotation and bounding-box calculations), you must choose one phase's interpretation per slot since locals cannot overlap. Pick the interpretation that makes the most important code path readable.

**How to identify struct candidates:**
- Check if a constructor/initializer is called on the buffer (e.g., `SDamageInfo_ctor(auStack_cc)`)
- Check if the buffer is passed to a function expecting a typed pointer (e.g., `(CBoundingBox3D *)buffer`)
- Match the buffer size against known struct sizes in the project headers
- Map `._offset_size_` accesses to struct field offsets to confirm the match

### 13. Stack slot reuse — one variable used as multiple types (`(float)pCVar`, `(CVector3f *)float_expr`)

**Cause:** The Watcom compiler aggressively reuses stack slots across different code paths. One 4-byte stack slot might hold a `float` in one branch and a `CVector3f *` in another. Ghidra assigns a single type to each variable, so it picks one type and inserts invalid casts for the other uses. Common symptoms:
- `(float)pSomePointer` or `(CVector3f *)some_float_expr` — pointer↔float casts that don't compile
- `(CVector3f *)(this_ptr->base).base.turn_speed` — a float struct field stored in a pointer variable
- `(CVector3f *)normalizeAngleToPi(...)` — a float return value stored in a pointer variable
- Variables that appear as both function pointer arguments and float arithmetic operands

**Diagnosis:** Grep all uses of the variable. Group them by code path. If the uses split cleanly into "pointer in paths A/B" and "float in paths C/D" with no overlap, it's stack slot reuse.

**Fix:** Split the variable into separate declarations matching each actual type:
- Change the declaration to the most-used type (usually `float`)
- For the other type's uses, either:
  - **Inline the expression** if it's simple (e.g., replace `local_18 = &orient; cloth_process(..., local_18, ...)` with `cloth_process(..., &orient, ...)`)
  - **Add a new variable** with a descriptive name if it's used multiple times (e.g., `float turn_speed` and `float clamped_angle` instead of reusing `pCVar22`/`pCVar23`)
- Remove all the now-unnecessary `(float)` and `(CVector3f *)` casts
- Remove `(CVector3f *)(uint)(bool_expr)` patterns — just use the bool/float expression directly

This is distinct from the byte buffer pattern (#12) — here the variables have proper types, they're just the *wrong* type for some uses.

### 14. `in_stack_XXXXXXXX` phantom variables and `stack0xXXXXXXXX` references

**Cause:** When the decompiler loses track of the stack frame (often due to indirect calls, vtable dispatch, or complex calling conventions), it invents `in_stack_XXXXXXXX` variables as pseudo-parameters or creates raw `stack0xXXXXXXXX` references for stack locations it can't map to declared locals.

**Symptoms:**
- `in_stack_fffffc88`, `in_stack_fffffc8c`, etc. declared as `char *`, `CGore *`, or other pointer types
- These variables are assigned code addresses (e.g., `= (char *)0x4e6aec`) — these are return address tracking artifacts and are dead stores
- The same variable holds completely different types across code paths (pointer, float, integer, string literal)
- `&stack0xfffffe10` used as a buffer for `_sprintf` — Ghidra couldn't map this stack location to any declared variable
- `(float)in_stack_fffffc94` — a pointer variable used as a float argument

**Fix:**
- **Remove all dead stores** — assignments of code addresses (hex values that look like function addresses, e.g., `0x4e6aec`), intermediate values that are overwritten before being read, and return-address tracking artifacts
- **Replace live uses with inline expressions:**
  - Vtable calls: use the actual object pointer directly (e.g., `pCVar3` instead of `(CCharacter *)in_stack_fffffc88`)
  - PathMap results: assign to an existing `CPathMap *` variable like `pCVar11`
  - Motion controller: inline as `&(...).motion_controller`
  - SDamageInfo pointers: inline as `&local_2d8`
- **`&stack0xXXXXXXXX` sprintf buffers:** add a `char acStack_sprintf[64]` local (or use an existing char array if one is declared) and replace all `&stack0x...` references with it
- **`(float)in_stack_...` in function args:** check the assembly to find the actual float value being passed and use that directly
- **Remove the `in_stack_` declarations** once all references are replaced
- Remove any other variables that become unused after cleanup

**How to identify dead stores:** Assignments to code addresses like `= (char *)0x4e6aec` or `= (CGore *)0x4e6b5b` where the hex value falls within the function's address range are always dead — these are the decompiler tracking return addresses pushed by CALL instructions.

### 15. Wrong global due to Watcom 1-based indexing optimization

**Cause:** The Watcom compiler often emits array accesses as `[index*stride + (base - stride)]` with a 1-based index instead of `[index*stride + base]` with a 0-based index. This shifts the effective base address down by one entry size (e.g., 4 or 8 bytes lower than the real array start). Because Watcom also packs globals tightly, the shifted address lands in a neighboring global's memory range, and Ghidra resolves it to the wrong symbol.

**Symptoms:**
- Accesses through globals that make no semantic sense for the context (e.g., `g_VertexNormalArray[20000].y` in a display list builder, or `(&g_SetDisplayListCount)[iVar1 * 2]` indexing past a scalar)
- Field accesses like `.y` on unrelated structs that happen to be at the right byte offset
- Pointer-to-float casts when storing actor pointers into what's really a struct array with a pointer field
- The `.asm` file's global annotations show the *correct* global name, but the decompiler picked the wrong overlapping one

**Diagnosis:** Check the `.asm` file for the global annotations on the relevant `MOV`/`FSTP` instructions. The assembly comments (e.g., `; g_SetDisplayListSortBuffer`) usually identify the correct global even when the decompiler doesn't. Then check the struct definition for that global to find the right field names.

**Fix:** Replace the wrong global access with the correct global and proper struct field access:
```cpp
// BROKEN (decompiler picked wrong overlapping global):
(&g_VertexNormalArray[20000].y)[g_SetDisplayListCount * 2] = (float)this_ptr_00;

// FIXED (correct global with proper struct access):
g_SetDisplayListSortBuffer[g_SetDisplayListCount].actor = (CDemonActor *)this_ptr_00;
```

### 16. Adjacency-sentinel init loops (runtime bug, compiles cleanly)

**Cause:** Watcom emitted pool-initialization loops that use "pointer reaches next global" as the end-of-array check, because in the original binary the next global sat immediately after the array. Our linker places globals in arbitrary order, so the sentinel never matches the pool's true end and the loop walks past it, corrupting every global in between. This compiles without warnings — AddressSanitizer catches it at runtime as `global-buffer-overflow`.

**Symptoms in the `.cpp`:**
- A `do/while` or `while` loop whose exit condition is `p != (T *)&g_SomeGlobal` where `g_SomeGlobal` is NOT the pool being iterated
- The iterator was initialized from a pool declared as `g_PoolName[N]` earlier in the same function
- The loop body resets one element per iteration (calls a reset/ctor function, or writes a field directly)

**Canonical examples from `CFireEffect::init`:**
```cpp
// Style A — calls reset function:
this_ptr_00 = g_SmokeParticlePool;
do {
    CSmokeParticle_reset(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
} while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount);   // !! adjacency sentinel

// Style B — inline field write:
pCVar1 = g_SparkPool;
do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
} while (pCVar2 != (CSpark *)&g_MuzzleFlashAllocIndex);                // !! adjacency sentinel
```

**Diagnosis:** Grep the function for `!= (<Type> *)&g_<something>`. If that `g_<something>` is not the same as the pool the iterator was initialized from, it's the adjacency-sentinel pattern.

**Fix:** Rewrite the loop with the declared pool size as an explicit bound. Pool sizes come from the pool's global declaration in `src/globals/` (e.g., `CSmokeParticle g_SmokeParticlePool[2048] = {};`):

```cpp
// FIXED (Style A):
for (int i = 0; i < 2048; i++)
    CSmokeParticle_reset(&g_SmokeParticlePool[i]);

// FIXED (Style B):
for (int i = 0; i < 256; i++)
    g_SparkPool[i].base.lifetime_remaining = 0.0f;
```

**Scope:** Every `*_static_init` / pool-init in the game likely has this shape. If you're fixing one, eyeball the rest of the function — they often come in clusters (one init function sets up a dozen pools).

### 17. Unrolled string/memory copies

**Cause:** Watcom frequently unrolled `strcpy`, `memcpy`, and struct copies into sequences of byte/word/dword moves. The decompiler reproduces these as chains of individual assignments instead of recognizing the higher-level operation.

**Symptoms:**
- A sequence of byte-by-byte or word-by-word assignments copying from one buffer to another
- A `do/while` loop copying two bytes at a time with an early-exit check on null terminator (unrolled `strcpy`)
- Field-by-field struct copies like `dst[0] = src.field_a; dst[1] = src.field_b; ...` across all fields
- A countdown `for`-loop with `*(uint *)dst = *(uint *)src; src += ...; dst += ...;` and the `(uint)bVar * -8 + 4` direction idiom — Watcom's `REP MOVSD` lowering. **The `unrolled_memcpy` suspect detector misses this shape when the store LHS/RHS has an arrow or index** (e.g. `*(uint *)pSVar9->data = *(uint *)pcVar8;`), so it reaches you flagged only as `pointer_cast` on the `pX = (T *)((int)pX + (uint)bVar * -8 + 4);` line. If you see `pointer_cast` inside a countdown loop with that direction idiom, it's this pattern — collapse per §17 regardless of the suspect label.

**Multi-local span / ASan trap:** When the copy size exceeds the declared size of the source local (e.g. `REP MOVSD` of 0x89 dwords out of a `char[60]`), the original binary had **multiple adjacent stack locals** laid out contiguously and the copy walked all of them as one blob. Under ASan each local gets redzones — the read trips `stack-buffer-overflow` one byte past the first local's end. Fix by issuing **one `memcpy` per source local**, each sized to that local, targeting the matching offset in the destination struct. Cross-reference the `.asm` `LEA` offsets to determine which locals the original `REP MOVSD` was spanning and in what order.

**Fix:** When the pattern is clearly a string or memory copy, replace with the appropriate standard library call:
```cpp
// BROKEN (unrolled strcpy — 2-byte-at-a-time copy loop):
pcVar4 = dest;
do {
    cVar2 = *src;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = src[1];
    src = src + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
} while (cVar2 != '\0');

// FIXED:
strcpy(dest, src);

// BROKEN (field-by-field struct copy into int array):
g_Scratch[0] = g_Buffer[i].field_a;
g_Scratch[1] = g_Buffer[i].field_b;
// ... all 12 fields ...
g_Scratch[11] = g_Buffer[i].field_l;

// FIXED (if types match):
g_Scratch = g_Buffer[i];
// Or if raw memory:
memcpy(g_Scratch, &g_Buffer[i], sizeof(g_Buffer[i]));
```

**When to suggest:** Only when the pattern is unambiguous — the copy is complete (all bytes/fields), contiguous, and the source/destination types are compatible. Don't collapse partial copies or copies with interleaved logic.

### 18. Magic numbers with obvious symbolic equivalents

**Cause:** The decompiler emits raw hex constants where a symbolic equivalent (`sizeof`, a typed float literal, `offsetof`, a named enum) would make the code self-documenting. Watcom baked these as immediate values; Ghidra preserves them verbatim even when the meaning is recoverable.

**Common patterns:**
- Byte offset equal to `sizeof(Struct)` — e.g., `-0x28` when `SMemHead` is exactly 40 bytes
- Float bit pattern emitted as `*(uint *)&x = 0x501502f9` when `x = 1e10f` encodes to the same 4 bytes
- Struct field offset emitted as a raw integer — e.g., `ptr + 0xb7e4` when that's the exact offset of `motion_transition_costs` in `CCharacter`

**Fix:** Replace with the symbolic equivalent when you can verify it's exactly equivalent. Always confirm:
- For `sizeof`: the struct's `Ghidra size:` annotation matches the constant
- For float literals: compute the bit pattern and confirm it equals the hex (e.g., `1e10f` → `0x501502f9`)
- For `offsetof`: the field's declared `// 0xN` comment matches

```cpp
// BROKEN (pointer-to-header walker with magic offset):
(SMemHead *)((char *)user_ptr - 0x28)

// FIXED:
(SMemHead *)((char *)user_ptr - sizeof(SMemHead))

// BROKEN (float INF sentinel via uint bit-write):
*(uint *)&cost_matrix[i][j] = 0x501502f9;

// FIXED (same bit pattern, typed):
cost_matrix[i][j] = 1e10f;
```

**When to apply vs. suggest:** Apply directly only when the mapping is unambiguous (struct size, exact field offset, bit-for-bit float literal). If there's any ambiguity — two structs with the same size, a constant that's *near* a known value but not equal, a float that rounds differently — leave the hex and flag it for the user to decide. A wrong symbolic substitution silently changes meaning and is worse than a magic number.

### 19. Pre-increment-array-walk loop idiom (Ghidra decode artifact)

**Cause:** Watcom emitted array-init/walk loops using compensated offsets (e.g. `ADD EAX, stride; MOV [EAX + (array_base - stride)], value`) or unrolled struct copies. Ghidra mistranslates these into a `do { ... } while(...)` loop with a pre-incremented pointer walked via struct-field pointer arithmetic, a constant `[0]` index on the advanced pointer, and a `pX = pX;` self-assign no-op.

**Symptoms — always all three in the same `do/while` body:**
- A pre-increment via struct-field arithmetic: `pX = (T *)&(pX->field)...;` or `pX = (T *)((int)&(pX->field) + N);`
- A constant-index array access on the advanced pointer: `pX->arr[0].member = value;`
- A self-assignment no-op on the same variable: `pX = pX;`

**Canonical examples:**
```cpp
// CPlatform::ctor — compensated-offset array init:
pCVar6 = this_ptr;
do {
    pCVar6 = (CPlatform *)((int)&(pCVar6->base).orient + 4);
    pCVar6->attach_actors[0].actor = (CDemonActor *)0x0;   // skips slot 0, corrupts past slot 9
    pCVar6 = pCVar6;
} while (pCVar6 != (CPlatform *)((...)->model.model_name + 0x38));

// CDemonCamera::precomputeLight — phantom pre-increment (asm doesn't advance at all):
pCVar3 = light_source;
do {
    pCVar3 = (CDemonLight *)&(pCVar3->base).base.position;
    pCVar3->left_extent[0] = 999;                           // actually writes same address N times
    pCVar3->right_extent[0] = 0;
    pCVar3 = pCVar3;
} while (iVar8 < count);
```

**Why this is always wrong:** The decompile is never semantically correct as-decoded. It either:
1. **Skips element [0]** — asm uses `[EAX + (array_offset - stride)]` with pre-increment, correctly hitting `array[0..N-1]`. Naive translation loses the compensation and starts at `array[1]`, overrunning past the last element.
2. **Phantom iteration** — asm writes the same address repeatedly without advancing inside the loop body. Decompile invents a pointer advance that isn't there.
3. **Unrolled struct copy** — asm is a MOVSD/REP or byte-by-byte struct copy, not a repeated-write loop.

**Fix:** cross-reference the asm for the offsets and compensations, then rewrite with a clean `for`-loop (or `memcpy`/assignment when the asm is actually a struct copy). Examples:

```cpp
// FIXED (compensated-offset init — CPlatform::ctor, CCharacter::ctor):
for (int i = 0; i < N; i++) {
    this_ptr->array[i].field = value;
}

// FIXED (phantom iteration — asm writes same address, decompile shows a fake loop):
if (count > 0) {
    base->left_extent[0] = 999;
    base->right_extent[0] = 0;
}
// or, if truly intended as a loop, iterate with an explicit index that the asm uses

// FIXED (unrolled struct copy):
memcpy(&dst, &src, sizeof(dst));
```

**Don't mechanically translate the pre-increment** — the decompile's `pX = (T *)&pX->field` advance doesn't reflect the real asm stride. Always check the asm first.

This is a `.keep`-layer fix: it's a Ghidra decode artifact specific to one function, not a type/signature issue that would propagate. Retyping locals or fixing the signature won't change the loop decode.

### 20. Missing cave-block struct memcpy (uninit struct local)

**Cause:** When Watcom calls a function that returns a struct via an output-param-in-register convention (`__stack_esi`, `__stack2_esi`, etc.), the compiler often emits an inline struct memcpy *immediately after the call* to copy the callee's output into a different stack slot. Ghidra models these calls correctly but routinely *drops the post-call memcpy* from the decompile. The extended-block ("cave") is visible in the `.asm` as a run of 12+ consecutive `MOV ECX, [ESI+N] / MOV [EDI+N], ECX` pairs (48 bytes = one `CMatrix3x4f`).

**Symptoms in the `.cpp`:**
- Multiple struct-type locals (`CMatrix3x4f`, `CQuaternion4f`, etc.) are declared, passed once by address to a function, and *never referenced again* in the body.
- Typically appear in pairs — one "dead output" (passed as output of call A, never read) paired with an "uninit input" (passed as input to call B, never written).
- The `.asm` contains 2+ cave-block copies that have no counterpart in the `.cpp`.

**Canonical example (`CCloth::computeBoneTransform`):**
```cpp
// BROKEN (decompile has two missing cave copies):
inverse(parent_matrix, &local_48);          // local_48 is written
multiply(&local_78,                          // local_78 UNINIT — missing copy from local_48
         &world_matrix, &local_d8);          // local_d8 is written
... stores from local_d8 ...
inverse(&local_138, &local_108);             // local_138 UNINIT — missing copy from local_d8
... reads from local_108 ...

// FIXED — skip the dropped intermediates and pass the real sources:
inverse(parent_matrix, &local_48);
multiply(&local_48, &world_matrix, &local_d8);
... stores from local_d8 ...
inverse(&local_d8, &local_108);
... reads from local_108 ...
```

**Why uninit is dangerous under ASAN:** On the original Windows build, the uninit stack bytes happened to be zero often enough that the game's defensive checks (e.g. `inverse()` computes `det == 0` and bails as "Singular matrix") mostly stayed quiet. On Linux with a different malloc and stack layout, the same bytes are arbitrary — the determinant can land anywhere, the bail-out fires, or the inverse computes garbage and ripples downstream.

**Fix:** identify which original local the cave-block was copying *from* (the source of the memcpy in the asm) and pass its address directly wherever the decompile now passes the uninit-scratch. Drop the scratch local from the declarations if nothing else references it. Alternative: add an explicit `local_scratch = local_src;` struct assignment just before the call — more faithful to the asm but adds a line.

**Eligibility:** `.keep`-layer fix. Retyping locals or signatures upstream won't change this — it's purely a Ghidra decode artifact. The `missing_cave_copy` suspect type (see "Reducing Flagged Suspects") flags functions whose `.cpp` and `.asm` agree on the pattern.

## Workflow

1. **Check for a `.chunked.cpp` file** (same base name, `.chunked.cpp` extension). If one exists, read it first — it splits the function into a context struct and small static helper functions, making it much easier to understand and fix large functions. Use it as a reference to understand which chunk each error falls in, but the `.keep` file is still based on the original `.cpp`.
2. **Read the original `.cpp` file** to understand the function and see the compilation error.
3. **Read the `.asm` file** (same base name, `.asm` extension) to understand what the assembly actually does. The `.asm` format is:
   ```
        INSTRUCTION  ; ADDRESS
   ```
4. **Identify the minimal fix** — change only what's needed to compile, but ensure the fix is **semantically faithful** to what the assembly is actually doing. Don't just slap a cast or dummy argument to silence the compiler — understand *why* the error exists and express the correct intent. If you can't determine what the code is actually doing from the assembly, skip the function rather than guessing.
5. **Create the `.keep` file** by running:
   ```
   scripts/Bash/prepare_keep.sh path/to/file.cpp
   ```
   This copies the original and adds the `// MANUAL RECONSTRUCTION` header line. Never write a `.keep` file from scratch.
6. **Edit the `.keep` file** — apply the minimal fix.
7. **Verify compilation** by running:
   ```
   scripts/Bash/test_compilation.sh path/to/file.keep.cpp
   ```
8. **Suggest readability improvements** — after the `.keep` file compiles, review it for cases where the decompiler used wrong types that obscure the code's intent. Common examples: `CVector3i` fields holding float bit patterns (hex integers that are really IEEE 754 floats), `int` locals that are actually pointers, etc. If you spot these, **tell the user** what you found and what the correct types would be, but **do not apply the changes** unless the user approves. These are optional cleanups, not compilation fixes.

### Using `.chunked.cpp` for large functions

Some functions have a `.chunked.cpp` variant generated by the chunk transform (opt-in via `"chunked": true` in the function's `.json`). This file splits the function into:
- A **context struct** (`_Ctx`) holding all locals and parameters
- **Static helper functions** that each handle one branch/section, with only the variables they use unpacked as references
- A **rebuilt main function** that calls the helpers

This is purely a comprehension aid — the `.keep` file is still based on the original `.cpp`. But when fixing errors in a 1000+ line function, the chunked view lets you focus on the 30-80 line chunk where each error lives instead of scrolling through the entire function. Cross-boundary `goto` statements are handled via return codes.

## Type System Reference

### Supported types
`char`, `uchar`, `short`, `ushort`, `int`, `uint`, `float`, `double`, `bool`, `void *`

Avoid: `const`, `long double`, `volatile`, `register`, `static`, `inline`

### Ghidra intrinsics (defined in `system/intrinsics.h`)
- `CONCAT44(hi, lo)` — assemble two 32-bit values into a 64-bit value
- `SUB84(val, offset)` — extract 4 bytes from an 8-byte value at byte offset
- `__BITCAST_DOUBLE(uint64)` — reinterpret uint64 bits as double
- `__BITCAST_UINT64(double)` — reinterpret double bits as uint64
- `ADJ(ptr)` — adjust an offset pointer back to its base struct
- `CARRY4(a, b)`, `SBORROW4(a, b)`, `SCARRY4(a, b)` — overflow/borrow detection
- `ZEXT14(x)`, `ZEXT48(x)` — zero extension

## Example: Before and After

### Original `.cpp` (fails to compile):
```cpp
// Name: core_gore.cpp_CBloodPool_save_FUN_004ed1c0
// Address: 004ed1c0
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)
{
  double dVar1;
  double dVar2;
  int iVar3;

  dVar1 = (double)(this_ptr->position).y;
  dVar2 = (double)(this_ptr->position).x;
  _fprintf(file_handle,"%f,%f,%f\n",SUB84(__BITCAST_UINT64(dVar2),0),(int)((ulonglong)dVar2 >> 0x20),
             SUB84(__BITCAST_UINT64(dVar1),0),(int)((ulonglong)dVar1 >> 0x20),(double)(this_ptr->position).z);
  _fprintf(file_handle,"%d,%d\n",this_ptr->expired,this_ptr->blood_type);
  iVar3 = _fprintf(file_handle,"%d,%f,%d,%d,%d\n",this_ptr->texture_variant,
                     SUB84(__BITCAST_UINT64((double)this_ptr->age),0),(int)((ulonglong)(double)this_ptr->age >> 0x20),
                     (this_ptr->position_fixed).x,(this_ptr->position_fixed).y,
                     (this_ptr->position_fixed).z);
  return iVar3;
}
```

### Fixed `.keep.cpp`:
```cpp
// Name: core_gore.cpp_CBloodPool_save_FUN_004ed1c0
// Address: 004ed1c0
// MANUAL RECONSTRUCTION
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)
{
  int iVar3;

  _fprintf(file_handle,"%f,%f,%f\n",
           (double)(this_ptr->position).x,
           (double)(this_ptr->position).y,
           (double)(this_ptr->position).z);
  _fprintf(file_handle,"%d,%d\n",this_ptr->expired,this_ptr->blood_type);
  iVar3 = _fprintf(file_handle,"%d,%f,%d,%d,%d\n",
                   this_ptr->texture_variant,
                   (double)this_ptr->age,
                   (this_ptr->position_fixed).x,
                   (this_ptr->position_fixed).y,
                   (this_ptr->position_fixed).z);
  return iVar3;
}
```

**What changed:** The `SUB84(__BITCAST_UINT64(dVar), 0) / (int)((ulonglong)dVar >> 0x20)` split-push pattern was collapsed back to single `(double)` arguments. The assembly pushes 8 bytes per `%f` (two 32-bit pushes for one double), and the decompiler exposed the raw push mechanics. The `.keep` restores the semantic intent. Unused variables `dVar1`/`dVar2` were removed.
