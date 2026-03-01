// Name: core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220
// Address: 0053e220
// Address Range: [[0053e220, 0053e9d9]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_editGore_FUN_0053e220(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_editGore_FUN_0053e220(CDemonMission *this_ptr)

{
  float fVar1;
  CGame *this_ptr_00;
  CDemonSet *pCVar2;
  CBoxActor *actor;
  CBoxActor *pCVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1040 [984];
  CVector3i *input_ptr;
  float local_c8;
  float local_c0;
  CSlew local_bc;
  CVector3f CStack_a0;
  byte auStack_94 [16];
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  CVector3i CStack_58;
  CVector3i CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3i CStack_34;
  int iStack_28;
  CLocation *pCStack_24;
  UOrientationVector *pUStack_20;
  CBoxActor *pCStack_1c;
  float fStack_18;
  
  this_ptr_00 = g_CGamePtr;
  bVar5 = 0;
  local_c0 = 0.0;
  local_c8 = 0.0;
  INT_02f7c634 = 0;
  this_ptr->is_in_editor = 1;
  core_game_cpp_CGame_setGameRes_FUN_004dade0(this_ptr_00);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(&g_CDemonLightInstance);
  g_CDemonLightInstance.light_enabled_flag = 0;
  g_CDemonLightInstance.base.max_distance = 64.0;
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(g_CDemonSetPtr);
  core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(g_CDemonSetPtr,0);
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
  core_slew_cpp_CSlew_init_FUN_005a2060(&local_bc);
  iStack_28 = g_CDemonCameraInstance.corona_blend_factor;
  pCVar3 = (CBoxActor *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\msnedit.cpp",0xe7b);
  pCStack_1c = (CBoxActor *)0x0;
  if (pCVar3 != (CBoxActor *)0x0) {
    pCStack_1c = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(pCVar3);
  }
  if (pCStack_1c == (CBoxActor *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xe7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::editGore - Out of memory");
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&pCStack_1c->model,"stranger-hat.kfm");
  pCVar3 = pCStack_1c;
  core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(this_ptr,&pCStack_1c->base);
  actor = pCStack_1c;
  (pCVar3->base).location.position.z = 0.0;
  fVar1 = (pCVar3->base).location.position.z;
  (pCVar3->base).location.position.y = fVar1;
  (pCVar3->base).location.position.x = fVar1;
  (pCStack_1c->base).orient.vec.z = 0.0;
  (pCStack_1c->base).orient.vec.y = (pCStack_1c->base).orient.vec.z;
  (pCStack_1c->base).orient.vec.x = (pCStack_1c->base).orient.vec.y;
  (*((pCStack_1c->base).vtable._ub)->setup)(&pCStack_1c->base);
  core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,&actor->base);
  pUStack_20 = &(actor->base).orient;
  pCStack_24 = &(pCVar3->base).location;
  while( true ) {
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    pCVar3 = pCStack_1c;
    (pCStack_24->position).x = local_bc.position.x;
    (pCStack_24->position).y = local_bc.position.y;
    (pCStack_24->position).z = local_bc.position.z;
    if ((UOrientationVector *)&local_bc.pitch != pUStack_20) {
      (pUStack_20->vec).x = local_bc.pitch;
      (pUStack_20->vec).y = local_bc.yaw;
      (pUStack_20->vec).z = local_bc.roll;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&pCStack_1c->base);
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(g_CDemonSetPtr,&pCVar3->base,0);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pCVar2 = g_CDemonSetPtr;
    if (this_ptr->full_light_in_editor == 0) {
      g_CDemonCameraInstance.corona_blend_factor = iStack_28;
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
    core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(pCVar2,0);
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0(g_CGorePtr);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005743e0(g_CDemonSetPtr);
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar4 != 0) break;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_bc);
    if ((g_MouseButtonFlags.bytes[0] & 1) != 0) {
      if ((((0 < g_MouseX) && (g_MouseX < g_WindowWidth + -2)) && (0 < g_MouseY)) &&
         (g_MouseY < g_WindowHeight + -2)) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,g_MouseX,g_MouseY,&CStack_4c);
        input_ptr = &CStack_34;
        CStack_34.x = CStack_4c.x;
        *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_4c + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,input_ptr,&CStack_58);
        CStack_34.x = CStack_58.x;
        *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        auStack_94._0_4_ = (float)CStack_34.x * 0.00390625f;
        auStack_94._4_4_ = (float)CStack_34.y * 0.00390625f;
        auStack_94._8_4_ = (float)CStack_34.z * 0.00390625f;
        if (&local_bc != (CSlew *)auStack_94) {
          local_bc.position.x = (float)auStack_94._0_4_;
          local_bc.position.y = (float)auStack_94._4_4_;
          local_bc.position.z = (float)auStack_94._8_4_;
        }
      }
      g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SPACE);
    if (iVar4 == 0) {
      local_c8 = 0.0;
    }
    else {
      local_c8 = local_c8 - g_CGamePtr->delta_time_float;
      if (local_c8 < 0.0) {
        local_c8 = local_c8 + 0.1f;
        core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0
                  (g_CGorePtr,&local_bc.position,(CVector3f *)0x0,0);
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_RETURN);
    if (iVar4 == 0) {
      local_c0 = 0.0;
    }
    else {
      local_c0 = local_c0 - g_CGamePtr->delta_time_float;
      if (local_c0 < 0.0) {
        CStack_64.z = (float)10;
        CStack_64.x = (pCStack_1c->base).orient_matrix.m[0].z * CStack_64.z;
        CStack_64.y = (pCStack_1c->base).orient_matrix.m[1].z * CStack_64.z;
        CStack_64.z = CStack_64.z * (pCStack_1c->base).orient_matrix.m[2].z;
        local_c0 = local_c0 + 0.1f;
        core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0
                  (g_CGorePtr,&local_bc.position,&CStack_64,0);
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
    if (iVar4 != 0) {
      CStack_7c.x = local_bc.position.x;
      CStack_7c.y = local_bc.position.y;
      CStack_7c.z = local_bc.position.z;
      CStack_a0.x = local_bc.position.x;
      CStack_a0.y = local_bc.position.y + -100.0f;
      CStack_a0.z = local_bc.position.z;
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      fStack_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                            (g_CDemonSetPtr,&CStack_7c,&CStack_a0);
      if ((0.0 < fStack_18) && (fStack_18 < 1.0)) {
        fStack_40 = CStack_a0.x - CStack_7c.x;
        fStack_70 = fStack_40 * fStack_18;
        fStack_3c = CStack_a0.y - CStack_7c.y;
        fStack_38 = CStack_a0.z - CStack_7c.z;
        fStack_6c = fStack_3c * fStack_18;
        fStack_68 = fStack_38 * fStack_18;
        auStack_94._12_4_ = CStack_7c.x + fStack_70;
        fStack_84 = CStack_7c.y + fStack_6c;
        fStack_80 = CStack_7c.z + fStack_68;
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30
                  (g_CGorePtr,(CVector3f *)(auStack_94 + 0xc),0);
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar4 != 0) {
      iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Reset gore?");
      if (iVar4 != 0) {
        core_gore_cpp_CGore_reset_FUN_004ed760(g_CGorePtr);
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      }
    }
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(this_ptr,&pCStack_1c->base,1);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(g_CDemonSetPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
  pCVar2 = g_CDemonSetPtr;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  pCVar2->disable_spotlight_shadows = 0;
  pCVar2->disable_water_rendering = 0;
  pCVar2->disable_sky_rendering = 0;
  return;
}
