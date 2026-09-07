# Decompilation workflow

How a function goes from raw Ghidra output to source that compiles and is faithful to the
assembly. [`prompts/fix_compilation.md`](../prompts/fix_compilation.md) is the full authority —
error-pattern catalogue, suspect types, and the reasoning for each rule. This is the shape of
the loop.

## The rules that matter most

- **Never edit the raw `.cpp`/`.c`.** It is regenerated on every export. Work in a `.keep`.
- **The signature is immutable.** Name, calling convention, parameters, return type all come
  from Ghidra's analysis. Only the body changes.
- **The assembly is ground truth.** When the decompile is ambiguous or nonsensical, read the
  `.asm` beside it. Do not cast something into compiling.
- **Prefer a Ghidra fix over a `.keep`.** A wrong global type, struct field, or function
  signature should be fixed upstream, where it corrects every function that touches it — a
  `.keep` fixes exactly one. Stop and say what needs changing.
- **A `.keep` is a liability.** It has to justify its existence on every re-export. If the raw
  output now compiles and is correct, delete the `.keep`.

## The loop

```sh
# 1. Read the raw output, and the .asm next to it.

# 2. Create the .keep — never hand-write one; this adds the required header.
scripts/Bash/prepare_keep.sh path/to/file.cpp

# 3. Edit the .keep.

# 4. Does it compile? Also reports unused locals.
scripts/Bash/test_compilation.sh path/to/file.keep.cpp

# 5. Is it clean? Run the suspect detectors.
scripts/Bash/test_suspects.sh path/to/file.keep.cpp

# 6. Does the whole thing still build?
./build.sh
```

`test_suspects.sh` reporting `clean` is the bar, and that includes the mild flags. It runs the
source-side detectors only — the ones that depend on decompiler state cannot change from a
`.keep` edit, and clang-tidy findings are reported separately.

## Suspects

The exporter flags decompiler artifacts as *suspects*. They do not block compilation; they mark
places where the output does not mean what it appears to. Roughly:

- **Collapsed library calls** — unrolled `strcpy`/`memcpy`/`memset`/`strlen` that Watcom inlined.
- **Wrong symbol** — Watcom's 1-based array indexing landing Ghidra on a neighbouring global.
- **Lost types** — byte buffers that are really structs, primitive walkers over typed arrays,
  pointer/float stack-slot reuse.
- **Fabricated operations** — float→int conversions in functions whose asm contains no `FIST`,
  numeric casts where the binary bit-casts.
- **Latent runtime bugs that compile cleanly** — partial struct copies leaving uninitialised
  bytes, adjacency-sentinel pool loops that depend on the original's memory layout, undersized
  arrays, dropped struct copies after a call.
- **Portability** — pointers truncated through `int`, which is exact on the 32-bit lane and a
  hard error on the 64-bit one.

Each has a numbered section in `fix_compilation.md` with the recognition pattern and the
rewrite. When a rewrite would change what the shipped binary does, it is *exempt* — noted, not
fixed.

## Reference variants

Generated beside each function, never compiled:

| Variant | What it is |
|---|---|
| `.mmx.cpp` | The original's MMX/inline-asm intent. Port the *meaning* to portable C++, not the asm |
| `.byval.cpp` | Watcom by-value struct passing the decompiler fumbled. Port faithfully |
| `.chunked.cpp` | A large function split into a context struct and helpers, for comprehension only |

## When to walk away

Some functions are mangled past the point where a `.keep` would be reconstruction rather than
fiction — pervasive `in_stack_*` pseudo-parameters, `CONCAT44`/`SUB84` throughout, control flow
that makes no structural sense. If more than roughly a third of the body would have to be
rewritten, it needs Ghidra-side work or manual reverse engineering first. Say which function and
why, and move on.
