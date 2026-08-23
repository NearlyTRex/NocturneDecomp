---
id: const-qualifier-discards-assigning-to-char-from
kind: recipe
title: "`const` qualifier discards (`assigning to 'char *' from 'const char *'`)"
legacy_section: 8
requires: []
triggers: [compiler_const_discards]
provides: []          # TODO: terms of art this fragment defines
---

**Fix:** Remove `const` from the source (Ghidra types don't use `const`), or cast:
```cpp promptc:noverify
ptr = (char *)"string literal";
```
