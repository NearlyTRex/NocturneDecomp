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
- **All local variable declarations go at the top of the function body, never mid-block.** When a fix introduces new locals (e.g. split-block reconstruction in §26, replacement temporaries for a field-pun call), add them to the function's declaration block alongside the Ghidra-emitted locals. Do not declare them next to the use site, even if C++/`-std=gnu++11` would accept it. This keeps `.keep` files matching the Ghidra-style "all declarations up front, then body" convention and makes it trivial to spot/sweep unused locals after an edit.
- **Prefer 64-bit-portable forms when semantically equivalent.** When two expressions produce identical code under our `-m32` build but differ in 64-bit portability, pick the form that would also compile cleanly on 64-bit. The runnable-binary goal currently targets 32-bit DirectDraw shims, but choosing the portable form costs nothing today and keeps the codebase ready for a future 64-bit port. Common substitutions:
  - `(uintptr_t)ptr` instead of `(int)ptr` / `(unsigned int)ptr` for pointer-arithmetic bit-tricks (alignment masks, packing, hash mixing). On 32-bit they're bit-identical; on 64-bit only `uintptr_t` is wide enough.
  - `size_t` instead of `int` for sizes/lengths returned from `strlen`/`sizeof`/etc.
  - `intptr_t` for pointer-difference math.

  Only switch when the substitution is *exactly* equivalent at the asm level — never widen a stored field's underlying type (e.g. don't promote an `int` struct member to `int64_t`) since that changes layout and breaks every byte-offset access. The rule is about *expression types* used in `.keep` bodies, not on-the-wire storage.
- Only change what is necessary to make it compile, be semantically correct, or resolve a flagged suspect (see "Reducing Flagged Suspects" below).
- Do NOT add comments explaining the fix unless the logic is genuinely non-obvious.
- **Remove Ghidra-emitted `/* WARNING: ... */` comments.** These describe the decompiler's confusion about the original output (e.g. `WARNING: Inlined function: ...`, `WARNING: Unable to use type for symbol ...`, `WARNING: Globals starting with '_' overlap...`). They were diagnostics for the upstream decompile and become stale clutter once a manual reconstruction exists. Strip them when creating or editing a `.keep` file.
- **Mark uncertain fixes.** If you can determine the correct types and argument count but cannot precisely verify the exact variables or ordering from the assembly (e.g., which local maps to which bounding box axis), add a `// UNCERTAIN:` comment explaining what is known and what is approximate. This flags the fix for later verification without blocking compilation progress.
- Do NOT refactor, rename variables for style, or "improve" the code beyond what's needed.

### De-pun: Prefer Named Fields and Intermediate Typed Pointers Over Inline Reinterpret Casts

When a `.keep` body contains **type-pun pointer casting** — `*(T *)(expr)`, `(T *)(IDENT + N)`, `((T *)FIELD)[i]`, or any cast that reinterprets bytes as a different type — **prioritize removing it whenever doing so is feasible and bit-exact.** A reinterpret cast is a decompiler artifact: it means Ghidra lost the type at that point. Naming the type makes the code self-documenting and exposes the *next* bug (wrong field, off-by-one stride) that a raw cast hides. This applies whenever you are already editing a `.keep` for any reason — treat a removable pun like a flagged suspect.

**Feasibility gate.** Only de-pun when the real type/field is *known* and the rewrite is *exactly* equivalent at the byte level — from a corrected struct, an existing struct that matches the layout, or the `.asm`. If the target type is unknown or the data shape implies a struct that doesn't exist, that is a Ghidra-fix signal (§12) — STOP and tell the user what to create, do **not** invent a `.keep`-level reinterpretation.

**Priority order — pick the highest that applies:**
1. **Named struct field.** If the (possibly just-corrected) struct has a real field at that offset, use it and drop the cast entirely. After a Ghidra struct fix this is usually the answer: `(CVector3i *)(kf + 1)` → `kf->vertices`; `*(int *)(base + 0x10)` → `base->vertex_header.count`; `*(int *)(p->actor_name + 8)` on a `CWeapon` reached through a `CDemonActor *` → `((CWeapon *)p)->ammo_count` (one cast at the type boundary, then named fields).
2. **Retype the local (§12/§13).** If a local is a primitive walker (`int *` / `uint *`) striding a typed struct array, retype it to the element type and replace `*p` / `p[1]` / `p[2]` with `p->x` / `p->y` / `p->z` and the `p += 3` stride with `p += 1`. Drop any interleaved Ghidra index-shuffle temps (`piVar1 = p + 2; p += 3;`) — they exist only because of the primitive stride.
3. **One intermediate typed pointer.** When the *same* bytes are reinterpreted at several sites and no field/retype fits (a genuinely packed/punned region), introduce a single typed pointer **assigned where the base is stable** (per the declarations-at-top rule, declare at top, assign at the point of use), then index it: eight `((int *)rec.texture_name)[i]` reads → `uv = (int *)rec.texture_name;` once, then `uv[0..3]`.

**When to leave one explicit cast — do NOT over-engineer:** a *single, localized* reinterpret that marks a real **format boundary** or **polymorphic dispatch** is the honest representation; keep it (optionally via one named intermediate). Examples: a vertex array that is immediately followed by a primitive-block chain (`zbp_block = (SMRGLHeaderExtended *)out_vert;` then `zbp_block + 1` for the first primitive — names the boundary and turns `+3 ints` into struct stride); a base-class walker downcast at the dispatch site (`(SMRGLPrimitiveTriangleIndex *)prim` for the indexed-triangle case); a header upcast for a size query (`(SMRGLHeaderExtended *)prim` into `getMRGLSize`). Don't multiply intermediates to chase a pun that is genuinely one reinterpretation.

**Renaming is allowed when it is part of a retype.** The no-rename-for-style rule above still holds for cosmetic churn, but when a retype makes the existing name wrong — a `pi`/`pc`/`pu` Hungarian prefix that no longer matches the type, or a misnomer like `texture` for a primitive-block walker — rename it to match what it now is (`piVar9` → `vert`, `texture` → `primitive_list`, `texture` → `glowTexture`). The new name is part of expressing the corrected type, not gratuitous styling.

Every de-pun must stay bit-exact and faithful to the asm; verify the offset/stride before rewriting, and show each change as its own reviewable diff with the equivalence rationale (same rules as suspect cleanup).

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

