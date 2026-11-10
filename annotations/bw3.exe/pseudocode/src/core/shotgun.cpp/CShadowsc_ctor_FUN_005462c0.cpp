// Name: core_shotgun.cpp_CShadowsc_ctor_FUN_005462c0
// Address: 005462c0
// Address Range: [[005462c0, 0054635a]]
// Convention: unknown
// Signature: CShadowsc * core_shotgun_cpp_CShadowsc_ctor_FUN_005462c0(CShadowsc *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CShadowsc * core_shotgun_cpp_CShadowsc_ctor_FUN_005462c0(CShadowsc *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CEventList *this_ptr_00;
  CShadowsc *pCVar3;
  int iVar4;
  
  pCVar3 = (CShadowsc *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar3->field_0x154)->_ub = &g_CShadowscVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&pCVar3->field_0x158,"shadowscorp.dfm");
  uVar2 = _DAT_005e4354;
  uVar1 = _DAT_005e4350;
  *(uint *)&pCVar3->field_0x326c = 0x3f400000;
  *(uint *)&pCVar3->field_0x3270 = 0x3fc00000;
  this_ptr_00 = 0x01C6E360;
  *(uint *)&pCVar3->field_0xd064 = 0;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar4 != 0) {
    *(uint *)&pCVar3->field_0xd068 = 0x3f800000;
    return pCVar3;
  }
  *(uint *)&pCVar3->field_0xd068 = 0x3f400000;
  return pCVar3;
}
