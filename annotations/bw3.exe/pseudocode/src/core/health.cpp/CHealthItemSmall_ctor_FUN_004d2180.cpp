// Name: core_health.cpp_CHealthItemSmall_ctor_FUN_004d2180
// Address: 004d2180
// Address Range: [[004d2180, 004d21c1]]
// Convention: unknown
// Signature: CHealthItemSmall * core_health_cpp_CHealthItemSmall_ctor_FUN_004d2180(CHealthItemSmall *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHealthItemSmall * core_health_cpp_CHealthItemSmall_ctor_FUN_004d2180(CHealthItemSmall *this_ptr)

{
  CHealthItem *pCVar1;
  
  pCVar1 = core_health_cpp_CHealthItem_ctor_FUN_004d1d80((CHealthItem *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CHealthItemSmallVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar1->field_0x158,"health_sm.kfm");
  *(uint *)&pCVar1->field_0x2d8 = 0x41200000;
  *(uint *)&pCVar1->field_0x2e0 = 1;
  return (CHealthItemSmall *)pCVar1;
}
