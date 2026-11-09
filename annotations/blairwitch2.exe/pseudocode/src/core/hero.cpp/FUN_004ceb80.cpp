// Name: core_hero.cpp_FUN_004ceb80
// Address: 004ceb80
// Address Range: [[004ceb80, 004cec2e]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004ceb80(CCharacter *param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004ceb80(CCharacter *param_1)

{
  byte *this_ptr;
  CMotionList *this_ptr_00;
  float fVar1;
  char *state_name;
  int iVar2;
  
  if (*(int *)&param_1->field_0x276c != 0) {
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"CHero::stopGettingGrabbed by %s, type %d\n",*(int *)&param_1->field_0x276c,
               *(uint *)&param_1->field_0x2770);
  }
  if ((*(byte **)&param_1->field_0x68 == &DAT_0078a123) &&
     (*(int *)&param_1->field_0x2564 != 0)) {
    iVar2 = 0;
    state_name = "GETGRABBED";
    this_ptr = &param_1->field_0x2b4;
    this_ptr_00 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr);
    iVar2 = core_motion_cpp_FUN_00502fa0(this_ptr_00,state_name,iVar2);
    if (-1 < iVar2) {
      fVar1 = (float)core_motion_cpp_FUN_005038a0(this_ptr,iVar2);
      if (0.0 < fVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_005036b0
                  ((CMotionController *)this_ptr,"STAND",1);
      }
    }
  }
  core_charactr_cpp_FUN_00427a10(param_1);
  return;
}
