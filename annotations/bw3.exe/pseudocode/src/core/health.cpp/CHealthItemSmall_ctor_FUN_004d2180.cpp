// Name: core_health.cpp_CHealthItemSmall_ctor_FUN_004d2180
// Address: 004d2180
// Address Range: [[004d2180, 004d21c1]]
// Convention: __cdecl
// Signature: CHealthItemSmall * __cdecl core_health_cpp_CHealthItemSmall_ctor_FUN_004d2180(CHealthItemSmall *this_ptr)

#include "nocturne.h"

CHealthItemSmall * __cdecl core_health_cpp_CHealthItemSmall_ctor_FUN_004d2180(CHealthItemSmall *this_ptr)

{
  CHealthItem *pCVar1;
  
  pCVar1 = core_health_cpp_CHealthItem_ctor_FUN_004d1d80(&this_ptr->base);
  (pCVar1->base).vtable._ub = &g_CHealthItemSmallVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&pCVar1->model,"health_sm.kfm");
  pCVar1->hp_restored = 10.0;
  pCVar1->automatic_use = 1;
  return (CHealthItemSmall *)pCVar1;
}
