// Name: core_stranger.cpp_CStranger_process_FUN_00585a10
// Address: 00585a10
// Address Range: [[00585a10, 00585adf]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_process_FUN_00585a10(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_process_FUN_00585a10(CStranger *this_ptr,float delta_time)

{
  float delta_time_00;
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  delta_time_00 = g_CGamePtr->delta_time_float;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
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
  if ((*(int *)&this_ptr->field_0x1ff5c == 7) || (bVar1)) {
    delta_time = delta_time * (float)_DAT_005f6711;
    core_stranger_cpp_CStranger_processFrame_FUN_00585b00(this_ptr,delta_time);
    core_stranger_cpp_CStranger_processFrame_FUN_00585b00(this_ptr,delta_time);
    core_stranger_cpp_CStranger_processFrame_FUN_00585b00(this_ptr,delta_time);
  }
  core_stranger_cpp_CStranger_processFrame_FUN_00585b00(this_ptr,delta_time);
  core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,delta_time_00);
  return;
}
