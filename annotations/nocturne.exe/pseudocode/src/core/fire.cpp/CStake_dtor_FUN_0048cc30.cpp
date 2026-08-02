// Name: core_fire.cpp_CStake_dtor_FUN_0048cc30
// Address: 0048cc30
// Address Range: [[0048cc30, 0048cc45]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_0048cc30(CStake *this_ptr,uint flags)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_0048cc30(CStake *this_ptr,uint flags)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0(&this_ptr->physics_box,0);
  return (CStake *)&pCVar1[-1].is_valid;
}
