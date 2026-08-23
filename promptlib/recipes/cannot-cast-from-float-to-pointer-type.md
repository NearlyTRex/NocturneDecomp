---
id: cannot-cast-from-float-to-pointer-type
kind: recipe
title: Cannot cast from float to pointer type
legacy_section: 7
requires: []
triggers: [compiler_float_to_pointer_cast]
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** Decompiler has wrong type for a local variable — it's actually a pointer, not a float.

**Fix:** Change the variable declaration from float to the correct pointer type, guided by assembly.
