// Name: core_fire.cpp_CStake_ctor_FUN_004b77e0
// Address: 004b77e0
// Address Range: [[004b77e0, 004b77f3]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004b77e0(CStake *this_ptr)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004b77e0(CStake *this_ptr)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_ctor_FUN_0041da00(&this_ptr->physics_box);
  return (CStake *)&pCVar1[-1].is_valid;
}
