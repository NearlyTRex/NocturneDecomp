# Decompiler artifacts

A catalogue of the ways Ghidra's output for this binary does not mean what it appears to, and the
rewrite for each. [decompilation-workflow.md](decompilation-workflow.md) is the loop these fit
into; [keep-files.md](keep-files.md) is the conventions a rewrite has to follow.

The section numbers are stable identifiers. Suspect descriptions embedded in the exported
`.json` files and several generated reports cite them (`§16`, `§26`, …), so they are kept as-is
even where the grouping below reorders them.

Three questions decide what to do with any artifact:

1. **Is it a wrong type, signature or layout?** Fix it in Ghidra — that corrects every function
   that touches it. A `.keep` corrects one.
2. **Is it a decompiler limitation?** Fix it in a `.keep`. No Ghidra change helps.
3. **Would the fix change what the shipped binary does?** Leave it. Faithfulness wins over a
   clean tool report.

## Detector index

The exporter and `test_suspects.sh` emit these ids. `static_*` ids are promoted from clang-tidy
and cppcheck findings by `static_analysis_suspects.py` and are review flags rather than
mechanical rewrites.

| Detector | Artifact | Where it is fixed |
|---|---|---|
| `unrolled_strcpy` / `_memcpy` / `_memset` / `_strlen` / `_strcat` / `_strchr` | [§17](#17--unrolled-stringmemory-copies) | `.keep` |
| `pointer_cast` | [§13](#13--stack-slot-reuse), or [§17](#17--unrolled-stringmemory-copies) inside a countdown loop | `.keep` |
| `wrong_global`, `displaced_global_access` | [§15](#15--wrong-global-from-watcom-1-based-indexing) | `.keep` |
| `raw_address_constant` | [§11](#11--hardcoded-addresses-for-known-globals) | `.keep` |
| `suspicious_cast` | [§1](#1--pointer-to-float-cast) / [§7](#7--cannot-cast-from-float-to-pointer) | `.keep` |
| `sub84_truncation`, `double_reconstruction` | [§2](#2--double-return-splitting) / [§3](#3--format-string-errors) | `.keep` (localized only) |
| `preinc_loop_idiom` | [§19](#19--pre-increment-array-walk-loop) | `.keep` |
| `missing_cave_copy` | [§20](#20--missing-cave-block-struct-copy) | `.keep` |
| `fast_sqrt_inline`, `fast_inv_sqrt_inline` | [§21](#21--inline-fast-inverse-sqrt-bit-trick) | `.keep` |
| `inline_exp_idiom` | [§33](#33--inline-x87-exppow-with-the-fprem-reduction-dropped) | `.keep` |
| `bitcast_double_pair` | [§22](#22--adjacent-uint-locals-that-are-one-double) | `.keep` |
| `bitcast_double` | any other `__BITCAST_DOUBLE` — decode the constant | `.keep` |
| `sibling_array_undersized` | [Undersized sibling arrays](#undersized-sibling-arrays) | `.keep` |
| `self_copy_guard` | [§23](#23--dead-self-copy-guard) | `.keep` |
| `subfield_vector_pun` | [§26](#26--split-contiguous-stack-block-via-field-pun) | `.keep` |
| `shadow_pointer_walk` | [§24](#24--shadow-pointer-walk) | `.keep` |
| `loop_clobbered_constant` | [§25](#25--loop-clobbered-constant) | `.keep` |
| `primitive_walker_cast` | [§12](#12--byte-buffers-and-primitive-walkers-that-are-really-structs) | Ghidra |
| `sign_compare_idiom` | [Flag-math idioms](#flag-math-idioms) | `.keep` |
| `carry_arith_idiom` | [Flag-math idioms](#flag-math-idioms) | `.keep` |
| `partial_struct_copy` | [§31](#31--partial-struct-copy) | `.keep` |
| `phantom_float_to_int` | [§32](#32--phantom-floatint-conversion) | `.keep` |
| `pointer_truncation` | [§27](#27--pointer-truncation-via-intuint-cast) | `.keep`, or Ghidra if the operand is a mistyped offset |
| `static_shift_too_many_bits` | [Flag-math idioms](#flag-math-idioms) | `.keep` |
| `static_self_assignment` | dead `pX = pX;` — delete, or fix the whole [§19](#19--pre-increment-array-walk-loop) loop | `.keep` |
| `static_int_to_address` | [§12](#12--byte-buffers-and-primitive-walkers-that-are-really-structs) / [§13](#13--stack-slot-reuse) / [§11](#11--hardcoded-addresses-for-known-globals) / [§15](#15--wrong-global-from-watcom-1-based-indexing) | triage |
| `static_identical_inner_condition` | duplicated guard — drop the inner test, keep the body | `.keep` |
| `static_swapped_arguments` | [§28](#28--swapped--mistyped-call-arguments) | triage |
| `static_integer_division` | [Static-analysis review flags](#static-analysis-review-flags) | triage |
| `static_float_loop_induction` | [Static-analysis review flags](#static-analysis-review-flags) | usually exempt |
| `static_signed_char_misuse` | [§29](#29--signed-char-widened-to-unsigned) | triage |
| `static_null_pointer_redundant_check` | [§30](#30--redundant-null-check) | `.keep` |
| `static_memleak` | [Static-analysis review flags](#static-analysis-review-flags) | triage |
| `decompilation_failed`, stack/ESP anchor mismatches, `warning_*` | structural | Ghidra only |

`clean` from `test_suspects.sh` means no flags of any kind, mild included. The two standing
exceptions are a flag whose fix would change runtime behaviour, and a flag that is really a
Ghidra-side defect.

## Compile errors

Mechanical. The decompiler emitted something that does not parse or type-check; the assembly says
what it should have been.

### §1 — Pointer-to-float cast

`C-style cast from 'SomeType *' to 'float' is not allowed`. Ghidra read a float load through a
pointer as a cast of the pointer.

```cpp
fVar1 = (float)this_ptr;                          // broken
fVar1 = this_ptr->position.x;                     // asm: FLD dword ptr [EAX + 0x10]
```

### §2 — Double return splitting

`SUB84` / `CONCAT44` / `._0_4_` / `._4_4_`. Watcom returns `double` in EAX:EDX; Ghidra splits the
8-byte value and reassembles it. `system/intrinsics.h` defines the macros, so these usually
compile — when they do not, the variable is typed too narrow to be subfielded:

```cpp
int iVar1;        iVar1._0_4_ = v;                // broken — can't subfield an int
ulonglong iVar1;  iVar1._0_4_ = v;                // fixed
```

Localized splits are a `.keep` fix. If `SUB84`/`CONCAT44` runs through most of the body, the
function belongs in [walk-away territory](keep-files.md#when-to-walk-away) instead.

### §3 — Format string errors

`format specifies type 'X' but argument has type 'Y'`. The assembly really does push a double as
two dwords; Ghidra exposed the push mechanics instead of the argument.

```cpp
// broken
_fprintf(f, "%f", SUB84(__BITCAST_UINT64(dVar1), 0), (int)((ulonglong)dVar1 >> 0x20));
// fixed
_fprintf(f, "%f", (double)this_ptr->value);
```

### §4 — `ADJ()` pointer adjustment

Ghidra uses offset pointer types (`CAmmo_ptr_158`) when it tracks a pointer into the middle of a
struct, and `ADJ()` adjusts back to the base. Keep the ADJ form when it compiles. When the offset
type is not properly defined, write the arithmetic out: `((BaseType *)((char *)p - OFFSET))->field`.

### §5 — Array type not assignable

`array type 'byte[4]' is not assignable` — Ghidra assigned to an array variable. Use `memcpy`, or
assign element by element.

### §6 — Called object type is not a function

A function pointer in a struct that Ghidra typed as a float. The assembly has an indirect `CALL`;
cast to the real function pointer type.

```cpp
result = ((int (*)(int))*(void **)((int)vtable + 0x1c))(args);   // asm: CALL dword ptr [EAX + 0x1c]
```

A vtable slot typed as `int` rather than a function pointer is a Ghidra fix, not a `.keep` fix.

### §7 — Cannot cast from float to pointer

The local is a pointer, not a float. Change the declaration, guided by the assembly. Often paired
with [§13](#13--stack-slot-reuse).

### §8 — `const` qualifier discards

Ghidra types carry no `const`. Cast, or drop it: `ptr = (char *)"string literal";`

### §9 — Sign mismatch pointer conversion

`converts between pointers to integer types with different sign`. Add the explicit cast.

### §10 — Undeclared identifier

A global, type or function not declared in `nocturne.h`. If it is a real symbol, add an `extern`
after the include. If it is `in_stack_XXXXXXXX`, it is [§14](#14--in_stack-phantoms-and-stack0x-references).

### Syntax errors

Ghidra occasionally emits invalid C++ — unbalanced parens, stray tokens. Reconstruct the statement
from the assembly and keep the surrounding structure.

## Lost types

The data has a shape; Ghidra picked a flatter type than the shape. These are mostly Ghidra-side
fixes, because the wrong type is in the database and affects every function that touches it.

### §12 — Byte buffers and primitive walkers that are really structs

`char auStack_NN[N]` / `byte local_NN[N]` with `._offset_size_` sub-accesses is Ghidra's "I don't
know what this is" fallback. The pattern is broader than byte arrays, though:

- An `int *` walking a malloc'd buffer with mixed field types. Ghidra picks `int *` from the
  integer stores; the float fields then show up as cppcheck `invalidPointerCast` on
  `(float)piVar[N]`, as `*(float *)&piVar[N]`, or as `FLD float ptr [REG+N]` in the asm against a
  slot the `.cpp` reads as `int`.
- A `float *` or typed `int *` local used as an integer counter — incremented as
  `(T *)((int)p + 1)`, compared as `(int)p < N`.
- A cast straight onto a malloc result: `local_NN = (int *)mallocFn(count * 0x1c + 4)`. The `0x1c`
  is the element size and the `+ 4` a length prefix; Ghidra has nothing to infer a type from.

**Search for an existing struct before proposing anything.** Grep
`annotations/<binary>/pseudocode/include/types/{structs,classes}/` for the byte count
(`Ghidra size: 0x<N>`) and cross-check field offsets. If the buffer is passed to a function, that
callee's signature names the real type.

If a struct matches, retype the stack local to it in Ghidra. If none does, the deliverable is a
struct specification — name, size, field layout with offsets and types, the evidence for each, and
which locals in which functions to retype afterwards. A `char local_XX[N]` buffer or a
`*(float *)&` bit-cast at every site is debt the next re-export carries forward, not a fix.

Diagnosis heuristics:

- A `byte[56]`/`byte[60]` with a constructor call and writes at known offsets is a struct. Check
  whether an adjacent 4-byte local completes the size.
- A large `byte[N]` accessed at 12-byte-spaced sub-offsets is usually several `CVector3f`
  temporaries the compiler packed into overlapping slots.
- Sequential `fread`/`fwrite` targets at distinct sub-offsets are a file-format struct.

Stack locals in Ghidra cannot overlap — each byte belongs to one variable. So when a struct spans
two adjacent locals (`auStack_cc[56]` + `pCStack_94[4]` = 60 bytes), retyping the first to the full
size absorbs the second. And where the compiler reused one slot across phases, one interpretation
has to win; pick the one that makes the most important path readable.

### §13 — Stack slot reuse

Watcom reuses a 4-byte slot for a `float` on one path and a `CVector3f *` on another. Ghidra
assigns one type per variable and casts for the rest:

- `(float)pSomePointer`, `(CVector3f *)some_float_expr`
- `(CVector3f *)(this_ptr->base).base.turn_speed` — a float field held in a pointer variable
- `(CVector3f *)normalizeAngleToPi(...)` — a float return held in a pointer variable

Grep every use and group by path. If they split cleanly into "pointer on A/B" and "float on C/D"
with no overlap, it is slot reuse. Split the variable: declare it as the dominant type, and for
the other uses either inline the expression or add a second, named local. Remove the casts that
existed only to bridge the two. Distinct from [§12](#12--byte-buffers-and-primitive-walkers-that-are-really-structs)
— here the types are real, just wrong for some uses.

### §14 — in_stack phantoms and stack0x references

When the decompiler loses the frame — indirect calls, vtable dispatch, unusual conventions — it
invents `in_stack_XXXXXXXX` pseudo-parameters and raw `stack0xXXXXXXXX` references.

- Assignments of code addresses (`= (char *)0x4e6aec`, where the value falls inside the function's
  own range) are return-address tracking. Always dead stores; delete them.
- Live uses get replaced with the real expression — the actual object pointer at a vtable call, an
  existing typed local for a result, `&local_2d8` for a struct argument.
- `&stack0xXXXXXXXX` used as an `sprintf` buffer needs a real `char` array local.
- `(float)in_stack_...` in an argument list: read the value out of the assembly.

Remove the declarations once nothing references them, along with anything else that falls unused.

### §22 — Adjacent uint locals that are one double

Watcom allocates a `double` as two adjacent 4-byte slots. Ghidra models them as independent
`uint`s and rebuilds the double at every use with `__BITCAST_DOUBLE(CONCAT44(hi, lo))`.

The tell is a pair of `uint local_NNNN` declarations exactly 4 bytes apart, always written
together, consumed only through the bitcast, and decoding to a recognizable constant. Decode with
`struct.unpack('<d', struct.pack('<II', lo, hi))[0]`; merge the pair into one `double` and pass it
directly.

```cpp
// broken                                    // fixed
uint local_2080, local_207c;                 double mpeg2_is_pos_step;
local_2080 = 0x667f6ee7;                     mpeg2_is_pos_step = 0.7071067811865475;  // sqrt(2)/2
local_207c = 0x3fe6a09e;
calculateRatio(i, __BITCAST_DOUBLE(          calculateRatio(i, mpeg2_is_pos_step, n, buf);
    CONCAT44(local_207c, local_2080)), n, buf);
```

Do not merge if either half is read or written on its own anywhere — then they are two genuinely
separate values that happen to be adjacent, and decoding them as a double produces a nonsense
constant. That nonsense is itself the negative signal.

`bitcast_double` without the pair is usually a hardcoded constant:
`__BITCAST_DOUBLE(0xNNNNNNNNNNNNNNNNULL)`. Decode the 64 bits as IEEE 754 and write the literal —
`0x400921fb54411744` is exactly `3.1415926535`. The macro is a compile escape hatch and should not
survive into a finished reconstruction.

### §32 — Phantom float→int conversion

On x87 a numeric float→int conversion requires `FIST`/`FISTP`, and Watcom 11 emits those inline —
this codebase has no `_ftol`-style helper. So in a function whose `.asm` contains **no `FIST` at
all**, every `(int)<float>` is fabricated: Ghidra typed a slot as float that the binary reads as an
integer, or lost an integer local and reached for a float field occupying the slot it wanted.

The cast is never right, so the only question is what the real integer was — usually a global
array element, a loop counter, or a parameter whose slot Ghidra reassigned.

```cpp
// broken — .z of a quaternion stands in for a bone index
blendBoneRotations(&model, &local_6c, t, (int)local_6c.z, cb);
// fixed — the asm loads the index from g_ScatIndices, an int local Ghidra dropped
local_18 = g_ScatIndices[5];
blendBoneRotations(&model, &local_6c, t, local_18, cb);
```

The detector reports the field-path shape (`(int)local.field`) only. The bare-local shape
(`(int)fVar4` on a mistyped float local) has the same cause but resolves to a Ghidra retype. Three
neighbours belong to other detectors and are excluded: bit-pattern compares, the fast-sqrt magics
([§21](#21--inline-fast-inverse-sqrt-bit-trick)), and pointer/array roots
([§27](#27--pointer-truncation-via-intuint-cast)).

### §29 — Signed char widened to unsigned

A `char` deref or field widened straight to `uint`, so a byte ≥ 0x80 sign-extends to `0xFFFFFFxx`.
The range test right after it is usually the tell — `if ((0x1f < bVar) && (bVar < 0x100))` only
makes sense for `0..255`, and a sign-extended byte silently fails it.

Triage on the load instruction: `MOVZX`, or a `MOV AL` whose upper bits get masked, means the value
is unsigned — retype to `uchar` in Ghidra, or cast at the load (`bVar = (uchar)*text;`). `MOVSX`
means the binary genuinely sign-extends and the behaviour is faithful; leave it.

## Wrong symbol, wrong constant

### §15 — Wrong global from Watcom 1-based indexing

Watcom emits array accesses as `[index*stride + (base - stride)]` with a 1-based index. That
shifts the effective base down one element, and because Watcom packs globals tightly the shifted
address lands inside a *neighbouring* global — which is what Ghidra resolves it to.

Symptoms are accesses that make no sense for the context: `g_VertexNormalArray[20000].y` in a
display-list builder, `(&g_SetDisplayListCount)[iVar1 * 2]` indexing past a scalar, `.y` on an
unrelated struct that happens to sit at the right byte offset.

The `.asm` global annotations on the `MOV`/`FSTP` usually name the correct global even when the
decompiler does not.

```cpp
// broken
(&g_VertexNormalArray[20000].y)[g_SetDisplayListCount * 2] = (float)this_ptr_00;
// fixed
g_SetDisplayListSortBuffer[g_SetDisplayListCount].actor = (CDemonActor *)this_ptr_00;
```

### §11 — Hardcoded addresses for known globals

Pointer arithmetic on a global array that lost its symbolic reference leaves a raw absolute
address. Find the owning global from the `.asm` annotations near that address and write the
symbolic form — `0x2d82d88` becomes `&g_MasterLightStateSaveBuffer[1]` when the base is at
`0x2d82d84`.

**Not every flagged constant is an address.** The detector matches any large hex in the
pointer-shaped range, so fixed-point coordinates get caught too. When the assignment target is
plainly not a pointer — a `.u`/`.v`/`.x`/`.y` field on a vertex — the fix is to expose the
fixed-point structure instead:

```cpp
pCVar2->vertex_buffer_ptr[1].v = 0xf80000;      // broken (flagged)
pCVar2->vertex_buffer_ptr[1].v = 0xf8 << 16;    // fixed — 248 in 16.16
```

Use the shift form only when the value really is `N << K` for a small `N`. Bits scattered across
the word mean leave the hex; a forced shift obscures rather than clarifies.

### §18 — Magic numbers with symbolic equivalents

Watcom baked immediates that Ghidra preserves verbatim even when the meaning is recoverable: a
byte offset equal to `sizeof(Struct)`, a float bit pattern written through a `uint`, a struct field
offset as a raw integer.

```cpp
(SMemHead *)((char *)user_ptr - 0x28)            // broken
(SMemHead *)((char *)user_ptr - sizeof(SMemHead))// fixed — SMemHead is exactly 40 bytes

*(uint *)&cost_matrix[i][j] = 0x501502f9;        // broken
cost_matrix[i][j] = 1e10f;                       // fixed — same bit pattern, typed
```

Verify before substituting: the struct's `Ghidra size:` annotation must equal the constant, the
float literal must encode to exactly those bits, the field's declared `// 0xN` comment must match.
Two structs of the same size, a constant that is *near* a known value, a float that rounds
differently — leave the hex and say why. A wrong symbolic substitution is worse than a magic
number because it reads as verified.

### §18a — Array bounds and capacity guards

**A constant that is really "how many elements are in array X" is written as an expression over X,
never as a literal** — even when the literal is correct, and even when it was recovered from the
assembly.

There is no `ARRAY_COUNT` macro in this project, and adding one in a `.keep` is not an option — it
would need a generator change. The idiom:

```cpp
(int)(sizeof(g_TextureSurfaces) / sizeof(g_TextureSurfaces[0]))   // element count
(int)(sizeof(g_Grid[0]) / sizeof(g_Grid[0][0]))                   // inner dimension of [R][C]
(int)(sizeof(g_Grid)    / sizeof(g_Grid[0]))                      // outer dimension
```

Cast to `int` when comparing against a signed counter.

This is a hard rule because these arrays get resized — for larger resolutions, bigger texture
caches, more actors. A literal loop bound under- or over-iterates after a resize. A literal
*capacity guard* is worse, because it is the check that prevents the overflow:
`if (0x1000 < g_TextureCount) fatalError(...)` keeps rejecting at 4096 after you grow
`g_TextureSurfaces[]`. Both forms appeared in `tridx7!releaseAllTextures` and
`tridx7!createTexture` guarding the same `g_TextureSurfaces[4096]`, and both were literals.

Applies to [§16](#16--adjacency-sentinel-init-loops) replacement bounds, countdown bounds recovered
from asm, `memset`/`memcpy` sizes, capacity guards, and loops over fixed global grids. When a value
came from the assembly, a compile-time check is cheap:

```cpp
int _chk[(int)(sizeof(g_TextureSurfaces) / sizeof(g_TextureSurfaces[0])) == 4096 ? 1 : -1];
```

The one exception: if the asm bound provably does *not* equal the element count, that mismatch is
the finding. The declaration is probably wrong, or the loop really is a partial pass. Do not make
the numbers agree by construction.

## Collapsed operations

Watcom inlined something the decompiler did not recognize on the way back out.

### §17 — Unrolled string/memory copies

`strcpy`, `memcpy`, `memset` and struct copies come back as chains of individual assignments.

- A `do/while` copying two bytes at a time with a null-terminator early exit — unrolled `strcpy`.
- Field-by-field struct copies across every field.
- A countdown `for` with `*(uint *)dst = *(uint *)src` and the `(uint)bVar * -8 + 4` direction
  idiom — Watcom's `REP MOVSD` lowering. **The source-side `unrolled_memcpy` detector misses this
  when the store has an arrow or index** (`*(uint *)pSVar9->data = *(uint *)pcVar8;`), so it
  arrives flagged only as `pointer_cast` on the pointer-advance line. A `pointer_cast` inside a
  countdown loop with that direction idiom is this pattern regardless of the label.
- A countdown writing one constant per iteration with a unit increment — `REP STOS{B,W,D}`. The
  asm-anchored `unrolled_memset` detector reports a line in the `.asm`, not the `.cpp`, because the
  source fingerprint is too generic to anchor. The B/W/D variant gives the stride.

```cpp
// broken — unrolled strcpy            // broken — REP STOSD
pcVar4 = dest;                          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
do {                                        *puVar5 = 0;
    cVar2 = *src;                           puVar5 = puVar5 + 1;
    *pcVar4 = cVar2;                    }
    if (cVar2 == '\0') break;
    cVar2 = src[1];                     // fixed
    src = src + 2;                      memset(puVar5, 0, count * 4);
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;                // fixed
} while (cVar2 != '\0');                strcpy(dest, src);
```

**Multi-local spans.** When the copy size exceeds the declared size of the source local — a
`REP MOVSD` of 0x89 dwords out of a `char[60]` — the original had several adjacent stack locals
laid out contiguously and the copy walked all of them as one blob. Under ASan each local carries a
redzone, so the read trips `stack-buffer-overflow` one byte past the first. Issue **one `memcpy`
per source local**, each sized to that local, into the matching offset of the destination.
Cross-reference the `.asm` `LEA` offsets for which locals were spanned and in what order.

**Prefer `sizeof` over a magic byte count.** The asm-anchored detectors hand over the byte count
verbatim, so this comes up constantly:

```cpp
memcpy(g_BackupVertices, g_LoadedVertices, g_VertexCount * 0x14);                  // broken
memcpy(g_BackupVertices, g_LoadedVertices, g_VertexCount * sizeof(SVertexData));   // fixed
```

Confirm as in [§18](#18--magic-numbers-with-symbolic-equivalents) — the `Ghidra size:` must equal
the constant exactly. A packed sub-range, a hardcoded buffer length or a fixed-point scale keeps
its hex; a `sizeof` that does not actually equal the type size silently changes the copy length.

Only collapse when the pattern is unambiguous: complete, contiguous, compatible types, no
interleaved logic. Partial copies and copies with bounds checks stay as they are.

### §21 — Inline fast (inverse) sqrt bit-trick

Two bit-pattern approximations are inlined across many call sites. The asm reinterprets the
float's bytes as `int`, shifts, adds a magic, and reinterprets back:

```
FSTP [tmp] / MOV EAX,[tmp] / SAR EAX,1 / ADD EAX,[g_FastSqrtMagic] / MOV [out],EAX / FLD [out]
```

Ghidra emits that as `(float)(((int)x >> 1) + g_FastSqrtMagic)` — a **numeric** conversion where
the asm does a bit-cast. `(int)NaN` is UB, which UBSan flags, and even for finite inputs the value
is wrong (numeric `(int)100.0f` is `100`; the bit-cast is `1120403456`).

| Form | Helper |
|---|---|
| `(bits >> 1) + g_FastSqrtMagic` | `fastSqrt_FUN_00431350(x)` |
| `g_FastInvSqrtMagic - (bits >> 1)` | `fastInvSqrt_FUN_0043e2a0(x)` |

Call the helper, not libc `sqrt()`. The trick is not bit-exact with `sqrt()` — a few percent
relative error — and the physics, cloth and lighting are tuned around these exact approximations.
Both magics are named project globals (`≈ 0x1FC00000` and `≈ 0x5F400000`), so their presence makes
the pattern unambiguous.

### §33 — Inline x87 `exp()`/`pow()` with the FPREM reduction dropped

Watcom computes `exp()` and `pow()` inline on the x87:

```
FLD1 / FLDL2E / FMUL ST2 / FST ST2 / FPREM / F2XM1 / FADDP / FSCALE
```

`FPREM` computes `a - trunc(a / b) * b`. **Ghidra renders it without the truncation**, as plain
`a - (a / b) * b`, which for the `b == 1.0` this idiom uses is identically **zero**. The decompile
reduces to `f2xm1(0) + 1 == 1.0`, and since `intrinsics.h` defines `fscale(y, x)` as `ldexp(y, x)`
with an `int` exponent, what compiles is `2^trunc(x)` — a staircase in powers of two instead of an
exponential.

It survives review because it is *exactly right whenever the exponent is zero* — a decay rate of 0,
a gain of 1 — which is the common authored case. Where it is wrong the output is still plausible:
a value that really does fall, just in visible steps. Symptoms are envelopes and multiplicative
ramps moving in discrete jumps — an amplitude that halves abruptly, an interval snapping to
1/2/4/8, a pitch that quantises.

Read the `FMUL` feeding `FLDL2E` for the sign and operands, then name the operation:

```cpp
// broken — compiles to 2^trunc(x)
fVar6 = (float10)1.4426950408889634 * fVar5 * (float10)this_ptr->decay * (float10)-1;
fVar7 = (float10)f2xm1(fVar6 - (fVar6 / fVar8) * fVar8);
fVar8 = (float10)fscale(fVar7 + fVar8, fVar6);
// fixed
fVar8 = (float10)exp(-(double)this_ptr->decay * (double)this_ptr->decay_timer);
```

Unlike [§21](#21--inline-fast-inverse-sqrt-bit-trick), this sequence is full precision on the x87,
so libc `exp`/`pow` is a faithful replacement rather than an approximation swap. A `pow()` site has
`FLDLN2`/`FYL2X` in front of it; an `exp()` site goes straight to `FLDL2E`. The looser arm of the
detector flags any surviving `f2xm1`/`fscale` on the same principle as `bitcast_double` — compile
escape hatches that should not remain in finished code.

Confirmed instances: `CPendulum::updateSwing` (×2), `CPendulum::process`, `CLarva::process`,
`CWeather::update`.

### Flag-math idioms

Ghidra transcribes x86 flag arithmetic literally. None of these are real C, and all reduce exactly.

**`sign_compare_idiom`** — `SBORROW4(a,b) != (int)(a-b) < 0` is how `JL`/`JGE` read `SF != OF`,
i.e. a plain signed `a < b`. `SCARRY4` is the signed-overflow building block; `CARRY4` inside a
`!=`/`==` comparison is the unsigned analogue.

```cpp
bVar = SBORROW4(x,y); iVar2 = x - y; while (bVar != iVar2 < 0)   // broken
while (x < y)                                                     // fixed
```

The spill temporaries then fall unused. Confirm the direction against the asm `Jcc` if it is not
obvious. A bare `CARRY4` *not* in a comparison is the next entry — do not turn it into one.

**`carry_arith_idiom`** — `CARRY4` in 64-bit arithmetic. Two shapes:

- *Multiply-high / fixed-point.* `(int)((ulonglong)L >> 0x20) * 2 + (uint)CARRY4(lo,lo)` where
  `lo = (uint)L` is the low word of a 64-bit signed product shifted right 31. Reduce to
  `(int)(L >> 0x1f)` and drop the dead `lo` spill. Shifting the `longlong` by `0x1f` is safe — only
  a *32-bit* value shifted by 31 trips cppcheck.
- *64-bit add-carry.* `b = CARRY4(a,d); a = a + d; hi = hi + dhi + (uint)b;` is `ADD`/`ADC` over a
  split accumulator. Reduce the carry to `b = a + d < a;` — unsigned wrap is carry-out — computed
  before the add.

Confirm against the asm: `IMUL`+`ADD`/`ADC` for multiply-high, `ADD`/`ADC` for accumulate.

**`static_shift_too_many_bits`** — the two Watcom signed `>> 0x1f` idioms:

- *Branchless abs.* `(int)((X ^ (int)X >> 0x1f) - ((int)X >> 0x1f))` → `ABS((int)X)`.
- *Signed divide by power of two.* `(int)((X + (X>>0x1f)*-N) - (uint)((X>>0x1f)<<K < 0)) >> M` →
  `X / N` where `N = 2^M`. Ghidra often splits the rounding adjustment from the shift, producing
  nested (`(X/16)/4`), loop-invariant, and sign-extend-to-64 variants.

Both are bit-exact **including `INT_MIN`** with the project `ABS()` macro and C signed `/`. Do not
use libc `abs()`. Drop the dead sign temps. A `longlong >> 0x1f` is not flagged — that is the
multiply-high reduction above.

## Latent runtime bugs

These compile cleanly. They are the expensive class, because nothing fails until the game does.

### §16 — Adjacency-sentinel init loops

Watcom emitted pool-init loops that use "pointer reaches the next global" as the end check, because
in the original binary that global sat immediately after the array. Our linker orders globals
arbitrarily, so the sentinel never matches and the loop walks past the pool, corrupting everything
in between. ASan catches it as `global-buffer-overflow`.

The signature is a `do/while` whose exit is `p != (T *)&g_SomeGlobal` where `g_SomeGlobal` is not
the pool the iterator came from.

```cpp
// broken
this_ptr_00 = g_SmokeParticlePool;
do {
    CSmokeParticle_reset(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
} while (this_ptr_00 != (CSmokeParticle *)&g_BulletHoleActiveCount);   // adjacency sentinel

// fixed — bound derived from the pool, per §18a
for (int i = 0; i < (int)(sizeof(g_SmokeParticlePool) / sizeof(g_SmokeParticlePool[0])); i++)
    CSmokeParticle_reset(&g_SmokeParticlePool[i]);
```

The sentinel gives a byte span, not a count — divide by the element size and check it against the
declaration in `src/globals/`. `CMP ESI, <sentinel>` with base `0x1020de40` and sentinel
`0x10215e40` is 32768 bytes; `32768 / sizeof(STextureSurfaceSlot)` is 4096, matching
`g_TextureSurfaces[4096]`. If the two disagree, that disagreement is the finding
([§18a](#18a--array-bounds-and-capacity-guards)).

These come in clusters — one init function often sets up a dozen pools. Check the rest of the
function whenever you fix one.

### §19 — Pre-increment array-walk loop

Watcom emitted array walks using compensated offsets (`ADD EAX, stride` then
`MOV [EAX + (base - stride)], value`). Ghidra mistranslates these into a `do/while` with a
pre-incremented pointer walked through struct-field arithmetic, a constant `[0]` index on the
advanced pointer, and often a `pX = pX;` no-op.

Two shapes. The **single-variable** form has all three markers on one pointer. The
**two-variable ping-pong** form splits the advance across a temp: the temp takes the address of a
sub-field (that is the stride), the store goes through the original, then `pBase = (T *)pTmp;`.

```cpp
// broken — CHero::reset, two-variable form
pCVar1 = this_ptr;
do {
    pfVar2 = &(pCVar1->base).base.orient_matrix.m[0].z;   // stride = offset of that field
    (pCVar1->base).carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar1 = (CHero *)pfVar2;
} while (pfVar2 != (float *)((this_ptr->base).base.create_event + 0x10));

// fixed
for (i = 0; i < 2; i++) (this_ptr->base).carry_hands[i].carry_actor = (CDemonActor *)0x0;
```

**The decode is never correct as-emitted.** It either skips element `[0]` and overruns the end
(the compensation is lost in translation), invents a pointer advance the asm does not perform
(writing the same address N times), or fabricates a loop where the asm is a `MOVSD` struct copy.
Both shapes bake the stride and bound from the original 32-bit layout, so they also break on any
layout change — notably a 64-bit port, where every pointer field widens and shifts every offset.

Cross-reference the asm for the real offsets and compensations, then write a clean `for` loop — or
a `memcpy` when the asm turns out to be a struct copy. This is a `.keep` fix; no retype or
signature change alters a loop decode.

### §20 — Missing cave-block struct copy

When Watcom calls a function returning a struct through an output-param-in-register convention, it
often emits an inline struct copy immediately after the call to move the output into a different
slot. Ghidra models the call correctly and routinely **drops the copy**. In the `.asm` the copy is
a run of 12+ consecutive `MOV ECX,[ESI+N]` / `MOV [EDI+N],ECX` pairs — 48 bytes is one
`CMatrix3x4f`.

The `.cpp` signature is struct locals declared, passed once by address, and never referenced again.
They come in pairs: a dead output from call A alongside an uninitialised input to call B.

```cpp
// broken                                   // fixed — pass the real sources
inverse(parent_matrix, &local_48);          inverse(parent_matrix, &local_48);
multiply(&local_78,  &world, &local_d8);    multiply(&local_48, &world, &local_d8);
inverse(&local_138, &local_108);            inverse(&local_d8, &local_108);
```

On the original Windows build the uninitialised bytes were zero often enough that the game's own
defences (`inverse()` finding `det == 0` and bailing as "Singular matrix") mostly stayed quiet. On
Linux with a different stack layout they are arbitrary — the determinant lands anywhere, and the
inverse either bails or computes garbage that ripples downstream.

**When the `.asm` itself looks wrong.** The cave blocks Ghidra shows at far addresses are often
*fabricated* by the AND-ESP / cave-block fixup scripts. The real binary has inline `MOVSD` (one
byte, `0xA5`) at the original site. The byte effect is the same, but **inline `MOVSD` does not
clobber `ECX`** while the synthetic `MOV ECX,[ESI]` does — so if the surrounding code loaded `ECX`
before the cave for use after, Ghidra treats that load as dead and resolves the later `PUSH ECX` to
junk, making a call look like it receives a bogus pointer.

If an asm-driven reading concludes "the original binary is buggy" or "this call gets a junk pointer
that should crash but somehow doesn't", verify before committing to it:

```sh
python3 scripts/Python/disassemble_function.py <FunctionName_FUN_AAAAAA>
```

If the `.asm` has a `JMP` to a far cave block and capstone shows four `movsd`, the cave is fake.
This is not a routine check — only reach for it when the analysis contradicts what a working game
would do.

### §31 — Partial struct copy

Watcom copied a whole struct between two slots — or, more often, kept *one* object that Ghidra
split into two locals. The decompile keeps only some of the field assignments, leaving a byte gap
nothing writes. The destination then goes by address to a call that reads the whole struct.

This is §20's failure mode without §20's fingerprint: the destination *is* assigned and *is* used,
so the dead-local scan is blind to it and the surviving assignments look like ordinary code.
Downstream symptoms are geometric nonsense rather than a crash — objects at garbage world
positions, lights projected off-screen, audio listeners at random coordinates.

```cpp
// CDemonCamera::precomputeNormals — .x/.y never written; this killed environment lighting
local_60.z = local_84.z;
precomputeLight(this_ptr, &local_60, ...);      // reads .x/.y = garbage
```

**Check whether the two locals are really one object.** In `updateListeners` the asm shows a single
buffer: `screenToWorldCoord` is called with `EDI = ESP+0x8c`, the `.z` slot at `[ESP+0x94]` is
adjusted in place, and `LEA EAX,[ESP+0x8c]` — the same address — is pushed into
`screenToWorldTransform`. There was never a copy; Ghidra invented the second local.

If the asm shows one object, collapse the two locals into one. If it shows a real block move,
restore the full `dst = src;`. Do **not** add the missing field assignments one at a time — the
whole-struct form is what the binary did, and it stays correct if the struct grows.

Two gates keep the detector precise, and both mark the non-bugs: a destination filled by a
ctor/init call *before* the copy is already initialised, and a destination whose address is taken
into anything other than a plain call argument may be written through an alias the field scan
cannot see.

Related: `unrolled_memcpy`'s field-copy form recommends collapsing a run into `dst = src;`. That is
only equivalent when the run — plus any sibling runs for the same pair — covers *every* byte.

### §26 — Split contiguous stack block via field-pun

Watcom packs related values into one contiguous stack region — a 12-byte `CVector3f`, a
`position+velocity` pair, an N-vertex billboard buffer — and passes a pointer to its start.
Ghidra cannot always recover the region as one local, so it splits the bytes across adjacent
locals and emits the call as `(CVector3f *)&CStack_X.y`: a sub-field address that happens to land
at the right Watcom offset.

Under Watcom's compact layout that pointer can validly span into the next local. Under ASan every
local is wrapped in a redzone, so the bytes past the end are poisoned — instant
`stack-buffer-overflow`. Even without ASan it is fragile: Ghidra frequently drops the field write
that fell in the unnamed inter-local gap, so the call reads uninitialised data.

Two shapes. The **vector** shape is `(CVector3f *)&LOCAL.y` — a 3-component access starting
mid-vector. The **struct** shape is `(T *)&LOCAL.f1.f2` where `sizeof(T)` exceeds the bytes
remaining; the dominant case is self-typed, like `(CBoundingBox3D *)&local_box.max.y` — a full
object access starting 16 bytes into a 24-byte box — which Ghidra emits when its stack partition
disagrees with Watcom's real frame.

```cpp
// broken — CSpark_render, four billboard vertices split across adjacent locals
CStack_58.y = (int)ROUND(fVar4 * 256.0f);
CStack_58.z = (int)ROUND(fVar4 * 256.0f);
local_4c.x  = (int)ROUND(256.0f * 0.0);
transformAndProjectPoint(&vb->projected_vertex, (CVector3i *)&CStack_58.y);

// fixed — one real local, declared at the function head
quad_v0.x = (int)ROUND(fVar4 * 256.0f);
quad_v0.y = (int)ROUND(fVar4 * 256.0f);
quad_v0.z = 0;
transformAndProjectPoint(&vb->projected_vertex, &quad_v0);
```

Find the call in the `.asm`; the push before it gives the Watcom-side offset. Trace that offset and
the next two slots — they should be three same-typed values from one source struct. The `.cpp`
sometimes drops one of the three writes; the asm always has all three.

Do **not** rescue the split locals by retyping one of them larger. That breaks the downstream code
that legitimately uses the adjacent ones. Guessing the axis mapping instead of reading it produces
wrong gameplay — mismatched gravity axis, scrambled vertex positions — rather than a crash.

Comparison-only puns (`&x != (T *)&x.max`) never dereference and are deliberately not flagged;
those are dead address-identity guards. The struct shape needs the type maps, so it is inert if
`data_types.json` did not load.

### §24 — Shadow-pointer walk

Watcom optimized `original->arr[i]` by keeping a *shadow* pointer advanced by `sizeof(arr[0])` each
iteration, so `shadow->arr[0]` resolves to `original->arr[i]`. The asm is just
`LEA shadow, [shadow + ELEMENT_SIZE]`. Ghidra cannot see that as a stride, so it picks any sibling
field whose address-after-itself lands at the right byte offset and emits a self-update through
that field's arithmetic. The chosen field is always nonsense.

```cpp
// broken — walks through "state_names" because that offset happens to equal sizeof(SBone)
pCVar18 = (CSkeleton *)((pCVar18->motion_list).state_names[1] + 2);
// fixed — index the original directly; the shadow local falls unused
if (iVar6 == pCVar17->bone_list[iVar13].parent_index) { ... }
```

Sanity-check before rewriting: compute the byte offset that `(IDENT->FIELD).ARRAY[N] + CONST`
lands at and confirm it equals the element size of the array the loop walks. Above, `state_names`
is `char[80][30]` at offset `0x4` of `CMotionList` at offset `0x0` of `CSkeleton`, so
`0x4 + 30 + 2 = 0x24 = sizeof(SBone)`.

### §25 — Loop-clobbered constant

Watcom kept loop-invariant constants in registers. Ghidra modeled the register spills as
reassignments to *other* locals inside the loop body, which breaks the math after iteration 0.

```cpp
base = (float10)2;
fVar7 = (float10)0.25;
do {
    fVar5 = (float10)-iVar4 * fVar7;
    fVar6 = pow(base, (float10)-iVar4 * fVar7);
    base = fVar7;            // swap chain: base becomes 0.25
    fVar7 = fVar5;           // swap chain: fVar7 becomes 0
    g_MpegRequantGainTable[iVar4] = (double)fVar6;
} while (iVar4 < 200);
```

After iteration 0 every `pow(0.25, 0)` is `1`, so the table fills with 1.0 instead of the intended
`pow(2, -i/4)` falloff — and MP3 requantization loses its gain attenuation, so samples come out
10–100× too loud and saturate in the synthesis filterbank.

The fingerprint is all three together: adjacent `A = B; B = C;` bare-identifier assignments inside
a do-loop, `A` also read in the body as a math argument, and `A` initialised to a literal before
the loop. Linked-list traversal and array element swaps do not match — the RHS is not a bare
identifier, or the literal init is absent.

Drop the swap-chain lines; the variables written into are pure spill scratch. The intermediates
then fall unused.

### Undersized sibling arrays

`sibling_array_undersized` fires when a function declares two or more arrays of the same struct
type and one is sized smaller than its peers — `CQuaternion4f local_186c[95]` alongside
`local_122c[100]` and `local_bec[100]`. The asm drives all of them from one loop bound, so writes
overrun the small declaration and trip ASan as `stack-buffer-overflow`. Cross-check the asm for the
real bound and resize to match the siblings. Primitive-typed arrays are skipped — size variation
there is usually intentional.

### §23 — Dead self-copy guard

The original source wrote `if (&dst != &src) dst = src;` to guard a struct copy against aliasing,
and Watcom unrolled the copy into scalar assignments inside the guard. At this call site both are
distinct stack locals, so the guard is always true — pure noise around an unconditional copy.

```cpp
if (&local_58 != &local_d0) {      // always true — different stack slots
    local_58 = local_d0;
    local_54 = local_cc;
}
```

Drop the `if` and its brace, leave the body. Apply **only** when both sides are bare `&NAME` on
stack locals. Cast-wrapped forms (`(CLocation *)&local`) and pointer-parameter forms
(`if (&local != input_ptr)`) are real defences against caller aliasing — leave those, even though
the detector does not flag them.

After cleanup, a flat body of 4+ field copies may then collapse under `unrolled_field_copy` — but
only if it covers every byte ([§31](#31--partial-struct-copy)).

## Portability

### §27 — Pointer truncation via `(int)`/`(uint)` cast

Watcom freely cast pointers to `int` for differences, alignment masks, address printing, hashing,
and storage in int-typed globals. On the 32-bit build these are bit-exact; at 64-bit they are hard
errors (`cast from pointer to smaller type loses information`) and the chief obstacle to a
multilib-free build.

```cpp
iVar4 = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];        // broken
iVar4 = (intptr_t)g_ScreenBufferArray[1] - (intptr_t)g_ScreenBufferArray[0];  // fixed
if (((uint)p_output & 2) != 0)                                            // broken
if (((uintptr_t)p_output & 2) != 0)                                       // fixed
```

`uintptr_t` for unsigned uses, `intptr_t` for signed difference math. Pointer-ness is decided from
declared types, not Hungarian naming — so `(int)frame_index` on a variable declared as a pointer is
caught, while integer locals that merely look pointerish are not.

**When it is a Ghidra fix instead:** if the "pointer" is really a mistyped field holding an integer
offset, the cast is a symptom of the wrong type. The canonical case is `void** row_pointers` used
as `(char *)packed_data + (int)row_pointers[i]` — those slots hold byte offsets, not addresses.
Retype the field to `int *`; after re-export the cast becomes `(int)int` and the flag disappears.
An `intptr_t` in a `.keep` would bury a real type bug.

**Not a truncation.** `(uint)(&agg.field)[i]` subscripts the address to read a scalar element —
Watcom's parallel-array idiom over sibling `uchar`/`ushort` fields, e.g.
`(uint)(&g_Palette.colors[0].b)[i]` reading the blue plane. That widens a byte, not a pointer, and
is not flagged — unless the subscripted field is itself pointer-typed, which is a real truncation.

See [64-bit portable forms](keep-files.md#64-bit-portable-forms) for when to prefer the wide form
generally.

## Static-analysis review flags

Promoted from clang-tidy and cppcheck. Unlike the pattern detectors these are not guaranteed
mechanical rewrites — each is a triage between a `.keep` fix, a Ghidra retype, and a
faithful-to-the-binary exemption. Resolve against the `.asm` before editing.

### §28 — Swapped / mistyped call arguments

`bugprone-swapped-arguments` fires when one argument converts `double`→`int` next to one converting
`int`→`float`. The "swapped" framing is a heuristic; in this output the cause is almost always that
the decompiler emitted a **raw float bit-pattern as an integer literal** into a `float` parameter,
with a neighbouring `0.0` landing in an `int`.

```cpp
// void igniteBone(CCharacter *, CVector3f *, int fire_type, int flame_type, float scale, int hero)
igniteBone(&this->base, &pos, 0, 0.0, 0x40000000, 1);   // broken — 0x40000000 is the bits of 2.0f
igniteBone(&this->base, &pos, 0, 0,   2.0f,       1);   // fixed
```

If the literal decodes to a clean float and the parameter is `float`, replace it. If the arguments
are genuinely in the wrong order or types versus what the asm pushes, the **callee signature is
wrong** — that is a Ghidra fix. Never reorder arguments to chase the flag.

### §30 — Redundant null check

`nullPointerRedundantCheck` reports "either this null check is redundant or there is a possible
null dereference". In this output it is usually the fatal-error-guard pattern: `if (p == 0)
{ displayErrorAndQuit(...); }` followed by an unconditional deref. The quit function cannot be
marked `noreturn` in Ghidra without breaking other analysis, so cppcheck thinks `p` may still be
null afterwards.

Both steps — the return alone only shifts the warning:

1. Add an explicit `return <fail-value>;` immediately after the `displayErrorAndQuit(...)` call
   inside the failure block. Dead code, behaviour-identical, and it tells cppcheck the null path
   terminates.
2. Drop any now-provably-redundant downstream `if (p != 0)` guard, keeping its body unwrapped.

```cpp
if (model_ptr == (SMRGLHeaderExtended *)0x0) {
    displayErrorAndQuit("null model");
    return 0;                            // terminates the null path for cppcheck
}
return model_ptr->vertex_count;
```

Confirm against the asm that the guarded path really terminates. If the deref is reachable with a
real null — a missing early return the decompiler lost — that is a genuine bug to reconstruct, not
a flag to silence.

### The rest

| Flag | Triage |
|---|---|
| `static_integer_division` | An operand Ghidra typed `int` that the asm loads as `float` (`FLD`/`FDIV` against that slot) → Ghidra retype, and the flag clears. The asm really doing `IDIV`/`SAR` before the convert → faithful, exempt. Index math like `arr[i / 4]` is a false positive — the quotient is an index. |
| `static_float_loop_induction` | `cert-flp30-c`, a float loop counter. Almost always faithful — the binary really counts in `float`. Exempt. Only fix if the asm increments and compares an integer slot, in which case it is a mistyped local. |
| `static_memleak` | Ghidra **dropped a `free`/`delete`** the asm still has (a `CALL free` near the end with no `.cpp` counterpart) → restore it. Or the binary genuinely leaks → faithful, exempt. Cross-check for the dealloc call before deciding. |
| `static_self_assignment` | `pX = pX;` residue from a pre-increment or shadow walk. Delete the line — unless it is the only surviving artifact of [§19](#19--pre-increment-array-walk-loop), in which case fix the whole loop. |
| `static_int_to_address` | An integer assigned to a pointer. Usually a mistyped local ([§12](#12--byte-buffers-and-primitive-walkers-that-are-really-structs)/[§13](#13--stack-slot-reuse)) or a hardcoded address ([§11](#11--hardcoded-addresses-for-known-globals)/[§15](#15--wrong-global-from-watcom-1-based-indexing)). If the shape implies a struct that does not exist, it is a Ghidra fix. |
| `static_identical_inner_condition` | An inner `if` duplicating the enclosing one. Drop the inner test, keep the body, after confirming the two conditions are truly identical. |
| `cppcheck:invalidscanf` | Unbounded `sscanf("%s", ...)`. Adding a field width hardens the parse but **truncates input differently than the original**. Exempt — this reflects the original source, not a decompiler artifact. |

The last row is the canonical exemption. The same reasoning covers any rewrite that would change
parsing, rounding, clamping, alignment or I/O semantics.

## Detector gaps

The detectors are regexes and asm anchors, and they miss shapes. Two known classes:

- **Fingerprint misses.** `unrolled_memcpy` does not match a store whose LHS has an arrow or index,
  so those arrive labelled `pointer_cast` ([§17](#17--unrolled-stringmemory-copies)).
- **Name-keyed detectors miss siblings.** A detector keyed on a specific global name only fires for
  that name, so identical shapes elsewhere go unflagged.

When a collapse reveals the same pattern elsewhere in the function that nothing flagged, the local
instance is worth fixing — but the detector gap is the broader bug, since one-function-at-a-time
cleanup cannot reach the rest of the codebase. Record the function, line and the fingerprint the
detector misses so the next re-export catches every other instance.
