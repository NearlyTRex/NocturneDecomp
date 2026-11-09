// Name: core_fire.cpp_CStake_ctor_FUN_004b77e0
// Address: 004b77e0
// Address Range: [[004b77e0, 004b77f3]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004b77e0(CStake *this_ptr)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004b77e0(CStake *this_ptr)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_ctor_FUN_0041da00((CBox *)&this_ptr->field_0x4);
  return (CStake *)(pCVar1 + -4);
}
