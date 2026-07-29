// Name: core_fire.cpp_CCrater_dtor_FUN_0048ca70
// Address: 0048ca70
// Address Range: [[0048ca70, 0048ca85]]
// Convention: __cdecl
// Signature: CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_0048ca70(CCrater *this_ptr,uint flags)

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_0048ca70(CCrater *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_004389e0(this_ptr->smoke_positions,0);
  return (CCrater *)&pCVar1[-3].z;
}
