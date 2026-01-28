// Name: core_msnedit.cpp_FUN_00536e20
// Address: 00536e20
// Address Range: [[00536e20, 00537225]]
// Convention: unknown
// Signature: void core_msnedit_cpp_FUN_00536e20(void)

#include "nocturne.h"

void core_msnedit_cpp_FUN_00536e20(void)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  SMotion *motion_name;
  char *pcVar2;
  int y1;
  double dVar3;
  float frame_number;
  float local_f8;
  char local_f4 [192];
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  DAT_02f7c538 = 0;
  if ((((*(int *)(g_CDemonMissionPtr->unk2 + 0x1c) != 0) && (-1 < INT_02f7c52c)) &&
      (INT_02f7c52c < INT_02f7a028)) &&
     ((*(int *)(&DAT_02f7a02c + INT_02f7c52c * 0xec) == 0xd &&
      (this_ptr = *(CDeformableModelInstance **)(&DAT_02f7a094 + INT_02f7c52c * 0xec),
      this_ptr != (CDeformableModelInstance *)0x0)))) {
    local_14 = 0x9b;
    y1 = *(int *)(g_CDemonMissionPtr->unk2 + 0x14) + -0x38;
    iVar1 = *(int *)(g_CDemonMissionPtr->unk2 + 0x14) + -1;
    local_20 = *(int *)(g_CDemonMissionPtr->unk2 + 0x14) + -0x33;
    local_24 = 4;
    if (((0 < g_MouseX) && ((g_MouseX < 0x9c && (y1 <= g_MouseY)))) && (g_MouseY <= iVar1)) {
      DAT_02f7c538 = 1;
    }
    engine_2d_c_fillRectWithBorder_FUN_00403200(1,y1,0x9b,iVar1,0,0xff);
    motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&this_ptr->motion_controller);
    local_f8 = (this_ptr->motion_controller).current_frame_number;
    pcVar2 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
                       (&this_ptr->motion_controller);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_f4,"%s (%s)",motion_name,pcVar2);
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                ((CActorProperty *)(&DAT_02f7a02c + INT_02f7c52c * 0xec),
                 *(CDemonActor **)(g_CDemonMissionPtr->unk2 + 0x1c));
    }
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      INT_02f7c52c = -1;
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_f4,"%6.2f",SUB84((double)local_f8,0),
               (int)((ulonglong)(double)local_f8 >> 0x20));
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      local_18 = motion_name->frame_count + -1;
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",&local_f8,1,0.0,(float)local_18,1);
    }
    local_1c = local_20 + 0x21;
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      INT_02f7c530 = 0;
      local_f8 = 0.0;
    }
    frame_number = 0.0;
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      dVar3 = crt_math_c_ceil_FUN_006001b2((double)local_f8);
      uStack_30 = SUB84(dVar3,0);
      local_2c = (uint)((ulonglong)dVar3 >> 0x20);
      frame_number = (float)((float10)dVar3 + (float10)-1);
      if ((float10)dVar3 + (float10)-1 < (float10)0) {
        local_1c = motion_name->frame_count + -1;
        frame_number = (float)local_1c;
      }
      INT_02f7c530 = 0;
    }
    if (INT_02f7c530 == 0) {
      iVar1 = core_msnedit_cpp_FUN_00536cd0();
      if (iVar1 != 0) {
        INT_02f7c530 = 1;
      }
    }
    else {
      iVar1 = core_msnedit_cpp_FUN_00536cd0();
      if (iVar1 != 0) {
        INT_02f7c530 = 0;
      }
    }
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      dVar3 = crt_math_c_floor_FUN_005feb90((double)frame_number);
      uStack_34 = SUB84(dVar3,0);
      uStack_30 = (uint)((ulonglong)dVar3 >> 0x20);
      INT_02f7c530 = 0;
    }
    iVar1 = core_msnedit_cpp_FUN_00536cd0();
    if (iVar1 != 0) {
      local_1c = motion_name->frame_count + -1;
      INT_02f7c530 = 0;
      frame_number = (float)local_1c;
    }
    if ((INT_02f7c530 != 0) &&
       (frame_number = g_CGamePtr->delta_time_float * motion_name->fps + frame_number,
       (float)motion_name->frame_count <= frame_number)) {
      frame_number = 0.0;
    }
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              (&this_ptr->motion_controller,motion_name->motion_name,frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr);
  }
  return;
}
