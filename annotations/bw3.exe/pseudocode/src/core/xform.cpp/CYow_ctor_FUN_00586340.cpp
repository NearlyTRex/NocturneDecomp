// Name: core_xform.cpp_CYow_ctor_FUN_00586340
// Address: 00586340
// Address Range: [[00586340, 005863da]]
// Convention: unknown
// Signature: CYow * core_xform_cpp_CYow_ctor_FUN_00586340(CYow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CYow * core_xform_cpp_CYow_ctor_FUN_00586340(CYow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CEventList *this_ptr_00;
  CYow *pCVar3;
  int iVar4;
  
  pCVar3 = (CYow *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CYowVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,"blackdog.dfm");
  uVar2 = _DAT_005e65e4;
  uVar1 = _DAT_005e65e0;
  *(uint *)&pCVar3->field_0x326c = 0x3f400000;
  *(uint *)&pCVar3->field_0x3270 = 0x3fc00000;
  this_ptr_00 = 0x01C6E360;
  *(uint *)&pCVar3->field_0xd070 = 0;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar4 != 0) {
    *(uint *)&pCVar3->field_0xd074 = 0x3f800000;
    return pCVar3;
  }
  *(uint *)&pCVar3->field_0xd074 = 0x3f400000;
  return pCVar3;
}
