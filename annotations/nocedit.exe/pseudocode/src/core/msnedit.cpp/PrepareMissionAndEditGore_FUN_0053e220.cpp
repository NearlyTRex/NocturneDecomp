// Name: core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220
// Address: 0053e220
// Address Range: [[0053e220, 0053e9d9]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_msnedit.cpp_PrepareMissionAndEditGore(uint param_1) */

void core_msnedit_cpp_PrepareMissionAndEditGore_FUN_0053e220(void)

{
  float fVar1;
  CGame *this_ptr;
  CDemonSet *pCVar2;
  CBoxActor *pCVar3;
  CBoxActor *pCVar4;
  int iVar5;
  byte bVar6;
  CDemonMission *in_stack_00000004;
  int aiStackY_103c [984];
  CVector3i *output_ptr;
  double in_stack_ffffff34;
  float fStack_c4;
  float local_bc;
  CSlew CStack_b8;
  CVector3f CStack_9c;
  byte auStack_90 [28];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  int aiStack_50 [5];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3i CStack_30;
  int iStack_24;
  CLocation *pCStack_20;
  COrientation *pCStack_1c;
  CBoxActor *pCStack_18;
  float fStack_14;
  
  this_ptr = g_CGamePtr;
  bVar6 = 0;
  local_bc = 0.0;
  fStack_c4 = 0.0;
  DAT_02f7c634 = 0;
  in_stack_00000004->field0_0x0[4] = '\x01';
  in_stack_00000004->field0_0x0[5] = '\0';
  in_stack_00000004->field0_0x0[6] = '\0';
  in_stack_00000004->field0_0x0[7] = '\0';
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
  in_stack_00000004->field2_0xc[4] = '\0';
  in_stack_00000004->field2_0xc[5] = '\0';
  in_stack_00000004->field2_0xc[6] = '\0';
  in_stack_00000004->field2_0xc[7] = '\0';
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
            (g_CDemonSetPtr,*(int *)(in_stack_00000004->field2_0xc + 4));
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,SUB84 /* extract 2-byte value */(in_stack_ffffff34,0));
  core_slew_cpp_CSlew_init_FUN_005a2060(&CStack_b8);
  iStack_24 = g_CDemonCameraInstance.corona_blend_factor;
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
            ((CKeyFramedModelInstance *)pCStack_18->model_name,"stranger-hat.kfm");
  pCVar4 = pCStack_18;
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
  pCVar3 = pCStack_18;
  (pCVar4->base_actor).location.position.z = 0.0;
  fVar1 = (pCVar4->base_actor).location.position.z;
  (pCVar4->base_actor).location.position.y = fVar1;
  (pCVar4->base_actor).location.position.x = fVar1;
  (pCStack_18->base_actor).orient.heading = 0.0;
  (pCStack_18->base_actor).orient.bank = (pCStack_18->base_actor).orient.heading;
  (pCStack_18->base_actor).orient.pitch = (pCStack_18->base_actor).orient.bank;
  (*((pCStack_18->base_actor).vtable)->setup)(&pCStack_18->base_actor);
  core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
  pCStack_1c = &(pCVar3->base_actor).orient;
  pCStack_20 = &(pCVar4->base_actor).location;
  while( true ) {
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    pCVar4 = pCStack_18;
    (pCStack_20->position).x = CStack_b8.position.x;
    (pCStack_20->position).y = CStack_b8.position.y;
    (pCStack_20->position).z = CStack_b8.position.z;
    if ((COrientation *)&CStack_b8.pitch != pCStack_1c) {
      pCStack_1c->pitch = CStack_b8.pitch;
      pCStack_1c->bank = CStack_b8.yaw;
      pCStack_1c->heading = CStack_b8.roll;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&pCStack_18->base_actor);
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
              (g_CDemonSetPtr,&pCVar4->base_actor,0);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pCVar2 = g_CDemonSetPtr;
    if (*(int *)(in_stack_00000004->field2_0xc + 0x2c) == 0) {
      g_CDemonCameraInstance.corona_blend_factor = iStack_24;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      pCVar2->unk_lighting_param1 = 0;
    }
    else {
      g_CDemonCameraInstance.corona_blend_factor = 0xffff;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      pCVar2->unk_lighting_param1 = 1;
    }
    pCVar2 = g_CDemonSetPtr;
    g_CDemonSetPtr->unk_lighting_param3 =
         (uint)(*(int *)(in_stack_00000004->field2_0xc + 0x24) == 0);
    pCVar2->unk_lighting_param4 = (uint)(*(int *)(in_stack_00000004->field2_0xc + 0x28) == 0);
    core_set_cpp_CDemonSet_FUN_0056c1a0(pCVar2);
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar5 != 0) break;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&CStack_b8);
    if (((byte)g_MouseButtonFlags & 1) != 0) {
      if ((((0 < g_MouseX) && (g_MouseX < g_WindowWidth + -2)) && (0 < g_MouseY)) &&
         (g_MouseY < g_WindowHeight + -2)) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,(CVector3i *)g_MouseX,g_MouseY,SUB84 /* extract 2-byte value */(in_stack_ffffff34,0)
                  );
        output_ptr = &CStack_30;
        CStack_30.x = aiStack_50[2];
        *(int *)((int)&CStack_30 + (uint)bVar6 * -8 + 4) = aiStack_50[(uint)bVar6 * -2 + 3];
        *(int *)((int)&CStack_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             aiStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,output_ptr,SUB84 /* extract 2-byte value */(in_stack_ffffff34,0));
        CStack_30.x = iStack_54;
        *(int *)((int)&CStack_30 + (uint)bVar6 * -8 + 4) = aiStack_50[(uint)bVar6 * -2];
        *(int *)((int)&CStack_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             aiStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        auStack_90._0_4_ = (float)CStack_30.x * _DAT_00661c30;
        auStack_90._4_4_ = (float)CStack_30.y * _DAT_00661c30;
        auStack_90._8_4_ = (float)CStack_30.z * _DAT_00661c30;
        if (&CStack_b8 != (CSlew *)auStack_90) {
          CStack_b8.position.x = (float)auStack_90._0_4_;
          CStack_b8.position.y = (float)auStack_90._4_4_;
          CStack_b8.position.z = (float)auStack_90._8_4_;
        }
      }
      g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x39);
    if (iVar5 == 0) {
      fStack_c4 = 0.0;
    }
    else {
      fStack_c4 = fStack_c4 - g_CGamePtr->delta_time_float;
      if (fStack_c4 < 0.0) {
        fStack_c4 = fStack_c4 + 0.1f;
        core_gore_cpp_FUN_004edaa0();
      }
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1c);
    if (iVar5 == 0) {
      local_bc = 0.0;
    }
    else {
      local_bc = local_bc - g_CGamePtr->delta_time_float;
      if (local_bc < 0.0) {
        fStack_58 = (float)10;
        fStack_60 = (pCStack_18->base_actor).orient_matrix.m[0].z * fStack_58;
        fStack_5c = (pCStack_18->base_actor).orient_matrix.m[1].z * fStack_58;
        fStack_58 = fStack_58 * (pCStack_18->base_actor).orient_matrix.m[2].z;
        local_bc = local_bc + 0.1f;
        core_gore_cpp_FUN_004edaa0();
      }
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    if (iVar5 != 0) {
      auStack_90._24_4_ = CStack_b8.position.x;
      fStack_74 = CStack_b8.position.y;
      fStack_70 = CStack_b8.position.z;
      CStack_9c.x = CStack_b8.position.x;
      CStack_9c.y = CStack_b8.position.y + -100f;
      CStack_9c.z = CStack_b8.position.z;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                            (g_CDemonSetPtr,(CVector3f *)(auStack_90 + 0x18),&CStack_9c);
      in_stack_ffffff34 = (double)fStack_14;
      if ((0.0 < in_stack_ffffff34) && (in_stack_ffffff34 < 1.0)) {
        fStack_3c = CStack_9c.x - (float)auStack_90._24_4_;
        fStack_6c = fStack_3c * fStack_14;
        fStack_38 = CStack_9c.y - fStack_74;
        fStack_34 = CStack_9c.z - fStack_70;
        fStack_68 = fStack_38 * fStack_14;
        fStack_64 = fStack_34 * fStack_14;
        auStack_90._12_4_ = (float)auStack_90._24_4_ + fStack_6c;
        auStack_90._16_4_ = fStack_74 + fStack_68;
        auStack_90._20_4_ = fStack_70 + fStack_64;
        core_gore_cpp_FUN_004ede30();
      }
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar5 != 0) {
      iVar5 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Reset gore?");
      if (iVar5 != 0) {
        core_gore_cpp_FUN_004ed760();
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
