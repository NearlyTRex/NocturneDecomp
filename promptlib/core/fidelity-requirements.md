---
id: fidelity-requirements
kind: rule
title: Fidelity Requirements
requires: [rules]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

- **Assembly is ground truth.** When the decompiler output is ambiguous or wrong, consult the `.asm` file (same directory, same base name) to understand what the code actually does.
- **The function signature MUST NOT change.** The name, calling convention, parameters, and return type must be identical to the original. This is non-negotiable — the signature comes from Ghidra's analysis and must be preserved exactly. Only the function body internals may be modified.
- **Semantic correctness over compiler appeasement.** Never just slap a cast on an expression to silence a type error. Understand *what the code is actually doing* from the assembly and express that intent. For example, if a `CDemonActor *` is passed to `%s`, don't cast to `(char *)` — the struct has `actor_name[32]` at offset 0x0, so use `actor->actor_name`. If a `CClothList` is accessed through the wrong union member (e.g., `v_kfm_ptr->part_visibility_flags`), replace with the correct member (`v_clothlist_ptr->filenames[i]`). The decompiler frequently picks wrong union members or loses type info — always check what the data really is.
- Keep variable names from the original where possible.
- Keep the overall structure (control flow, statement order) as close to the original as possible.
- **Local variable declarations are NOT off-limits.** Retyping a local (e.g., `CVector3f` → `CQuaternion4f` when Ghidra mis-sized a stack slot), merging two adjacent locals into one struct, or splitting one local into two when Watcom reused a stack slot for different types (one stack slot reused for several variables) are all within the scope of a minimal edit. Fix the declaration to match what the asm actually uses, and any required initializer copy from a sibling local — don't paper over with `(T *)&` casts that hide an underlying size/type mismatch.
- **All local variable declarations go at the top of the function body, never mid-block.** When a fix introduces new locals (e.g. split-block reconstruction, replacement temporaries for a field-pun call), add them to the function's declaration block alongside the Ghidra-emitted locals. Do not declare them next to the use site, even if C++/`-std=gnu++11` would accept it. This keeps `.keep` files matching the Ghidra-style "all declarations up front, then body" convention and makes it trivial to spot/sweep unused locals after an edit.
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
