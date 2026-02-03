// Name: core_mirror.cpp_CMirror_dtor_FUN_005213e0
// Address: 005213e0
// Address Range: [[005213e0, 005213f9]]
// Convention: __cdecl
// Signature: CMirror * __cdecl core_mirror_cpp_CMirror_dtor_FUN_005213e0(CMirror *this_ptr)

#include "nocturne.h"

CMirror * __cdecl core_mirror_cpp_CMirror_dtor_FUN_005213e0(CMirror *this_ptr)

{
  SClipPlane *pSVar1;
  
  pSVar1 = core_mirror_cpp_freeClipPlanes_FUN_00522c10(this_ptr->clip_planes);
  return (CMirror *)&pSVar1[-10].C;
}
