// Name: core_fire.cpp_CCrater_dtor_FUN_004c95a0
// Address: 004c95a0
// Address Range: [[004c95a0, 004c95b5]]
// Convention: __cdecl
// Signature: CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_004c95a0(CCrater *this_ptr,uint flags)

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_004c95a0(CCrater *this_ptr,uint flags)

{
  CCrater_ptr_28 pCVar1;
  
  pCVar1 = (CCrater_ptr_28)
           core_cloth_cpp_CVector3f_arrdtor_FUN_0043e460(this_ptr->smoke_positions,0);
  return ADJ(pCVar1);
}
