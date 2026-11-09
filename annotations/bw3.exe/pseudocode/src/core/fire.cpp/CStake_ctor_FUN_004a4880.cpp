// Name: core_fire.cpp_CStake_ctor_FUN_004a4880
// Address: 004a4880
// Address Range: [[004a4880, 004a4893]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004a4880(CStake *this_ptr)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_ctor_FUN_004a4880(CStake *this_ptr)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_ctor_FUN_0041ad40((CBox *)&this_ptr->field_0x4);
  return (CStake *)(pCVar1 + -4);
}
