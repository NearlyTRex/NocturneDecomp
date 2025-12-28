// Name: core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220
// Address: 0053e220
// Address Range: [[0053e220, 0053e9d9]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_msnedit.cpp_PrepareMissionAndEditGore(uint param_1) */

void core_msnedit_cpp_PrepareMissionAndEditGore_FUN_0053e220
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,
               CDemonMission *param_5)

{
  CGame *this_ptr;
  CBoxActor *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *unaff_EBP;
  CDemonActor *unaff_ESI;
  float *unaff_EDI;
  byte bVar2;
  float afStackY_1030 [964];
  uint uStack_110;
  uint uStack_f4;
  uint uStack_f0;
  CGame *in_stack_ffffff1c;
  float fVar3;
  CVector3i *output_ptr;
  CDemonSet *input_ptr;
  float fVar4;
  float fVar5;
  CDemonSet *pCVar6;
  float fStack_b0;
  CEditorTools *in_stack_ffffff58;
  float in_stack_ffffff5c;
  float fStack_a0;
  float in_stack_ffffff64;
  CKeys *in_stack_ffffff68;
  float in_stack_ffffff6c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CEditorTools *pCStack_80;
  float fStack_7c;
  float fStack_78;
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
  CBoxActor *pCStack_18;
  COrientation *pCStack_14;
  
  this_ptr = g_CGamePtr;
  bVar2 = 0;
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
  uStack_110 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(g_CDemonSetPtr);
  uStack_110 = 0x53e2b8;
  core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
  uStack_110 = 0x53e2cc;
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
  uStack_f4 = 0x53e31d;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  uStack_f0 = 0x53e322;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  uStack_f0 = 0x53e32e;
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff1c);
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xffffff34);
  fStack_2c = (float)g_CDemonCameraInstance.corona_blend_factor;
  this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\msnedit.cpp",0xe7b);
  pCStack_18 = (CBoxActor *)0x0;
  if (this_ptr_00 != (CBoxActor *)0x0) {
    pCStack_18 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(this_ptr_00);
  }
  if (pCStack_18 == (CBoxActor *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xe7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::editGore - Out of memory");
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)pCStack_18->model_name,"stranger-hat.kfm");
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(param_5);
  *(uint *)((int)pCStack_14 + 0x28) = 0;
  *(uint *)((int)pCStack_14 + 0x24) = *(uint *)((int)pCStack_14 + 0x28);
  *(uint *)((int)pCStack_14 + 0x20) = *(uint *)((int)pCStack_14 + 0x28);
  (unaff_EBP->orient).heading = 0.0;
  (unaff_EBP->orient).bank = (unaff_EBP->orient).heading;
  (unaff_EBP->orient).pitch = (unaff_EBP->orient).bank;
  (*unaff_EBP->vtable->setup)(unaff_EBP);
  iVar1 = (int)pCStack_14 + 0x20;
  core_mission_cpp_CDemonMission_FUN_00523b70(param_5);
  pCStack_14 = &unaff_EBP->orient;
  pCStack_18 = (CBoxActor *)iVar1;
  while( true ) {
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    *(CEditorTools **)unaff_EBP->actor_name = in_stack_ffffff58;
    *(float *)(unaff_EBP->actor_name + 4) = in_stack_ffffff5c;
    *(float *)(unaff_EBP->actor_name + 8) = fStack_a0;
    if ((float *)&stack0xffffff64 != unaff_EDI) {
      *unaff_EDI = in_stack_ffffff64;
      unaff_EDI[1] = (float)in_stack_ffffff68;
      unaff_EDI[2] = in_stack_ffffff6c;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(unaff_ESI);
    fVar3 = 7.704338e-39;
    input_ptr = g_CDemonSetPtr;
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(g_CDemonSetPtr,unaff_ESI,0);
    fVar4 = 7.704354e-39;
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(param_5);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pCVar6 = g_CDemonSetPtr;
    if (*(int *)(param_5->field2_0xc + 0x2c) == 0) {
      g_CDemonCameraInstance.corona_blend_factor = unaff_EBX;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      pCVar6->unk_lighting_param1 = 0;
    }
    else {
      g_CDemonCameraInstance.corona_blend_factor = 0xffff;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      pCVar6->unk_lighting_param1 = 1;
    }
    pCVar6 = g_CDemonSetPtr;
    g_CDemonSetPtr->unk_lighting_param3 = (uint)(*(int *)(param_5->field2_0xc + 0x24) == 0);
    fStack_b0 = 0.0;
    pCVar6->unk_lighting_param4 = (uint)(*(int *)(param_5->field2_0xc + 0x28) == 0);
    fVar5 = 7.704514e-39;
    core_set_cpp_CDemonSet_FUN_0056c1a0(pCVar6);
    fStack_b0 = 7.704534e-39;
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0();
    in_stack_ffffff5c = 0.0;
    in_stack_ffffff58 = g_CEditorToolsPtr;
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    fStack_a0 = 7.70459e-39;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    fStack_a0 = 7.704607e-39;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    in_stack_ffffff6c = 1.4013e-45;
    in_stack_ffffff64 = 7.70465e-39;
    in_stack_ffffff68 = g_CKeysPtr;
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar1 != 0) break;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xffffff48);
    if (((byte)g_MouseButtonFlags & 1) != 0) {
      if ((((0 < g_MouseX) && (g_MouseX < g_WindowWidth + -2)) && (0 < g_MouseY)) &&
         (g_MouseY < g_WindowHeight + -2)) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,(CVector3i *)g_MouseX,g_MouseY,(int)fVar3);
        output_ptr = &CStack_28;
        fStack_2c = afStack_44[1];
        *(float *)((int)&CStack_28 + (uint)bVar2 * -8) = afStack_44[(uint)bVar2 * -2 + 2];
        *(float *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 4) =
             afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 3];
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,output_ptr,(CVector3i *)input_ptr);
        CStack_28.x = iStack_48;
        *(float *)((int)&CStack_28 + (uint)bVar2 * -8 + 4) = afStack_44[(uint)bVar2 * -2];
        *(float *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
             afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        fStack_88 = (float)CStack_28.y * _DAT_00661c30;
        fStack_84 = (float)CStack_28.z * _DAT_00661c30;
        pCStack_80 = (CEditorTools *)((float)iStack_1c * _DAT_00661c30);
        if ((float *)&stack0xffffff54 != &fStack_84) {
          in_stack_ffffff58 = pCStack_80;
          in_stack_ffffff5c = fStack_7c;
        }
      }
      g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
    }
    fVar3 = 7.9874e-44;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x39);
    if ((iVar1 != 0) && (fVar3 - g_CGamePtr->delta_time_float < 0.0)) {
      core_gore_cpp_FUN_004edaa0();
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1c);
    if ((iVar1 != 0) && (fVar4 - g_CGamePtr->delta_time_float < 0.0)) {
      fStack_58 = (float)10;
      fStack_60 = *(float *)((int)pCStack_18 + 0x44) * fStack_58;
      fStack_5c = *(float *)((int)pCStack_18 + 0x50) * fStack_58;
      fStack_58 = fStack_58 * *(float *)((int)pCStack_18 + 0x5c);
      core_gore_cpp_FUN_004edaa0();
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    if (iVar1 != 0) {
      CStack_74.y = fStack_b0;
      in_stack_ffffff68 = (CKeys *)((float)pCVar6 + -100f);
      in_stack_ffffff6c = fStack_b0;
      fStack_78 = fVar5;
      CStack_74.x = (float)pCVar6;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      unaff_EDI = (float *)core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                                     (g_CDemonSetPtr,&CStack_74,(CVector3f *)&stack0xffffff68);
      in_stack_ffffff64 = fVar5;
      if ((0.0 < (float)unaff_EDI) && ((float)unaff_EDI < 1.0)) {
        fStack_34 = in_stack_ffffff6c - CStack_74.y;
        fStack_64 = fStack_34 * (float)unaff_EDI;
        fStack_30 = fStack_90 - CStack_74.z;
        fStack_2c = fStack_8c - fStack_68;
        fStack_60 = fStack_30 * (float)unaff_EDI;
        fStack_5c = fStack_2c * (float)unaff_EDI;
        fStack_7c = CStack_74.y + fStack_64;
        fStack_78 = CStack_74.z + fStack_60;
        CStack_74.x = fStack_68 + fStack_5c;
        core_gore_cpp_FUN_004ede30();
        in_stack_ffffff64 = fVar5;
      }
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if ((iVar1 != 0) &&
       (iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Reset gore?"), iVar1 != 0)) {
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
  pCVar6 = g_CDemonSetPtr;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  pCVar6->unk_lighting_param1 = 0;
  pCVar6->unk_lighting_param3 = 0;
  pCVar6->unk_lighting_param4 = 0;
  return;
}
