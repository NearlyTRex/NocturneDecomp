// Name: core_mirror.cpp_freeClipPlanes_FUN_00522c10
// Address: 00522c10
// Address Range: [[00522c10, 00522c24]]
// Convention: __cdecl
// Signature: SClipPlane * __cdecl core_mirror_cpp_freeClipPlanes_FUN_00522c10(SClipPlane *objs)

#include "nocturne.h"

SClipPlane * __cdecl core_mirror_cpp_freeClipPlanes_FUN_00522c10(SClipPlane *objs)

{
  SClipPlane *pSVar1;
  
  pSVar1 = __arrfini(objs,5,&g_SClipPlaneTypeInfo);
  return pSVar1;
}
