// Name: core_skeleton.cpp_SVert_dtor_FUN_0051f860
// Address: 0051f860
// Address Range: [[0051f860, 0051f875]]
// Convention: __cdecl
// Signature: SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_0051f860(SVert *this_ptr,uint flags)

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_0051f860(SVert *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_004389e0(&this_ptr->position,0);
  return (SVert *)&pCVar1[-2].z;
}
