// Name: core_msnedit.cpp_drawMotionBar_FUN_00536e20
// Address: 00536e20
// MANUAL RECONSTRUCTION
// Address Range: [[00536e20, 00537225]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_drawMotionBar_FUN_00536e20(void)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_drawMotionBar_FUN_00536e20(void)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  SMotion *motion_name;
  char *pcVar5;
  int iVar3;
  int iVar4;
  int iVar2;
  double dVar5;
  float local_f8;
  char local_f4 [200];
  
  INT_02f7c538 = 0;
  if ((((g_CDemonMissionPtr->selected_actor != (CDemonActor *)0x0) &&
       (-1 < g_SelectedMotionPropertyIndex)) &&
      (g_SelectedMotionPropertyIndex < g_MsnEditPropertyList.count)) &&
     ((g_MsnEditPropertyList.properties[g_SelectedMotionPropertyIndex].type == PROP_MOTION &&
      (this_ptr_00 = g_MsnEditPropertyList.properties[g_SelectedMotionPropertyIndex].data.v_dfm_ptr,
      this_ptr_00 != (CDeformableModelInstance *)0x0)))) {
    iVar2 = (g_CDemonMissionPtr->viewport).bottom + -0x38;
    iVar4 = (g_CDemonMissionPtr->viewport).bottom;
    iVar1 = (g_CDemonMissionPtr->viewport).bottom + -1;
    if (((0 < g_MouseX) && ((g_MouseX < 0x9c && (iVar2 <= g_MouseY)))) && (g_MouseY <= iVar1)) {
      INT_02f7c538 = 1;
    }
    engine_2d_c_fillRectWithBorder_FUN_00403200(1,iVar2,0x9b,iVar1,0,0xff);
    motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&this_ptr_00->motion_controller);
    local_f8 = (this_ptr_00->motion_controller).current_frame_number;
    pcVar5 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
              (&this_ptr_00->motion_controller);
    _sprintf(local_f4,"%s (%s)",motion_name->motion_name,pcVar5);
    iVar3 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(local_f4,4,iVar4 + -0x33,1,0);
    if (iVar3 != 0) {
      core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                (g_MsnEditPropertyList.properties + g_SelectedMotionPropertyIndex,
                 g_CDemonMissionPtr->selected_actor);
    }
    iVar3 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(" X ",0x8a,iVar4 + -0x33,1,0);
    if (iVar3 != 0) {
      g_SelectedMotionPropertyIndex = -1;
    }
    _sprintf(local_f4,"%6.2f",(double)local_f8);
    iVar3 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(local_f4,4,iVar4 + -0x23,1,0);
    if (iVar3 != 0) {
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",&local_f8,1,0.0,
                 (float)(motion_name->frame_count + -1),1);
    }
    iVar4 = iVar4 + -0x12;
    iVar3 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(" << ",0xb,iVar4,1,0);
    if (iVar3 != 0) {
      g_MotionPropertyEditState = 0;
      local_f8 = 0.0;
    }
    iVar3 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(" < ",0x27,iVar4,0,0);
    if (iVar3 != 0) {
      dVar5 = ceil((double)local_f8);
      local_f8 = (float)((float10)dVar5 + (float10)-1);
      if ((float10)dVar5 + (float10)-1 < (float10)0) {
        local_f8 = (float)(motion_name->frame_count + -1);
      }
      g_MotionPropertyEditState = 0;
    }
    if (g_MotionPropertyEditState == 0) {
      iVar3 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(" |> ",0x3c,iVar4,1,0);
      if (iVar3 != 0) {
        g_MotionPropertyEditState = 1;
      }
    }
    else {
      iVar3 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(" || ",0x3c,iVar4,1,0);
      if (iVar3 != 0) {
        g_MotionPropertyEditState = 0;
      }
    }
    iVar3 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(" > ",0x58,iVar4,0,0);
    if (iVar3 != 0) {
      dVar5 = floor((double)local_f8);
      local_f8 = (float)dVar5 + 1.0;
      g_MotionPropertyEditState = 0;
    }
    iVar4 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(" >> ",0x6d,iVar4,1,0);
    if (iVar4 != 0) {
      g_MotionPropertyEditState = 0;
      local_f8 = (float)(motion_name->frame_count + -1);
    }
    if ((g_MotionPropertyEditState != 0) &&
       (local_f8 = g_CGamePtr->delta_time_float * motion_name->fps + local_f8,
       (float)motion_name->frame_count <= local_f8)) {
      local_f8 = 0.0;
    }
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              (&this_ptr_00->motion_controller,motion_name->motion_name,local_f8);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              (this_ptr_00);
  }
  return;
}
