---
id: fixed-keep-cpp
kind: rule
title: "Fixed `.keep.cpp`:"
requires: [example-before-and-after]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

```cpp promptc:noverify
// Name: core_gore.cpp_CBloodPool_save_FUN_004ed1c0
// Address: 004ed1c0
// MANUAL RECONSTRUCTION
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)
{
  int iVar3;

  _fprintf(file_handle,"%f,%f,%f\n",
           (double)(this_ptr->position).x,
           (double)(this_ptr->position).y,
           (double)(this_ptr->position).z);
  _fprintf(file_handle,"%d,%d\n",this_ptr->expired,this_ptr->blood_type);
  iVar3 = _fprintf(file_handle,"%d,%f,%d,%d,%d\n",
                   this_ptr->texture_variant,
                   (double)this_ptr->age,
                   (this_ptr->position_fixed).x,
                   (this_ptr->position_fixed).y,
                   (this_ptr->position_fixed).z);
  return iVar3;
}
```

**What changed:** The `SUB84(__BITCAST_UINT64(dVar), 0) / (int)((ulonglong)dVar >> 0x20)` split-push pattern was collapsed back to single `(double)` arguments. The assembly pushes 8 bytes per `%f` (two 32-bit pushes for one double), and the decompiler exposed the raw push mechanics. The `.keep` restores the semantic intent. Unused variables `dVar1`/`dVar2` were removed.
