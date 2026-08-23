---
id: array-type-not-assignable-array-type-byte-4-is
kind: recipe
title: "Array type not assignable (`array type 'byte[4]' is not assignable`)"
legacy_section: 5
requires: []
triggers: [compiler_array_not_assignable]
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** Ghidra tries to assign to an array variable directly.

**Fix:** Use `memcpy` or assign element-by-element:
```cpp promptc:noverify
// BROKEN:
byte local_arr[4] = some_expr;

// FIXED:
memcpy(local_arr, &some_expr, 4);
```
