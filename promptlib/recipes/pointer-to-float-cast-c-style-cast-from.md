---
id: pointer-to-float-cast-c-style-cast-from
kind: recipe
title: "Pointer-to-float cast (`C-style cast from 'SomeType *' to 'float' is not allowed`)"
legacy_section: 1
requires: []
triggers: [suspicious_cast]
provides: []
---

**Cause:** Ghidra misinterprets a pointer dereference as a cast. The assembly is loading a float from a struct field via pointer arithmetic, but the decompiler lost track of types.

**Fix:** Check the `.asm` file to see what memory is being accessed. Replace the cast with the correct struct field access or pointer dereference:
```cpp promptc:noverify
// BROKEN (decompiler artifact):
fVar1 = (float)this_ptr;

// FIXED (assembly shows: FLD dword ptr [EAX + 0x10]):
fVar1 = *(float *)((int)this_ptr + 0x10);
// Or if the struct field is known:
fVar1 = this_ptr->position.x;
```
