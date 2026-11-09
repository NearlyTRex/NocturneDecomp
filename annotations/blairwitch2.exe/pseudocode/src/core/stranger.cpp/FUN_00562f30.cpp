// Name: core_stranger.cpp_FUN_00562f30
// Address: 00562f30
// Address Range: [[00562f30, 00562fff]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00562f30(CStranger *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_00562f30(CStranger *param_1,float param_2)

{
  float delta_time;
  bool bVar1;
  int iVar2;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  delta_time = *(float *)&g_CGamePtr->field_0x284;
  iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  bVar1 = false;
  switch(*(uint *)(iVar2 + 0x24)) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1b:
    bVar1 = true;
  }
  if ((*(int *)&param_1->field_0x256a4 == 7) || (bVar1)) {
    param_2 = param_2 * (float)_DAT_005eb49d;
    core_stranger_cpp_FUN_00563060(param_1,param_2);
    core_stranger_cpp_FUN_00563060(param_1,param_2);
    core_stranger_cpp_FUN_00563060(param_1,param_2);
  }
  core_stranger_cpp_FUN_00563060(param_1,param_2);
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,delta_time);
  return;
}
