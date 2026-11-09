// Name: core_moon.cpp_CMoon_dtor_FUN_00521c00
// Address: 00521c00
// Address Range: [[00521c00, 00521c43]]
// Convention: unknown
// Signature: CMoon * core_moon_cpp_CMoon_dtor_FUN_00521c00(CMoon *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMoon * core_moon_cpp_CMoon_dtor_FUN_00521c00(CMoon *this_ptr,uint flags)

{
  CKeyFramedModel *pCVar1;
  
  core_moon_cpp_FUN_00521d50(this_ptr);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00466880
                     ((CKeyFramedModel *)&this_ptr->field_0x738,0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00466880(pCVar1 + -1,0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00466880(pCVar1 + -1,0);
  return (CMoon *)&pCVar1[-1].field_0x390;
}
