// Name: core_fire.cpp_CStake_ctor_FUN_004c9740
// Address: 004c9740
// Address Range: [[004c9740, 004c9753]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004c9740(CStake *this_ptr)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004c9740(CStake *this_ptr)

{
  CStake_ptr_4 pCVar1;
  
  pCVar1 = core_box_cpp_CBox_ctor_FUN_0041dc50(&this_ptr->physics_box);
  return ADJ(pCVar1);
}
