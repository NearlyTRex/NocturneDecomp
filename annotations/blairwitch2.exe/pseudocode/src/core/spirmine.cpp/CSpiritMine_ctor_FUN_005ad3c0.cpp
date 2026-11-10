// Name: core_spirmine.cpp_CSpiritMine_ctor_FUN_005ad3c0
// Address: 005ad3c0
// Address Range: [[005ad3c0, 005ad451]]
// Convention: unknown
// Signature: CSpiritMine * core_spirmine_cpp_CSpiritMine_ctor_FUN_005ad3c0(CSpiritMine *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritMine * core_spirmine_cpp_CSpiritMine_ctor_FUN_005ad3c0(CSpiritMine *this_ptr)

{
  CSpiritMine *pCVar1;
  
  pCVar1 = (CSpiritMine *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30((CBoxActor *)this_ptr);
  ((UActorVTable *)&pCVar1->field_0x2b0)->_ub = &g_CSpiritMineVTable;
  *(uint *)&pCVar1->field_0x7dc = 0x40a00000;
  *(uint *)&pCVar1->field_0x7e0 = 0x40a00000;
  *(uint *)&pCVar1->field_0x7e4 = 0x41c80000;
  *(uint *)&pCVar1->field_0x7e8 = 0;
  *(uint *)&pCVar1->field_0x7ec = 0;
  *(uint *)&pCVar1->field_0x7f0 = 0;
  *(uint *)&pCVar1->field_0xfc = 0;
  *(uint *)&pCVar1->field_0x7d8 = 0x3f800000;
  *(uint *)&pCVar1->field_0x7d4 = 0x3f800000;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar1->field_0x2b4,"rock_pile.kfm");
  *(uint *)&pCVar1->field_0x834 = 0;
  return pCVar1;
}
