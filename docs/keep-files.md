# `.keep` files

A `.keep.cpp` (or `.keep.c`) is a hand-written reconstruction of one decompiled function. The
build compiles it in preference to the raw Ghidra output beside it. This is the reference for what
belongs in one and what does not;
[decompilation-workflow.md](decompilation-workflow.md) is the loop it sits in, and
[decompiler-artifacts.md](decompiler-artifacts.md) is the catalogue of what you will be fixing.

The governing idea: **a `.keep` is a liability that has to justify its existence on every
re-export.** It is one function's worth of manual work that the exporter cannot regenerate and that
nothing upstream will ever improve. Every other option — fixing a type in Ghidra, deleting a
`.keep` that has become unnecessary — is better than writing one.

## Creating one

Never write a `.keep` from scratch, and never copy the raw file by hand:

```sh
scripts/Bash/prepare_keep.sh path/to/file.cpp
```

This copies the original and inserts the required header line. Hand-written headers are the most
common cause of a `.keep` that silently does not get picked up.

## The header

```cpp
// Name: core_gore.cpp_CBloodPool_save_FUN_004ed1c0
// Address: 004ed1c0
// MANUAL RECONSTRUCTION
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *, _FILE *)

#include "nocturne.h"
```

`// Name:` and `// Address:` are preserved from the original. `// MANUAL RECONSTRUCTION` goes
directly after `// Address:` and is required on every `.keep`. `// Address Range:`,
`// Convention:` and `// Signature:` are preserved if present, after the marker. The file must
include `nocturne.h`.

Match the original extension. A `.c` gets a `.keep.c`; do not upgrade it to `.keep.cpp`.

## Ghidra intrinsics

`system/intrinsics.h` defines the constructs Ghidra emits that are not C. They exist so the raw
output compiles at all:

| Intrinsic | Meaning |
|---|---|
| `CONCAT44(hi, lo)` | Assemble two 32-bit values into a 64-bit one |
| `SUB84(val, offset)` | Extract 4 bytes from an 8-byte value at a byte offset |
| `__BITCAST_DOUBLE(uint64)` | Reinterpret 64 bits as `double` |
| `__BITCAST_UINT64(double)` | Reinterpret a `double` as 64 bits |
| `ADJ(ptr)` | Adjust an offset pointer back to its base struct |
| `CARRY4(a, b)`, `SBORROW4(a, b)`, `SCARRY4(a, b)` | Carry / borrow / overflow detection |
| `ZEXT14(x)`, `ZEXT48(x)` | Zero extension |

