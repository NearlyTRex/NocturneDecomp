// Name: core_mirror.cpp_freeClipPlaneArray_FUN_00522c10
// Address: 00522c10
// Address Range: [[00522c10, 00522c24]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_freeClipPlaneArray_FUN_00522c10(SClipPlane **array_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_freeClipPlaneArray_FUN_00522c10(SClipPlane **array_ptr)

{
  __arrfini(array_ptr,5,&g_SClipPlaneTypeInfo);
  return;
}
