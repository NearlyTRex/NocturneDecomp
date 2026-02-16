// Name: core_msnedit.cpp_CDemonMission_FUN_0053e220
// Address: 0053e220
// Address Range: [[0053e220, 0053e9d9]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053e220(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053e220(CDemonMission *this_ptr)

{
  float fVar1;
  CGame *this_ptr_00;
  CDemonSet *pCVar2;
  CBoxActor *actor;
  CBoxActor *pCVar3;
  int iVar4;
  byte bVar5;
  float afStackY_103c [984];
  CVector3i *input_ptr;
  float fStack_c4;
  byte local_bc [8];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  CVector3f CStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3i CStack_54;
  CVector3i CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3i CStack_30;
  int iStack_24;
  CLocation *pCStack_20;
  UOrientationVector *pUStack_1c;
  CBoxActor *pCStack_18;
  float fStack_14;
  
  this_ptr_00 = g_CGamePtr;
  bVar5 = 0;
  INT_02f7c634 = 0;
  this_ptr->is_in_editor = 1;
  core_game_cpp_CGame_setGameRes_FUN_004dade0(this_ptr_00);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(&g_CDemonLightInstance);
  g_CDemonLightInstance.light_enabled_flag = 0;
  g_CDemonLightInstance.base.max_distance = 64.0;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(g_CDemonSetPtr);
  core_setedit_cpp_CDemonSet_FUN_00576da0(g_CDemonSetPtr);
  core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing actors.");
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Setting initial camera view.");
  this_ptr->current_camera_index = 0;
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,this_ptr->current_camera_index);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_bc);
  iStack_24 = g_CDemonCameraInstance.corona_blend_factor;
  pCVar3 = (CBoxActor *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\msnedit.cpp",0xe7b);
  pCStack_18 = (CBoxActor *)0x0;
  if (pCVar3 != (CBoxActor *)0x0) {
    pCStack_18 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(pCVar3);
  }
  if (pCStack_18 == (CBoxActor *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xe7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::editGore - Out of memory");
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCStack_18->model,"stranger-hat.kfm");
  pCVar3 = pCStack_18;
  core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr,&pCStack_18->base);
  actor = pCStack_18;
  (pCVar3->base).location.position.z = 0.0;
  fVar1 = (pCVar3->base).location.position.z;
  (pCVar3->base).location.position.y = fVar1;
  (pCVar3->base).location.position.x = fVar1;
  (pCStack_18->base).orient.vec.z = 0.0;
  (pCStack_18->base).orient.vec.y = (pCStack_18->base).orient.vec.z;
  (pCStack_18->base).orient.vec.x = (pCStack_18->base).orient.vec.y;
  (*((pCStack_18->base).vtable._ub)->setup)(&pCStack_18->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,&actor->base);
  pUStack_1c = &(actor->base).orient;
  pCStack_20 = &(pCVar3->base).location;
  while( true ) {
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    pCVar3 = pCStack_18;
    (pCStack_20->position).x = (float)local_bc._4_4_;
    (pCStack_20->position).y = fStack_b4;
    (pCStack_20->position).z = fStack_b0;
    if ((UOrientationVector *)&fStack_ac != pUStack_1c) {
      (pUStack_1c->vec).x = fStack_ac;
      (pUStack_1c->vec).y = fStack_a8;
      (pUStack_1c->vec).z = fStack_a4;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&pCStack_18->base);
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(g_CDemonSetPtr,&pCVar3->base,0);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pCVar2 = g_CDemonSetPtr;
    if (this_ptr->full_light_in_editor == 0) {
      g_CDemonCameraInstance.corona_blend_factor = iStack_24;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      pCVar2->disable_spotlight_shadows = 0;
    }
    else {
      g_CDemonCameraInstance.corona_blend_factor = 0xffff;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      pCVar2->disable_spotlight_shadows = 1;
    }
    pCVar2 = g_CDemonSetPtr;
    g_CDemonSetPtr->disable_water_rendering = (uint)(this_ptr->render_sky_in_editor == 0);
    pCVar2->disable_sky_rendering = (uint)(this_ptr->render_water_in_editor == 0);
    core_set_cpp_CDemonSet_FUN_0056c1a0(pCVar2);
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0(g_CGorePtr);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar4 != 0) break;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)(local_bc + 4));
    if ((g_MouseButtonFlags.bytes[0] & 1) != 0) {
      if ((((0 < g_MouseX) && (g_MouseX < g_WindowWidth + -2)) && (0 < g_MouseY)) &&
         (g_MouseY < g_WindowHeight + -2)) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,g_MouseX,g_MouseY,&CStack_48);
        input_ptr = &CStack_30;
        CStack_30.x = CStack_48.x;
        *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_48 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_48 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,input_ptr,&CStack_54);
        CStack_30.x = CStack_54.x;
        *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_54 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_54 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        fStack_90 = (float)CStack_30.x * 0.00390625f;
        fStack_8c = (float)CStack_30.y * 0.00390625f;
        fStack_88 = (float)CStack_30.z * 0.00390625f;
        if ((float *)(local_bc + 4) != &fStack_90) {
          local_bc._4_4_ = fStack_90;
          fStack_b4 = fStack_8c;
          fStack_b0 = fStack_88;
        }
      }
      g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SPACE);
    if (iVar4 == 0) {
      fStack_c4 = 0.0;
    }
    else {
      fStack_c4 = fStack_c4 - g_CGamePtr->delta_time_float;
      if (fStack_c4 < 0.0) {
        fStack_c4 = fStack_c4 + 0.1f;
        core_gore_cpp_CGore_FUN_004edaa0(g_CGorePtr);
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_RETURN);
    if (iVar4 == 0) {
      local_bc._0_4_ = 0.0;
    }
    else {
      local_bc._0_4_ = (float)local_bc._0_4_ - g_CGamePtr->delta_time_float;
      if ((float)local_bc._0_4_ < 0.0) {
        fStack_58 = (float)10;
        fStack_60 = (pCStack_18->base).orient_matrix.m[0].z * fStack_58;
        fStack_5c = (pCStack_18->base).orient_matrix.m[1].z * fStack_58;
        fStack_58 = fStack_58 * (pCStack_18->base).orient_matrix.m[2].z;
        local_bc._0_4_ = (float)local_bc._0_4_ + 0.1f;
        core_gore_cpp_CGore_FUN_004edaa0(g_CGorePtr);
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
    if (iVar4 != 0) {
      CStack_78.x = (float)local_bc._4_4_;
      CStack_78.y = fStack_b4;
      CStack_78.z = fStack_b0;
      CStack_9c.x = (float)local_bc._4_4_;
      CStack_9c.y = fStack_b4 + -100.0f;
      CStack_9c.z = fStack_b0;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                            (g_CDemonSetPtr,&CStack_78,&CStack_9c);
      if ((0.0 < fStack_14) && (fStack_14 < 1.0)) {
        fStack_3c = CStack_9c.x - CStack_78.x;
        fStack_6c = fStack_3c * fStack_14;
        fStack_38 = CStack_9c.y - CStack_78.y;
        fStack_34 = CStack_9c.z - CStack_78.z;
        fStack_68 = fStack_38 * fStack_14;
        fStack_64 = fStack_34 * fStack_14;
        fStack_84 = CStack_78.x + fStack_6c;
        fStack_80 = CStack_78.y + fStack_68;
        fStack_7c = CStack_78.z + fStack_64;
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar4 != 0) {
      iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Reset gore?");
      if (iVar4 != 0) {
        core_gore_cpp_CGore_FUN_004ed760(g_CGorePtr);
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      }
    }
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(this_ptr,&pCStack_18->base,1);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
  pCVar2 = g_CDemonSetPtr;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  pCVar2->disable_spotlight_shadows = 0;
  pCVar2->disable_water_rendering = 0;
  pCVar2->disable_sky_rendering = 0;
  return;
}