- **One suspect, one edit — but fix all of them in the pass.** After resolving the suspect the user named, re-run `test_suspects.sh` on the `.keep` and fix every other suspect it still flags in the same function — **including cppcheck-tagged warnings** (`invalidPointerCast`, `selfAssignment`, etc.), not just the entries listed in `suspect_by_function.txt`. The by-function report is a point-in-time snapshot and the regex set evolves; `test_suspects.sh` against the current `.keep` is the authoritative state. Each fix is still its own targeted edit (don't bundle unrelated rewrites into one diff), but the bar for "done" is `clean` from `test_suspects.sh` — no flags of any kind. Skip only suspects that are ineligible for `.keep` cleanup (see the ineligibility list below) or that you cannot rewrite *unambiguously* from the asm — explain each skip to the user. When a remaining flag is genuinely a Ghidra-side fix (missing struct type, wrong function signature, etc.), STOP and tell the user exactly what to change in Ghidra rather than papering over it in the `.keep`.
- **Show every edit as a reviewable diff with an explanation.** Use `Edit`/`Write` so the user can approve each diff individually; never pile multiple unrelated suspect fixes into one bulk edit. Before (or with) each edit, write one or two sentences saying which suspect type and line it targets, what the asm shows the real semantics to be, and why the rewrite is exactly equivalent. The user must be able to read the diff and the rationale together and decide whether to accept each change on its own.
- **Keep the rest identical.** Variable names, control flow, statement order, and header comments stay as they were outside the regions you're rewriting. Each diff should read "this one pattern became that one standard call" — nothing else. Retyping a local to match a suspect fix is fine (see Fidelity Requirements); large structural rewrites that aren't required to clear a suspect are not.
- **Semantics over neatness.** Only rewrite a pattern when it's *unambiguously* equivalent. Unrolled `strcpy`/`memcpy`/`strchr`/`strcat`/`strlen` must be complete, contiguous, and free of interleaved logic. Skip partial copies, copies with bounds checks, or anything with non-obvious control flow — a wrong rewrite silently changes behavior. Tell the user which suspects you skipped and why.
- **Drive every suspect to zero, including `mild` ones.** `clean` from `test_suspects.sh` means *no flags of any kind* — `major`, `moderate`, **and `mild`** (`static_self_assignment`, `static_identical_inner_condition`, `warning_inlined_function`, and other stylistic warts all count). Do not stop at the headline moderate/major flags. A function whose *only* remaining flags are mild is still worth a `.keep` to drive it fully clean; spinning one up purely to flatten mild warts is now expected, not discouraged. The goal is a fully green suspect report. (The two documented exceptions still hold: a flag whose fix would change runtime behavior is exempt — see the **Exempt** bullet below — and a flag that's genuinely a Ghidra-side fix means STOP and tell the user what to change upstream.)
- **Report missed-suspect siblings.** When you collapse a flagged suspect and notice the same pattern elsewhere in the function (or a near-identical shape that should match the same detector) that the suspect tool *didn't* flag, tell the user before moving on: cite the function, line, and the fingerprint the existing detector misses. Suggest updating the suspect detector so every other function with the same shape gets flagged on the next re-export. Fixing the local instance in the current `.keep` is still fine (and preferred — see the "fix all of them" rule above); the detector gap is the broader bug, since one function-at-a-time cleanup can't catch the rest of the codebase.
- **Exempt: flags whose fix would change original-binary behavior.** Only fix a suspect/warning when the rewrite is *faithful* to what the shipped `nocedit.exe` does. If clearing a flag would alter runtime behavior versus the original, leave it — note it for the user, don't fix it, and don't count it against `clean`. The canonical case is `cppcheck:invalidscanf` (unbounded `sscanf("%s"/"%f"/"%d", ...)`): adding field-width limits (`%s` → `%31s`) hardens the parse but *truncates input differently* than the original game, so it deviates from faithful reconstruction (`%f`/`%d` can't overflow regardless). These reflect the original source, not a decompiler artifact. The same principle covers any rewrite that would change parsing, rounding, clamping, alignment, or I/O semantics — faithfulness to the binary wins over silencing the tool. (This is distinct from the eligible-suspect rewrites below, which are all behavior-preserving by construction.)

**Eligible suspect types** and the error pattern section each maps to:
- `unrolled_strcpy`, `unrolled_memcpy`, `unrolled_memset`, `unrolled_strlen`, `unrolled_strcat`, `unrolled_strchr` — §17 (Unrolled string/memory copies). `unrolled_memcpy` and `unrolled_memset` have both source-side AND asm-side detectors (the asm-side anchors on `MOVS{B,W,D}.REP` / `STOS{B,W,D}.REP` and reports an asm line when the source-side fingerprint misses — typically when the loop body uses arrow/index store forms instead of `*ptr = *src`).
- `pointer_cast` — usually §13 (stack slot reuse) **or** §17 when the cast appears inside a countdown `for`-loop body. Look at the loop header — if it's `for (i = N; i != 0; i = i + -1)` with a `(uint)bVar * -8 + 4` direction idiom, treat as §17. The detector ignores `(int)FUNC(...)` numeric casts (since 2026-04-29), so e.g. `(int)ROUND(x)` inside a `(TYPE *)(...)` outer paren no longer false-positives.
- `wrong_global`, `displaced_global_access` — §15 (Wrong global due to Watcom 1-based indexing)
- `raw_address_constant` — §11 (Hardcoded memory addresses for known globals)
- `suspicious_cast` — §1 (Pointer-to-float cast) or §7 (Cannot cast from float to pointer type)
- `sub84_truncation`, `double_reconstruction` — §2 (Double return splitting) or §3 (Format string errors). These are EAX:EDX Watcom double-return artifacts that Ghidra cannot fix upstream — they are a decompiler limitation. Eligible only when the pattern is **localized** (a few split doubles in printf-family calls or double-returning assignments). If `SUB84`/`CONCAT44`/`._0_4_`/`._4_4_` is pervasive throughout the function body, this falls under "Skip Heavily Mangled Functions" instead.
- `preinc_loop_idiom` — §19 (Pre-increment-array-walk loop idiom). Always a Ghidra loop-decode artifact; must rewrite as a clean `for`-loop after cross-referencing the asm. The decompile is never correct as-decoded.
- `missing_cave_copy` — §20 (Missing cave-block struct memcpy). Ghidra dropped a post-call struct copy that Watcom emitted, leaving a struct local uninitialized at runtime. Fix by passing the real source local directly or adding the missing assignment; detected via `.cpp`/`.asm` cross-check. **Candidate locals are filtered by struct size matching the asm cave-block size** — e.g. a 48-byte cave block can't be the missing copy of a 12-byte `CVector3f` local, so output buffers like `&local_vec` passed to `transformVector3x4(&out, &in, &mat)` no longer false-positive.
- `fast_sqrt_inline`, `fast_inv_sqrt_inline` — §21 (Inline fast-(inverse-)sqrt bit-trick). Ghidra emits `(int)X` numeric cast where the asm performs a bit-cast; UB on NaN/Inf. Replace inline occurrences with calls to the existing helper functions `fastSqrt(X)` / `fastInvSqrt(X)` in a `.keep`.
- `bitcast_double_pair` — §22 (Adjacent uint locals reconstructed as a double). `__BITCAST_DOUBLE(CONCAT44(hi, lo))` over two stack-local uints almost always means Watcom split one `double` local into two 4-byte slots; merge them into a single `double` declaration in a `.keep` and pass it directly.
- `bitcast_double` — any other use of the `__BITCAST_DOUBLE` intrinsic. The macro is a preprocessor escape hatch that lets Ghidra-split doubles compile; it should not appear in finished code. Most common remaining shape is `__BITCAST_DOUBLE(0xNNNNNNNNNNNNNNNNULL)` for a hardcoded constant — decode the 64 bits as IEEE 754 and replace with the decimal literal (`python3 -c "import struct; print(struct.unpack('<d', struct.pack('<Q', 0xN))[0])"`). The result is often a recognizable short literal (e.g. `0x400921fb54411744` is exactly `3.1415926535`); if it round-trips bit-exact, the literal is faithful.
- `sibling_array_undersized` — Ghidra-split array detected via sibling-size mismatch. Same function has two-or-more arrays of the same struct type but the flagged one is sized smaller than its peers (e.g. `CQuaternion4f local_186c[95]` alongside `local_122c[100]` and `local_bec[100]`). Latent runtime bug: the asm drives all three arrays from one loop bound (per-bone, per-vertex, etc.), so writes overrun the smaller declaration and trip ASan as `stack-buffer-overflow`. Cross-check the asm for the actual loop bound and resize the undersized array in a `.keep` to match its siblings. The detector skips primitive-typed arrays (`char`/`int`/`float`/etc.) since size variation there is usually intentional.
- `self_copy_guard` — §23 (Dead self-copy guard). `if (&LOCAL_A != &LOCAL_B) { LOCAL_A = LOCAL_B; ... }` where both sides are bare addresses of stack locals. The guard never skips (different stack slots) and just adds visual noise around an unconditional struct copy; drop the if-wrapper in a `.keep`.
- `shadow_pointer_walk` — §24 (Shadow-pointer walk via struct-field byte arithmetic). `pCVar = (T *)((pCVar->some_field).some_array[N] + CONST);` where the chosen field/index/constant sum to one element-size step. Watcom's lowering of a shadow pointer that gets advanced by `sizeof(element)` per iteration so `shadow->arr[0]` resolves to `original->arr[i]`. Replace with direct array indexing on the original pointer; the shadow-pointer local typically becomes unused.
- `loop_clobbered_constant` — §25 (Loop-clobbered constant). A do/while body reassigns a variable that was initialized to a literal constant before the loop, via an adjacent swap-chain `A = B; B = C;` where `A` is also read elsewhere in the body as a math arg. Ghidra register-spill artifact — the compiler kept the "constant" in a register and Ghidra emitted the spill stores as reassignments to other locals, breaking the loop's math after iter 0. Canonical example: the `requantizeLayer3Samples` gain-table init where `pow(base, ...)` returned `1` for every entry because `base` got clobbered to `0.25` and `fVar7` (the exponent step) to `0` on iteration 0. Fix: drop the swap-chain lines in a `.keep` so the loop runs with its original literal constants.
- `primitive_walker_cast` — §12 (mistyped struct walker). `LOCAL = (int *)&NAME[IDX];` or `LOCAL = (int *)&NAME->FIELD[IDX];` where `LOCAL` is a pointer-sized primitive (`int*`/`uint*`/`SIZE_T*`) but the array is a typed struct. Ghidra lost the struct type for the local and walks fields via `LOCAL[1]`/`LOCAL[3]`/`LOCAL[0x15]` integer indices. Fix in a `.keep` by retyping the local to the struct element type (search for the existing struct first — see §12) and replacing the index accesses with real field names. The detector only flags the **assignment** form, not the `*(int *)&...` bit-cast dereference (a different, often-intentional pattern). Eligible only when an existing struct matches the layout; if none does, STOP and tell the user what to create in Ghidra.
- `sign_compare_idiom` — Borrow/overflow **comparison** idiom. `SBORROW4(a,b) != (int)(a-b) < 0` is Ghidra's transcription of how `JL`/`JGE` read `SF != OF` — i.e. a plain signed `a < b`. `SCARRY4` (signed-overflow) is the analogous building block for signed compares; a `CARRY4(a,b)` in a `!=`/`==` comparison context is the unsigned-compare analogue. Replace the whole idiom with the plain comparison operator in a `.keep`: e.g. `bVar = SBORROW4(x,y); iVar2 = x - y; while (bVar != iVar2 < 0)` → `while (x < y)`. The spill temporaries (`bVar`, the `x-y` int, any `iVar5 = y` copy) then become unused and drop out (delete their declarations per the unused-locals rule). Confirm the operator/direction against the asm `Jcc` if non-obvious. Always reducible — never semantically needed (a decompiler flag-math artifact, not real C). NOTE: a bare `CARRY4` *not* in a comparison is `carry_arith_idiom` instead (see below) — do **not** turn it into a comparison.
- `carry_arith_idiom` — `CARRY4` used in **64-bit arithmetic**, not a comparison (the detector splits these out from `sign_compare_idiom`). Two shapes, both bit-exact-reducible in a `.keep`: (1) **multiply-high / fixed-point** — `(int)((ulonglong)L >> 0x20) * 2 + (uint)CARRY4(lo,lo)` (where `lo = (uint)L`) is the low word of a 64-bit signed product `L` shifted right 31; reduce to `(int)(L >> 0x1f)` and drop the now-dead `lo = (uint)L` spill. Shifting the `longlong` `L` by `0x1f` is safe (only a *32-bit* value shifted by 31 trips cppcheck `shiftTooManyBitsSigned`). (2) **64-bit add-carry** — `b = CARRY4(a,d); a = a + d; hi = hi + dhi + (uint)b;` is `ADD`/`ADC` of a split fixed-point accumulator; reduce the carry to `b = a + d < a;` (unsigned wrap = carry-out, computed before the add) and keep `a = a + d`. Confirm against the asm (`IMUL`+`ADD`/`ADC` for multiply-high, `ADD`/`ADC` for accumulate). Always reducible — a decompiler flag-math artifact, not real C.

- `static_shift_too_many_bits` — cppcheck `shiftTooManyBitsSigned`, the two Watcom signed-`>> 0x1f` idioms. (1) **Branchless abs**: `(int)((X ^ (int)X >> 0x1f) - ((int)X >> 0x1f))` → `ABS((int)X)` (comma-expr form `S = (int)X >> 0x1f, R = (X ^ S) - S` → `R = ABS((int)X)`). (2) **Signed divide-by-power-of-2**: `(int)((X + (X>>0x1f)*-N) - (uint)((X>>0x1f)<<K < 0)) >> M` → `X / N` (N = 2^M). Ghidra often splits the rounding-adjustment from the shift, yielding nested (`(X/16)/4`), loop-invariant (`iVar/16` recomputed each iter), and sign-extend-to-64 (`((ulonglong)(uint)((int)X>>0x1f)<<0x20 | X) / D` → `(longlong)(int)X / D`) variants. Both rewrites are **bit-exact including INT_MIN** with the project `ABS()` macro and C signed `/` — do NOT use libc `abs()`. Drop the now-dead `iVarN = X >> 0x1f` sign temps. NOTE: a `longlong >> 0x1f` (64-bit) is NOT flagged and is the `carry_arith_idiom` multiply-high reduction — leave it.
- `static_self_assignment` — cppcheck `selfAssignment`, a `pX = pX;` / `iVar = iVar;` no-op (pre-increment / shadow-walk decompiler residue). Delete the dead self-assign line. If it's the only artifact of a `preinc_loop_idiom`, fix the whole loop per §19 instead.
- `static_int_to_address` — cppcheck `AssignmentIntegerToAddress`, an integer assigned to a pointer (`*(T **)(... + 0xADDR) = ...`, `frame_buffer = (void *)(N)`). Usually a mistyped local (retype it per §12/§13) or a hardcoded address for a known global (§11) / Watcom 1-based base−stride (§15). Express as the symbolic global + index; if the data shape implies a struct with no existing type, STOP and tell the user what to create in Ghidra.
- `static_identical_inner_condition` — cppcheck `identicalInnerCondition`, an inner `if` whose condition duplicates the enclosing one. Decompiler-redundant guard; drop the inner test (keep the body), confirming against the asm that the two conditions are truly identical.
- `pointer_truncation` — §27 (Pointer truncation via `(int)`/`(uint)` cast). A declared-pointer operand narrowed by a sub-pointer-width cast (`(int)a - (int)b`, `(uint)ptr & mask`, `(uint)this` into `%08X`, `g_int = (int)ptr`). Bit-exact on the 32-bit matching build, a hard `cast from pointer to smaller type` error at 64-bit. Rewrite as `intptr_t`/`uintptr_t` in a `.keep` — **unless** the operand is a mistyped offset field/local (e.g. `void** row_pointers` holding byte offsets), which is a Ghidra-side retype instead. Pointer-ness comes from declared types, not Hungarian naming, so `(int)frame_index` (a pointer despite the name) is caught while integer locals are not.

The next group are **static-analysis-promoted** suspects (synthesized from clang-tidy / cppcheck findings by `static_analysis_suspects.py`, hence the `static_` prefix). Unlike the pattern detectors above they are *review flags*, not guaranteed-mechanical rewrites: each one is a triage between a real `.keep` fix, a Ghidra-side retype, and a faithful-to-the-binary exemption. Always resolve the triage against the `.asm` before editing.
- `static_swapped_arguments` — §28 (Swapped / mistyped call arguments). clang-tidy `bugprone-swapped-arguments`: a call where one arg converts `double`→`int` and an adjacent arg `int`→`float` (or the reverse). Usually a raw float **bit-pattern** emitted as an int into a `float` param (`.keep` fix — convert to the float literal) or a genuinely wrong callee signature (**STOP**, Ghidra fix). Never blindly reorder the args.
- `static_integer_division` — clang-tidy `bugprone-integer-division`, integer division whose result feeds a float context (`(double)(a / b)`). Two outcomes: (1) an operand is a struct field/local Ghidra typed `int` that the asm loads as `float` (`FLD`/`FDIV` against that slot) → **Ghidra-side retype** (§12), the division becomes float division and the flag clears; or (2) the asm really does an integer `IDIV`/`SAR` before the convert → **faithful, exempt** (leave it, note it). Index math like `arr[i / 4]` is a false-positive — the quotient is an index, not a value; leave it.
- `static_float_loop_induction` — clang-tidy `cert-flp30-c`, a floating-point loop counter (`for (f = 0.0; f < n; f += step)`). Almost always **faithful** to Watcom (the binary really counts in `float`) → exempt; leave it and note it. Only fix if the counter is a *mistyped* local that the asm increments/compares as an integer (`INC`/`CMP` on an int slot), in which case retype it to `int` per §13 — confirm against the asm first.
- `static_signed_char_misuse` — §29 (Signed-char widened to unsigned). clang-tidy `bugprone-signed-char-misuse` (aliased `cert-str34-c`): a `signed char` widened straight to `uint`, so a byte ≥ 0x80 sign-extends to `0xFFFFFFxx`. Triage by the load instruction in the asm: `MOVZX`/partial-byte load that's masked → the value is **unsigned**, the local/field should be `uchar` (Ghidra-side retype) or the read needs a `(uchar)` cast in the `.keep`; `MOVSX` → faithful sign-extension, **exempt**.
- `static_null_pointer_redundant_check`, `static_null_pointer_arithmetic_redundant_check` — §30 (Redundant null check). cppcheck `nullPointerRedundantCheck` / `nullPointerArithmeticRedundantCheck`: "either this null check is redundant or there's a possible null deref." Usually the `displayErrorAndQuit` fatal-guard pattern (the quit func can't be marked `noreturn`) — apply the documented recipe; sometimes a decompiler-duplicated guard to drop (§23-style). Confirm it's not a genuine missing-null path against the asm before clearing.
- `static_memleak` — cppcheck `memleak`: an allocation with no freeing path. Two cases: Ghidra **dropped a `free`/`delete`** that the asm still has (a `CALL free`/`operator delete` near the end with no `.cpp` counterpart) → restore it in the `.keep`; or the **original binary genuinely leaks** → faithful, exempt (note it, don't invent a free the binary never made). Cross-check the asm for the dealloc call before deciding.

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

**Not every flagged constant is an address.** The detector matches any large hex constant in the typical-pointer range, so it also catches non-address values that happen to look pointer-shaped. The most common false-positive class is **fixed-point coordinates** — UV/texture coords, screen positions, or other 16.16-style values written as raw hex by Watcom. When the assignment target is clearly not a pointer (e.g. a `.u` / `.v` / `.x` / `.y` field on a vertex or coordinate struct), the right fix is to rewrite the constant as a shift so the fixed-point structure is visible:

```cpp
// BROKEN (flagged as raw_address_constant, but it's a 16.16 UV coord):
pCVar2->vertex_buffer_ptr[1].v = 0xf80000;
pCVar2->vertex_buffer_ptr[2].u = 0xf80000;

// FIXED (shift form makes the integer part obvious — 248 in 16.16):
pCVar2->vertex_buffer_ptr[1].v = 0xf8 << 16;
pCVar2->vertex_buffer_ptr[2].u = 0xf8 << 16;
```

Use the shift form only when the upper bits are non-zero and the lower bits are zero (or otherwise cleanly decomposable) — i.e. the value really is `N << K` for a small `N`. If the constant has bits scattered across the word, leave the hex; a forced shift would obscure rather than clarify.

### 12. Syntax errors from decompiler artifacts

**Cause:** Ghidra occasionally produces syntactically invalid C++ (unbalanced parens, stray tokens, etc.)

**Fix:** Consult the assembly and reconstruct the statement. Keep it as close to the original structure as possible.

### 12. Byte buffer locals that should be structs (`auStack_XX`, `byte[N]`)

**Cause:** Ghidra fails to identify the type of stack-allocated structs, especially when the compiler reuses stack slots across different lifetimes. The decompiler emits raw `byte[N]` arrays with `._offset_size_` sub-accesses instead of proper field names.

**This pattern is broader than just `byte[N]` buffers.** It applies any time the underlying data has struct shape but Ghidra picked a flat primitive pointer type. The most common shapes:
- `char auStack_NN[N]` / `byte local_NN[N]` with `._offset_size_` sub-accesses — Ghidra's "I don't know what this is" fallback.
- `int *` walking a malloc'd buffer with mixed field types — when some accesses use integer MOVs and others use float loads (`FLD`), Ghidra picks `int *` based on the integer stores. Tell-tale signs: cppcheck `invalidPointerCast` warnings on `(float)piVar[N]` reads, `*(float *)&piVar[N]` patterns, or asm `FLD float ptr [REG+N]` against a slot that the cpp accesses as `int`.
- `float *` / typed `int*` locals being used as integer counters (incremented as `(T *)((int)p + 1)`, compared as `(int)p < N`) — Ghidra confused by stack slot reuse (§13) or by a wrong inferred type. Often paired with `pointer_cast` suspects on the increment line.
- A pointer cast immediately on a malloc result (`local_NN = (int *)mallocFn(count * sizeof + 4)`) where `sizeof` is a struct size — Ghidra has no way to infer the struct type for fresh-allocated memory.

**Always tell the user.** Whether the local is `char[N]`, `int *`, `float *`, or any other mistyped form, if the data shape implies a struct: search for an existing struct first; if none matches, tell the user **exactly** what struct to create in Ghidra. Never propose a `.keep`-level workaround (char buffer, `*(float *)&` bit-cast at every site, type-punning shim) as the fix — those are debt the next re-export carries forward.

**Before reaching for any local workaround in a `.keep`, search for an existing struct.** Any time a function's memory layout (sized byte/int/float buffer, fixed-offset field accesses, `._N_M_` sub-accesses, a constructor/initializer call, a cast to a typed pointer, mixed int+float accesses to the same slot) suggests the local is really a struct:

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
- `(T *)mallocFn(count * 0x1c + 4, ...)` — a record-array allocation with size-prefix. The `0x1c` (= sizeof(record)) tells you the struct size; the `+ 4` is a length prefix. Walk every read/write of the resulting pointer to recover the field layout (some slots will be int-typed by Ghidra but really float per the asm `FLD`/`FCOMP`).
- cppcheck `invalidPointerCast` warnings firing at every site that reads a slot of a malloc'd buffer → almost always means the buffer is a typed struct that Ghidra modeled as `int *`. The cppcheck flag is correct that `int*`↔`float*` reinterpretation is unsafe; the underlying fix is "give Ghidra the right struct type."

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
- A countdown `for`-loop writing a single constant (often `0`) to one element per iteration with a unit pointer increment — `for (; iVar != 0; iVar = iVar + -1) { *p = 0; p = p + 1; }`. Watcom's `REP STOS{B,W,D}` lowering. The `unrolled_memset` suspect (asm-anchored on `STOS{B,W,D}.REP`) flags these; the suspect's `line` is in the `.asm`, not the `.cpp`, since the source-side fingerprint is too generic to anchor reliably. Find the matching countdown loop in the function body and replace with `memset(dst, value, count * stride)`. The B/W/D variant tells you the stride (1/2/4 bytes per element).

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

// BROKEN (unrolled memset — REP STOSD in asm, countdown for-loop in .cpp):
for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
}

// FIXED (stride matches the STOS variant: STOSB → 1, STOSW → 2, STOSD → 4):
memset(puVar5, 0, count * 4);
```

**Prefer `sizeof` over a magic byte count.** When you emit a `memcpy`/`memset` whose size is a raw constant (or `count * 0xNN`), check whether that constant is the `Ghidra size:` of a struct in play — the element type of the dest/src array, or a struct declared/used nearby. If it matches, write `sizeof(T)` (or `count * sizeof(T)`) instead of the hex. The asm-anchored REP MOVS/STOS detectors hand you the byte count verbatim, so this comes up constantly:

```cpp
// BROKEN (Watcom REP MOVSD lowering, byte count rendered as `count * size`):
memcpy(g_BackupVertices, g_LoadedVertices, g_VertexCount * 0x14);     // SVertexData is 0x14
memcpy(g_BackupPolygons, g_ModelPolygonData, g_PolygonCount * 0x184); // SShapeEditorPolygon is 0x184

// FIXED (the stride is the element size — make it self-documenting):
memcpy(g_BackupVertices, g_LoadedVertices, g_VertexCount * sizeof(SVertexData));
memcpy(g_BackupPolygons, g_ModelPolygonData, g_PolygonCount * sizeof(SShapeEditorPolygon));
```

Confirm the match the same way as §18: the struct's `Ghidra size: 0x<N>` annotation must equal the constant exactly. If the dest/src is a typed array (`SVertexData g_BackupVertices[...]`), the element type is the `sizeof` to use. If the constant is *not* a clean struct size (a packed sub-range, a hardcoded buffer length, a fixed-point scale), leave the hex — a forced `sizeof` that doesn't actually equal the type size silently changes the copy length. This applies to any size argument, not just collapsed copies (e.g. a `debugMalloc(count * 0x14, ...)` for an `SVertexData` array is `count * sizeof(SVertexData)`).

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

**Escape hatch — when the .asm itself looks wrong:** The cave blocks Ghidra shows in the `.asm` (`MOV ECX,[ESI]; MOV [EDI],ECX` pairs at far addresses like `0x60E45A`) are often **fabricated** by AND-ESP / cave-block fixup scripts that patch Ghidra's analysis. The actual binary has inline `MOVSD` instructions (1-byte `0xA5`) at the original site instead. The byte effect is the same memcpy, **but inline `MOVSD` does NOT clobber `ECX`** while the fake cave block's `MOV ECX,[ESI]` pattern does. This matters when the surrounding asm loads `ECX` (e.g. `MOV ECX,[ESP+0x910]`) right before the cave for use after — Ghidra's resolution will treat that load as dead and resolve the post-cave `PUSH ECX` to a junk value (often a float bit-pattern reinterpreted as a pointer), making the slerp/multiply/etc. call look like it has bogus args.

If you find yourself concluding "the original binary is buggy" or "this call gets a junk pointer that should crash but somehow doesn't" — **stop and verify with capstone before committing to that conclusion**:

```bash
python3 scripts/Python/disassemble_function.py <FunctionName_FUN_AAAAAA>
```

Compare the capstone output against the `.asm` at the suspect addresses. If the `.asm` has a `JMP 0xNNNNNN` to a far cave block and capstone shows 4× `movsd` instead, the cave is fake — the real binary preserves any register the surrounding code loaded before the cave. Re-resolve the symbolic args using the correct (cave-doesn't-touch-ECX) interpretation. Don't reach for this on every function — only when an .asm-driven analysis produces a result that contradicts what a working game would do.

### 21. Inline fast-(inverse-)sqrt bit-trick

**Cause:** The Watcom binary inlines two bit-pattern math approximations across many call sites — a fast `sqrt` and a fast inverse `sqrt`. The asm reinterprets the float's 4 bytes as `int`, manipulates them, and reinterprets them back as `float`:

```
FSTP [tmp]              ; store float
MOV EAX, [tmp]          ; load same bytes as int (bit-cast)
SAR EAX, 1
ADD EAX, [g_FastSqrtMagic]      ; or SUB g_FastInvSqrtMagic - bits
MOV [out], EAX
FLD [out]               ; reload as float (bit-cast back)
```

Ghidra emits these as `(float)(((int)x >> 1) + g_FastSqrtMagic)` — a **numeric** float→int conversion, not a bit-cast. For NaN / Inf inputs `(int)NaN` is UB, which UBSan flags. For finite inputs the value is also wrong (numeric `(int)100.0f = 100` vs. bit-cast `0x42C80000 = 1120403456`).

**Symptoms:**
- UBSan: `nan is outside the range of representable values of type 'int'` inside lines that look like `(float)(((int)X >> 1) + INT_<something>)` or `(float)(<MAGIC> - ((int)X >> 1))`.
- After re-export with `g_FastSqrtMagic` / `g_FastInvSqrtMagic` properly named in Ghidra, those magic identifiers are the giveaway.
- The bit-cast form sometimes appears in older keeps (`*(int *)&dst = (*(int *)&src >> 1) + g_FastSqrtMagic;`) — semantically correct but obscure; same fix as below.

**Fix:** Replace the inline trick with a call to the binary's own helper. The two helpers exist as standalone functions:

| Form | Helper |
|---|---|
| `(bits >> 1) + g_FastSqrtMagic`        | `fastSqrt_FUN_00431350(x)` |
| `g_FastInvSqrtMagic - (bits >> 1)`     | `fastInvSqrt_FUN_0043e2a0(x)` |

```cpp
// BROKEN (Ghidra numeric cast — UB on NaN/Inf):
local_24 = (float)(((int)local_5c >> 1) + g_FastSqrtMagic);
local_44 = (float)(g_FastInvSqrtMagic - ((int)local_48 >> 1));

// FIXED (call the helpers — bit-exact match to original):
local_24 = core_chain_cpp_fastSqrt_FUN_00431350(local_5c);
local_44 = core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(local_48);
```

**Why call the helper instead of `sqrt()` / `1/sqrt()`:** The bit-trick is **not** bit-exact with libc `sqrt()` — typical relative error a few percent. The original game's physics, cloth, and lighting are tuned around these specific approximations, so swapping in `sqrt()` would shift behavior. The helpers preserve original behavior exactly.

**Eligibility:** `.keep`-layer fix. The `fast_sqrt_inline` / `fast_inv_sqrt_inline` suspect types (see "Reducing Flagged Suspects") flag every inline occurrence. Both magics — `g_FastSqrtMagic` (≈ `0x1FC00000`) and `g_FastInvSqrtMagic` (≈ `0x5F400000`) — are project globals; if you see them in a function, the pattern is unambiguous.

### 22. Adjacent uint locals reconstructed as a double (`__BITCAST_DOUBLE(CONCAT44(hi, lo))`)

**Cause:** Watcom often allocates a `double` local as two adjacent 4-byte stack slots (e.g. one slot holds the low 32 bits of the IEEE 754 representation, the next holds the high 32 bits). When the function later passes that double to a callee or uses it in arithmetic, Watcom emits two separate 32-bit pushes / loads. Ghidra models the two slots as independent `uint` locals (often named `local_NNNN` and `local_NNN8` four bytes apart) and reconstructs the original double at every use site via `__BITCAST_DOUBLE(CONCAT44(hi_uint, lo_uint))`. The two-uint declaration is a Ghidra typing artifact, not real source code.

**Symptoms:**
- A pair of adjacent `uint local_NNNN; uint local_NNNN-4;` declarations (offsets exactly 4 bytes apart in the stack frame)
- Both locals are written together, e.g.
  ```cpp
  if (cond) {
      local_2080 = 0x667f6ee7;
      local_207c = 0x3fe6a09e;       // pair forms 0x3fe6a09e667f6ee7 = sqrt(0.5)
  } else {
      local_2080 = 0x995b2417;
      local_207c = 0x3feae89f;       // pair forms 0x3feae89f995b2417 = 2^(-1/4)
  }
  ```
- Both locals consumed only via `__BITCAST_DOUBLE(CONCAT44(local_207c, local_2080))` at one or more call sites
- The bit-pattern decodes to a recognizable double constant (a math constant like `sqrt(0.5)`, `pi`, `1/log(2)`, or a magic encoder coefficient)

**Diagnosis:** Decode the two 32-bit hex constants as a single 64-bit IEEE 754 double. Concatenate hi-uint as the upper 32 bits and lo-uint as the lower 32 bits. A Python one-liner: `import struct; struct.unpack('<d', struct.pack('<II', lo, hi))[0]`. If the result is a clean math/encoder constant, the merge is safe.

**Fix:** Merge the two adjacent uint declarations into one `double` local and replace each `__BITCAST_DOUBLE(CONCAT44(...))` with the double directly:

```cpp
// BROKEN (two adjacent uint slots, reconstructed at every use):
uint local_2080;
uint local_207c;
...
if ((granule->scalefac_compress & 1U) == 1) {
    local_2080 = 0x667f6ee7;
    local_207c = 0x3fe6a09e;
}
else {
    local_2080 = 0x995b2417;
    local_207c = 0x3feae89f;
}
...
calculateRatio(idx, __BITCAST_DOUBLE(CONCAT44(local_207c, local_2080)), n, buf);

// FIXED (merged into one double; bitcast/concat dropped at every call site):
double mpeg2_is_pos_step;
...
if ((granule->scalefac_compress & 1U) == 1) {
    mpeg2_is_pos_step = 0.7071067811865475;   // sqrt(2)/2
}
else {
    mpeg2_is_pos_step = 0.8408964152537145;   // 2^(-1/4)
}
...
calculateRatio(idx, mpeg2_is_pos_step, n, buf);
```

**When NOT to merge:** Skip the merge if either half is read or written *individually* (not just as a bitcast pair) anywhere — e.g. the low half is used in pointer arithmetic, or the two halves come from different sources. That's not a split double, it's two genuinely separate 32-bit values that happen to be adjacent. Decoding both halves together as a double will produce a nonsense constant; that's a strong negative signal.

**Eligibility:** `.keep`-layer fix. The `bitcast_double_pair` suspect type flags every `__BITCAST_DOUBLE(CONCAT44(...))` occurrence. The fix is per-function; the underlying issue is per-stack-frame typing, which Ghidra can't always retype safely without disturbing other local layouts.

### 23. Dead self-copy guard (`if (&LOCAL_A != &LOCAL_B) { LOCAL_A = LOCAL_B; ... }`)

**Cause:** The original source wrote `if (&dst != &src) dst = src;` to guard a small struct copy against self-assignment (a defense useful when `dst` and `src` are pointer parameters that callers might alias). Watcom unrolled the struct copy into N typed scalar assignments inside the guarded body. In the binary, the `dst` and `src` happen to be different stack locals at this call site, but the address-comparison guard survives in the decompile. With both sides as bare stack-local addresses, the guard is always-true at runtime — the body always executes — so the if-wrapper is pure visual noise around an unconditional struct copy.

**Symptoms:**
- An `if (&LOCAL_A != &LOCAL_B) {` line where both operands are bare `&` of simple identifiers (no casts, no pointer parameters).
- The first body line is `LOCAL_A = LOCAL_B;` (the LHS and RHS match the captured names).
- Subsequent body lines continue the field-by-field copy (`LOCAL_A_n = LOCAL_B_n;` for adjacent fields of the same logical struct).

**Canonical example (`CWerewolf::renderEyeGlow`):**
```cpp
// BROKEN (decompile preserves the dead guard):
local_d0 = (eye_position->x + 0.2f) * size_scale;
local_cc = (eye_position->y + 0.2f) * size_scale;
local_c8 = eye_position->z * size_scale;
if (&local_58 != &local_d0) {       // !! always true — different stack slots
    local_58 = local_d0;
    local_54 = local_cc;
    local_50 = local_c8;
}

// FIXED (drop the if-wrapper, keep the body):
local_d0 = (eye_position->x + 0.2f) * size_scale;
local_cc = (eye_position->y + 0.2f) * size_scale;
local_c8 = eye_position->z * size_scale;
local_58 = local_d0;
local_54 = local_cc;
local_50 = local_c8;
```

**When to apply vs. skip:** Apply only when **both sides** of the `!=` are bare `&NAME` and `NAME` resolves to a stack local. Cast-wrapped forms (`(CLocation *)&local`) and pointer-parameter forms (`if (&local != input_ptr)`) are real defenses against caller-aliased pointers — leave those alone, even though the test detector won't flag them.

**Eligibility:** `.keep`-layer fix. The `self_copy_guard` suspect type flags the `if`-line; dropping it is a one-line edit (remove the `if` line and the matching `}`, leaving the body unindented). After cleanup, if the resulting flat body is 4+ field copies, the `unrolled_field_copy` detector may further collapse it into a single `dst = src;`.

### 24. Shadow-pointer walk via struct-field byte arithmetic

**Cause:** Watcom optimized loops that index `original->arr[i]` by maintaining a *shadow* pointer initialized to `original` and advanced by `sizeof(arr[0])` each iteration, so `shadow->arr[0]` resolves to `original->arr[i]`. The asm form is just `LEA shadow, [shadow + ELEMENT_SIZE]`. Ghidra cannot recognize this as a pointer-stride advance; it picks any sibling field whose address-after-itself happens to land at the right byte offset and emits a self-update through that field's address arithmetic.

**Symptoms:**
- A pointer self-update of the form `IDENT = (TYPE *)((IDENT->FIELD).ARRAY[N] + CONST);` inside a loop body.
- The same `IDENT` appears on both sides — strong shadow-walk signal.
- `IDENT` was initialized just above the loop to some other pointer (`IDENT = real_ptr;`).
- Inside the loop, `IDENT->arr[0]` (or similar zero-index access) reads what should be `real_ptr->arr[i]`.
- The chosen `FIELD.ARRAY[N] + CONST` is always nonsense — for example `(skel->motion_list).state_names[1] + 2`, where Watcom advanced by `sizeof(SBone) = 0x24` and Ghidra found offset `0x24` lands inside `state_names[1] + 2`.

**Canonical example (`CGame::processCheatCodes` BIGHEAD cheat):**
```cpp
// BROKEN — shadow-walk through "state_names" because that field happens to
// be at the right byte offset for sizeof(SBone) per step:
iVar13 = 0;
pCVar18 = pCVar17;
do {
    if (iVar6 == pCVar18->bone_list[0].parent_index) {
        scaleBoneRecursive(this_ptr_04, pCVar17, fStack_144, iVar13);
    }
    iVar13 = iVar13 + 1;
    pCVar18 = (CSkeleton *)((pCVar18->motion_list).state_names[1] + 2);
} while (iVar13 < pCVar17->bone_count);

// FIXED — direct array indexing on the original pointer, drop the shadow:
iVar13 = 0;
do {
    if (iVar6 == pCVar17->bone_list[iVar13].parent_index) {
        scaleBoneRecursive(this_ptr_04, pCVar17, fStack_144, iVar13);
    }
    iVar13 = iVar13 + 1;
} while (iVar13 < pCVar17->bone_count);
```

**Decoding the byte offset (sanity check before rewriting):** compute the byte offset that `(IDENT->FIELD).ARRAY[N] + CONST` lands at relative to `IDENT`'s address, then confirm it equals `sizeof(element)` of whatever array the loop is supposed to walk. In the example: `state_names` is `char[80][30]` at offset `0x4` of `CMotionList` (which is at offset `0x0` of `CSkeleton`), so `state_names[1] + 2 = 0x4 + 30 + 2 = 0x24 = sizeof(SBone)`. ✓

**Eligibility:** `.keep`-layer fix. The `shadow_pointer_walk` suspect type flags the self-update line. Replacing the shadow-walk with direct indexing typically renders the shadow-pointer local unused — drop its declaration in the same edit.

### 25. Loop-clobbered constant (Ghidra register-spill artifact)

**Cause:** Watcom kept loop-invariant math constants in registers across iterations of a numeric init loop. Ghidra modeled the register-spill stores as reassignments to other local variables inside the loop body, which silently breaks the loop's math after iteration 0 — every subsequent iteration computes with the wrong values.

**Canonical example (the `requantizeLayer3Samples` gain-table bug):**

```c
base = (float10)2;
fVar7 = (float10)0.25;
iVar4 = 0;
do {
    fVar5 = (float10)-iVar4 * fVar7;
    fVar6 = pow(base, (float10)-iVar4 * fVar7);   // base used as math base
    base = fVar7;            // <-- swap chain: base becomes 0.25
    fVar7 = fVar5;           // <-- swap chain: fVar7 becomes 0
    g_MpegRequantGainTable[iVar4] = (double)fVar6;
    iVar4 = iVar4 + 1;
} while (iVar4 < 200);
```

After iteration 0: `base = 0.25`, `fVar7 = 0`. Every subsequent `pow(0.25, 0) = 1`, so the table fills with 1.0 across the board instead of the intended `pow(2, -i/4)` falloff. With `g_MpegRequantGainTable[i] = 1` for all `i`, the MP3 requantization formula loses its gain-attenuation step — samples come out 10-100× too loud and saturate to ±32767 in the synthesis filterbank.

**Symptoms:** A `do { ... } while (...)` loop body contains:
1. Adjacent simple-identifier assignments `A = B;` then `B = C;` with `A`, `B`, `C` all distinct (the swap chain).
2. `A` is also read elsewhere in the same loop body as a math arg (e.g. inside `pow(A, ...)`, `A * x`).
3. Before the loop, `A` was assigned a literal constant (optionally cast): `A = (float10)2;`, `A = 0.5f;`, `A = 0x1FC00000;`.

**Diagnosis:** the swap chain inside a numeric loop is the smoking gun. Linked-list traversal (`prev = curr; curr = curr->next;`) and array element swap (`arr[i] = arr[j]; arr[j] = tmp;`) don't match because the RHS isn't a bare identifier or the pre-loop literal init isn't there.

**Fix:** drop the swap-chain lines in a `.keep` so the loop runs with its original constants. The variables that were being "swapped into" (`base`/`fVar7` in the example) are pure spill scratch — removing the writes is safe.

```c
// FIXED:
iVar4 = 0;
do {
    fVar6 = pow((float10)2, (float10)-iVar4 * (float10)0.25);
    g_MpegRequantGainTable[iVar4] = (double)fVar6;
    iVar4 = iVar4 + 1;
} while (iVar4 < 200);
```

The intermediate locals (`base`, `fVar7`, `fVar5`) become unused and should be dropped from the declarations.

**Eligibility:** `.keep`-layer fix. The `loop_clobbered_constant` suspect flags the swap-chain line; the detector requires the full signature (do-loop + adjacent swap chain + math read of `A` + pre-loop literal init) so false positives on legitimate swaps/traversals are unlikely.

### 26. Split contiguous Watcom stack block via field-pun (ASan stack-buffer-overflow)

**Cause:** Watcom often packs related values into a single contiguous stack region — a 12-byte `CVector3f`, a 24-byte `position+velocity` pair, an N-vertex billboard buffer. The asm passes a pointer to the start of that region to a downstream call that reads `N` bytes from it. Ghidra cannot always recover the region as one local; it splits the bytes across several adjacent locals (e.g. `CVector3f CStack_X; float fStack_Y;` plus `local_Z.x` reuse) and emits the downstream call as `(CVector3i *)&CStack_X.y` — a sub-field address that *happens* to land at the right Watcom offset.

Under Watcom's compact stack layout the field-pun pointer can validly span across the synthetic boundary into the next local. Under LLVM with ASan, every local is wrapped in a redzone, so the 4–8 bytes that the call would have read past the end of `CStack_X` now land in poisoned bytes — instant `stack-buffer-overflow`. Even without ASan the pun is fragile: Ghidra frequently drops one of the field writes (the byte that fell in the unnamed inter-local gap) entirely, so the call reads uninitialized data.

**Symptoms:**
- ASan reports `stack-buffer-overflow on address ... at offset N` where `N` is exactly one-past-end of a Ghidra-emitted local (e.g. `[144, 156)` with the access at byte 156).
- The crash stack shows the receiving function (`processCameraRelativeVertex`, `transformAndProjectPoint`, `CDeformableModelInstance_rayIntersect`, etc.) reading `world_position->x/.y/.z` at the call site.
- Tracing back to the caller's `.cpp`, the call argument is a sub-field cast: `(CVector3f *)&CStack_X.y`, `(CVector3i *)&local_Z.y`, `(CVector3f *)&local_W.max.y`, etc. — a pointer obviously aimed past the declared field's start.
- In the same caller, you find two or more adjacent locals whose `.y`/`.z` and the next local's `.x` are assigned in sequence (the three components of one logical vector).
- A field write that *should* exist (e.g. the third float of a position vector) is missing from the `.cpp` — Ghidra dropped it because the byte fell into an unnamed slot.

**Verification via asm:** find the call site in the `.asm` file. The push immediately before the call gives the Watcom-side stack offset. Trace the writes to that offset and the next two slots: they should be three same-typed values (3 floats, 3 ints) coming from the same source struct (position, velocity, vertex). Confirm the cpp's split locals correspond to those exact slots — sometimes the cpp drops one of the three writes; the asm always has all three.

**Fix (caller-side `.keep`):** introduce a real, contiguous local of the correct type at the top of the function (per the declaration-placement rule above), rewrite the three field writes to use the real local, and pass `&real_local` to the call. Drop the synthetic split locals from the declarations afterwards. Do *not* try to rescue the split locals by retyping one to be bigger (16-byte struct hack) — that breaks downstream code that legitimately uses the adjacent locals.

**Canonical example (`CSpark_render`, four billboard-quad vertices):**
```cpp
// BROKEN — four CVector3i vertex stores split across adjacent locals, each
// downstream call reads 4 bytes past the local's end and trips ASan:
CVector3i CStack_58;            // .y, .z written…
CVector3i local_4c;              // …and .x of the next local provides the 3rd int
...
CStack_58.y = (int)ROUND(fVar4 * 256.0f);
CStack_58.z = (int)ROUND(fVar4 * 256.0f);
local_4c.x  = (int)ROUND(256.0f * 0.0);
transformAndProjectPoint(&vb->projected_vertex, (CVector3i *)&CStack_58.y);

// FIXED — proper CVector3i locals, declared at function top:
CVector3i quad_v0;   // declared with the other locals at the function head
...
quad_v0.x = (int)ROUND(fVar4 * 256.0f);
quad_v0.y = (int)ROUND(fVar4 * 256.0f);
quad_v0.z = 0;
transformAndProjectPoint(&vb->projected_vertex, &quad_v0);
```

**Canonical example (`CDemonActor_rayIntersect`, ray origin/direction):**
```cpp
// BROKEN — Ghidra's `and esp, 0xfffffff8` confusion picked sub-field addresses
// of bounding-box locals for the local-space ray. Reading 12 bytes from
// &local_84.max.y walks off the bbox into the redzone:
CBoundingBox3D local_84;
CVector3f local_54;
CVector3f local_3c;
...
CDeformableModelInstance_rayIntersect(model, (CVector3f *)&local_6c.max.y,
                                              (CVector3f *)&local_84.max.y);
// (and a field-pun normal copy: local_54.y = ...; local_54.z = ...; local_48.x = ...;)

// FIXED — the asm `[esp+0x7C]` / `[esp+0x64]` decode to &local_3c / &local_54,
// the local-space ray that worldToLocal*/inverseTransform* already produced.
// The normal output is &local_30:
CDeformableModelInstance_rayIntersect(model, &local_3c, &local_54);
local_30 = g_DeformableModelRayHitNormal;
```

**Eligibility:** `.keep`-layer fix. The trigger is either an ASan `stack-buffer-overflow` at a sub-field pointer, or a manual audit that finds `(T *)&local_X.y`-style call arguments. Always confirm the corrected source via asm before rewriting — guessing the axis/field mapping silently produces wrong gameplay (mismatched gravity axis, scrambled vertex positions, etc.).

### 27. Pointer truncation via `(int)`/`(uint)` cast (64-bit build blocker)

**Cause:** Watcom freely cast pointers to `int`/`uint` for pointer differences, alignment masks, address printing, hashing, and storing pointers in int-typed globals/fields. On the 32-bit matching build these are bit-exact, but at 64-bit they are hard errors (`cast from pointer to smaller type loses information`) — the chief obstacle to a multilib-free build. Ghidra reproduces the cast verbatim; the 64-bit compiler is the exhaustive oracle, and the `pointer_truncation` suspect surfaces the same sites in the annotation/review pipeline.

**Symptoms (all from real flags):**
- Pointer difference: `iVar4 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];`
- Alignment mask: `if (((uint)p_output & 2) != 0) { ... }`
- Address print: `displayErrorAndQuit("ptr = %08X", (uint)this_ptr, ...);`
- Pointer stored in an int global: `g_PerspectiveReciprocal = (int)g_CurrentSceneCamera;`
- Pointer-as-offset arithmetic with a separately-cast base: `(char *)base + (int)q->field`

Pointer-ness is decided from **declared types** (signature params, local decls, global types, struct field layout), not Hungarian naming — so a genuinely mistyped operand like `(int)frame_index` (declared a pointer despite the name) is caught, while integer locals that merely look pointerish are not.

**Fix:** Replace the narrowing cast with the width-preserving portable form (per the Fidelity Requirements "64-bit-portable forms" rule), keeping the value's role. On `-m32` these are bit-identical; on 64-bit only the wide form survives:
- `(uintptr_t)ptr` for unsigned uses — alignment masks, address prints, hashes
- `(intptr_t)ptr` for signed pointer-difference math

```cpp
// BROKEN (truncates at 64-bit):
iVar4 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
if (((uint)p_output & 2) != 0) { ... }

// FIXED (width-preserving, bit-identical on the 32-bit build):
iVar4 = (intptr_t)g_ScreenBufferArray[1] - (intptr_t)g_ScreenBufferArray[0];
if (((uintptr_t)p_output & 2) != 0) { ... }
```

**When it's a Ghidra fix instead — STOP and tell the user:** if the "pointer" operand is actually a **mistyped field/local that holds an integer offset**, the cast is a symptom of the wrong type, not a real pointer truncation. The canonical case is `void** row_pointers` used as `(char *)packed_data + (int)row_pointers[i]` — the slots hold byte offsets into `packed_data`, not addresses. Retype the field in Ghidra (`int *row_pointers`); after re-export the cast becomes `(int)int` and the flag disappears. Do **not** paper over it with `intptr_t` in a `.keep` — that buries a real type bug.

**Not a truncation — a dereference (the detector skips these):** `(uint)(&agg.field)[i]` subscripts the address, reading a **scalar element** — Watcom's parallel-array idiom over sibling `uchar`/`ushort` fields (e.g. `(uint)(&g_Palette.colors[0].b)[i]` reading the blue plane). The cast widens a byte/short, not a pointer, so it is not flagged — unless the subscripted field is itself pointer-typed (`(int)(&this_ptr->actor_ptr)[i]`), which is a real truncation and stays flagged.

**Eligibility:** `.keep`-layer fix for the portability rewrite; Ghidra-side retype when the operand is a mistyped offset field/local. The `pointer_truncation` suspect (moderate) flags every narrowing `(int)`/`(uint)` cast of a declared-pointer operand.

### 28. Swapped / mistyped call arguments (`static_swapped_arguments`)

**Cause:** clang-tidy's `bugprone-swapped-arguments` fires when a call passes one argument that implicitly converts `double`→`int` next to one that converts `int`→`float` (or the reverse). The "swapped" framing is a heuristic; in Ghidra output the real cause is almost always that the **decompiler emitted a raw float bit-pattern as an integer literal** into a `float` parameter, and a neighbouring `0.0` double literal landed in an `int` parameter.

**Symptoms:**
- A call with adjacent `..., 0.0, 0xNNNNNNNN, ...` arguments where the callee's signature has an `int` then a `float` param (or vice-versa).
- The integer literal is a recognizable float bit-pattern: `0x40000000` = `2.0f`, `0x3f800000` = `1.0f`, `0x40490fdb` = `pi`.

**Canonical example (`CFlame::process` → `CCharacter::igniteBone`):**
```cpp
// Signature: void igniteBone(CCharacter *, CVector3f *, int fire_type, int flame_type, float flame_scale, int include_hero)

// BROKEN — 0.0 into the int flame_type (harmless 0), but 0x40000000 (the bits
// of 2.0f) converts numerically to 1073741824.0f in the float flame_scale:
igniteBone(&this_ptr_02->base, &pCVar2->position, 0, 0.0, 0x40000000, 1);

// FIXED — decode the float bits (§18) and pass the real literal:
igniteBone(&this_ptr_02->base, &pCVar2->position, 0, 0, 2.0f, 1);
```

**Triage:**
- If the integer literal decodes to a clean float (see §18 — `python3 -c "import struct; print(struct.unpack('<f', struct.pack('<I', 0xN))[0])"`) and the callee param is `float`, replace it with the float literal in the `.keep`. The adjacent `0.0`→`int` is usually a benign `0`; write it as `0`.
- If the arguments are genuinely passed in the wrong **order or types** versus what the asm pushes, the callee **signature is wrong** — **STOP** and tell the user to fix it in Ghidra (§"Prefer Ghidra Fixes"). Do not reorder args in the `.keep` to chase the flag.

### 29. Signed char widened to unsigned (`static_signed_char_misuse`)

**Cause:** A `signed char` value (a `char` deref, a `char` field/local) is widened directly to `uint`/`int`, so the sign bit propagates: a byte `>= 0x80` becomes `0xFFFFFFxx` instead of `0x00xx`. clang-tidy flags it as `bugprone-signed-char-misuse` (aliased `cert-str34-c`). It's a **data-model signedness** smell — the byte was almost certainly meant to be unsigned (a glyph index, a palette entry, a raw byte).

**Symptoms:**
- `uint bVar; ... bVar = *text;` where `text` is `char *` — the assignment sign-extends.
- A range test that only makes sense for an unsigned byte right after: `if ((0x1f < bVar) && (bVar < 0x100))` — the `< 0x100` guard is the tell that the author expected `0..255`, but a sign-extended high byte fails it and the character silently drops.

**Triage via the asm load:**
- `MOVZX EAX, byte ptr [...]`, or `MOV AL, [...]` whose upper bits are then masked / the value only ever compared as a byte → the value is **unsigned**. Fix the data model: retype the local/field to `uchar` in Ghidra, or — if it's a `.keep`-local read — cast at the load: `bVar = (uchar)*text;`. Both make the high bytes survive the range test.
- `MOVSX EAX, byte ptr [...]` → the binary genuinely sign-extends; the behaviour is **faithful**, leave it and note it (exempt).

```cpp
// BROKEN (uint bVar2; signed-char deref sign-extends; chars >= 0x80 fail the < 0x100 test):
bVar2 = *text;
if ((0x1f < bVar2) && (bVar2 < 0x100)) { ... }

// FIXED (asm masks to a byte — treat as unsigned so the full 0x20..0xFF range passes):
bVar2 = (uchar)*text;
if ((0x1f < bVar2) && (bVar2 < 0x100)) { ... }
```

### 30. Redundant null check / possible null deref (`static_null_pointer_redundant_check`)

**Cause:** cppcheck's `nullPointerRedundantCheck` (and the `...ArithmeticRedundantCheck` pointer-subtraction variant) report "either this null check is redundant or there is a possible null dereference" — it saw the pointer dereferenced unconditionally on a path where it could still be null. In Ghidra output this is usually the **fatal-error-guard** pattern: `if (p == 0) { ...; displayErrorAndQuit(...); }` followed by an unconditional deref. Because the quit function can't be marked `noreturn` in Ghidra (it breaks other analysis), cppcheck thinks `p` may still be null afterward.

**Fix (the `displayErrorAndQuit` recipe — both steps; the return alone only shifts the warning):**
1. Add an explicit `return <fail-value>;` (e.g. `return 0;`) immediately after the `displayErrorAndQuit(...)` call inside the null-failure block. Dead code (quit never returns), behaviour-identical, but it tells cppcheck the null path terminates → `p` is provably non-null past the guard.
2. Drop any now-provably-redundant downstream `if (p != 0) { ... }` guard, keeping its body un-wrapped (always-true given step 1; same spirit as the §23 redundant-guard removal).

```cpp
// BROKEN (flagged — cppcheck can't see displayErrorAndQuit as noreturn):
if (model_ptr == (SMRGLHeaderExtended *)0x0) {
    displayErrorAndQuit("null model");
}
return model_ptr->vertex_count;          // "possible null deref"

// FIXED:
if (model_ptr == (SMRGLHeaderExtended *)0x0) {
    displayErrorAndQuit("null model");
    return 0;                            // terminates the null path for cppcheck
}
return model_ptr->vertex_count;
```

**Triage:** confirm against the asm that the guarded path really terminates (a `CALL` to a fatal-error / `exit` helper) or that the inner check truly duplicates an outer one. If instead the deref is reachable with a real null — a missing early-return the decompiler lost — that's a genuine bug; reconstruct the missing null path from the asm rather than silencing the flag.

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
8. **Re-run suspect detection** to see what flagged patterns remain in the file:
   ```
   scripts/Bash/test_suspects.sh path/to/file.keep.cpp
   ```
   This runs the source-text regex detectors from `suspects.py` against the file's current content (no Ghidra needed) and prints any suspects still present, with line numbers and types. Use it to confirm a targeted suspect-cleanup edit actually cleared the pattern, and to spot remaining suspects you might want to address in the same `.keep` pass. Skips P-code / asm / interval-map detectors — those are decompiler-state-dependent and won't change from a `.keep` edit. Pass `--show-omitted` to also list types the exporter normally filters (e.g. `decompiler_intrinsic`, `mmx_assembly`).
9. **Suggest readability improvements** — after the `.keep` file compiles, review it for cases where the decompiler used wrong types that obscure the code's intent. Common examples: `CVector3i` fields holding float bit patterns (hex integers that are really IEEE 754 floats), `int` locals that are actually pointers, etc. If you spot these, **tell the user** what you found and what the correct types would be, but **do not apply the changes** unless the user approves. These are optional cleanups, not compilation fixes.

### Using `.chunked.cpp` for large functions

Some functions have a `.chunked.cpp` variant generated by the chunk transform (opt-in via `"chunked": true` in the function's `.json`). This file splits the function into:
- A **context struct** (`_Ctx`) holding all locals and parameters
- **Static helper functions** that each handle one branch/section, with only the variables they use unpacked as references
- A **rebuilt main function** that calls the helpers

This is purely a comprehension aid — the `.keep` file is still based on the original `.cpp`. But when fixing errors in a 1000+ line function, the chunked view lets you focus on the 30-80 line chunk where each error lives instead of scrolling through the entire function. Cross-boundary `goto` statements are handled via return codes.

## Interactive Debugging via gdb + tmux

When a `.keep` compiles cleanly but the program **misbehaves at runtime** — hangs, traps a sanitizer, renders nothing, leaks NaN through animation — you need a live gdb session. The build provides `debug.sh --tmux` so an agent can drive gdb via `tmux send-keys` while the user watches in another terminal.

### Use `scripts/Bash/dbg.sh` for agent-driven workflows

`scripts/Bash/dbg.sh` is a thin wrapper around `debug.sh --tmux` that hides the tmux/gdb plumbing behind subcommands. **Prefer it for any agent-driven session** — it cuts the per-step token cost (one short command instead of three `tmux send-keys` lines + a `capture-pane`) and standardizes the log location so probe output is always at `/tmp/nocturne_dbg.log`.

```bash
scripts/Bash/dbg.sh build              # ninja build, re-globs new .keep files
scripts/Bash/dbg.sh start              # launch in tmux 'nodebug', paused at gdb
scripts/Bash/dbg.sh cont               # resume (game runs freely)
scripts/Bash/dbg.sh restart            # stop + start (preserves log)
scripts/Bash/dbg.sh probe path.gdb     # pause → source <file> → resume
scripts/Bash/dbg.sh cmd 'p g_FooBar'   # one-shot gdb cmd; output → stdout
scripts/Bash/dbg.sh log [N]            # tail N lines of probe log (default 50)
scripts/Bash/dbg.sh log-full           # whole probe log
scripts/Bash/dbg.sh clear              # wipe probe log
scripts/Bash/dbg.sh pause              # Ctrl-C to gdb
scripts/Bash/dbg.sh status             # pane snapshot + log size
scripts/Bash/dbg.sh stop               # kill session
scripts/Bash/dbg.sh attach             # exec into tmux attach (interactive)
```

**Probe-file conventions when using `dbg.sh probe`:**
- Write breakpoints with `commands ... silent ... printf ... cont ... end`. Probe printfs land in `/tmp/nocturne_dbg.log` automatically.
- Do **not** call `set logging ...` from inside the probe — `dbg.sh start` already configures logging (redirect off so output appears in both the tmux pane and the log file).
- Use `dbg.sh cmd` for one-shot inspection (`p VAR`, `bt`, `x/8w ADDR`); it captures output between marker printfs so you don't need to grep through unrelated probe lines.

Fall back to the raw `debug.sh --tmux` plus manual `tmux send-keys` flow below only when you need something the wrapper doesn't expose — e.g. multiline gdb input that the `cmd` marker trick can't handle, or interactive use without log redirection.

### Launching (raw debug.sh)

```bash
# Default — gdb stays interactive in current terminal
./build/exe-linux-asan/debug.sh

# Detached tmux session (default name: nodebug)
./build/exe-linux-asan/debug.sh --tmux

# Override session name
NOCTURNE_TMUX_SESSION=foo ./build/exe-linux-asan/debug.sh --tmux

# Pre-set breakpoints before run starts
NOCTURNE_BREAKS="CCharacter::foo,core/charactr.cpp:32" \
  ./build/exe-linux-asan/debug.sh --tmux

# Suppress sanitizer halts so frames tick past a known non-fatal trap
ASAN_OPTIONS="halt_on_error=0:detect_leaks=0:abort_on_error=0:symbolize=0" \
UBSAN_OPTIONS="halt_on_error=0:print_stacktrace=0:symbolize=0" \
./build/exe-linux-asan/debug.sh --tmux
```

User attaches via `tmux attach -t nodebug` for live view; agent drives the same pane.

### Driving the session

```bash
tmux send-keys -t nodebug 'p g_BackBuffer' Enter   # send command
tmux send-keys -t nodebug C-c                       # interrupt running program
tmux capture-pane -t nodebug -p -S -200             # read last 200 pane lines
tmux kill-session -t nodebug                         # clean up
```

The interaction is **send → wait → capture**, not real-time. Multi-line gdb command blocks (`commands` ... `end`) get tangled when sent line-by-line through `send-keys` — **always source from a file** instead:

```bash
cat > /tmp/bps.gdb <<'EOF'
delete
set $count = 0
break some_function
commands
silent
set $count = $count + 1
cont
end
EOF
tmux send-keys -t nodebug 'source /tmp/bps.gdb' Enter
```

### Counter-pass pattern

When the question is "where in this chain does control die" or "is function X reachable at all," set silent counter breakpoints on every link and let the program run for a few seconds:

```gdb
delete
set $rs_cnt = 0
set $bd_cnt = 0
set $cf_cnt = 0
set $scan_cnt = 0

break renderScene
commands
silent
set $rs_cnt = $rs_cnt + 1
cont
end

break buildDisplayList
commands
silent
set $bd_cnt = $bd_cnt + 1
cont
end

# … and so on for each link
```

Then `c`, sleep ~4 seconds, `^C`, and `printf "rs=%d bd=%d cf=%d scan=%d\n", $rs_cnt, $bd_cnt, $cf_cnt, $scan_cnt`. The first counter that's zero pinpoints where the gate fails. Far cheaper than `printf` instrumentation in the source.

### Live state-tracing pattern (silent printf + cont, no pauses)

When you need to watch *what state* a function sees on every call — not just whether it fires — extend the silent-counter idiom into a state-printing probe. The breakpoint's `commands` block prints the relevant fields with `printf` and continues, so the game keeps running while you accumulate a per-call trace. Drive iterations on the *running* game: `^C` to interrupt, `source` a new probe file, `c` to resume. Each pass narrows the question; you never have to restart the game or replay it from the start.

**The base pattern:**

```gdb
break my_function_FUN_005a8e90
commands
silent
set $cnt = $cnt + 1
printf "[MY #%d] arg='%s' field=%d\n", $cnt, sound_name, this_ptr->message_duration
cont
end
```

Function-entry breakpoints can read parameters by name (`sound_name`, `this_ptr`) and walk struct fields (`this_ptr->some_field`) directly — debug info from `-O0 -g` makes them visible. Each call adds one line to the trace.

**Conditional printing — `if`/`end` inside commands:**

A breakpoint that fires every frame on every active object floods the log. Filter with gdb's `if`/`end` so the printf only runs when a specific condition holds:

```gdb
break sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0
commands
silent
if this_ptr->sample != 0 && this_ptr->sample->mp3_data != 0
  printf "[MIX] name='%s' prev=%g vol[0]=%g\n", \
    this_ptr->sample->sample_info.name, \
    this_ptr->prev_hardware_playback_pos, \
    this_ptr->channel_volumes[0]
end
cont
end
```

Conditional breakpoints (`break foo if expr`) work but are slower per-hit; the `if` inside `commands` only gates the printf.

**Survey loops with `while`:** count or dump matching slots in an arena without setting 64 separate breakpoints:

```gdb
break pollAndMixSfx_FUN_005aca90.keep.cpp:66
commands
silent
set $i = 0
set $active = 0
while $i < 64
  if g_SfxSlots[$i].playback_state != 0 && g_SfxSlots[$i].sample != 0
    set $active = $active + 1
    printf "  slot[%d] name='%s'\n", $i, g_SfxSlots[$i].sample->sample_info.name
  end
  set $i = $i + 1
end
printf "[ACTIVE total=%d]\n", $active
cont
end
```

**Redirect output to a log file when volume is high.** Per-frame probes can spew thousands of lines and overflow the tmux scrollback, eating earlier (more important) entries. Send everything to a file you can grep through:

```gdb
set logging file /tmp/voice_trace.log
set logging overwrite on
set logging redirect on
set logging enabled on
```

After this, all gdb output (including your `printf` lines and tool messages) goes to `/tmp/voice_trace.log` and the tmux pane stays clean. Read the file with `grep -E "\[MY|\[ANOTHER" /tmp/voice_trace.log` to filter for specific tags.

**Iterative refinement workflow:**

```bash
# 1. First pass — broad counters on all suspects
tmux send-keys -t nodebug C-c
tmux send-keys -t nodebug 'source /tmp/voice_bps1.gdb' Enter
tmux send-keys -t nodebug 'c' Enter
# … user triggers the scenario …
grep -E "\[..." /tmp/voice_trace.log     # see which counters fired

# 2. Add narrower probes around the failing site (game still running)
tmux send-keys -t nodebug C-c
tmux send-keys -t nodebug 'source /tmp/voice_bps2.gdb' Enter
tmux send-keys -t nodebug 'c' Enter
# … user triggers again …
grep -E "\[..." /tmp/voice_trace.log     # check narrower trace

# 3. Disable noisy breakpoints once they've answered their question
tmux send-keys -t nodebug C-c
tmux send-keys -t nodebug 'disable 8' Enter   # mute the per-frame mixer probe
tmux send-keys -t nodebug 'c' Enter
```

Each `source` adds breakpoints (numbered sequentially); each `delete` resets them. `disable N` keeps the breakpoint definition but stops it firing — useful when one probe's job is done but another stage still depends on the surrounding state.

**Common gotchas:**

- **Line-number breakpoints are fragile.** `break file.keep.cpp:138` works, but if you re-export and the line moves, the probe lands somewhere else. Prefer function-name breakpoints (`break funcName`) for stable spots; only use line-numbers when you need a specific point inside a function (e.g. just after a particular call returns, before a specific assignment).
- **Parameters at function entry vs. mid-function.** At entry, named parameters are reliable. Deeper into the function, the compiler may have spilled them, and decompiler-style locals (`local_18`, `pCVar4`) won't exist by name in gdb — they're optimized into registers/stack slots. Read what *is* visible (`info locals`), or break at a call return site where the assignment-target local is freshly written.
- **Floats need `%g` not `%f`** in gdb's printf, and you must cast through types when accessing memory directly: `((float*)g_ChannelPrimaryBuffers[0])[0]` works; `g_ChannelPrimaryBuffers[0][0]` won't if the array element is `void*`.
- **`set logging redirect on` is sticky across sessions.** If gdb feels silent after a relaunch, check whether `/tmp/...log` is still configured. Use `set logging enabled off` or `delete` between scenarios to reset.
- **Per-frame probes can drop frames.** Each breakpoint hit interrupts the program briefly; thousands per second slow rendering visibly. Disable counters once they've earned their answer.

This pattern — silent + state-printing + conditional + log-redirected + iterative — is the workhorse for runtime investigations where the bug is "this function gets the wrong value sometimes" rather than "this crashes." It's how the streaming-MP3 / dialog-audio chain was traced end-to-end without ever pausing the game.

### Sanitizer interaction

`debug.sh` defaults to `halt_on_error=1`/`abort_on_error=1` so gdb catches the first sanitizer trap. That's right for triaging a single bug, but it **prevents counter-pass investigations** because the program aborts on the first UBSan/ASan error before counters accumulate.

When investigating something downstream of a known non-fatal sanitizer trap, set `halt_on_error=0` for the sanitizer in question. UBSan errors still print to stderr; ASan SEGVs always abort regardless of options.

### FPU exception trap (NaN tracing)

When NaN cascades cause hangs (loops with `< INT_MIN` comparisons because `(int)NaN = 0x80000000`), wrong renders (clip-to-nothing because projected coords are NaN), or wrong physics (actor falling through world), the actual NaN-producing op may be far upstream from the symptom. The build has a configurable FPU trap (gated by `NOCTURNE_FPU_TRAP=1` in `shims/shim_config.h`, default on):

```gdb
# Drive the program past benign-NaN regions (intro, menu) into the relevant state, then:
(gdb) call (int)nocturne_fpu_trap_on(1)    # FE_INVALID — NaN producers
(gdb) call (int)nocturne_fpu_trap_on(3)    # INVALID + DIVBYZERO
(gdb) call (int)nocturne_fpu_trap_on(15)   # all four
(gdb) c
# … SIGFPE fires at first matching FP op
(gdb) bt
(gdb) call (int)nocturne_fpu_trap_off()    # disarm + clear sticky flags
(gdb) c
```

Mask values (stable across platforms; see `shims/fpu_trap.h`):

| Bit  | Constant                          | Trips on                                  |
|------|-----------------------------------|-------------------------------------------|
| 0x01 | `NOCTURNE_FPU_TRAP_INVALID`       | `sqrt(neg)`, `0/0`, `Inf-Inf`, NaN-arith  |
| 0x02 | `NOCTURNE_FPU_TRAP_DIVBYZERO`     | `x/0` with `x != 0`                       |
| 0x04 | `NOCTURNE_FPU_TRAP_OVERFLOW`      | result magnitude > max representable      |
| 0x08 | `NOCTURNE_FPU_TRAP_UNDERFLOW`     | result magnitude < min normal             |

**Don't auto-arm at startup.** Intro/menu code paths emit benign `0*Inf=NaN` every frame (e.g. `CMoon::render` → `getEulerAngles`). Drive to the suspect state *first*, then arm.

**Don't try to skip a SIGFPE with `signal 0`.** The x87 exception status word survives the signal, the next FP instruction re-raises, and even `fedisableexcept` itself touches FP state and can re-trap. Either fix the offending op, add a defensive guard (see below), or kill the session and continue without the trap.

### When to add a defensive guard vs. fix upstream

If a function hangs or SEGVs on degenerate input that *can't* be cheaply fixed upstream right now (e.g. an actor's bone position came back NaN, hanging `getGroundHeight` in an integer loop because `ROUND(NaN) = INT_MIN`), add a minimal NaN-bail at function entry so frames keep ticking and downstream investigation can proceed. Use the standard NaN-self-compare — no headers needed:

```cpp
if (pos->x != pos->x || pos->y != pos->y || pos->z != pos->z) {
    if (hit_flag != (int *)0x0)         { *hit_flag = 0; }
    if (normal_out != (CVector3f *)0x0) { normal_out->x = 0.0f;
                                          normal_out->y = 1.0f;
                                          normal_out->z = 0.0f; }
    return 0.0f;
}
```

Mark these clearly as defensive in the comment ("Defensive guard: …") so a later pass — once the upstream NaN source is found and fixed — can rip them out. A defensive guard is **not** a fix; it's scaffolding that keeps the larger investigation alive.

### Common gdb idioms used in this project

```gdb
# Inspect framebuffer pixels (32bpp, ARGB)
p/x *(unsigned int*)g_BackBuffer@8                       # first 8 dwords
p/x *(unsigned int*)g_ScreenBufferArray[240]@160         # 160 pixels of row 240
p/x *(unsigned int*)((char*)g_BackBuffer + y*640*4)@8    # arbitrary row

# Dump engine state to disk. Each PPM dumper produces a sidecar
# `<path>.txt` with relevant state + derived statistics — far better
# than ad-hoc `print` commands when you need a wide picture in one shot.
# See shims/dump.cpp for what each captures.
call (int)nocturne_dump_screenshot("/tmp/frame.ppm")     # color buffer + render state
call (int)nocturne_dump_zbuffer("/tmp/zbuf.ppm")         # depth buffer + touched-pixel stats
call (int)nocturne_dump_display_list("/tmp/actors.txt")  # sorted_render_actors as text table
call (int)nocturne_dump_actor_state("/tmp/hero.txt", g_HeroActors[g_LocalHeroIndex])
                                                         # one actor, full typed state walk
                                                         # (CDemonActor → CCharacter → CHero
                                                         #  → CStranger/CSvetlana)
call (int)nocturne_dump_ground_probes("/tmp/probes.txt", &g_HeroActors[g_LocalHeroIndex]->base.location.position)
                                                         # getGroundHeight (r=0) + cylinder
                                                         # sweep at r=0.5/1/2/5 at the given
                                                         # world position
call (int)nocturne_dump_collision_grid("/tmp/grid.txt", &g_HeroActors[g_LocalHeroIndex]->base.location.position)
                                                         # raytrace bbox/cell_size + (if pos
                                                         # given) the position's grid index,
                                                         # y-column triangle counts, and the
                                                         # cube triangle dump for the cell &
                                                         # 4 xz neighbors. Pass 0 for pos to
                                                         # just dump the grid extent.
call (int)nocturne_dump_lighting_state("/tmp/lighting.txt")
                                                         # vertex normals/transformed verts
                                                         # sample + magnitude histogram +
                                                         # ambient/spot/dynamic light state
                                                         # + per-frame vertex-color gradient
```

### Auto-capture sequence (gdb-driven, no in-game hook)

When you need a sequence of frames over a window of gameplay (e.g. "what does
the level look like during the first 60 frames after load"), drive
`nocturne_auto_capture` from a per-frame breakpoint's `commands` block. The
function maintains its own internal counters; you just pick a path template,
how often to capture, and a max:

```gdb
break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
call (void)nocturne_auto_capture("/tmp/seq_%03d.ppm", 4, 30, 0)
cont
end

# … play through window of interest …

# Disarm (subsequent breakpoint hits become no-ops):
break core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0
commands
silent
call (void)nocturne_auto_capture(0, 0, 0, 1)
cont
end
```

Each capture writes a screenshot PPM at the templated path plus a sidecar
`.txt` with the display list. Pass `reset=1` to re-arm the counter mid-run
(e.g. start a new sequence at a later state).

```gdb
# Walk a struct field through Ghidra-generated names
p g_CDemonRendererInstance.face_count
p g_CGamePtr->scripted_sequence_active

# Hardware watchpoint on a global, log every write with caller
watch -l g_BitsPerPixel
commands
silent
printf "BPP %d->%d\n", $_old, g_BitsPerPixel
where 4
cont
end

# Force-set a global to test a hypothesis
set g_BitsPerPixel = 16

# Return early from a stuck frame (when the function has hung in a NaN-driven loop)
frame 0
return 0
```

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
