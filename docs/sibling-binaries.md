# Sibling binaries

The project analyses three binaries. Two of them are builds of the same game from the same source
tree, which makes almost every question about one of them answerable by looking at the other — and
makes a specific set of things unsafe to carry across. This is that boundary.

| Binary | What it is | State |
|---|---|---|
| `nocedit.exe` | The **level editor** build. Solved first; the compiling decompilation is based on it | ~99.99% named — signatures, structs, and ~2595 hand-verified `.keep` files |
| `nocturne.exe` | The **shipping game** build. Imported later as a sibling; most of its knowledge was transferred automatically from `nocedit.exe` | ~63% named; signatures largely transferred, struct layouts **not** reliable |
| `tridx7.dll` | The DirectX 7 renderer DLL. Not a sibling of either — separate codebase | Separately catalogued |

`nocedit.exe` and `nocturne.exe` were built from the same source tree, but they are not the same
source. They differ for two reasons: `#ifdef`-gated code, where editor-only subsystems are compiled
out of the game build; and genuine version drift, since the two builds are different *versions* —
roughly 36% of translation units changed between them, measured by line-pin diffing.

**Look for a function's counterpart before analysing it from scratch.** In most cases the answer
already exists and needs verifying rather than deriving. Deriving it again wastes the effort and
tends to produce a worse answer than the one already recorded.

## Finding a counterpart

Function addresses differ between the binaries. **Never look up by address across binaries.**

1. **Try the same translation-unit directory.** Directory names are the original source paths and
   are stable across builds:

   ```
   annotations/nocturne.exe/pseudocode/src/core/dcamera.cpp/CDemonCamera_resetSceneCamera_FUN_00440270.cpp
   annotations/nocedit.exe/pseudocode/src/core/dcamera.cpp/        <- the counterpart is here
   ```

2. **Grep by function name**, dropping the `_FUN_<addr>` suffix.

3. **Use the precomputed mapping** when a name lookup fails, or when the confidence of a match
   matters. `annotations/nocturne.exe/reports/sibling_verified_mapping.json` records 4707 matched
   pairs:

   ```json
   {"a": "00401010", "b": "00401010",
    "name": "engine_2d.c_initGraphicsSystem_FUN_00401010",
    "confidence": 0.75, "ambiguous": false,
    "shape_agreement": "identical",
    "conv": "__cdecl", "ret": "void",
    "sig_verdict": "agree"}
   ```

   `a` is the nocedit address and `b` the nocturne one. `shape_agreement` is one of `identical`,
   `same_mnemonics`, `similar_size`, `unshaped`, `size_mismatch`; `sig_verdict` is `agree`,
   `unverifiable` or `conflict`. The file also carries `editor_only` (351 functions with no game
   counterpart), `unmatched_a` and `unmatched_b`.

4. **Prefer the counterpart's `.keep` if it has one**, then its `.asm`, then its `.cpp`.

5. **Search the sibling's existing names before inventing one — for globals as much as functions.**
   A global that looks anonymous in one binary is very often already named in the other, reached
   through a different function. When the sibling has a name, transfer it. Two names for one
   structure across the pair is a defect introduced, not a synonym.

The mapping file is a **snapshot**, not live truth. If a lookup contradicts it, the binaries win.

## What transfers

**Safe to carry over** — verify, but expect agreement:

- **Function names.** Same source, same identifiers.
- **Function signatures** — return type, parameter count and types, calling convention. Every class
  in this codebase is passed **by pointer**, so signatures are invariant to struct layout drift.
  Measured agreement is ~99% over 2447 verifiable pairs.
- **Purpose, algorithm and control flow.** 2471 of 4707 matched pairs (52%) have byte-identical
  bodies; another 1408 have identical mnemonic sequences. A byte-identical sibling body means the
  sibling's analysis applies verbatim.
- **What a global *means*** — though not where it lives.

**Not safe** — must be re-derived from the target binary's own `.asm`:

- **Struct and class layouts.** 112 classes differ in size between the builds, in 17 shift groups
  (`annotations/nocturne.exe/reports/sibling_struct_drift_spec.md`). `CDemonActor` is 344 bytes in
  nocedit and 336 in nocturne; `CCharacter`-derived classes shift by `-0x198`. Never state a field
  offset for one binary from the other binary's header.
- **Field order.** Some drift is a reorder that **preserves total size**, so a matching `sizeof`
  does not prove a matching layout — `CDemonCamera` swapped fields. A named field being accessed at
  sub-offsets in the disassembly is the tell.
