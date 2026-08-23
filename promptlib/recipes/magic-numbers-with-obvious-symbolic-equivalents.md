---
id: magic-numbers-with-obvious-symbolic-equivalents
kind: recipe
title: Magic numbers with obvious symbolic equivalents
legacy_section: 18
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** The decompiler emits raw hex constants where a symbolic equivalent (`sizeof`, a typed float literal, `offsetof`, a named enum) would make the code self-documenting. Watcom baked these as immediate values; Ghidra preserves them verbatim even when the meaning is recoverable.

**Common patterns:**
- Byte offset equal to `sizeof(Struct)` — e.g., `-0x28` when `SMemHead` is exactly 40 bytes
- Float bit pattern emitted as `*(uint *)&x = 0x501502f9` when `x = 1e10f` encodes to the same 4 bytes
- Struct field offset emitted as a raw integer — e.g., `ptr + 0xb7e4` when that's the exact offset of `motion_transition_costs` in `CCharacter`

**Fix:** Replace with the symbolic equivalent when you can verify it's exactly equivalent. Always confirm:
- For `sizeof`: the struct's `Ghidra size:` annotation matches the constant
- For float literals: compute the bit pattern and confirm it equals the hex (e.g., `1e10f` → `0x501502f9`)
- For `offsetof`: the field's declared `// 0xN` comment matches

```cpp promptc:noverify
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
