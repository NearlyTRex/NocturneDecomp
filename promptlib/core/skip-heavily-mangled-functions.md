---
id: skip-heavily-mangled-functions
kind: rule
title: Skip Heavily Mangled Functions
requires: [rules]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

Some functions are so severely mangled by the decompiler that a `.keep` file would be more fiction than reconstruction. **Skip the function and move on** if you see multiple of these symptoms together:
- Massive numbers of `in_stack_XXXXXXXX` parameters (decompiler lost track of the real signature)
- Pervasive `SUB84`/`CONCAT44`/`._0_4_`/`._4_4_` throughout most of the function body (not just a few double returns)
- Large byte buffer locals (`byte[200+]`) with dozens of sub-offset accesses that can't be mapped to known structs
- Control flow that doesn't make structural sense (e.g., gotos into the middle of loops, unreachable code blocks)
- The function body is mostly casts and reinterpretations with very little recognizable logic

A `.keep` file should be a *minimal* edit of the decompiler output. If you'd have to rewrite more than ~30% of the function body to make it compile, the function needs Ghidra-side fixes or manual reverse engineering first — not a `.keep` workaround.

**Tell the user which function you're skipping and why**, so they can prioritize Ghidra fixes for it.
