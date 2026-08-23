---
id: sign-mismatch-pointer-conversion-converts
kind: recipe
title: "Sign mismatch pointer conversion (`converts between pointers to integer types with different sign`)"
legacy_section: 9
requires: []
triggers: [compiler_sign_mismatch]
provides: []          # TODO: terms of art this fragment defines
---

**Fix:** Add explicit cast:
```cpp promptc:noverify
int_ptr = (int *)uint_ptr;
```