Most of them are **compile escape hatches, not finished code**. `__BITCAST_DOUBLE` and the
carry/borrow family in particular each have a reduction in
[decompiler-artifacts.md](decompiler-artifacts.md) and should not survive into a completed
reconstruction. `CONCAT44`/`SUB84` around a printf-family call collapse to one `double`
([§3](decompiler-artifacts.md#3--format-string-errors)); pervasive through a body, they are a
walk-away signal instead.

## Fidelity

**The signature is immutable.** Name, calling convention, parameter list and return type come from
Ghidra's analysis and are reproduced exactly. Only the body changes. A wrong signature is a Ghidra
fix, not a `.keep` edit.

**The assembly is ground truth.** When the decompile is ambiguous or nonsensical, the `.asm` beside
it says what the function does. Never cast something into compiling — if a `CDemonActor *` is
passed to `%s`, the struct has `actor_name[32]` at offset 0, so the answer is `actor->actor_name`,
not `(char *)actor`. Ghidra picks wrong union members and loses type information constantly; check
what the data really is.

**Change only what has to change.** Keep the variable names, the control flow and the statement
order. Do not refactor, do not rename for style, do not improve anything the fix does not require.

Within that, these are explicitly *not* off-limits:

- **Retyping a local** — `CVector3f` → `CQuaternion4f` when Ghidra mis-sized a stack slot.
- **Merging two adjacent locals** into one struct, or **splitting one** that Watcom reused for two
  types ([§13](decompiler-artifacts.md#13--stack-slot-reuse)).
- **Renaming as part of a retype.** When a retype makes the existing name wrong — a `pi`/`pc`
  Hungarian prefix that no longer matches, or a misnomer like `texture` for a primitive-block
  walker — the rename is part of expressing the corrected type, not styling.

Fix the declaration to match what the assembly uses, rather than papering over it with a `(T *)&`
cast that hides the mismatch.

### What is a Ghidra fix instead

A `.keep` is the right answer for a **decompiler limitation** — split doubles, MOVSD artifacts, ADJ
quirks, format-string splitting, a mistranslated loop. It is the wrong answer for a wrong type,
because the type is in the database and every function that touches it is wrong the same way.

Any of these is a Ghidra-side fix, and the useful output is a precise statement of what to change:

- **Wrong global type** — a global typed `float` that is really a `float *`, or an `int` that is
  really a struct pointer.
- **Wrong return type** — commonly a function returning some pointer type when it returns `void`,
  because Ghidra inferred a return from EAX being live at `RET` while no caller uses it.
- **Wrong parameter types, parameter count, or calling convention.**
- **Wrong struct field type or layout** — a field typed `int` that the asm loads with `FLD`, or a
  struct with the wrong size or alignment.
- **Wrong calling convention on a vtable entry** — this drifts ESP tracking for the rest of the
  function, so the damage extends well past the call.
- **A missing or wrong function pointer type** — a vtable slot typed `int` rather than a pointer.

The function gets skipped and named, rather than worked around.

### Declarations

**All local declarations go at the top of the function body, never mid-block.** When a fix
introduces a new local, it joins the Ghidra-emitted declaration block — even though `-std=gnu++11`
would accept it at the use site. This keeps `.keep` files matching the Ghidra convention of
declarations up front, and makes unused locals easy to spot and sweep after an edit.

### Comments

**Strip Ghidra's `/* WARNING: ... */` comments.** They describe the decompiler's confusion about
its own output — inlined functions, unusable symbol types, overlapping globals — and become stale
clutter the moment a manual reconstruction exists.

**Do not add comments explaining the fix** unless the logic is genuinely non-obvious.

**Mark what is uncertain.** When the types and argument count are determinable but the exact
variable mapping is not — which local is which bounding-box axis, say — a `// UNCERTAIN:` comment
saying what is known and what is approximate flags it for later verification without blocking
progress.

### 64-bit portable forms

Where two expressions produce identical code under `-m32` but differ at 64-bit, use the portable
one. It costs nothing today and it is what the 64-bit lane needs.

| Instead of | Use | For |
|---|---|---|
| `(int)ptr`, `(unsigned int)ptr` | `(uintptr_t)ptr` | alignment masks, packing, hashing, address printing |
| `int` from `strlen`/`sizeof` | `size_t` | sizes and lengths |
| `(int)a - (int)b` on pointers | `(intptr_t)` | pointer difference math |

Only when the substitution is *exactly* equivalent at the assembly level. This is a rule about
**expression types inside a body**, never about storage: promoting an `int` struct member to
`int64_t` changes the layout and breaks every byte-offset access that reaches it. See
[§27](decompiler-artifacts.md#27--pointer-truncation-via-intuint-cast).

## De-punning

A reinterpret cast — `*(T *)(expr)`, `(T *)(IDENT + N)`, `((T *)FIELD)[i]` — is a decompiler
artifact: it means Ghidra lost the type at that point. Removing one is worth doing whenever you are
already editing the file for any reason, because naming the type is self-documenting and because it
exposes the *next* bug (wrong field, off-by-one stride) that the raw cast hides.

**The feasibility gate.** Only de-pun when the real type is *known* and the rewrite is exactly
equivalent at the byte level — from a corrected struct, an existing struct that matches the layout,
or the `.asm`. If the target type is unknown, or the shape implies a struct that does not exist,
that is a Ghidra-side finding
([§12](decompiler-artifacts.md#12--byte-buffers-and-primitive-walkers-that-are-really-structs)),
not licence to invent a reinterpretation.

Pick the highest option that applies:

1. **A named struct field.** If the struct has a real field at that offset, use it and drop the
   cast: `(CVector3i *)(kf + 1)` → `kf->vertices`; `*(int *)(base + 0x10)` →
   `base->vertex_header.count`. Where a type boundary is genuinely crossed, one cast there and
   named fields after it: `*(int *)(p->actor_name + 8)` on a `CWeapon` reached through a
   `CDemonActor *` → `((CWeapon *)p)->ammo_count`.
2. **Retype the local.** A primitive walker (`int *`/`uint *`) striding a typed struct array
   becomes the element type: `*p`/`p[1]`/`p[2]` → `p->x`/`p->y`/`p->z`, and the `p += 3` stride
   becomes `p += 1`. Drop the interleaved index-shuffle temps (`piVar1 = p + 2; p += 3;`) — they
   exist only because of the primitive stride.
3. **One intermediate typed pointer.** When the same bytes are reinterpreted at several sites and
   no field or retype fits, declare one typed pointer at the top, assign it where the base is
   stable, and index it. Eight `((int *)rec.texture_name)[i]` reads become one
   `uv = (int *)rec.texture_name;` and `uv[0..3]`.

**Leave one explicit cast where it is honest.** A single localized reinterpret that marks a real
**format boundary** or **polymorphic dispatch** is the correct representation — a vertex array
immediately followed by a primitive-block chain, a base-class walker downcast at the dispatch site,
a header upcast for a size query. Do not multiply intermediates chasing a pun that is genuinely one
reinterpretation.

## Suspect cleanup

`test_suspects.sh` reporting `clean` is the bar, and that includes the mild flags —
`static_self_assignment`, `static_identical_inner_condition`, `warning_inlined_function` and the
rest of the stylistic warts all count. A function whose only remaining flags are mild is still
worth a `.keep` to drive it fully green.

While editing a file for any reason, clear everything else it flags in the same pass, including
the cppcheck-tagged warnings that the by-function report does not list. The report
(`suspect_by_function.txt`) is a point-in-time snapshot and the detector set evolves;
`test_suspects.sh` against the current file is the authoritative state.

Constraints:

- **One suspect, one edit.** Each fix is its own reviewable change with its own rationale — which
  suspect and line it targets, what the asm shows the real semantics to be, why the rewrite is
  exactly equivalent. Never bundle unrelated rewrites into one diff.
- **Keep the rest identical.** Names, control flow, statement order and header comments stay as
  they were outside the rewritten region. Each diff should read "this one pattern became that one
  standard call".
- **Semantics over neatness.** Only rewrite when the equivalence is unambiguous. An unrolled
  `strcpy` must be complete, contiguous and free of interleaved logic. A wrong rewrite silently
  changes behaviour.
- **Two things are not cleanup targets.** A flag whose fix would change what the shipped binary
  does is exempt — note it and leave it. A flag that is really a Ghidra-side defect means saying
  exactly what to change upstream, not papering over it locally.

## Auditing an existing `.keep`

An existing `.keep` is not a signal that a function is done. It is a hypothesis about what the
decompiler got wrong, recorded at some point in the past. Diff its body against the current `.cpp`
before touching it. Three things it may be:

**Out of date.** The `.cpp` has been re-exported since, with better types, a better signature, or a
fixed bug. If the current raw output compiles and is correct, the `.keep` is obsolete and should be
deleted — that is a good outcome, not a lost edit.

**Compiling but harbouring a runtime trap.** It was written to make the function build, and the
logic it carried over is itself an artifact that compiles cleanly and misbehaves. Specifically
check for adjacency-sentinel loops ([§16](decompiler-artifacts.md#16--adjacency-sentinel-init-loops)),
wrong-global accesses from 1-based indexing
([§15](decompiler-artifacts.md#15--wrong-global-from-watcom-1-based-indexing)), and partial struct
copies ([§31](decompiler-artifacts.md#31--partial-struct-copy)).

**Carrying stale workarounds.** Raw `ADJ(ptr)->field` writes from before the exporter's `adj()`
fix; `(float *)&` casts papering over stack-slot reuse that has since been retyped upstream. These
were right once and are now noise, or actively wrong.

Say which of the three it is before editing, so the choice between updating minimally, rewriting to
drop obsolete workarounds, and deleting outright is made deliberately.

## Reference variants

Three variants are generated beside a function and never compiled.

**`.chunked.cpp`** — opt-in via `"chunked": true` in the function's `.json`. Splits the function
into a context struct (`_Ctx`) holding all locals and parameters, static helpers that each handle
one branch with only the variables they use unpacked as references, and a rebuilt main function
that calls them. Cross-boundary `goto` becomes return codes. Purely a comprehension aid — in a
1000-line function it lets you work on the 30–80 line chunk where an error lives. Read it first
when one exists, but base the `.keep` on the original `.cpp`.

**`.byval.cpp`** — models Watcom's by-value struct passing, which the decompiler fumbles. When
promoting one into a `.keep`, stay close to its intent; the transform exists precisely to capture
that.

**`.mmx.cpp`** — the original's MMX/inline-asm intent. **Do not reproduce the inline assembly.**
`__asm` block syntax varies across compilers and the ports are mechanically fragile. Write what the
block *does* in portable C++ instead: a `memcpy`/`memset`/`memmove` if that is what it is, a plain
loop for a bulk fill, the scalar equivalent for pixel blending or vector math. A clean scalar
translation beats a clever platform-locked one. The signature still matches exactly; only the body
is rewritten.

A function that has one of these variants usually has it because the raw output would not compile —
the variant was the historical escape hatch, and promoting it into a `.keep` is the path forward
now that the variants themselves are out of the build.

## When to walk away

Some functions are mangled past the point where a `.keep` would be reconstruction rather than
fiction. The symptoms, in combination:

- Large numbers of `in_stack_XXXXXXXX` pseudo-parameters — the decompiler lost the real signature.
- `SUB84`/`CONCAT44`/`._0_4_`/`._4_4_` pervasive through the body, not just a few split doubles.
- Large byte-buffer locals (`byte[200+]`) with dozens of sub-offset accesses that map to no known
  struct.
- Control flow with no structural sense — gotos into the middle of loops, unreachable blocks.
- A body that is mostly casts and reinterpretations with little recognizable logic.

A `.keep` is a *minimal* edit of the decompiler output. If more than roughly a third of the body
would have to be rewritten, the function needs Ghidra-side work or manual reverse engineering
first. Name the function and the reason, and move on — an unreviewable reconstruction is worse than
a function that does not compile yet.

## Worked example

The raw output for `CBloodPool::save`, which does not compile:

```cpp
int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr, _FILE *file_handle)
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

The `.keep` body:

```cpp
int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr, _FILE *file_handle)
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

The assembly pushes eight bytes per `%f` — two 32-bit pushes for one double — and the decompiler
exposed that push mechanics as arguments
([§3](decompiler-artifacts.md#3--format-string-errors)). Collapsing each pair back to one `(double)`
restores the intent; `dVar1` and `dVar2` then fall unused and their declarations go with them.
Everything else — the signature, the call order, the format strings, the return — is untouched.
