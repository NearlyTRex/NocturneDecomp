// Name: core_fire.cpp_CStake_dtor_FUN_004a48a0
// Address: 004a48a0
// Address Range: [[004a48a0, 004a48b5]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004a48a0(CStake *this_ptr,uint flags)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_004a48a0(CStake *this_ptr,uint flags)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041adf0((CBox *)&this_ptr->field_0x4,0);
  return (CStake *)(pCVar1 + -4);
}
