// Name: core_msnedit.cpp_drawMotionBar_FUN_00536e20
// Address: 00536e20
// Address Range: [[00536e20, 00537225]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_drawMotionBar_FUN_00536e20(void)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_drawMotionBar_FUN_00536e20(void)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  SMotion *motion_name;
  int iVar2;
  float local_f8;
  char local_f4 [200];
  double local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  INT_02f7c538 = 0;
  if ((((g_CDemonMissionPtr->selected_actor != (CDemonActor *)0x0) && (-1 < INT_02f7c52c)) &&
      (INT_02f7c52c < g_MsnEditPropertyList.count)) &&
     ((g_MsnEditPropertyList.properties[INT_02f7c52c].type == PROP_MOTION &&
      (this_ptr = g_MsnEditPropertyList.properties[INT_02f7c52c].data.v_dfm_ptr,
      this_ptr != (CDeformableModelInstance *)0x0)))) {
    local_14 = 0x9b;
    iVar2 = (g_CDemonMissionPtr->viewport).bottom + -0x38;
    iVar1 = (g_CDemonMissionPtr->viewport).bottom + -1;
    local_20 = (g_CDemonMissionPtr->viewport).bottom + -0x33;
    local_24 = 4;
    if (((0 < g_MouseX) && ((g_MouseX < 0x9c && (iVar2 <= g_MouseY)))) && (g_MouseY <= iVar1)) {
      INT_02f7c538 = 1;
    }
    engine_2d_c_fillRectWithBorder_FUN_00403200(1,iVar2,0x9b,iVar1,0,0xff);
    motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&this_ptr->motion_controller);
    local_f8 = (this_ptr->motion_controller).current_frame_number;
    core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(&this_ptr->motion_controller)
    ;
    _sprintf(local_f4,"%s (%s)",motion_name);
    iVar1 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(local_f4,local_24,local_20,1,0);
    if (iVar1 != 0) {
      core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                (g_MsnEditPropertyList.properties + INT_02f7c52c,g_CDemonMissionPtr->selected_actor)
      ;
    }
    iVar1 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                      (" X ",local_14 + -0x11,local_20,1,0);
    if (iVar1 != 0) {
      INT_02f7c52c = -1;
    }
    _sprintf(local_f4,"%6.2f",(double)local_f8);
    iVar1 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0(local_f4,local_24,local_20 + 0x10,1,0)
    ;
    if (iVar1 != 0) {
      local_18 = motion_name->frame_count + -1;
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",&local_f8,1,0.0,(float)local_18,1);
    }
    iVar1 = local_24;
    local_1c = local_20 + 0x21;
    iVar2 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                      (" << ",local_24 + 7,local_1c,1,0);
    if (iVar2 != 0) {
      INT_02f7c530 = 0;
      local_f8 = 0.0;
    }
    iVar2 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                      (" < ",iVar1 + 0x23,local_1c,0,0);
    if (iVar2 != 0) {
      local_2c = ceil((double)local_f8);
      local_f8 = (float)((float10)local_2c + (float10)-1);
      if ((float10)local_2c + (float10)-1 < (float10)0) {
        local_18 = motion_name->frame_count + -1;
        local_f8 = (float)local_18;
      }
      INT_02f7c530 = 0;
    }
    if (INT_02f7c530 == 0) {
      iVar2 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                        (" |> ",iVar1 + 0x38,local_1c,1,0);
      if (iVar2 != 0) {
        INT_02f7c530 = 1;
      }
    }
    else {
      iVar2 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                        (" || ",iVar1 + 0x38,local_1c,1,0);
      if (iVar2 != 0) {
        INT_02f7c530 = 0;
      }
    }
    iVar2 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                      (" > ",iVar1 + 0x54,local_1c,0,0);
    if (iVar2 != 0) {
      local_2c = floor((double)local_f8);
      local_f8 = (float)local_2c + 1.0;
      INT_02f7c530 = 0;
    }
    iVar1 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                      (" >> ",iVar1 + 0x69,local_1c,1,0);
    if (iVar1 != 0) {
      local_18 = motion_name->frame_count + -1;
      INT_02f7c530 = 0;
      local_f8 = (float)local_18;
    }
    if ((INT_02f7c530 != 0) &&
       (local_f8 = g_CGamePtr->delta_time_float * motion_name->fps + local_f8,
       (float)motion_name->frame_count <= local_f8)) {
      local_f8 = 0.0;
    }
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              (&this_ptr->motion_controller,motion_name->motion_name,local_f8);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(this_ptr);
  }
  return;
}
