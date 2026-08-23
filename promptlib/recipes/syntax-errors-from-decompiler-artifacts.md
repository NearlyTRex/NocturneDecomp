---
id: syntax-errors-from-decompiler-artifacts
kind: recipe
title: Syntax errors from decompiler artifacts
legacy_section: 12
requires: []
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** Ghidra occasionally produces syntactically invalid C++ (unbalanced parens, stray tokens, etc.)

**Fix:** Consult the assembly and reconstruct the statement. Keep it as close to the original structure as possible.
