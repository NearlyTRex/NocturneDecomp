// Name: core_fire.cpp_CStake_dtor_FUN_004c9760
// Address: 004c9760
// Address Range: [[004c9760, 004c9775]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004c9760(CStake *this_ptr,uint flags)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004c9760(CStake *this_ptr,uint flags)

{
  CStake_ptr_4 pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00(&this_ptr->physics_box,0);
  return ADJ(pCVar1);
}
