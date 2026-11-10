// Name: core_hero.cpp_CHero_releaseFromGrab_FUN_004ceb80
// Address: 004ceb80
// Address Range: [[004ceb80, 004cec2e]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004ceb80(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004ceb80(CHero *this_ptr)

{
  CMotionController *this_ptr_00;
  CMotionList *this_ptr_01;
  float fVar1;
  char *state_name;
  int iVar2;
  
  if (*(int *)(this_ptr + 0x276c) != 0) {
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"CHero::stopGettingGrabbed by %s, type %d\n",*(int *)(this_ptr + 0x276c),
               *(uint *)(this_ptr + 0x2770));
  }
  if ((*(byte **)(this_ptr + 0x68) == &DAT_0078a123) && (*(int *)(this_ptr + 0x2564) != 0)) {
    iVar2 = 0;
    state_name = "GETGRABBED";
    this_ptr_00 = (CMotionController *)(this_ptr + 0x2b4);
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(this_ptr_00);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(this_ptr_01,state_name,iVar2);
    if (-1 < iVar2) {
      fVar1 = (float)core_motion_cpp_FUN_005038a0(this_ptr_00,iVar2);
      if (0.0 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0
                  (this_ptr_00,"STAND",1);
      }
    }
  }
  core_charactr_cpp_CCharacter_releaseFromGrab_FUN_00427a10((CCharacter *)this_ptr);
  return;
}
