---
id: undeclared-identifier
kind: recipe
title: Undeclared identifier
legacy_section: 10
requires: []
triggers: [compiler_undeclared_identifier]
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** A global, type, or function used in the code isn't declared in `nocturne.h` or its includes.

**Fix:** Check if it's a typo from the decompiler. If it's a real symbol, add an extern declaration at the top of the `.keep.cpp` (after the include). If it's a Ghidra artifact variable name like `in_stack_XXXXXXXX`, check the assembly to understand what it actually is (usually a function parameter the decompiler missed).
