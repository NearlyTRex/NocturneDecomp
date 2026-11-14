// Name: core_fire.cpp_CStake_dtor_FUN_004b7800
// Address: 004b7800
// Address Range: [[004b7800, 004b7815]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004b7800(CStake *this_ptr,uint flags)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004b7800(CStake *this_ptr,uint flags)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dab0(&this_ptr->physics_box,0);
  return (CStake *)&pCVar1[-1].is_valid;
}
