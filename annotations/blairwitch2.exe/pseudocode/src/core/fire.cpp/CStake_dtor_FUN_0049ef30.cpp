// Name: core_fire.cpp_CStake_dtor_FUN_0049ef30
// Address: 0049ef30
// Address Range: [[0049ef30, 0049ef45]]
// Convention: __cdecl
// Signature: CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_0049ef30(CStake *this_ptr,uint flags)

#include "nocturne.h"

CStake * __cdecl core_fire_cpp_CStake_dtor_FUN_0049ef30(CStake *this_ptr,uint flags)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70((CBox *)&this_ptr->field_0x4,0);
  return (CStake *)(pCVar1 + -4);
}
