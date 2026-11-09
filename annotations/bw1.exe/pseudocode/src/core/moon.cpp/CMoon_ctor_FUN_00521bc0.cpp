// Name: core_moon.cpp_CMoon_ctor_FUN_00521bc0
// Address: 00521bc0
// Address Range: [[00521bc0, 00521bf7]]
// Convention: unknown
// Signature: CMoon * core_moon_cpp_CMoon_ctor_FUN_00521bc0(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMoon * core_moon_cpp_CMoon_ctor_FUN_00521bc0(CMoon *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0
                     ((CKeyFramedModel *)&this_ptr->field_0x8);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0(pCVar1 + 1);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0(pCVar1 + 1);
  *(uint *)&pCVar1[-3].field_0x390 = 0;
  return (CMoon *)&pCVar1[-3].field_0x390;
}
