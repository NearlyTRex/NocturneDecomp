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
  CEventList *this_ptr_00;
  CCarved *pCVar2;
  uint uVar3;
  int iVar4;
  
  pCVar2 = (CCarved *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar2->field_0x154 = &g_CCarvedVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar2->field_0x158,"@carvedman1.dfm" + 1);
  *(uint *)&pCVar2->field_0x326c = 0x3f000000;
  uVar3 = _DAT_005dcf50;
  *(uint *)&pCVar2->field_0x3270 = 0x3f800000;
  *(uint *)&pCVar2->field_0xd064 = 0;
  uVar1 = _DAT_005dcf54;
  *(uint *)&pCVar2->field_0xd060 = 0;
  *(uint *)&pCVar2->field_0x3274 = uVar3;
  *(uint *)&pCVar2->field_0x3278 = uVar1;
  uVar3 = core_actor_cpp_FUN_0040ce40(0x3e99999a,0x3f800000);
  *(uint *)&pCVar2->field_0xd054 = uVar3;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  *(uint *)&pCVar2->field_0xd05c = 0;
  *(uint *)&pCVar2->field_0xd06c = 0;
  *(uint *)&pCVar2->field_0xd0c0 = 0;
  *(uint *)&pCVar2->field_0xd070 = 0;
  *(uint *)&pCVar2->field_0xd0d0 = 0;
  *(uint *)&pCVar2->field_0xd0d4 = 0;
  *(uint *)&pCVar2->field_0xd050 = 0;
  this_ptr_00 = 0x01C6E360;
  *(uint *)&pCVar2->field_0x252c = 0x3fc90fdb;
  *(int *)&pCVar2->field_0xd058 = iVar4;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar4 == 0) {
    *(uint *)&pCVar2->field_0xd0d8 = 0x3f400000;
  }
  else {
    *(uint *)&pCVar2->field_0xd0d8 = 0x3f800000;
  }
  *(uint *)&pCVar2->field_0xce5c = 0x41200000;
  *(uint *)&pCVar2->field_0xce60 = 0x40a00000;
  *(uint *)&pCVar2->field_0x2538 = 0x41a00000;
  return pCVar2;
}
