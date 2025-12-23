// Name: core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220
// Address: 0053e220
// Address Range: [[0053e220, 0053e9d9]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_msnedit.cpp_PrepareMissionAndEditGore(uint param_1) */

void core_msnedit_cpp_PrepareMissionAndEditGore_FUN_0053e220
               (uint param_1,uint param_2,CDemonActor *unaff_EBX,uint param_4,
               CDemonMission *param_5)

{
  CGame *this_ptr;
  CBoxActor *this_ptr_00;
  int iVar1;
  CBoxActor *pCVar2;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float *unaff_EDI;
  byte bVar3;
  int unaff_retaddr;
  float in_stack_00000038;
  CDemonActor *in_stack_0000003c;
  float afStackY_1030 [982];
  int iVar4;
  CVector3i *output_ptr;
  CVector3i *input_ptr;
  float fVar5;
  CDemonActor *pCVar6;
  float fVar7;
  float fVar8;
  CDemonSet *this_ptr_01;
  CDemonActor *pCVar9;
  float fVar10;
  float fVar11;
  CGame *in_stack_ffffff68;
  float fVar12;
  CDemonSet *pCVar13;
  char *pcVar14;
  float fVar15;
  float fStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_48;
  float afStack_44 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3i CStack_28;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  this_ptr = g_CGamePtr;
  bVar3 = 0;
  DAT_02f7c634 = 0;
  param_5->field0_0x0[4] = '\x01';
  param_5->field0_0x0[5] = '\0';
  param_5->field0_0x0[6] = '\0';
  param_5->field0_0x0[7] = '\0';
  core_game_cpp_CGame_setGameRes_FUN_004dade0(this_ptr);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(&g_CDemonLightInstance);
  g_CDemonLightInstance.light_enabled_flag = 0;
  g_CDemonLightInstance.base.max_distance = 64.0;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(g_CDemonSetPtr);
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(g_CDemonSetPtr);
  core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing actors.");
  core_mission_cpp_CDemonMission_FUN_00523cf0(param_5);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Setting initial camera view.");
  param_5->field2_0xc[4] = '\0';
  param_5->field2_0xc[5] = '\0';
  param_5->field2_0xc[6] = '\0';
  param_5->field2_0xc[7] = '\0';
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
            (g_CDemonSetPtr,*(int *)(param_5->field2_0xc + 4));
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(param_5);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pCVar9 = (CDemonActor *)0x53e32e;
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  fVar10 = 7.703863e-39;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff68);
  fVar11 = 7.703881e-39;
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xffffff80);
  pcVar14 = "..\\core\\msnedit.cpp";
  pCVar13 = (CDemonSet *)0x66c;
  fVar12 = 7.70393e-39;
  this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\msnedit.cpp",0xe7b);
  pCVar2 = (CBoxActor *)0x0;
  if (this_ptr_00 != (CBoxActor *)0x0) {
    pCVar2 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(this_ptr_00);
  }
  if (pCVar2 == (CBoxActor *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xe7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::editGore - Out of memory");
  }
  fVar15 = 7.703998e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)pCVar2->model_name,"stranger-hat.kfm");
  fStack_80 = in_stack_00000038;
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(param_5);
  *(uint *)((int)in_stack_00000038 + 0x28) = 0;
  *(uint *)((int)in_stack_00000038 + 0x24) = *(uint *)((int)in_stack_00000038 + 0x28);
  *(uint *)((int)in_stack_00000038 + 0x20) = *(uint *)((int)in_stack_00000038 + 0x28);
  (in_stack_0000003c->orient).heading = 0.0;
  (in_stack_0000003c->orient).bank = (in_stack_0000003c->orient).heading;
  (in_stack_0000003c->orient).pitch = (in_stack_0000003c->orient).bank;
  fStack_80 = 7.704122e-39;
  (*in_stack_0000003c->vtable->setup)(in_stack_0000003c);
  core_mission_cpp_CDemonMission_FUN_00523b70(param_5);
  iStack_14 = (int)in_stack_00000038 + 0x20;
  while( true ) {
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    iVar4 = 0;
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    *unaff_EDI = (float)pCVar9;
    unaff_EDI[1] = fVar10;
    unaff_EDI[2] = fVar11;
    if ((float *)&stack0xffffff68 != unaff_ESI) {
      *unaff_ESI = fVar12;
      unaff_ESI[1] = (float)pCVar13;
      unaff_ESI[2] = (float)pcVar14;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(unaff_EBX);
    input_ptr = (CVector3i *)0x53e48f;
    pCVar6 = unaff_EBX;
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(g_CDemonSetPtr,unaff_EBX,0);
    fVar7 = 7.704354e-39;
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(param_5);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pCVar13 = g_CDemonSetPtr;
    if (*(int *)(param_5->field2_0xc + 0x2c) == 0) {
      g_CDemonCameraInstance.corona_blend_factor = unaff_retaddr;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      pCVar13->unk_lighting_param1 = 0;
    }
    else {
      g_CDemonCameraInstance.corona_blend_factor = 0xffff;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      pCVar13->unk_lighting_param1 = 1;
    }
    this_ptr_01 = g_CDemonSetPtr;
    g_CDemonSetPtr->unk_lighting_param3 = (uint)(*(int *)(param_5->field2_0xc + 0x24) == 0);
    this_ptr_01->unk_lighting_param4 = (uint)(*(int *)(param_5->field2_0xc + 0x28) == 0);
    fVar8 = 7.704514e-39;
    core_set_cpp_CDemonSet_FUN_0056c1a0(this_ptr_01);
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0();
    fVar10 = 0.0;
    pCVar9 = (CDemonActor *)g_CEditorToolsPtr;
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    fVar11 = 7.704607e-39;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    pcVar14 = (char *)0x1;
    fVar12 = 7.70465e-39;
    pCVar13 = (CDemonSet *)g_CKeysPtr;
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar1 != 0) break;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xffffff48);
    if (((byte)g_MouseButtonFlags & 1) != 0) {
      if ((((0 < g_MouseX) && (g_MouseX < g_WindowWidth + -2)) && (0 < g_MouseY)) &&
         (g_MouseY < g_WindowHeight + -2)) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,(CVector3i *)g_MouseX,g_MouseY,iVar4);
        output_ptr = &CStack_28;
        fStack_2c = afStack_44[1];
        *(float *)((int)&CStack_28 + (uint)bVar3 * -8) = afStack_44[(uint)bVar3 * -2 + 2];
        *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 4) =
             afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 3];
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,output_ptr,input_ptr);
        CStack_28.x = iStack_48;
        *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) = afStack_44[(uint)bVar3 * -2];
        *(float *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        fStack_80 = (float)iStack_1c * _DAT_00661c30;
        if (&stack0xffffff54 != &stack0xffffff7c) {
          pCVar9 = in_stack_0000003c;
        }
      }
      g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
    }
    fVar5 = 7.9874e-44;
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x39);
    if ((iVar4 != 0) && (fVar5 - g_CGamePtr->delta_time_float < 0.0)) {
      core_gore_cpp_FUN_004edaa0();
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1c);
    if ((iVar4 != 0) && ((float)pCVar6 - g_CGamePtr->delta_time_float < 0.0)) {
      fStack_58 = (float)10;
      fStack_60 = *(float *)(iStack_18 + 0x44) * fStack_58;
      fStack_5c = *(float *)(iStack_18 + 0x50) * fStack_58;
      fStack_58 = fStack_58 * *(float *)(iStack_18 + 0x5c);
      core_gore_cpp_FUN_004edaa0();
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    if (iVar4 != 0) {
      fVar12 = fVar8 + -100f;
      CStack_74.x = fVar8;
      CStack_74.y = (float)this_ptr_01;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      unaff_EDI = (float *)core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                                     (g_CDemonSetPtr,&CStack_74,(CVector3f *)&stack0xffffff68);
      fVar11 = fVar7;
      pCVar13 = this_ptr_01;
      if ((0.0 < (float)unaff_EDI) && ((float)unaff_EDI < 1.0)) {
        fStack_34 = (float)this_ptr_01 - CStack_74.y;
        fStack_64 = fStack_34 * (float)unaff_EDI;
        fStack_30 = (float)pcVar14 - CStack_74.z;
        fStack_2c = fVar15 - fStack_68;
        fStack_60 = fStack_30 * (float)unaff_EDI;
        fStack_5c = fStack_2c * (float)unaff_EDI;
        in_stack_0000003c = (CDemonActor *)(CStack_74.y + fStack_64);
        CStack_74.x = fStack_68 + fStack_5c;
        core_gore_cpp_FUN_004ede30();
        fVar11 = fVar7;
        pCVar13 = this_ptr_01;
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if ((iVar4 != 0) &&
       (iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Reset gore?"), iVar4 != 0)) {
      core_gore_cpp_FUN_004ed760();
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
    }
  }
  core_mission_cpp_CDemonMission_FUN_00523f20(param_5);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(param_5);
  core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
  pCVar13 = g_CDemonSetPtr;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  pCVar13->unk_lighting_param1 = 0;
  pCVar13->unk_lighting_param3 = 0;
  pCVar13->unk_lighting_param4 = 0;
  return;
}
