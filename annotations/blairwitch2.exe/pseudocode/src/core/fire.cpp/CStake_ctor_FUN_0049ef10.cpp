// Name: core_fire.cpp_CStake_ctor_FUN_0049ef10
// Address: 0049ef10
// Address Range: [[0049ef10, 0049ef23]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_0049ef10(CStake *this_ptr)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_0049ef10(CStake *this_ptr)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_ctor_FUN_005b1bc0(&this_ptr->physics_box);
  return (CStake *)&pCVar1[-1].is_valid;
}
