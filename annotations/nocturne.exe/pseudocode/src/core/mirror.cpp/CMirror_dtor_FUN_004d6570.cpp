// Name: core_mirror.cpp_CMirror_dtor_FUN_004d6570
// Address: 004d6570
// Address Range: [[004d6570, 004d6589]]
// Convention: __cdecl
// Signature: CMirror * __cdecl core_mirror_cpp_CMirror_dtor_FUN_004d6570(CMirror *this_ptr,uint flags)

#include "nocturne.h"

CMirror * __cdecl core_mirror_cpp_CMirror_dtor_FUN_004d6570(CMirror *this_ptr,uint flags)

{
  SClipPlane *pSVar1;
  
  pSVar1 = core_mirror_cpp_SClipPlane_arrdtor_FUN_004d7d90(this_ptr->clip_planes,0);
  return (CMirror *)&pSVar1[-10].C;
}
