// Name: core_hero.cpp_CHero_releaseFromGrab_FUN_004eaf20
// Address: 004eaf20
// Address Range: [[004eaf20, 004eafce]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004eaf20(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_releaseFromGrab_FUN_004eaf20(CHero *this_ptr)

{
  CMotionController *this_ptr_00;
  CMotionList *this_ptr_01;
  float fVar1;
  char *state_name;
  int iVar2;
  
  if (*(int *)(this_ptr + 0x26fc) != 0) {
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"CHero::stopGettingGrabbed by %s, type %d\n",*(int *)(this_ptr + 0x26fc),
               *(uint *)(this_ptr + 0x2700));
  }
  if ((*(byte **)(this_ptr + 0x68) == &DAT_0078a123) && (*(int *)(this_ptr + 0x24f8) != 0)) {
    iVar2 = 0;
    state_name = "GETGRABBED";
    this_ptr_00 = (CMotionController *)(this_ptr + 0x158);
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(this_ptr_00);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_00524150(this_ptr_01,state_name,iVar2);
    if (-1 < iVar2) {
      fVar1 = (float)core_motion_cpp_FUN_00524a40(this_ptr_00,iVar2);
      if (0.0 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850
                  (this_ptr_00,"STAND",1);
      }
    }
  }
  core_charactr_cpp_CCharacter_releaseFromGrab_FUN_00431440((CCharacter *)this_ptr);
  return;
}
