---
id: byte-buffer-locals-that-should-be-structs
kind: recipe
title: "Byte buffer locals that should be structs (`auStack_XX`, `byte[N]`)"
legacy_section: 12
requires: [stack-slot-reuse-one-variable-used-as-multiple]
triggers: [primitive_walker_cast, static_int_to_address, static_integer_division]
provides: []
---

**Cause:** Ghidra fails to identify the type of stack-allocated structs, especially when the compiler reuses stack slots across different lifetimes. The decompiler emits raw `byte[N]` arrays with `._offset_size_` sub-accesses instead of proper field names.

**This pattern is broader than just `byte[N]` buffers.** It applies any time the underlying data has struct shape but Ghidra picked a flat primitive pointer type. The most common shapes:
- `char auStack_NN[N]` / `byte local_NN[N]` with `._offset_size_` sub-accesses — Ghidra's "I don't know what this is" fallback.
- `int *` walking a malloc'd buffer with mixed field types — when some accesses use integer MOVs and others use float loads (`FLD`), Ghidra picks `int *` based on the integer stores. Tell-tale signs: cppcheck `invalidPointerCast` warnings on `(float)piVar[N]` reads, `*(float *)&piVar[N]` patterns, or asm `FLD float ptr [REG+N]` against a slot that the cpp accesses as `int`.
- `float *` / typed `int*` locals being used as integer counters (incremented as `(T *)((int)p + 1)`, compared as `(int)p < N`) — Ghidra confused by stack slot reuse ({{ref:stack-slot-reuse-one-variable-used-as-multiple}}) or by a wrong inferred type. Often paired with `pointer_cast` suspects on the increment line.
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
