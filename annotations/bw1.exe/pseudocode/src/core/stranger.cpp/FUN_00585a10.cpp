// Name: core_stranger.cpp_FUN_00585a10
// Address: 00585a10
// Address Range: [[00585a10, 00585adf]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00585a10(CStranger *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_00585a10(CStranger *param_1,float param_2)

{
  float delta_time;
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
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
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x26:
    bVar1 = true;
  }
  if ((*(int *)&param_1->field_0x1ff5c == 7) || (bVar1)) {
    param_2 = param_2 * (float)_DAT_005f6711;
    core_stranger_cpp_FUN_00585b00(param_1,param_2);
    core_stranger_cpp_FUN_00585b00(param_1,param_2);
    core_stranger_cpp_FUN_00585b00(param_1,param_2);
  }
  core_stranger_cpp_FUN_00585b00(param_1,param_2);
  core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,delta_time);
  return;
}
