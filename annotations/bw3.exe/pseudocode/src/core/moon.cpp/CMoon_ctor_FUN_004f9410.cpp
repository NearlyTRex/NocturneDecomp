// Name: core_moon.cpp_CMoon_ctor_FUN_004f9410
// Address: 004f9410
// Address Range: [[004f9410, 004f9447]]
// Convention: unknown
// Signature: CMoon * core_moon_cpp_CMoon_ctor_FUN_004f9410(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMoon * core_moon_cpp_CMoon_ctor_FUN_004f9410(CMoon *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00460490
                     ((CKeyFramedModel *)&this_ptr->field_0x8);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00460490(pCVar1 + 1);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00460490(pCVar1 + 1);
  *(uint *)&pCVar1[-3].field_0x390 = 0;
  return (CMoon *)&pCVar1[-3].field_0x390;
}
