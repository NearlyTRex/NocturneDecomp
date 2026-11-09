// Name: core_doc.cpp_FUN_004693e0
// Address: 004693e0
// Address Range: [[004693e0, 00469547]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004693e0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_004693e0(CCharacter *param_1,float param_2)

{
  float delta_time;
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(param_1,param_2);
  if (iVar2 != 0) {
    iVar2 = *(int *)&g_CGamePtr->field_0x25c;
    if (*(int *)&param_1[2].field_0x7d38 == 1) {
      *(float *)&param_1[2].field_0x7d3c = *(float *)&param_1[2].field_0x7d3c - _DAT_005fecb4;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0x75,1);
      if (ABS(*(float *)&param_1[2].field_0x7d3c) <= (float)_DAT_005d9be4) {
        *(float *)&param_1->field_0x34 = _DAT_005fecb4 + *(float *)&param_1->field_0x34;
        core_charactr_cpp_FUN_00433d50(param_1,&param_1->field_0x30);
      }
      else {
        *(uint *)&param_1[2].field_0x7d38 = 0;
      }
    }
    core_charactr_cpp_FUN_00432f10(param_1,param_2,iVar2 != 0);
    delta_time = *(float *)&g_CGamePtr->field_0x294;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    bVar1 = false;
    switch(*(uint *)(pSVar3 + 0x24)) {
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1e:
      bVar1 = true;
    }
    if ((*(int *)&param_1[2].field_0x7bbc == 7) || (bVar1)) {
      param_2 = param_2 * (float)_DAT_005d9bec;
      core_doc_cpp_FUN_00469550(param_1,param_2);
      core_doc_cpp_FUN_00469550(param_1,param_2);
      core_doc_cpp_FUN_00469550(param_1,param_2);
    }
    core_doc_cpp_FUN_00469550(param_1,param_2);
    core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,delta_time);
  }
  return;
}
