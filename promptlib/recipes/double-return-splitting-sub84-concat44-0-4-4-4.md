---
id: double-return-splitting-sub84-concat44-0-4-4-4
kind: recipe
title: "Double return splitting (`SUB84`/`CONCAT44`/`._0_4_`/`._4_4_`)"
legacy_section: 2
requires: []
triggers: [double_reconstruction, sub84_truncation]
provides: []
---

**Cause:** Functions returning `double` via EAX:EDX (Watcom convention). Ghidra splits the 8-byte return into two 4-byte halves and reconstructs with `CONCAT44`.

**Fix:** These are handled by `intrinsics.h` macros. If compilation fails, check whether the variable types match. Common issue: a variable declared as `int` being used with `._0_4_` — change its type:
```cpp promptc:noverify
// BROKEN:
int iVar1;
iVar1._0_4_ = some_value;  // can't subfield an int

// FIXED:
ulonglong iVar1;
iVar1._0_4_ = some_value;
```
