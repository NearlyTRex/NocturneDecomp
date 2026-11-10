// Name: core_carved.cpp_CCarved_ctor_FUN_00425960
// Address: 00425960
// Address Range: [[00425960, 00425aaa]]
// Convention: unknown
// Signature: CCarved * core_carved_cpp_CCarved_ctor_FUN_00425960(CCarved *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCarved * core_carved_cpp_CCarved_ctor_FUN_00425960(CCarved *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CEventList *this_ptr_00;
  CCarved *pCVar3;
  float fVar4;
  int iVar5;
  
  pCVar3 = (CCarved *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar3->field_0x154)->_ub = &g_CCarvedVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&pCVar3->field_0x158,"@carvedman1.dfm" + 1);
  *(uint *)&pCVar3->field_0x326c = 0x3f000000;
  uVar1 = _DAT_005dcf50;
  *(uint *)&pCVar3->field_0x3270 = 0x3f800000;
  *(uint *)&pCVar3->field_0xd064 = 0;
  uVar2 = _DAT_005dcf54;
  *(uint *)&pCVar3->field_0xd060 = 0;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.3,1.0);
  *(float *)&pCVar3->field_0xd054 = fVar4;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  *(uint *)&pCVar3->field_0xd05c = 0;
  *(uint *)&pCVar3->field_0xd06c = 0;
  *(uint *)&pCVar3->field_0xd0c0 = 0;
  *(uint *)&pCVar3->field_0xd070 = 0;
  *(uint *)&pCVar3->field_0xd0d0 = 0;
  *(uint *)&pCVar3->field_0xd0d4 = 0;
  *(uint *)&pCVar3->field_0xd050 = 0;
  this_ptr_00 = 0x01C6E360;
  *(uint *)&pCVar3->field_0x252c = 0x3fc90fdb;
  *(int *)&pCVar3->field_0xd058 = iVar5;
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar5 == 0) {
    *(uint *)&pCVar3->field_0xd0d8 = 0x3f400000;
  }
  else {
    *(uint *)&pCVar3->field_0xd0d8 = 0x3f800000;
  }
  *(uint *)&pCVar3->field_0xce5c = 0x41200000;
  *(uint *)&pCVar3->field_0xce60 = 0x40a00000;
  *(float *)&pCVar3->field_0x2538 = 20.0;
  return pCVar3;
}
