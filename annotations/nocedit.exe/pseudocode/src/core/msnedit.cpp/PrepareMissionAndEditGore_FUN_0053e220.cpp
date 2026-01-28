// Name: core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220
// Address: 0053e220
// Address Range: [[0053e220, 0053e9d9]]
// Convention: unknown
// Signature: void core_msnedit_cpp_PrepareMissionAndEditGore_FUN_0053e220(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_PrepareMissionAndEditGore(uint param_1) */

void core_msnedit_cpp_PrepareMissionAndEditGore_FUN_0053e220(void)

{
  float fVar1;
  CGame *this_ptr;
  CDemonSet *pCVar2;
  CBoxActor *pCVar3;
  CDemonActor *actor;
  CBoxActor *pCVar4;
  int iVar5;
  byte bVar6;
  CDemonMission *in_stack_00000004;
  float afStackY_1030 [982];
  CGame *in_stack_ffffff30;
  CVector3i *input_ptr;
  float in_stack_ffffff4c;
  CKeys *in_stack_ffffff50;
  float in_stack_ffffff54;
  double in_stack_ffffff58;
  float fStack_a0;
  float fStack_9c;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  CVector3f aCStack_78 [2];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  CVector3i CStack_48;
  CVector3i aCStack_3c [2];
  CVector3i CStack_24;
  CBoxActor *pCStack_18;
  CDemonActor *pCStack_14;
  
  this_ptr = g_CGamePtr;
  bVar6 = 0;
  DAT_02f7c634 = 0;
  in_stack_00000004->unk1[4] = '\x01';
  in_stack_00000004->unk1[5] = '\0';
  in_stack_00000004->unk1[6] = '\0';
  in_stack_00000004->unk1[7] = '\0';
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
  core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Setting initial camera view.");
  in_stack_00000004->unk2[4] = '\0';
  in_stack_00000004->unk2[5] = '\0';
  in_stack_00000004->unk2[6] = '\0';
  in_stack_00000004->unk2[7] = '\0';
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
            (g_CDemonSetPtr,*(int *)(in_stack_00000004->unk2 + 4));
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff30);
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xffffff44);
  CStack_24.x = g_CDemonCameraInstance.corona_blend_factor;
  pCVar4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\msnedit.cpp",0xe7b);
  pCStack_18 = (CBoxActor *)0x0;
  if (pCVar4 != (CBoxActor *)0x0) {
    pCStack_18 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(pCVar4);
  }
  if (pCStack_18 == (CBoxActor *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xe7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::editGore - Out of memory");
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCStack_18->model,"stranger-hat.kfm");
  pCVar4 = pCStack_18;
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
  pCVar3 = pCStack_18;
  (pCVar4->base).location.position.z = 0.0;
  fVar1 = (pCVar4->base).location.position.z;
  (pCVar4->base).location.position.y = fVar1;
  (pCVar4->base).location.position.x = fVar1;
  (pCStack_18->base).orient.heading = 0.0;
  (pCStack_18->base).orient.bank = (pCStack_18->base).orient.heading;
  (pCStack_18->base).orient.pitch = (pCStack_18->base).orient.bank;
  (*((pCStack_18->base).vtable._ub)->setup)(&pCStack_18->base);
  core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
  pCStack_18 = (CBoxActor *)&(pCVar3->base).orient;
  CStack_24.z = (int)&(pCVar4->base).location;
  while( true ) {
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    actor = pCStack_14;
    ((CVector3f *)CStack_24.z)->x = in_stack_ffffff4c;
    ((CVector3f *)CStack_24.z)->y = (float)in_stack_ffffff50;
    ((CVector3f *)CStack_24.z)->z = in_stack_ffffff54;
    if ((CBoxActor *)&stack0xffffff58 != pCStack_18) {
      *(float *)&pCStack_18->base = SUB84(in_stack_ffffff58,0);
      *(float *)((int)pCStack_18 + 4) = (float)((ulonglong)in_stack_ffffff58 >> 0x20);
      *(float *)((int)pCStack_18 + 8) = fStack_a0;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCStack_14);
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(g_CDemonSetPtr,actor,0);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pCVar2 = g_CDemonSetPtr;
    if (*(int *)(in_stack_00000004->unk2 + 0x2c) == 0) {
      g_CDemonCameraInstance.corona_blend_factor = CStack_24.y;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      pCVar2->unk_lighting_param1 = 0;
    }
    else {
      g_CDemonCameraInstance.corona_blend_factor = 0xffff;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      pCVar2->unk_lighting_param1 = 1;
    }
    pCVar2 = g_CDemonSetPtr;
    g_CDemonSetPtr->unk_lighting_param3 = (uint)(*(int *)(in_stack_00000004->unk2 + 0x24) == 0);
    pCVar2->unk_lighting_param4 = (uint)(*(int *)(in_stack_00000004->unk2 + 0x28) == 0);
    core_set_cpp_CDemonSet_FUN_0056c1a0(pCVar2);
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar5 != 0) break;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xffffff54);
    if (((byte)g_MouseButtonFlags & 1) != 0) {
      if ((((0 < g_MouseX) && (g_MouseX < g_WindowWidth + -2)) && (0 < g_MouseY)) &&
         (g_MouseY < g_WindowHeight + -2)) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,g_MouseX,g_MouseY,aCStack_3c);
        input_ptr = &CStack_24;
        CStack_24.x = aCStack_3c[0].x;
        *(uint *)((int)&CStack_24 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)aCStack_3c + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)aCStack_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,input_ptr,&CStack_48);
        CStack_24.x = CStack_48.x;
        *(uint *)((int)&CStack_24 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)aCStack_3c + (uint)bVar6 * -8 + -8);
        *(uint *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)aCStack_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -4);
        fStack_84 = (float)CStack_24.x * 0.00390625f;
        fStack_80 = (float)CStack_24.y * 0.00390625f;
        fStack_7c = (float)CStack_24.z * 0.00390625f;
        if ((float *)&stack0xffffff54 != &stack0xffffff7c) {
          in_stack_ffffff58 = (double)CONCAT44(fStack_7c,fStack_80);
        }
      }
      g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x39);
    if ((iVar5 != 0) && ((float)in_stack_ffffff50 - g_CGamePtr->delta_time_float < 0.0)) {
      core_gore_cpp_FUN_004edaa0();
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1c);
    if (iVar5 == 0) {
      fStack_a0 = 0.0;
    }
    else {
      fStack_a0 = fStack_a0 - g_CGamePtr->delta_time_float;
      if (fStack_a0 < 0.0) {
        aCStack_3c[0].x = (int)(float)10;
        CStack_48.y = (int)(*(float *)(in_stack_00000004->unk2 + 0x38) * (float)aCStack_3c[0].x);
        CStack_48.z = (int)(*(float *)(in_stack_00000004->unk2 + 0x44) * (float)aCStack_3c[0].x);
        aCStack_3c[0].x = (int)((float)aCStack_3c[0].x * *(float *)(in_stack_00000004->unk2 + 0x50))
        ;
        fStack_a0 = fStack_a0 + 0.1f;
        core_gore_cpp_FUN_004edaa0();
      }
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    if (iVar5 != 0) {
      CStack_54.x = fStack_94;
      CStack_54.y = fStack_90;
      CStack_54.z = fStack_8c;
      aCStack_78[0].x = fStack_94;
      aCStack_78[0].y = fStack_90 + -100.0f;
      aCStack_78[0].z = fStack_8c;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      fStack_9c = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                            (g_CDemonSetPtr,&CStack_54,aCStack_78);
      in_stack_ffffff58 = (double)fStack_9c;
      if ((0.0 < in_stack_ffffff58) && (in_stack_ffffff58 < 1.0)) {
        pCStack_18 = (CBoxActor *)(aCStack_78[0].x - CStack_54.x);
        CStack_48.x = (int)((float)pCStack_18 * fStack_9c);
        pCStack_14 = (CDemonActor *)(aCStack_78[0].y - CStack_54.y);
        CStack_48.y = (int)((float)pCStack_14 * fStack_9c);
        CStack_48.z = (int)((aCStack_78[0].z - CStack_54.z) * fStack_9c);
        fStack_60 = CStack_54.x + (float)CStack_48.x;
        fStack_5c = CStack_54.y + (float)CStack_48.y;
        fStack_58 = CStack_54.z + (float)CStack_48.z;
        core_gore_cpp_FUN_004ede30();
      }
    }
    in_stack_ffffff54 = 2.66247e-44;
    in_stack_ffffff4c = 7.705812e-39;
    in_stack_ffffff50 = g_CKeysPtr;
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar5 != 0) {
      in_stack_ffffff58 = (double)CONCAT44("Reset gore?",g_CEditorToolsPtr);
      in_stack_ffffff54 = 7.705851e-39;
      iVar5 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Reset gore?");
      if (iVar5 != 0) {
        core_gore_cpp_FUN_004ed760();
        in_stack_ffffff58 = (double)CONCAT44(g_CDemonSetPtr->selected_camera_index,g_CDemonSetPtr);
        in_stack_ffffff54 = 7.705913e-39;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      }
    }
  }
  core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_00000004);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
  core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
  pCVar2 = g_CDemonSetPtr;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  pCVar2->unk_lighting_param1 = 0;
  pCVar2->unk_lighting_param3 = 0;
  pCVar2->unk_lighting_param4 = 0;
  return;
}
