// Name: core_stranger.cpp_CStranger_process_FUN_005357d0
// Address: 005357d0
// Address Range: [[005357d0, 0053589f]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_process_FUN_005357d0(CStranger *param_1,float param_2)

#include "nocturne.h"

void core_stranger_cpp_CStranger_process_FUN_005357d0(CStranger *param_1,float param_2)

{
  float delta_time;
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  
  iVar2 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  delta_time = 0x01C775EC->delta_time_float;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(param_1->base).base.model.motion_controller);
  bVar1 = false;
  switch(pSVar3->state_index) {
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
  if ((param_1->action_pending == 7) || (bVar1)) {
    param_2 = param_2 * (float)0.25;
    core_stranger_cpp_FUN_00535900(param_1,param_2);
    core_stranger_cpp_FUN_00535900(param_1,param_2);
    core_stranger_cpp_FUN_00535900(param_1,param_2);
  }
  core_stranger_cpp_FUN_00535900(param_1,param_2);
  core_game_cpp_CGame_slamDT_FUN_004a5f00(0x01C775EC,delta_time);
  return;
}
