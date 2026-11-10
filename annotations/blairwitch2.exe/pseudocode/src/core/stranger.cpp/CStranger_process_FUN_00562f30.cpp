// Name: core_stranger.cpp_CStranger_process_FUN_00562f30
// Address: 00562f30
// Address Range: [[00562f30, 00562fff]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_process_FUN_00562f30(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_process_FUN_00562f30(CStranger *this_ptr,float delta_time)

{
  float delta_time_00;
  bool bVar1;
  int iVar2;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  delta_time_00 = g_CGamePtr->delta_time_float;
  iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
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
  if ((this_ptr->action_pending == 7) || (bVar1)) {
    delta_time = delta_time * (float)_DAT_005eb49d;
    core_stranger_cpp_CStranger_processFrame_FUN_00563060(this_ptr,delta_time);
    core_stranger_cpp_CStranger_processFrame_FUN_00563060(this_ptr,delta_time);
    core_stranger_cpp_CStranger_processFrame_FUN_00563060(this_ptr,delta_time);
  }
  core_stranger_cpp_CStranger_processFrame_FUN_00563060(this_ptr,delta_time);
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,delta_time_00);
  return;
}
