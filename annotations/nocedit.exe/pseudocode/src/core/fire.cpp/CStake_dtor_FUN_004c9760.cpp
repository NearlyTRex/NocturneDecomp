// Name: core_fire.cpp_CStake_dtor_FUN_004c9760
// Address: 004c9760
// Address Range: [[004c9760, 004c9775]]
// Convention: __cdecl
// Signature: CStake * core_fire.cpp_CStake_dtor_FUN_004c9760(CStake * this_ptr)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004c9760(CStake *this_ptr)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00(&this_ptr->box);
  return (CStake *)&pCVar1[-1].is_valid;
}
