// Name: core_fire.cpp_CStake_ctor_FUN_0048cc10
// Address: 0048cc10
// Address Range: [[0048cc10, 0048cc23]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_0048cc10(CStake *this_ptr)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_0048cc10(CStake *this_ptr)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_ctor_FUN_0041a610(&this_ptr->physics_box);
  return (CStake *)&pCVar1[-1].is_valid;
}
