---
id: format-string-errors-format-specifies-type-x
kind: recipe
title: "Format string errors (`format specifies type 'X' but argument has type 'Y'`)"
legacy_section: 3
requires: []
triggers: [compiler_format_mismatch]
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** Ghidra inserts `SUB84(__BITCAST_UINT64(dVar), 0)` to pass doubles to printf-family functions. The decompiler is splitting the 64-bit double into two 32-bit pushes (which is what the assembly does), but the format string expects one `%f` per double.

**Fix:** Replace the split-push pattern with a direct double pass:
```cpp promptc:noverify
// BROKEN (decompiler splits the double push):
_fprintf(file, "%f", SUB84(__BITCAST_UINT64(dVar1), 0),
         (int)((ulonglong)dVar1 >> 0x20));

// FIXED (one double argument per %f):
_fprintf(file, "%f", (double)this_ptr->value);
```
