// Name: core_mirror.cpp_CMirror_dtor_FUN_005213e0
// Address: 005213e0
// Address Range: [[005213e0, 005213f9]]
// Convention: __cdecl
// Signature: CMirror * __cdecl core_mirror_cpp_CMirror_dtor_FUN_005213e0(CMirror *this_ptr,uint flags)

#include "nocturne.h"

CMirror * __cdecl core_mirror_cpp_CMirror_dtor_FUN_005213e0(CMirror *this_ptr,uint flags)

{
  CMirror_ptr_152 pSVar1;
  
  pSVar1 = (CMirror_ptr_152)
           core_mirror_cpp_SClipPlane_arrdtor5_FUN_00522c10(this_ptr->clip_planes,0);
  return ADJ(pSVar1);
}
