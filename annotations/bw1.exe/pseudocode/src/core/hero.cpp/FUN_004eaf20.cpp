// Name: core_hero.cpp_FUN_004eaf20
// Address: 004eaf20
// Address Range: [[004eaf20, 004eafce]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004eaf20(CCharacter *param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004eaf20(CCharacter *param_1)

{
  byte *this_ptr;
  CMotionList *this_ptr_00;
  float fVar1;
  char *state_name;
  int iVar2;
  
  if (*(int *)&param_1->field_0x26fc != 0) {
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"CHero::stopGettingGrabbed by %s, type %d\n",*(int *)&param_1->field_0x26fc,
               *(uint *)&param_1->field_0x2700);
  }
  if ((*(byte **)&param_1->field_0x68 == &DAT_0078a123) &&
     (*(int *)&param_1->field_0x24f8 != 0)) {
    iVar2 = 0;
    state_name = "GETGRABBED";
    this_ptr = &param_1->field_0x158;
    this_ptr_00 = core_motion_cpp_FUN_00524a00((CMotionController *)this_ptr);
    iVar2 = core_motion_cpp_FUN_00524150(this_ptr_00,state_name,iVar2);
    if (-1 < iVar2) {
      fVar1 = (float)core_motion_cpp_FUN_00524a40(this_ptr,iVar2);
      if (0.0 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850
                  ((CMotionController *)this_ptr,"STAND",1);
      }
    }
  }
  core_charactr_cpp_FUN_00431440(param_1);
  return;
}