- **Vtable slot indices.** The editor build inserts a block of 7 editor-only methods. Align vtables
  by method *identity* — shape and translation unit — never positionally, and never fill a gap by
  index.
- **Addresses.** Function VAs, global VAs and string literal addresses all differ.
- **Assert-string line numbers.** A file shifts by different deltas in different regions —
  `../core/actor.cpp` shifts +2 below line ~1378 and +15 above it — so a line number is a weak
  hint, not an identity.

### Never bridge addresses with a delta

A constant offset measured between two globals confirmed in both builds is valid **at those two
points and nowhere else**. `.bss` is laid out in per-translation-unit declaration order, so the
moment the builds' TUs diverge the layout diverges with them. A delta that holds for two adjacent
globals can be meaningless a few kilobytes below, and extrapolating it lands inside unrelated data.

The only acceptable way to place a global in the other binary is **an actual reference in that
binary**: an xref, an absolute address operand in its `.asm`, or an existing symbol. Without one of
those there is no answer. "It lands in a large unnamed hole" is not evidence of identity — unnamed
holes are usually the bodies of arrays whose first element is named somewhere above.

### Editor-only code

`CObj`, `CPoly` and `CCameraView` are entirely editor-only, along with 351 editor-only functions.
**Absence of a counterpart in `nocturne.exe` is a valid result**, not a failed search. Record it as
absence rather than forcing a match.

## Direction

The check runs both ways, but the directions carry different weight.

**Analysing `nocturne.exe`:** `nocedit.exe` is the authority. Its analysis is human-verified and its
decompilation compiles and runs. Start there, then verify against nocturne's own `.asm`.

**Analysing `nocedit.exe`:** `nocturne.exe` is *corroboration only*. Its annotations were
machine-transferred **from nocedit**, so agreement is not independent confirmation of a name or
signature. What it does provide independently is its own bytes — a byte-identical sibling body
confirms a reading of the logic, and a divergent one localizes exactly what the build changed.

## Back-porting

**The solved binary is not finished.** `nocedit.exe` is ~99.99% solved, but "solved" means every
symbol has a name, not that every name is right. A large class of its symbols were named from
evidence the editor build does not contain. When the game build supplies that evidence, nocedit's
annotation is now known to be wrong.

Corrections therefore flow both ways. Analysis of one binary that reveals the other's annotation to
be wrong, dummied out, or a placeholder is a finding about that other binary, whether or not it was
the one being asked about.

### Stubs and dead code

The highest-value pattern. A function compiled to a **bare `RET`** in one build carries zero
semantic evidence in that build — whoever solved it had nothing to go on and named it
descriptively. The sibling's full implementation is the only source of truth for what it is.

Symptoms:

- A body that is a single `RET`, or a trivial `return;`.
- Names like `doNothing<N>`, `stub`, `unused`, `nop`, `empty`.
- **Orphaned argument setup at a call site** — `PUSH <arg>` followed by `ADD ESP,<n>` with **no
  `CALL` between them**. This is Watcom inlining an empty function body while leaving the argument
  push, and it is a reliable fingerprint that a real call existed in the source and the callee is
  stubbed in this build. Confirm the byte ranges are contiguous with no room for a `CALL`.
- A parameter the function never reads — a stub's signature is often preserved from the real
  version.

Resolving one produces two findings: the real semantics, and the fact that the existing name is
misleading.

### Data globals hidden behind stubs

The second-order consequence, and easy to miss. **When a build stubs out the code that *fills* a
data structure, that structure's purpose is invisible in that build.** Nothing writes it, so
nothing explains it, and it stays an unnamed `DAT_`/`undefined4` blob even though the rest of the
binary reads it constantly. The sibling's live builder code names those globals for free.

The question worth asking on every stub: *what did the stubbed-out function write to, and is that
global still unnamed in the stubbed build?*

**A zero-xref global cannot be transferred at all.** If every function that touches a global is
stubbed in the other build, that build contains no evidence whatsoever about where the global lives
— no name, no defined data, no reference. That is a hard limit of sibling transfer, not unfinished
work. It is reported as one-binary-only and defined in the binary that actually references it.

### Look for the replacement before concluding a feature is absent

A build that stubs out a subsystem has often **reimplemented it differently**, not dropped it. The
replacement is usually easy to find and explains the divergence far better than "this build lost a
feature". Ask what else in the build performs the same operation — blending, lighting, text
rendering, file I/O — and compare approaches.

