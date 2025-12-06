// Name: core_msnedit.cpp_FUN_00536e20
// Address: 00536e20
// Address Range: [[00536e20, 00537225]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00536e20()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_msnedit.cpp_FUN_00536e20() */

void core_msnedit_cpp_FUN_00536e20(void)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  SMotion *motion_name;
  char *pcVar2;
  uint extraout_EAX;
  uint extraout_EDX;
  int y1;
  BADSPACEBASE *in_ESP;
  float10 extraout_ST0;
  float in_stack_00000014;
  float fStack_d4;
  float in_stack_ffffff38;
  float in_stack_ffffff3c;
  
  DAT_02f7c538 = 0;
  if ((((*(int *)(g_CDemonMissionPtr->field2_0xc + 0x1c) != 0) && (-1 < DAT_02f7c52c)) &&
      (DAT_02f7c52c < _DAT_02f7a028)) &&
     ((*(int *)(&DAT_02f7a02c + DAT_02f7c52c * 0xec) == 0xd &&
      (this_ptr = *(CDeformableModelInstance **)(&DAT_02f7a094 + DAT_02f7c52c * 0xec),
      this_ptr != (CDeformableModelInstance *)0x0)))) {
    y1 = *(int *)(g_CDemonMissionPtr->field2_0xc + 0x14) + -0x38;
    iVar1 = *(int *)(g_CDemonMissionPtr->field2_0xc + 0x14) + -1;
    if (((0 < g_MouseX) && ((g_MouseX < 0x9c && (y1 <= g_MouseY)))) && (g_MouseY <= iVar1)) {
      DAT_02f7c538 = 1;
    }
    engine_2d_c_fillRectWithBorder_FUN_00403200(1,y1,0x9b,iVar1,0,0xff);
    motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&this_ptr->motion_controller);
    pcVar2 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
                       (&this_ptr->motion_controller);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff18,"%s (%s)",motion_name,pcVar2);
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                ((CActorProperty *)(&DAT_02f7a02c + DAT_02f7c52c * 0xec),
                 *(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c));
    }
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      DAT_02f7c52c = -1;
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff28,"%6.2f");
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",&fStack_d4,true,0.0,
                 (float)(motion_name->frame_count + -1),true);
    }
    fStack_d4 = 0.0;
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      DAT_02f7c530 = 0;
    }
    fStack_d4 = 0.0;
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      fStack_d4 = 7.662741e-39;
      crt_math_c_ceil_FUN_006001b2((double)in_stack_ffffff38);
      if ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX) + _DAT_0063b73c < 0.0) {
        in_stack_00000014 = (float)(motion_name->frame_count + -1);
      }
      DAT_02f7c530 = 0;
    }
    if (DAT_02f7c530 == 0) {
      fStack_d4 = 1.4013e-45;
      iVar1 = core_msnedit_cpp_FUN_00536cd0();
      if (iVar1 != 0) {
        DAT_02f7c530 = 1;
      }
    }
    else {
      fStack_d4 = 1.4013e-45;
      iVar1 = core_msnedit_cpp_FUN_00536cd0();
      if (iVar1 != 0) {
        DAT_02f7c530 = 0;
      }
    }
    fStack_d4 = in_stack_00000014;
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      crt_math_c_floor_FUN_005feb90((double)extraout_ST0);
      DAT_02f7c530 = 0;
    }
    fStack_d4 = in_stack_00000014;
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      DAT_02f7c530 = 0;
      in_stack_ffffff3c = (float)(motion_name->frame_count + -1);
    }
    if ((DAT_02f7c530 != 0) &&
       (in_stack_ffffff3c = g_CGamePtr->delta_time_float * motion_name->fps + in_stack_ffffff3c,
       (float)motion_name->frame_count <= in_stack_ffffff3c)) {
      in_stack_ffffff3c = 0.0;
    }
    fStack_d4 = 7.663201e-39;
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              (&this_ptr->motion_controller,motion_name->motion_name,in_stack_ffffff3c);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr);
  }
  return;
}
