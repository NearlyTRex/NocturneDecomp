// Name: core_stranger.cpp_CStranger_process_FUN_005357d0
// Address: 005357d0
// Address Range: [[005357d0, 0053589f]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_process_FUN_005357d0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_process_FUN_005357d0(CStranger *this_ptr,float delta_time)

{
  float delta_time_00;
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  
  iVar2 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  delta_time_00 = g_CGame_PTR_005b9354->delta_time_float;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(this_ptr->base).base.model.motion_controller);
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
  if ((this_ptr->action_pending == 7) || (bVar1)) {
    delta_time = delta_time * (float)0.25;
    core_stranger_cpp_CStranger_processFrame_FUN_00535900(this_ptr,delta_time);
    core_stranger_cpp_CStranger_processFrame_FUN_00535900(this_ptr,delta_time);
    core_stranger_cpp_CStranger_processFrame_FUN_00535900(this_ptr,delta_time);
  }
  core_stranger_cpp_CStranger_processFrame_FUN_00535900(this_ptr,delta_time);
  core_game_cpp_CGame_slamDT_FUN_004a5f00(g_CGame_PTR_005b9354,delta_time_00);
  return;
}
