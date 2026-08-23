---
id: called-object-type-is-not-a-function-called
kind: recipe
title: "Called object type is not a function (`called object type 'float' is not a function`)"
legacy_section: 6
requires: []
triggers: [compiler_called_object_not_function]
provides: []          # TODO: terms of art this fragment defines
---

**Cause:** Ghidra confused a function pointer stored in a struct with a float field.

**Fix:** Check the assembly for an indirect CALL. Cast to the correct function pointer type:
```cpp promptc:noverify
// BROKEN:
result = field_value(args);  // field_value is typed as float

// FIXED (assembly shows: CALL dword ptr [EAX + 0x1c]):
result = ((int (*)(int))*(void **)((int)vtable + 0x1c))(args);
```
