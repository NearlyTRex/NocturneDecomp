// Name: core_shadow.cpp_CShadow_ctor_FUN_00543500
// Address: 00543500
// Address Range: [[00543500, 0054366b]]
// Convention: unknown
// Signature: CShadow * core_shadow_cpp_CShadow_ctor_FUN_00543500(CShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CShadow * core_shadow_cpp_CShadow_ctor_FUN_00543500(CShadow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CEventList *this_ptr_00;
  CShadow *pCVar4;
  int iVar5;
  
  pCVar4 = (CShadow *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar4->field_0x154)->_ub = &g_CShadowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&pCVar4->field_0x158,"shadowbeast.dfm");
  *(uint *)&pCVar4->field_0x326c = 0x3f800000;
  *(uint *)&pCVar4->field_0x3270 = 0x40000000;
  *(uint *)&pCVar4->field_0xd0e0 = 1;
  *(uint *)&pCVar4->field_0xd054 = 0;
  *(uint *)&pCVar4->field_0xd074 = 1;
  *(uint *)&pCVar4->field_0xd088 = 0;
  *(uint *)&pCVar4->field_0xd08c = 0x40a00000;
  *(uint *)&pCVar4->field_0xd090 = 0;
  *(uint *)&pCVar4->field_0xd094 = 0;
  *(uint *)&pCVar4->field_0xd09c = 0;
  *(uint *)&pCVar4->field_0xd0d4 = 0x3f800000;
  *(uint *)&pCVar4->field_0xd098 = 0;
  *(uint *)&pCVar4->field_0xd0c4 = 0;
  *(uint *)&pCVar4->field_0xd0bc = 0;
  *(uint *)&pCVar4->field_0xd0c0 = 0;
  uVar1 = _DAT_005e3d54;
  *(uint *)&pCVar4->field_0xd0cc = 0;
  uVar2 = _DAT_005e3d58;
  *(uint *)&pCVar4->field_0xd0c8 = 0x41200000;
  uVar3 = _DAT_005e3d5c;
  *(uint *)&pCVar4->field_0xd0d8 = 0;
  this_ptr_00 = 0x01C6E360;
  *(uint *)&pCVar4->field_0xd0dc = 0;
  *(uint *)&pCVar4->field_0x3274 = uVar1;
  *(uint *)&pCVar4->field_0x3278 = uVar2;
  *(uint *)&pCVar4->field_0xd0a0 = uVar3;
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar5 == 0) {
    *(uint *)&pCVar4->field_0xd0e4 = 0x3f400000;
  }
  else {
    *(uint *)&pCVar4->field_0xd0e4 = 0x3f800000;
  }
  *(float *)&pCVar4->field_0x2538 = 40.0;
  *(uint *)&pCVar4->field_0xce5c = 0x41700000;
  *(uint *)&pCVar4->field_0xce60 = 0x41a00000;
  *(uint *)&pCVar4->field_0xd0a8 = 0;
  return pCVar4;
}