The worked example: nocedit stubs `buildBlendTables`/`loadLightTable`, which build precomputed
8-bit palette blend LUTs, because it blends arithmetically in RGB with MMX through `g_AlphaTable`
instead. Two rendering backends, not a missing feature.

This changes the recommendation materially:

- **Genuinely absent** → back-port the name so the shared-source identity is recorded, and note it
  is stubbed here.
- **Reimplemented** → back-port the name, **and do not attempt to reconstruct its data structures
  in that build at all.** They are not merely unnamed there; they very likely do not exist, because
  the array declarations sit inside the same conditional as the code.

### Other categories

- **Placeholder global names** — `g_CHAR_PTR_<addr>`, `g_INT_<addr>`, `DAT_<addr>`, `undefined4`,
  where the sibling names the same global meaningfully.
- **Under-specified prototypes** — the sibling's call sites reveal a parameter count, type or
  return that the other binary gets wrong or leaves `undefined`.
- **Guessed-over semantics** — a name inferred from a weak hint that the sibling's richer code
  contradicts.
- **Array bounds and element types** — one build's loop reveals the real extent of an array the
  other only ever touches at one index.

Absence of evidence in the solved binary is exactly why these went wrong in the first place.

## Recording a correction

A change to a symbol that **already exists** in a decompiled binary has to be applied by hand in
Ghidra, so it is recorded in a fixed block rather than in prose. One block per change, never
several symbols folded together:

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

**Keep the block inside a plain code fence.** Unfenced, a markdown renderer consumes `**` in a
pointer-to-pointer declaration as a bold marker, so `SInputFace **polygons` renders as
`SInputFace polygons` — and a `CURRENT SIG:` / `CHANGE SIG TO:` pair differing only by one `*` then
renders identically, which is the exact failure the pair exists to prevent. It has happened. Single
`*` pairs eat emphasis, runs of spaces collapse and destroy the aligned value column, and `_` in
identifiers italicises.

The rules that make a block usable:

1. **The binary is named first.** There are three of them.
2. **`CURRENT:` and `CHANGE TO:` are both required**, even when `CURRENT` is `<unnamed>` or
   `DAT_00401234`. Nobody should have to guess what is being replaced.
3. **`KIND:` says exactly which Ghidra operation to perform** — `function rename`, `global rename`,
   `global retype`, `global define`, `prototype change`, `array resize`. Renaming and retyping are
   different actions.
4. **A retype or define carries the full type**, array extent included — `uchar[34][256]`, not "an
   array of bytes".
5. **Anything touching a function carries its full signature.** `CURRENT SIG:` and
   `CHANGE SIG TO:`, with return type, calling convention, and every parameter typed and named in
   `snake_case`.

   The signature lines are omitted only when the signature is character-for-character identical to
   what is in the binary **and** contains no `undefined`, `undefined1/2/4/8`, unnamed `param_N`, or
   `unknown` convention. A rename always changes the signature, because the name is part of it, so
   a rename always carries both lines. `undefined` anywhere is never acceptable to leave in place —
   it silently corrupts the decompilation of every caller. `Convention: unknown` counts as
   undefined for this purpose.

   When only the signature is wrong and the name is already right, that is still a change block:
   `KIND: prototype change`, with `CURRENT:` and `CHANGE TO:` both set to the unchanged name.
6. **`CONFIDENCE:` is required**, and says what would confirm it when it is not high. A
   derived-but-unverified address is labelled as such inside the block, not only in surrounding
   prose.
7. **Corrections are separated from new work.** Fixing something wrong is more urgent than naming
   something new, and the two are grouped apart.

## Transfer files

A change block is for a human to hand-apply. Past a handful of them, retyping by hand becomes the
error-prone step, and a **transfer file** is the same information in a form
`apply_sibling_signatures.py --source ledger` can write directly.

These files are **disposable**: write one, apply it, delete it. They are machine input, not a
record — the decisions live in the analysis and in the Ghidra database. A transfer file never
replaces the change blocks and never carries explanatory prose.

```json
{
  "schema": 1,
  "entries": [
    {
      "program": "nocturne.exe",
      "address": "00402780",
      "name": "engine_2d.c_drawTextFormatted_FUN_00402780",
      "ret": "void",
      "conv": "__cdecl",
      "varargs": true,
      "params": [
        {"name": "x", "type": "int"},
        {"name": "y", "type": "int"},
        {"name": "format_string", "type": "char *"}
      ],
      "expect": {"name": "engine_2d.c_FUN_00402780", "range": ["00402780", "004027e1"]},
      "basis": "sibling",
      "source": {
        "program": "nocedit.exe",
        "address": "00402150",
        "name": "engine_2d.c_drawTextFormatted_FUN_00402150",
        "method": "asm-diff-identical",
        "confidence": "high",
        "note": "SUB ESP,0x1004 = 4096-byte buffer + va_list slot; LEA EAX,[ESP+0x101c] is va_start."
      }
    }
  ]
}
```

