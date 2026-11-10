// Name: core_thehand.cpp_CTheHand_ctor_FUN_00599070
// Address: 00599070
// Address Range: [[00599070, 005990c5]]
// Convention: unknown
// Signature: CTheHand * core_thehand_cpp_CTheHand_ctor_FUN_00599070(CTheHand *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CTheHand * core_thehand_cpp_CTheHand_ctor_FUN_00599070(CTheHand *this_ptr)

{
  CTheHand *pCVar1;
  
  pCVar1 = (CTheHand *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar1->field_0x154)->_ub = &g_CTheHandVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar1->field_0x158,"thehand.dfm");
  *(uint *)&pCVar1->field_0x2ff4 = 0x42480000;
  *(uint *)&pCVar1->field_0x2ff8 = 0x42c80000;
  *(uint *)&pCVar1->field_0xc268 = 0;
  *(uint *)&pCVar1->field_0xc26c = 0;
  return pCVar1;
}