| Field | Meaning |
|---|---|
| `program` / `address` | Which binary, and the function entry in **that** binary. Lowercase hex, no `0x` |
| `name` | The full desired name, written **verbatim** — the tool never computes the `_FUN_` suffix, so this must carry the *target's* address, never the sibling's |
| `ret` / `conv` / `params` | The corrected prototype. Ghidra-compatible types only — no `const`, no `long double` |
| `varargs` | `true` only with a `va_start` idiom in the assembly to prove it. Omit if unchecked |
| `expect` | Staleness guards, below |
| `basis` | `sibling` or `derived`, below |
| `source` | Where it came from. `note` is required — an entry with no stated evidence is a guess wearing a ledger's clothes |

### `basis` — a transfer and a proposal are different claims

Not every name comes from the sibling. A function unique to a build, or one whose counterpart is an
evidence-free stub, has to be named from its own assembly — assert strings, call graph, constants,
file/line pairs. That is a legitimate entry, but a different kind of claim.

- **`basis: "sibling"`** — the answer existed in the other binary and was verified against this one.
  Requires `source.program`, `source.address` and `source.name`; without them nobody else can
  re-check the transfer.
- **`basis: "derived"`** — reasoned out from this binary alone. Must **not** set
  `source.program`/`address`/`name`: half-filled provenance reads as a verified transfer at a
  glance while nothing actually corroborates it. Requires `source.confidence`.

They fail differently, which is why they are separated. A wrong transfer means the *pairing* was
wrong, so the whole entry is suspect. A wrong derived name is just a name — the signature beside it
can still be perfectly good. So apply transfers first and hold proposals:

```sh
--basis sibling                        # only what the other binary already knew
--basis derived --min-confidence high  # only proposals worth defending
```

`high` means the assembly names it outright — an assert string, a `ClassName::method` debug string,
an unambiguous idiom. `medium` means the purpose is certain but the exact word is a choice. `low`
means it is being named to stop it being `FUN_`, and will be revisited. A `low` entry is still
worth writing; it just does not belong in the same sweep as the transfers.

### The staleness guards

- **`expect.name`** — the function must currently be named either this, or the desired `name` (the
  already-applied case). Anything else means somebody changed it since the analysis, so the entry
  is skipped as `STALE` rather than applied over. Not overridable.
- **`expect.range`** — the body extent, from the `// Address Range:` header. If it no longer
  matches, a boundary-fix pass reshaped the function and the entry would be retyping a *different*
  body: skipped as `DRIFT`. `--ignore-drift` overrides, only after re-checking the assembly.

**`expect.name` is the Ghidra symbol name, not the export filename.** The pseudocode exporter drops
the translation-unit prefix from its filenames: the file is `FUN_00402780.c`, but the symbol is
`engine_2d.c_FUN_00402780`. Reading it off a directory listing produces an entry that is wrong for
every function in the batch, and the run comes back `STALE` having written nothing. Read it from
the `// Name:` header **inside** the file.

### Applying one

```sh
# 1. Structural check — instant, no Ghidra; catches sibling addresses in names
apply_sibling_signatures.py --source ledger --ledger <path> --lint

# 2. Snapshot before any headless mutation
snapshot_project.py <abs projects dir> NocturneEdit --tag pre-transfer

# 3. Dry run — diffs against the live database and prints the changed fields
GHIDRA_INSTALL_DIR=$HOME/Tools/Ghidra/lib \
  apply_sibling_signatures.py --source ledger --ledger <path> --show 20

# 4. Apply, then re-run step 3: it must report everything ALREADY
GHIDRA_INSTALL_DIR=$HOME/Tools/Ghidra/lib \
  apply_sibling_signatures.py --source ledger --ledger <path> --apply --basis sibling
```

Ghidra must be **closed** — it holds the project lock and the run dies before touching anything.

Only fields that actually differ are written, so a hand-tuned prototype is never silently
re-derived when all that changed is a name.

**Read the dry run before applying.** The exported annotations can be stale relative to the live
database — a function whose `.json` still says `Convention: unknown` may already be fully typed.
The dry run is the only trustworthy statement of what is about to change.
