// Name: core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0
// Address: 005390f0
// Address Range: [[005390f0, 0053af22]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 0053870d [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005390c8 = 005393a2
//   void* switchdataD_005390dc = 0053aa5d
//   TerminatedCString s_Preparing_set_0063c34c
//   TerminatedCString s_Preparing_actors_0063c35b
//   TerminatedCString s_Setting_initial_camera_v_0063c36d
//   TerminatedCString s_Static_cam_s_0063c38a
//   TerminatedCString s_Custom_cam_camera_fixed__0063c399
//   TerminatedCString s_Slew_cam_actor_fixed_sle_0063c3c3
//   TerminatedCString s_s_1st_person_cam_0063c3eb
//   TerminatedCString s_Chase_spot_cam_0063c3fa
//   TerminatedCString s_core_msnedit_cpp_0063c409
//   TerminatedCString s_Invalid_cameraMode_0063c41d
//   TerminatedCString s_Virtual_Director_ENABLED_0063c431
//   TerminatedCString s_Virtual_Director_DISABLE_0063c44a
//   TerminatedCString s_StaticCam_0063c464
//   TerminatedCString s_CustomCam_0063c470
//   TerminatedCString s_SlewCam_0063c47c
//   TerminatedCString s_s_1stPersonCam_0063c486
//   TerminatedCString s_SpotCam_0063c495
//   TerminatedCString s_Virtual_Director_0063c49f
//   TerminatedCString s_Exit_editor_0063c4b0
//   TerminatedCString s_No_mission_name_0063c4bd
//   TerminatedCString s_s_msn_0063c4ce
//   TerminatedCString s_Save_mission_to_s_msn_0063c4d5
//   TerminatedCString s_No_actors_hidden_0063c4ec
//   TerminatedCString s_Select_actor_to_unhide_0063c4fe
//   TerminatedCString s_core_msnedit_cpp_0063c515
//   TerminatedCString s_Hell_froze_0063c529
//   TerminatedCString s_Select_actor_by_name_0063c535
//   TerminatedCString s_core_msnedit_cpp_0063c54a
//   TerminatedCString s_Invalid_cameraMode_0063c55e
//   float FLOAT_0063c574 = 0.5
//   double DOUBLE_0063c57c = 0.25
//   double DOUBLE_0063c584 = 10
//   double DOUBLE_0063c58c = 0.0500000000000000
//   double DOUBLE_0063c594 = 1.57079632675000
//   double DOUBLE_0063c59c = 1.5
//   double DOUBLE_0063c5a4 = 0.5
//   double DOUBLE_0063c5ac = -1.57079632675000
//   float FLOAT_0063c5b4 = 6.283185
//   float FLOAT_0063c5b8 = -6.283185
//   undefined4 DAT_00661c44
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   TerminatedCString s_UNDO_TMP_00680800
//   undefined4 g_DynamicRenderMode
//   undefined4 DAT_00680818
//   undefined4 DAT_00680830
//   undefined4 DAT_00680834
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   CEdButton* g_ActiveButton
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   CFireEffect g_CFireEffectInstance
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CDemonLightInstance.base.max_distance
//   undefined4 g_CDemonLightInstance.light_enabled_flag
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   CGore g_CGoreInstance
//   undefined4 g_CHeroPlaceholderClassInfo.name_hash
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7a024
//   undefined4 DAT_02f7a02c
//   undefined4 DAT_02f7a080
//   undefined4 DAT_02f7c528
//   undefined4 DAT_02f7c538
//   undefined4 DAT_02f7c53c
//   undefined4 DAT_02f7c540
//   CEdCheck g_CEdCheckInstance
//   undefined4 g_CEdCheckInstance.checked_state
//   undefined4 g_CEdCheckInstance.coord_unk
//   undefined4 DAT_02f7c630
//   undefined4 DAT_02f7c634
//   CScript g_CScriptInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 g_CDemonSetInstance.lighting_quality_mode
//   undefined4 g_CDemonSetInstance.unk_lighting_param1
//   undefined4 g_CDemonSetInstance.unk_lighting_param3
//   undefined4 g_CDemonSetInstance.unk_lighting_param4
//   undefined4 g_CDemonSetInstance.selected_camera_index
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
//   undefined4 g_CDemonCameraInstance.base.rotation_matrix.m[0].x
//   undefined4 DAT_032758f8
//   undefined4 g_CDemonCameraInstance.base.projection_scale
//   undefined4 DAT_03275924
//   undefined4 g_CDemonCameraInstance.corona_blend_factor
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
//   core_actor.cpp_CActorProperty_FUN_0040ea50
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_FUN_0040e150
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   core_fire.cpp_CFireEffect_init_FUN_004c6c80
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0
//   core_fire.cpp_CFireEffect_render_FUN_004c7180
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_setGameRes_FUN_004dade0
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_gore.cpp_CGore_FUN_004ed7b0
//   core_gore.cpp_CGore_process_FUN_004ed9e0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
//   core_msnedit.cpp_DeleteActors_FUN_0053df90
//   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80
//   core_msnedit.cpp_FUN_00536cd0
//   core_msnedit.cpp_FUN_0053af50
//   core_msnedit.cpp_FUN_0053b9f0
//   core_msnedit.cpp_FUN_0053bcf0
//   core_msnedit.cpp_FUN_0053c210
//   core_msnedit.cpp_FUN_0053c340
//   core_msnedit.cpp_FUN_0053c4f0
//   core_msnedit.cpp_FUN_0053c730
//   core_msnedit.cpp_FUN_0053ca30
//   core_msnedit.cpp_FUN_0053ca80
//   core_msnedit.cpp_FUN_0053d8b0
//   core_msnedit.cpp_HideActors_FUN_0053dcf0
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70
//   core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
//   core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   core_script.cpp_CScript_Unk20_FUN_00565130
//   core_script.cpp_CScript_unk50_FUN_00566660
//   core_script.cpp_FUN_005645d0
//   core_script.cpp_FUN_00565f70
//   core_script.cpp_FUN_00566080
//   core_script.cpp_FUN_00566bc0
//   core_set.cpp_CDemonSet_FUN_0056be80
//   core_set.cpp_CDemonSet_FUN_0056c1a0
//   core_set.cpp_CDemonSet_FUN_0056cd60
//   core_set.cpp_CDemonSet_FUN_0056cf00
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_FUN_0056fbd0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   core_setcolid.cpp_CDemonSet_FUN_005743e0
//   core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   core_setedit.cpp_CDemonSet_FUN_00577af0
//   core_slew.cpp_CSlew_init_FUN_005a2060
//   core_slew.cpp_CSlew_processInput_FUN_005a20b0
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_setupViewportAndClipping_FUN_00401800
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20
//   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00
//   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_winrun.cpp_doNothing_FUN_005f2f80

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 core_msnedit_cpp_PrepareMissionMaybe_FUN_005390f0(void)

{
  CGame *this_ptr;
  CDemonSet *pCVar1;
  uchar uVar2;
  undefined3 extraout_var;
  float *pfVar3;
  CQuaternion4f *label_offset;
  undefined3 extraout_var_00;
  CDemonActor *pCVar4;
  CVector3f *pCVar5;
  undefined3 extraout_var_01;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  undefined4 *puVar8;
  CMatrix3x3i *pCVar9;
  int iVar10;
  CMatrix3x3f *pCVar11;
  bool bVar12;
  byte bVar13;
  CDemonMission *in_stack_00000004;
  int in_stack_00000008;
  char *pcVar14;
  CGame *in_stack_fffff64c;
  void *param5;
  CKeys *d2;
  uint d3;
  CKeys *in_stack_fffff668;
  uint d5;
  CKeys *d6;
  char local_4e0 [300];
  char local_3b4 [260];
  char local_2b0 [200];
  float local_1e8 [10];
  CMatrix3x3f local_1c0;
  CMatrix3x3f local_198;
  undefined1 local_170 [16];
  float local_160;
  float local_15c;
  float local_158;
  int local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3f local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  CDemonActor *local_50;
  char *local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  int local_38;
  float local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar13 = 0;
  crt_io_c_deleteFile_FUN_005ff9d0("$$UNDO$$.TMP");
  in_stack_00000004->field0_0x0[4] = '\x01';
  in_stack_00000004->field0_0x0[5] = '\0';
  in_stack_00000004->field0_0x0[6] = '\0';
  in_stack_00000004->field0_0x0[7] = '\0';
  core_actor_cpp_FUN_0040e150();
  this_ptr = g_CGamePtr;
  in_stack_00000004->field2_0xc[0x1c] = '\0';
  in_stack_00000004->field2_0xc[0x1d] = '\0';
  in_stack_00000004->field2_0xc[0x1e] = '\0';
  in_stack_00000004->field2_0xc[0x1f] = '\0';
  in_stack_00000004->field2_0xc[0x20] = '\0';
  in_stack_00000004->field2_0xc[0x21] = '\0';
  in_stack_00000004->field2_0xc[0x22] = '\0';
  in_stack_00000004->field2_0xc[0x23] = '\0';
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
  if (in_stack_00000008 != 0) {
    DAT_02f7c53c = 0;
    in_stack_00000004->field2_0xc[4] = '\0';
    in_stack_00000004->field2_0xc[5] = '\0';
    in_stack_00000004->field2_0xc[6] = '\0';
    in_stack_00000004->field2_0xc[7] = '\0';
    DAT_02f7c634 = 0;
    g_CEdCheckInstance.checked_state = 1;
  }
  _DAT_02f7c540 = DAT_00661c44;
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
            (g_CDemonSetPtr,*(int *)(in_stack_00000004->field2_0xc + 4));
  in_stack_00000004->field2_0xc[0x18] = -1;
  in_stack_00000004->field2_0xc[0x19] = -1;
  in_stack_00000004->field2_0xc[0x1a] = -1;
  in_stack_00000004->field2_0xc[0x1b] = -1;
  core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_50 = in_stack_00000004->first_actor;
  if (0 < (int)g_CDemonSetPtr->actor_list_ptr) {
    iVar10 = 999999;
    local_50 = *(CDemonActor **)g_CDemonSetPtr->actor_list_data;
    iVar7 = 0;
    for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr; iVar6 = iVar6 + 1) {
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar7),
                          g_CHeroPlaceholderClassInfo.name_hash);
      if ((pCVar4 != (CDemonActor *)0x0) && (*(int *)pCVar4[1].actor_name < iVar10)) {
        iVar10 = *(int *)pCVar4[1].actor_name;
        local_50 = pCVar4;
      }
      iVar7 = iVar7 + 4;
    }
  }
  core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff64c);
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_170);
  local_7c = 0.0;
  local_78 = 0.0;
  local_5c = g_CDemonCameraInstance.corona_blend_factor;
  local_74 = 0.0;
  local_18 = 10.0;
  local_48 = g_CDemonSetPtr->selected_camera_index;
  local_4c = in_stack_00000004->field2_0xc + 0x38;
  local_28 = 0.0;
  local_24 = 0.0;
  local_60 = 0;
  local_54 = &g_CDemonCameraInstance.base.position.y;
  DAT_00680818 = 1e+20;
  local_58 = &g_CDemonCameraInstance.base.position.z;
  do {
    local_44 = g_CDemonSetPtr->selected_camera_index;
    local_64 = 0;
    local_14 = -1;
    local_30 = g_MouseButtonFlags;
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    local_38 = -1;
    if (DAT_02f7c634 != 2) {
      puVar8 = &DAT_00680830;
      pcVar14 = local_2b0;
      for (iVar10 = 0x32; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined4 *)pcVar14 = *puVar8;
        puVar8 = puVar8 + (uint)bVar13 * -2 + 1;
        pcVar14 = pcVar14 + ((uint)bVar13 * -2 + 1) * 4;
      }
      switch(DAT_02f7c53c) {
      case 0:
        if ((g_CEdCheckInstance.checked_state != 0) && (g_MouseButtonFlags == 0)) {
          core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                    (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field2_0xc + 0x1c),0);
        }
        crt_stdio_c_sprintf_FUN_005fdbd0(local_2b0,"Static cam: %s");
        local_10c = g_CDemonCameraInstance.base.position.x;
        local_108 = (float)*local_54;
        local_104 = (float)*local_58;
        if ((int *)local_170 != &local_10c) {
          local_170._0_4_ = g_CDemonCameraInstance.base.position.x;
          local_170._4_4_ = *local_54;
          local_170._8_4_ = *local_58;
        }
        pCVar9 = &g_CDemonCameraInstance.base.rotation_matrix;
        pfVar3 = local_1e8;
        for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pfVar3 = (float)pCVar9->m[0].x;
          pCVar9 = (CMatrix3x3i *)((int)pCVar9 + ((uint)bVar13 * -2 + 1) * 4);
          pfVar3 = pfVar3 + (uint)bVar13 * -2 + 1;
        }
        pfVar3 = local_1e8;
        pCVar11 = &local_1c0;
        for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
          pCVar11->m[0].x = *pfVar3;
          pfVar3 = pfVar3 + (uint)bVar13 * -2 + 1;
          pCVar11 = (CMatrix3x3f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
        }
        pCVar5 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&local_1c0,&local_dc);
        if ((CVector3f *)(local_170 + 0xc) != pCVar5) {
          local_170._12_4_ = pCVar5->x;
          local_160 = pCVar5->y;
          local_15c = pCVar5->z;
        }
        local_158 = g_CDemonCameraInstance.base.projection_scale;
        break;
      case 1:
        crt_stdio_c_sprintf_FUN_005fdbd0(local_2b0,"Custom cam (camera fixed, slew the actor)");
        if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.camera_origin.z) {
          g_CDemonCameraInstance.base.position.x = local_170._0_4_;
          g_CDemonCameraInstance.base.position.y = local_170._4_4_;
          g_CDemonCameraInstance.base.position.z = local_170._8_4_;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
                   (CVector3f *)(local_170 + 0xc));
        g_CDemonCameraInstance.base.projection_scale = local_158;
        break;
      case 2:
        crt_stdio_c_sprintf_FUN_005fdbd0(local_2b0,"Slew cam (actor fixed, slew the camera)");
        if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.camera_origin.z) {
          g_CDemonCameraInstance.base.position.x = local_170._0_4_;
          g_CDemonCameraInstance.base.position.y = local_170._4_4_;
          g_CDemonCameraInstance.base.position.z = local_170._8_4_;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
                   (CVector3f *)(local_170 + 0xc));
        g_CDemonCameraInstance.base.projection_scale = local_158;
        break;
      case 3:
        crt_stdio_c_sprintf_FUN_005fdbd0(local_2b0,"1st person cam");
        if (*(int *)(in_stack_00000004->field2_0xc + 0x1c) != 0) {
          pfVar3 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) +
                                                 0x154) + 0x14))();
          local_f4 = *pfVar3 + pfVar3[3];
          local_f0 = pfVar3[1] + pfVar3[4];
          local_100 = local_f4 * FLOAT_0063c574;
          local_ec = pfVar3[2] + pfVar3[5];
          local_fc = local_f0 * FLOAT_0063c574;
          local_f8 = local_ec * FLOAT_0063c574;
          iVar10 = *(int *)(in_stack_00000004->field2_0xc + 0x1c);
          local_ac = *(float *)(iVar10 + 0x20) + local_100;
          local_a8 = *(float *)(iVar10 + 0x24) + local_fc;
          local_a4 = *(float *)(iVar10 + 0x28) + local_f8;
          if ((float *)local_170 != &local_ac) {
            local_170._0_4_ = local_ac;
            local_170._4_4_ = local_a8;
            local_170._8_4_ = local_a4;
          }
          iVar10 = *(int *)(in_stack_00000004->field2_0xc + 0x1c);
          if ((float *)(local_170 + 0xc) != (float *)(iVar10 + 0x30)) {
            local_170._12_4_ = *(float *)(iVar10 + 0x30);
            local_160 = *(float *)(iVar10 + 0x34);
            local_15c = *(float *)(iVar10 + 0x38);
          }
          local_158 = 28.0;
        }
        if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.camera_origin.z) {
          g_CDemonCameraInstance.base.position.x = local_170._0_4_;
          g_CDemonCameraInstance.base.position.y = local_170._4_4_;
          g_CDemonCameraInstance.base.position.z = local_170._8_4_;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
                   (CVector3f *)(local_170 + 0xc));
        g_CDemonCameraInstance.base.projection_scale = local_158;
        break;
      case 4:
        crt_stdio_c_sprintf_FUN_005fdbd0(local_2b0,"Chase/spot cam");
        if (*(int *)(in_stack_00000004->field2_0xc + 0x1c) != 0) {
          if ((float *)(local_170 + 0xc) != &local_7c) {
            local_170._12_4_ = local_7c;
            local_160 = local_78;
            local_15c = local_74;
          }
          local_160 = local_160 + *(float *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) + 0x34);
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                    (&local_198,(CVector3f *)(local_170 + 0xc));
          local_94.z = -local_18;
          local_94.x = local_28;
          local_94.y = local_24;
          local_68 = local_94.z;
          pfVar3 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) +
                                                 0x154) + 0x14))();
          local_e8 = *pfVar3 + pfVar3[3];
          local_e4 = pfVar3[1] + pfVar3[4];
          local_d0 = local_e8 * FLOAT_0063c574;
          local_e0 = pfVar3[2] + pfVar3[5];
          local_cc = local_e4 * FLOAT_0063c574;
          local_c8 = local_e0 * FLOAT_0063c574;
          iVar10 = *(int *)(in_stack_00000004->field2_0xc + 0x1c);
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&local_198,&local_a0,&local_94);
          local_88 = pCVar5->x + *(float *)(iVar10 + 0x20);
          local_84 = pCVar5->y + *(float *)(iVar10 + 0x24);
          local_b8 = local_88 + local_d0;
          local_80 = pCVar5->z + *(float *)(iVar10 + 0x28);
          local_b4 = local_84 + local_cc;
          local_b0 = local_80 + local_c8;
          if ((float *)local_170 != &local_b8) {
            local_170._0_4_ = local_b8;
            local_170._4_4_ = local_b4;
            local_170._8_4_ = local_b0;
          }
          local_158 = 28.0;
        }
        if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.camera_origin.z) {
          g_CDemonCameraInstance.base.position.x = local_170._0_4_;
          g_CDemonCameraInstance.base.position.y = local_170._4_4_;
          g_CDemonCameraInstance.base.position.z = local_170._8_4_;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
                   (CVector3f *)(local_170 + 0xc));
        g_CDemonCameraInstance.base.projection_scale = local_158;
        break;
      default:
        g_CurrentFilename = "..\\core\\msnedit.cpp";
        g_CurrentLineNumber = 0x595;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid cameraMode!");
      }
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
      if (*(int *)(in_stack_00000004->field2_0xc + 0x18) != 0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
      }
      pCVar1 = g_CDemonSetPtr;
      if (DAT_02f7c53c == 0) {
        if (*(int *)(in_stack_00000004->field2_0xc + 0x2c) == 0) {
          g_CDemonCameraInstance.corona_blend_factor = local_5c;
          g_CDemonSetPtr->lighting_quality_mode = 0;
          pCVar1->unk_lighting_param1 = 0;
        }
        else {
          g_CDemonCameraInstance.corona_blend_factor = 0xffff;
          g_CDemonSetPtr->lighting_quality_mode = 1;
          pCVar1->unk_lighting_param1 = 1;
        }
        pCVar1 = g_CDemonSetPtr;
        g_CDemonSetPtr->unk_lighting_param3 =
             (uint)(*(int *)(in_stack_00000004->field2_0xc + 0x24) == 0);
        pCVar1->unk_lighting_param4 = (uint)(*(int *)(in_stack_00000004->field2_0xc + 0x28) == 0);
        core_set_cpp_CDemonSet_FUN_0056c1a0(pCVar1);
        core_set_cpp_CDemonSet_FUN_0056be80(g_CDemonSetPtr);
        core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(&g_CDemonCameraInstance);
      }
      else {
        g_CDemonSetPtr->lighting_quality_mode = 1;
        pCVar1->unk_lighting_param3 = 0;
        pCVar1->unk_lighting_param4 = 0;
        g_CDemonRaytraceInstance.rendering_mode = g_DynamicRenderMode;
        if (*(int *)(in_stack_00000004->field2_0xc + 0x18) == 0) {
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
        }
        wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,150.0,0);
        core_set_cpp_CDemonSet_FUN_0056fbd0(g_CDemonSetPtr);
        core_set_cpp_CDemonSet_FUN_0056cd60(g_CDemonSetPtr);
        core_set_cpp_CDemonSet_FUN_0056cf00(g_CDemonSetPtr);
        core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
        core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      }
      iVar10 = local_14;
      if ((((*(int *)(in_stack_00000004->field2_0xc + 0x18) != 0) &&
           (iVar6 = DAT_02f7c634, DAT_02f7c634 == 0)) &&
          (local_38 = core_setedit_cpp_CDemonSet_FUN_00577af0(g_CDemonSetPtr), iVar10 = local_14,
          -1 < local_38)) &&
         (iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38), iVar10 = iVar6, iVar7 != 0)) {
        core_script_cpp_CScript_unk50_FUN_00566660();
        DAT_02f7c634 = 1;
        core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        core_script_cpp_FUN_00565f70();
        local_38 = -1;
        iVar10 = local_14;
      }
      local_14 = iVar10;
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
      if ((DAT_02f7c538 == 0) && (g_ActiveButton == (CEdButton *)0x0)) {
        iVar10 = core_msnedit_cpp_FUN_0053c340();
        *(int *)(in_stack_00000004->field2_0xc + 0x20) = iVar10;
        if (iVar10 != 0) {
          uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940
                    (*(CDemonActor **)(in_stack_00000004->field2_0xc + 0x20),
                     CONCAT31(extraout_var_01,uVar2));
        }
      }
      else {
        in_stack_00000004->field2_0xc[0x20] = '\0';
        in_stack_00000004->field2_0xc[0x21] = '\0';
        in_stack_00000004->field2_0xc[0x22] = '\0';
        in_stack_00000004->field2_0xc[0x23] = '\0';
      }
      if (*(int *)(in_stack_00000004->field2_0xc + 0x1c) != 0) {
        uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                          (g_CEditorToolsPtr);
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940
                  (*(CDemonActor **)(in_stack_00000004->field2_0xc + 0x1c),
                   CONCAT31(extraout_var,uVar2));
        pfVar3 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) +
                                               0x154) + 0x14))();
        local_c4 = pfVar3[3] - *pfVar3;
        local_c0 = pfVar3[4] - pfVar3[1];
        local_bc = pfVar3[5] - pfVar3[2];
        local_40 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0) *
                   (float)DOUBLE_0063c57c;
        if (local_40 < (float)DOUBLE_0063c5a4) {
          local_40 = 0.5;
        }
        param5 = (void *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) + 0x30);
        label_offset = (CQuaternion4f *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) + 0x20);
        uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                          (g_CEditorToolsPtr);
        shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
                  (g_CEditorToolsPtr,(int)local_40,(CQuaternion4f *)CONCAT31(extraout_var_00,uVar2),
                   label_offset,param5);
      }
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      engine_2d_c_setupViewportAndClipping_FUN_00401800(0,0,g_WindowWidth + -1,g_WindowHeight + -1);
      core_msnedit_cpp_FUN_0053c4f0();
      if (*(char **)(in_stack_00000004->field2_0xc + 0x20) != (char *)0x0) {
        engine_2d_c_drawText_FUN_00401fd0
                  (*(char **)(in_stack_00000004->field2_0xc + 0x20),g_MouseX,g_MouseY);
      }
      if (0.0 < _DAT_02f7c540) {
        engine_2d_c_drawText_FUN_00401fd0(local_2b0,0,0);
        if (DAT_02f7c53c == 0) {
          if (g_CEdCheckInstance.checked_state == 0) {
            pcVar14 = "Virtual Director DISABLED";
          }
          else {
            pcVar14 = "Virtual Director ENABLED";
          }
          engine_2d_c_drawText_FUN_00401fd0(pcVar14,0,0xb);
        }
        _DAT_02f7c540 = _DAT_02f7c540 - g_CGamePtr->delta_time_float;
        if (_DAT_02f7c540 < 0.0) {
          _DAT_02f7c540 = 0.0;
        }
      }
      if (*(int *)(in_stack_00000004->field2_0xc + 0x18) != 0) {
        iVar10 = core_msnedit_cpp_FUN_00536cd0();
        if (iVar10 != 0) {
          local_64 = 1;
          local_14 = 0;
        }
        iVar10 = core_msnedit_cpp_FUN_00536cd0();
        if (iVar10 != 0) {
          local_14 = 1;
        }
        iVar10 = core_msnedit_cpp_FUN_00536cd0();
        if (iVar10 != 0) {
          local_14 = 2;
        }
        iVar10 = core_msnedit_cpp_FUN_00536cd0();
        if (iVar10 != 0) {
          local_14 = 3;
        }
        iVar10 = core_msnedit_cpp_FUN_00536cd0();
        if (iVar10 != 0) {
          local_14 = 4;
        }
        if (DAT_02f7c53c == 0) {
          g_CEdCheckInstance.coord_unk = 0xff;
          shape_edittool_cpp_CEdCheck_setupWithText_FUN_004a6a60
                    (&g_CEdCheckInstance,g_WindowWidth + -0x8c,0xf3,"Virtual Director");
          shape_edittool_cpp_CEdCheck_handleInput_FUN_004a6d20(&g_CEdCheckInstance);
          shape_edittool_cpp_CEdCheck_render_FUN_004a6c00(&g_CEdCheckInstance);
        }
      }
    }
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0();
    if (DAT_02f7c634 != 0) {
      core_script_cpp_FUN_005645d0();
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    if (DAT_02f7c634 != 0) {
      core_script_cpp_FUN_00566bc0();
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if ((iVar10 != 0) &&
       (iVar10 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                           (g_CEditorToolsPtr,"Exit editor?"), iVar10 != 0))
    goto LAB_00539e00;
    if (DAT_02f7c634 == 0) {
      if (DAT_02f7c53c == 4) {
        local_3c = g_CGamePtr->delta_time_float;
        local_2c = local_3c;
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
        if (iVar10 == 0) {
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
          if (iVar10 != 0) {
            local_2c = local_3c * (float)DOUBLE_0063c584;
          }
        }
        else {
          local_2c = local_3c * (float)DOUBLE_0063c58c;
        }
        local_34 = local_2c * (float)DOUBLE_0063c594;
        local_1c = local_18 * (float)DOUBLE_0063c59c;
        if (local_1c < 1.0) {
          local_1c = 1.0;
        }
        local_1c = local_1c * local_2c;
        local_20 = local_18;
        if (local_18 < 1.0) {
          local_20 = 1.0;
        }
        local_20 = local_20 * local_2c;
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4a);
        if (iVar10 != 0) {
          local_7c = local_7c + local_34;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4e);
        if (iVar10 != 0) {
          local_7c = local_7c - local_34;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x52);
        if (iVar10 != 0) {
          local_78 = local_78 + local_34;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x53);
        if (iVar10 != 0) {
          local_78 = local_78 - local_34;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0xd);
        if (iVar10 != 0) {
          local_18 = local_18 - local_1c;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0xc);
        if (iVar10 != 0) {
          local_18 = local_18 + local_1c;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x29);
        if (iVar10 != 0) {
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
          if (iVar10 != 0) {
            local_28 = local_28 - local_20;
          }
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
          if (iVar10 != 0) {
            local_28 = local_28 + local_20;
          }
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
          if (iVar10 != 0) {
            local_24 = local_24 + local_20;
          }
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
          if (iVar10 != 0) {
            local_24 = local_24 - local_20;
          }
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
          if (iVar10 != 0) {
            local_18 = local_18 - local_1c;
          }
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
          if (iVar10 != 0) {
            local_18 = local_18 + local_1c;
          }
        }
        if (local_7c < (float)DOUBLE_0063c5ac) {
          local_7c = -1.5707964;
        }
        if ((float)DOUBLE_0063c594 < local_7c) {
          local_7c = 1.5707964;
        }
        if (local_78 < (float)DOUBLE_0063c5ac) {
          local_78 = local_78 + FLOAT_0063c5b4;
        }
        if ((float)DOUBLE_0063c594 < local_78) {
          local_78 = local_78 + FLOAT_0063c5b8;
        }
        if (local_18 < (float)DOUBLE_0063c5a4) {
          local_18 = 0.5;
        }
      }
      if (DAT_02f7c53c == 2) {
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_170);
      }
      else if (*(int *)(in_stack_00000004->field2_0xc + 0x1c) != 0) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) + 0x154) + 0xd0))();
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                  (*(CDemonActor **)(in_stack_00000004->field2_0xc + 0x1c));
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xe);
      if (iVar10 != 0) {
        core_msnedit_cpp_UndoChangeMaybe_FUN_0053c0b0();
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar10 == 0) {
          core_msnedit_cpp_FUN_0053ca30();
        }
        else {
          core_msnedit_cpp_FUN_0053ca80();
        }
        core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3c);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        in_stack_fffff668 = (CKeys *)(g_WindowWidth + -1);
        if (iVar10 == 0) {
          core_script_cpp_CScript_unk50_FUN_00566660();
          DAT_02f7c634 = 1;
        }
        else {
          core_script_cpp_CScript_unk50_FUN_00566660();
          DAT_02f7c634 = 2;
        }
LAB_00539d68:
        core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
    }
    else {
      core_script_cpp_CScript_Unk20_FUN_00565130();
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3c);
      if (iVar10 != 0) {
        if (DAT_02f7c634 == 1) {
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
          if (iVar10 == 0) {
            core_script_cpp_CScript_unk50_FUN_00566660();
            DAT_02f7c634 = 2;
          }
          else {
            core_script_cpp_CScript_unk50_FUN_00566660();
            DAT_02f7c634 = 0;
          }
        }
        else {
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
          if (iVar10 == 0) {
            core_script_cpp_CScript_unk50_FUN_00566660();
            DAT_02f7c634 = 0;
          }
          else {
            core_script_cpp_CScript_unk50_FUN_00566660();
            DAT_02f7c634 = 1;
          }
        }
        goto LAB_00539d68;
      }
    }
    d3 = 0x1d;
    d2 = g_CKeysPtr;
    iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if (iVar10 != 0) {
      d3 = 0x539d95;
      in_stack_fffff668 = g_CKeysPtr;
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1f);
      if (iVar10 != 0) {
        engine_2d_c_clearInputAndWait_FUN_00403260();
        if (in_stack_00000004->field2_0xc[0x38] == '\0') {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No mission name!");
        }
        else {
          crt_stdio_c_sprintf_FUN_005fdbd0(local_3b4,"%s.msn");
          in_stack_fffff668 = (CKeys *)0x53a627;
          iVar10 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                             (g_CEditorToolsPtr,"Save mission to %s.msn");
          if (iVar10 != 0) {
            core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190();
          }
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
    }
    d5 = 0x539dd6;
    d6 = g_CKeysPtr;
    iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if ((iVar10 != 0) &&
       (iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19), iVar10 != 0)) {
      local_60 = 1;
LAB_00539e00:
      core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
      iVar10 = local_60;
      pCVar1 = g_CDemonSetPtr;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      pCVar1->unk_lighting_param1 = 0;
      pCVar1->unk_lighting_param3 = 0;
      pCVar1->unk_lighting_param4 = 0;
      crt_io_c_deleteFile_FUN_005ff9d0("$$UNDO$$.TMP");
      if (iVar10 == 0) {
        return 0;
      }
      return 2;
    }
    if ((DAT_02f7c634 == 0) ||
       (iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38), iVar10 != 0)) {
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x12);
      if (iVar10 != 0) {
        bVar12 = g_CEdCheckInstance.checked_state == 0;
        g_CEdCheckInstance.checked_state = (int)bVar12;
        if (bVar12) {
          local_64 = 1;
          local_14 = 0;
        }
        _DAT_02f7c540 = DAT_00661c44;
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x17);
      if (iVar10 != 0) {
        core_msnedit_cpp_FUN_0053b9f0();
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar10 == 0) {
          core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80();
        }
        else {
          core_msnedit_cpp_DeleteActors_FUN_0053df90();
        }
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
      if (iVar10 != 0) {
        core_msnedit_cpp_DuplicateActorCheckMaybe_FUN_0053bd80();
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x18);
      if (iVar10 != 0) {
        core_msnedit_cpp_DementedMissionEditorSomething_FUN_00537680();
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x14);
      if (iVar10 != 0) {
        core_msnedit_cpp_FUN_0053d8b0();
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
      if (iVar10 != 0) {
        g_CEdCheckInstance.checked_state = 0;
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        pCVar1 = g_CDemonSetPtr;
        if (iVar10 == 0) {
          iVar10 = *(int *)(in_stack_00000004->field2_0xc + 4) + 1;
          *(int *)(in_stack_00000004->field2_0xc + 4) = iVar10;
          if (pCVar1->camera_count <= iVar10) {
            in_stack_00000004->field2_0xc[4] = '\0';
            in_stack_00000004->field2_0xc[5] = '\0';
            in_stack_00000004->field2_0xc[6] = '\0';
            in_stack_00000004->field2_0xc[7] = '\0';
          }
        }
        else {
          iVar10 = *(int *)(in_stack_00000004->field2_0xc + 4) + -1;
          *(int *)(in_stack_00000004->field2_0xc + 4) = iVar10;
          if (iVar10 < 0) {
            *(int *)(in_stack_00000004->field2_0xc + 4) = g_CDemonSetPtr->camera_count + -1;
          }
        }
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,*(int *)(in_stack_00000004->field2_0xc + 4));
        local_14 = 0;
        local_64 = 0;
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x23);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar10 == 0) {
          if (*(int *)(in_stack_00000004->field2_0xc + 0x1c) != 0) {
            *(undefined4 *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) + 0x148) = 1;
            core_msnedit_cpp_FUN_0053bcf0();
          }
        }
        else {
          core_msnedit_cpp_HideActors_FUN_0053dcf0();
        }
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x16);
      if (iVar10 != 0) {
        iVar10 = 0x53a824;
        iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar6 == 0) {
          iVar6 = -1;
          while( true ) {
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff64c);
            for (pCVar4 = in_stack_00000004->first_actor; pCVar4 != (CDemonActor *)0x0;
                pCVar4 = pCVar4->next_actor) {
              if (pCVar4->field26_0x148 != 0) {
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          ((CStrList *)&stack0xfffff64c,pCVar4->actor_name);
              }
            }
            if (iVar10 < 1) break;
            shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff64c);
            iVar10 = 0x53ac35;
            iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                              ((CPickList *)&stack0xfffff64c,"Select actor to unhide",iVar6
                               ,0);
            if (iVar6 < 0) goto LAB_0053a88c;
            shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffff64c,iVar6)
            ;
            pcVar14 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000004);
            if (pcVar14 == (char *)0x0) {
              g_CurrentFilename = "..\\core\\msnedit.cpp";
              g_CurrentLineNumber = 0x739;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
            }
            pcVar14[0x148] = '\0';
            pcVar14[0x149] = '\0';
            pcVar14[0x14a] = '\0';
            pcVar14[0x14b] = '\0';
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      ((CPickList *)&stack0xfffff64c,0,(uint)d2,d3,(uint)in_stack_fffff668,d5,
                       (uint)d6);
          }
          if (iVar6 < 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"No actors hidden.");
          }
LAB_0053a88c:
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffff64c,0,(uint)d2,d3,(uint)in_stack_fffff668,d5,(uint)d6
                    );
        }
        else {
          for (pCVar4 = in_stack_00000004->first_actor; pCVar4 != (CDemonActor *)0x0;
              pCVar4 = pCVar4->next_actor) {
            pCVar4->field26_0x148 = 0;
          }
        }
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2f);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar10 == 0) {
          local_14 = DAT_02f7c53c + 1;
          if (4 < local_14) {
            local_14 = 0;
          }
        }
        else {
          local_14 = DAT_02f7c53c + -1;
          if (local_14 < 0) {
            local_14 = 4;
          }
        }
        local_64 = 1;
      }
      in_stack_fffff668 = g_CKeysPtr;
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x31);
      if (iVar10 != 0) {
        in_stack_fffff668 = (CKeys *)0x53a909;
        iVar10 = core_msnedit_cpp_FUN_0053c210();
        if (iVar10 != 0) {
          core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
        }
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x11);
      if (iVar10 != 0) {
        core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
      if (iVar10 != 0) {
        core_msnedit_cpp_FUN_0053c730();
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19);
      if (iVar10 != 0) {
        *(int *)(in_stack_00000004->field2_0xc + 4) = local_48;
        local_64 = 0;
        local_14 = 0;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,local_48);
        g_CEdCheckInstance.checked_state = 0;
      }
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3b);
    if (iVar10 != 0) {
      core_msnedit_cpp_MasterEditorKeysHelpScreen_FUN_00535e70();
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x41);
    if (iVar10 != 0) {
      if (DAT_02f7c634 == 0) {
        core_script_cpp_CScript_unk50_FUN_00566660();
        DAT_02f7c634 = 1;
        core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
      core_script_cpp_FUN_00566080();
    }
    if (-1 < local_14) {
      DAT_02f7c53c = local_14;
      switch(local_14) {
      case 0:
        if (local_64 != 0) {
          core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                    (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field2_0xc + 0x1c),2);
        }
        core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
        break;
      case 1:
      case 2:
      case 3:
        break;
      case 4:
        local_28 = 0.0;
        local_24 = 0.0;
        break;
      default:
        g_CurrentFilename = "..\\core\\msnedit.cpp";
        g_CurrentLineNumber = 0x78b;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid cameraMode!");
      }
      _DAT_02f7c540 = DAT_00661c44;
    }
    pCVar1 = g_CDemonSetPtr;
    if (-1 < local_38) {
      g_CEdCheckInstance.checked_state = 0;
      *(int *)(in_stack_00000004->field2_0xc + 4) = local_38;
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(pCVar1,local_38);
      _DAT_02f7c540 = DAT_00661c44;
    }
    if (((((g_MouseButtonFlags & 1U) == 0) && ((local_30 & 1) != 0)) && (DAT_02f7c538 == 0)) &&
       (g_ActiveButton == (CEdButton *)0x0)) {
      if ((*(int *)(in_stack_00000004->field2_0xc + 0x1c) == 0) || (DAT_02f7c528 < 0)) {
        if (*(int *)(in_stack_00000004->field2_0xc + 0x20) != 0) {
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
          if (iVar10 == 0) {
            if (*(int *)(in_stack_00000004->field2_0xc + 0x20) ==
                *(int *)(in_stack_00000004->field2_0xc + 0x1c)) {
              if ((local_30 != 0) || (0x3e999999 < (int)DAT_00680818)) goto LAB_0053aea7;
              core_msnedit_cpp_FUN_0053c730();
              engine_2d_c_clearInputAndWait_FUN_00403260();
              DAT_00680818 = 0.0;
            }
            else {
              core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
              DAT_00680818 = 0.0;
            }
          }
          else {
            if (DAT_02f7c634 != 0) {
              core_script_cpp_FUN_00565f70();
            }
LAB_0053aea7:
            DAT_00680818 = 0.0;
          }
        }
      }
      else {
        iVar6 = DAT_02f7c528 * 0xec;
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar10 == 0) {
          iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
          if (iVar10 == 0) {
            iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
            if (iVar10 == 0) {
              if (*(int *)(&DAT_02f7a080 + iVar6) == 0) goto LAB_0053ad72;
              core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                        ((CActorProperty *)(&DAT_02f7a02c + iVar6),
                         *(CDemonActor **)(in_stack_00000004->field2_0xc + 0x1c));
              engine_2d_c_clearInputAndWait_FUN_00403260();
              local_30 = 0;
              DAT_00680818 = 1e+10;
            }
            else {
              core_actor_cpp_CActorProperty_FUN_0040ea50();
              shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                        (g_CEditorToolsPtr,local_4e0);
              DAT_00680818 = 1e+10;
            }
          }
          else {
            if (DAT_02f7c634 == 0) goto LAB_0053ad72;
            core_actor_cpp_CActorProperty_FUN_0040ea50();
            core_script_cpp_FUN_00565f70();
            DAT_00680818 = 1e+10;
          }
        }
        else {
          core_msnedit_cpp_FUN_0053af50();
LAB_0053ad72:
          DAT_00680818 = 1e+10;
        }
      }
    }
    else {
      DAT_00680818 = g_CGamePtr->delta_time_float + DAT_00680818;
    }
    if (((g_MouseButtonFlags & 1U) == 0) || ((local_30 & 1) == 0)) {
      _DAT_02f7c630 = 0.0;
    }
    else {
      _DAT_02f7c630 = g_CGamePtr->delta_time_float + _DAT_02f7c630;
    }
    if (local_44 != g_CDemonSetPtr->selected_camera_index) {
      local_48 = local_44;
    }
  } while( true );
}


// Assembly code:
// 005390f0: PUSH EBX
//   Label: core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0
// 005390f1: PUSH ESI
// 005390f2: PUSH EDI
// 005390f3: PUSH EBP
// 005390f4: MOV EBP,ESP
// 005390f6: SUB ESP,0x9a4
// 005390fc: SUB EBP,0x7e
// 005390ff: PUSH 0x680800
//   XREF to: 00680800 (DATA)
// 00539104: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00539109: ADD ESP,0x4
// 0053910c: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539112: PUSH 0x2f7a024
//   XREF to: 02f7a024 (DATA)
// 00539117: MOV dword ptr [EAX + 0x4],0x1
// 0053911e: CALL core_actor.cpp_FUN_0040e150
//   XREF to: 0040e150 (UNCONDITIONAL_CALL)
// 00539123: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539129: ADD ESP,0x4
// 0053912c: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00539132: MOV dword ptr [EAX + 0x28],0x0
// 00539139: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 0053913a: MOV dword ptr [EAX + 0x2c],0x0
// 00539141: CALL core_game.cpp_CGame_setGameRes_FUN_004dade0
//   XREF to: 004dade0 (UNCONDITIONAL_CALL)
// 00539146: ADD ESP,0x4
// 00539149: PUSH 0x63c34c
//   XREF to: 0063c34c (DATA)
// 0053914e: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00539154: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00539155: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053915a: ADD ESP,0x8
// 0053915d: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 00539162: MOV ESI,0x42800000
// 00539167: CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   XREF to: 004727c0 (UNCONDITIONAL_CALL)
// 0053916c: ADD ESP,0x4
// 0053916f: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00539175: XOR EBX,EBX
// 00539177: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00539178: MOV dword ptr [0x02d807a4],EBX
//   XREF to: 02d807a4 (WRITE)
// 0053917e: MOV dword ptr [0x02d7ec30],ESI
//   XREF to: 02d7ec30 (WRITE)
// 00539184: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 00539189: ADD ESP,0x4
// 0053918c: PUSH EBX
// 0053918d: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00539192: PUSH EAX
//   XREF to: 03114278 (DATA)
// 00539193: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 00539198: ADD ESP,0x8
// 0053919b: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005391a1: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005391a2: CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
//   XREF to: 00575b20 (UNCONDITIONAL_CALL)
// 005391a7: ADD ESP,0x4
// 005391aa: PUSH 0x63c35b
//   XREF to: 0063c35b (DATA)
// 005391af: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005391b5: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005391b6: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005391bb: ADD ESP,0x8
// 005391be: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 005391c4: PUSH EBX
// 005391c5: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 005391ca: ADD ESP,0x4
// 005391cd: PUSH 0x63c36d
//   XREF to: 0063c36d (DATA)
// 005391d2: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005391d8: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005391d9: MOV EDI,dword ptr [EBP + 0x96]
//   XREF to: Stack[0x8] (READ)
// 005391df: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005391e4: ADD ESP,0x8
// 005391e7: TEST EDI,EDI
// 005391e9: JZ 0x00539205
//   XREF to: 00539205 (CONDITIONAL_JUMP)
// 005391eb: XOR EAX,EAX
// 005391ed: MOV EDX,0x1
// 005391f2: MOV [0x02f7c53c],EAX
//   XREF to: 02f7c53c (WRITE)
// 005391f7: MOV dword ptr [EBX + 0x10],EAX
// 005391fa: MOV [0x02f7c634],EAX
//   XREF to: 02f7c634 (WRITE)
// 005391ff: MOV dword ptr [0x02f7c548],EDX
//   XREF to: 02f7c548 (WRITE)
// 00539205: MOV EBX,dword ptr [EBP + 0x92]
//   Label: LAB_00539205
//   XREF to: Stack[0x4] (READ)
// 0053920b: FLD float ptr [0x00661c44]
//   XREF to: 00661c44 (READ)
// 00539211: PUSH EBX
// 00539212: FSTP float ptr [0x02f7c540]
//   XREF to: 02f7c540 (WRITE)
// 00539218: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053921d: ADD ESP,0x4
// 00539220: MOV ESI,dword ptr [EBX + 0x10]
// 00539223: PUSH ESI
// 00539224: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053922a: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0053922b: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 00539230: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00539236: ADD ESP,0x8
// 00539239: MOV dword ptr [EBX + 0x24],0xffffffff
// 00539240: CMP EDX,0x190
// 00539246: SETG AL
// 00539249: AND EAX,0xff
// 0053924e: PUSH EAX
// 0053924f: PUSH EBX
// 00539250: CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   XREF to: 00539060 (UNCONDITIONAL_CALL)
// 00539255: ADD ESP,0x8
// 00539258: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0053925d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00539262: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539268: MOV EAX,dword ptr [EAX + 0x548]
// 0053926e: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00539271: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00539276: CMP dword ptr [EAX + 0x14d154],0x0
//   XREF to: 032613cc (READ)
// 0053927d: JLE 0x005392a2
//   XREF to: 005392a2 (CONDITIONAL_JUMP)
// 0053927f: MOV EDI,0xf423f
// 00539284: MOV EAX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (READ)
// 0053928a: XOR EBX,EBX
// 0053928c: XOR ESI,ESI
// 0053928e: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00539291: MOV EAX,[0x006810c8]
//   Label: LAB_00539291
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00539296: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 0053929c: JL 0x00539e75
//   XREF to: 00539e75 (CONDITIONAL_JUMP)
// 005392a2: MOV EBX,dword ptr [EBP + 0x3e]
//   Label: LAB_005392a2
//   XREF to: Stack[-0x50] (READ)
// 005392a5: PUSH EBX
// 005392a6: MOV ESI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 005392ac: PUSH ESI
// 005392ad: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 005392b2: ADD ESP,0x8
// 005392b5: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 005392bb: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 005392bc: CALL core_fire.cpp_CFireEffect_init_FUN_004c6c80
//   XREF to: 004c6c80 (UNCONDITIONAL_CALL)
// 005392c1: ADD ESP,0x4
// 005392c4: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005392c9: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 005392ca: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 005392cf: ADD ESP,0x4
// 005392d2: LEA EAX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 005392d8: PUSH EAX
// 005392d9: MOV ESI,0x41200000
// 005392de: CALL core_slew.cpp_CSlew_init_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 005392e3: XOR EDX,EDX
// 005392e5: MOV EAX,[0x03276acc]
//   XREF to: 03276acc (READ)
// 005392ea: MOV dword ptr [EBP + 0x12],EDX
//   XREF to: Stack[-0x7c] (WRITE)
// 005392ed: MOV dword ptr [EBP + 0x16],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 005392f0: MOV dword ptr [EBP + 0x32],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005392f3: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005392f8: MOV dword ptr [EBP + 0x1a],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 005392fb: MOV dword ptr [EBP + 0x76],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005392fe: MOV EAX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 00539304: ADD ESP,0x4
// 00539307: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0053930a: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539310: XOR ECX,ECX
// 00539312: ADD EAX,0x44
// 00539315: MOV dword ptr [EBP + 0x66],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00539318: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0053931b: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 00539320: MOV dword ptr [EBP + 0x6a],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00539323: ADD EAX,0x4
// 00539326: MOV dword ptr [EBP + 0x2e],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 00539329: MOV dword ptr [EBP + 0x3a],EAX
//   XREF to: Stack[-0x54] (WRITE)
//   XREF to: 032758ec (DATA)
// 0053932c: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 00539331: MOV EDX,0x60ad78ec
// 00539336: ADD EAX,0x8
// 00539339: MOV dword ptr [0x00680818],EDX
//   XREF to: 00680818 (WRITE)
// 0053933f: MOV dword ptr [EBP + 0x36],EAX
//   XREF to: Stack[-0x58] (WRITE)
//   XREF to: 032758f0 (DATA)
// 00539342: MOV EAX,[0x006810c8]
//   Label: LAB_00539342
//   XREF to: 006810c8 (READ)
// 00539347: MOV ESI,0xffffffff
// 0053934c: XOR EBX,EBX
// 0053934e: MOV EAX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 00539354: MOV dword ptr [EBP + 0x2a],EBX
//   XREF to: Stack[-0x64] (WRITE)
// 00539357: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0053935a: MOV EAX,[0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 0053935f: MOV dword ptr [EBP + 0x7a],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00539362: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00539365: CALL wincore_winrun.cpp_doNothing_FUN_005f2f80
//   XREF to: 005f2f80 (UNCONDITIONAL_CALL)
// 0053936a: MOV EAX,[0x02f7c634]
//   XREF to: 02f7c634 (READ)
// 0053936f: MOV dword ptr [EBP + 0x56],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 00539372: CMP EAX,0x2
// 00539375: JZ 0x0053991f
//   XREF to: 0053991f (CONDITIONAL_JUMP)
// 0053937b: MOV ECX,0x32
// 00539380: LEA EDI,[EBP + 0xfffffdde]
//   XREF to: Stack[-0x2b0] (DATA)
// 00539386: MOV ESI,0x680830
//   XREF to: 00680830 (DATA)
// 0053938b: MOV EAX,[0x02f7c53c]
//   XREF to: 02f7c53c (READ)
// 00539390: MOVSD.REP ES:EDI,ESI
//   XREF to: 00680830 (READ)
//   XREF to: 00680834 (READ)
// 00539392: CMP EAX,0x4
// 00539395: JA 0x0053a292
//   XREF to: 0053a292 (CONDITIONAL_JUMP)
// 0053939b: JMP dword ptr [EAX*0x4 + 0x5390c8]
//   Label: switchD
//   XREF to: 005393a2 (COMPUTED_JUMP)
//   XREF to: 00539ea8 (COMPUTED_JUMP)
//   XREF to: 00539f0e (COMPUTED_JUMP)
//   XREF to: 00539f74 (COMPUTED_JUMP)
//   XREF to: 0053a0c4 (COMPUTED_JUMP)
//   XREF to: 005390c8 (READ)
//   XREF to: 005393a2 (COMPUTED_JUMP)
// 005393a2: CMP dword ptr [0x02f7c548],0x0
//   Label: caseD_0
//   XREF to: 02f7c548 (READ)
// 005393a9: JZ 0x005393ce
//   XREF to: 005393ce (CONDITIONAL_JUMP)
// 005393ab: CMP dword ptr [0x02cf6a94],0x0
//   XREF to: 02cf6a94 (READ)
// 005393b2: JNZ 0x005393ce
//   XREF to: 005393ce (CONDITIONAL_JUMP)
// 005393b4: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 005393ba: PUSH EBX
// 005393bb: MOV EBX,dword ptr [EAX + 0x28]
// 005393be: PUSH EBX
// 005393bf: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005393c5: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005393c6: CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   XREF to: 005751d0 (UNCONDITIONAL_CALL)
// 005393cb: ADD ESP,0xc
// 005393ce: PUSH 0x3275924
//   Label: LAB_005393ce
//   XREF to: 03275924 (DATA)
// 005393d3: PUSH 0x63c38a
//   XREF to: 0063c38a (DATA)
// 005393d8: LEA EAX,[EBP + 0xfffffdde]
//   XREF to: Stack[-0x2b0] (DATA)
// 005393de: PUSH EAX
// 005393df: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005393e4: MOV EAX,[0x032758e8]
//   XREF to: 032758e8 (READ)
// 005393e9: MOV dword ptr [EBP + -0x7e],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 005393ec: MOV EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x54] (READ)
// 005393ef: MOV EAX,dword ptr [EAX]
//   XREF to: 032758ec (READ)
// 005393f1: MOV dword ptr [EBP + -0x7a],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 005393f4: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x58] (READ)
// 005393f7: MOV EAX,dword ptr [EAX]
//   XREF to: 032758f0 (READ)
// 005393f9: LEA EBX,[EBP + -0x7e]
//   XREF to: Stack[-0x10c] (DATA)
// 005393fc: MOV dword ptr [EBP + -0x76],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 005393ff: LEA EAX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 00539405: ADD ESP,0xc
// 00539408: CMP EAX,EBX
// 0053940a: JZ 0x00539427
//   XREF to: 00539427 (CONDITIONAL_JUMP)
// 0053940c: MOV EAX,dword ptr [EBP + -0x7e]
//   XREF to: Stack[-0x10c] (READ)
// 0053940f: MOV dword ptr [EBP + 0xffffff1e],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 00539415: MOV EAX,dword ptr [EBP + -0x7a]
//   XREF to: Stack[-0x108] (READ)
// 00539418: MOV dword ptr [EBP + 0xffffff22],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 0053941e: MOV EAX,dword ptr [EBP + -0x76]
//   XREF to: Stack[-0x104] (READ)
// 00539421: MOV dword ptr [EBP + 0xffffff26],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 00539427: MOV ECX,0xa
//   Label: LAB_00539427
// 0053942c: LEA EDI,[EBP + 0xfffffea6]
//   XREF to: Stack[-0x1e8] (DATA)
// 00539432: MOV ESI,0x32758f4
//   XREF to: 032758f4 (DATA)
// 00539437: LEA EAX,[EBP + -0x4e]
//   XREF to: Stack[-0xdc] (DATA)
// 0053943a: MOVSD.REP ES:EDI,ESI
//   XREF to: 032758f4 (READ)
//   XREF to: 032758f8 (READ)
// 0053943c: PUSH EAX
// 0053943d: MOV ECX,0xa
// 00539442: LEA EDI,[EBP + 0xfffffece]
//   XREF to: Stack[-0x1c0] (DATA)
// 00539448: LEA EAX,[EBP + 0xfffffece]
//   XREF to: Stack[-0x1c0] (DATA)
// 0053944e: LEA ESI,[EBP + 0xfffffea6]
//   XREF to: Stack[-0x1e8] (DATA)
// 00539454: PUSH EAX
// 00539455: MOVSD.REP ES:EDI,ESI
// 00539457: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 0053945c: MOV EBX,EAX
// 0053945e: LEA EAX,[EBP + 0xffffff2a]
//   XREF to: Stack[-0x164] (DATA)
// 00539464: ADD ESP,0x8
// 00539467: CMP EAX,EBX
// 00539469: JZ 0x00539485
//   XREF to: 00539485 (CONDITIONAL_JUMP)
// 0053946b: MOV EAX,dword ptr [EBX]
// 0053946d: MOV dword ptr [EBP + 0xffffff2a],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 00539473: MOV EAX,dword ptr [EBX + 0x4]
// 00539476: MOV dword ptr [EBP + 0xffffff2e],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 0053947c: MOV EAX,dword ptr [EBX + 0x8]
// 0053947f: MOV dword ptr [EBP + 0xffffff32],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 00539485: MOV EAX,[0x0327591c]
//   Label: LAB_00539485
//   XREF to: 0327591c (READ)
// 0053948a: MOV dword ptr [EBP + 0xffffff36],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 00539490: MOV EDI,dword ptr [EBP + 0x92]
//   Label: LAB_00539490
//   XREF to: Stack[0x4] (READ)
// 00539496: PUSH EDI
// 00539497: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053949c: MOV EDX,dword ptr [EDI + 0x24]
// 0053949f: ADD ESP,0x4
// 005394a2: TEST EDX,EDX
// 005394a4: JZ 0x005394ab
//   XREF to: 005394ab (CONDITIONAL_JUMP)
// 005394a6: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005394ab: MOV ECX,dword ptr [0x02f7c53c]
//   Label: LAB_005394ab
//   XREF to: 02f7c53c (READ)
// 005394b1: TEST ECX,ECX
// 005394b3: JNZ 0x0053a2d8
//   XREF to: 0053a2d8 (CONDITIONAL_JUMP)
// 005394b9: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 005394bf: CMP dword ptr [EAX + 0x38],0x0
// 005394c3: JZ 0x0053a2ba
//   XREF to: 0053a2ba (CONDITIONAL_JUMP)
// 005394c9: MOV dword ptr [0x03276acc],0xffff
//   XREF to: 03276acc (WRITE)
// 005394d3: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005394d8: MOV dword ptr [EAX + 0x15ac80],0x1
//   XREF to: 0326eef8 (WRITE)
// 005394e2: MOV dword ptr [EAX + 0x15ac84],0x1
//   XREF to: 0326eefc (WRITE)
// 005394ec: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_005394ec
//   XREF to: Stack[0x4] (READ)
// 005394f2: MOV EDX,dword ptr [EAX + 0x30]
// 005394f5: XOR EBX,EBX
// 005394f7: TEST EDX,EDX
// 005394f9: SETZ AL
// 005394fc: MOV BL,AL
// 005394fe: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00539503: MOV dword ptr [EAX + 0x15ac8c],EBX
//   XREF to: 0326ef04 (WRITE)
// 00539509: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053950f: CMP dword ptr [EBX + 0x34],0x0
// 00539513: SETZ BL
// 00539516: PUSH 0x1
// 00539518: AND EBX,0xff
// 0053951e: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0053951f: MOV dword ptr [EAX + 0x15ac90],EBX
//   XREF to: 0326ef08 (WRITE)
// 00539525: CALL core_set.cpp_CDemonSet_FUN_0056c1a0
//   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)
// 0053952a: ADD ESP,0x8
// 0053952d: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00539533: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00539534: CALL core_set.cpp_CDemonSet_FUN_0056be80
//   XREF to: 0056be80 (UNCONDITIONAL_CALL)
// 00539539: ADD ESP,0x4
// 0053953c: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00539541: CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
//   XREF to: 0044c860 (UNCONDITIONAL_CALL)
// 00539546: ADD ESP,0x4
// 00539549: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00539549
//   XREF to: Stack[0x4] (READ)
// 0053954f: CMP dword ptr [EAX + 0x24],0x0
// 00539553: JZ 0x00539605
//   XREF to: 00539605 (CONDITIONAL_JUMP)
// 00539559: MOV EDI,dword ptr [0x02f7c634]
//   XREF to: 02f7c634 (READ)
// 0053955f: TEST EDI,EDI
// 00539561: JNZ 0x00539605
//   XREF to: 00539605 (CONDITIONAL_JUMP)
// 00539567: PUSH EDI
// 00539568: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053956d: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0053956e: CALL core_setedit.cpp_CDemonSet_FUN_00577af0
//   XREF to: 00577af0 (UNCONDITIONAL_CALL)
// 00539573: MOV EBX,EAX
// 00539575: ADD ESP,0x8
// 00539578: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0053957b: TEST EAX,EAX
// 0053957d: JL 0x00539605
//   XREF to: 00539605 (CONDITIONAL_JUMP)
// 00539583: PUSH 0x38
// 00539585: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053958a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053958b: MOV ESI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053958d: CALL dword ptr [ESI]
// 0053958f: ADD ESP,0x8
// 00539592: TEST EAX,EAX
// 00539594: JZ 0x0053a3b1
//   XREF to: 0053a3b1 (CONDITIONAL_JUMP)
// 0053959a: IMUL EBX,EBX,0x1a4
// 005395a0: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005395a6: DEC ESI
// 005395a7: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005395ac: PUSH ESI
// 005395ad: DEC EAX
// 005395ae: PUSH EAX
// 005395af: PUSH 0x101
// 005395b4: PUSH EDI
// 005395b5: MOV ECX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005395bb: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 005395bc: CALL core_script.cpp_CScript_unk50_FUN_00566660
//   XREF to: 00566660 (UNCONDITIONAL_CALL)
// 005395c1: ADD ESP,0x14
// 005395c4: MOV ESI,0x1
// 005395c9: PUSH ESI
// 005395ca: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005395d0: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 005395d1: MOV dword ptr [0x02f7c634],ESI
//   XREF to: 02f7c634 (WRITE)
// 005395d7: CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   XREF to: 00539060 (UNCONDITIONAL_CALL)
// 005395dc: ADD ESP,0x8
// 005395df: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005395e4: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005395e9: ADD EAX,0x4
// 005395ec: ADD EBX,EAX
// 005395ee: PUSH EBX
// 005395ef: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005395f4: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 005395f5: CALL core_script.cpp_FUN_00565f70
//   XREF to: 00565f70 (UNCONDITIONAL_CALL)
// 005395fa: MOV EDX,0xffffffff
// 005395ff: ADD ESP,0x8
// 00539602: MOV dword ptr [EBP + 0x56],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00539605: PUSH 0x1
//   Label: LAB_00539605
// 00539607: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053960c: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 00539611: MOV ECX,dword ptr [0x02f7c538]
//   XREF to: 02f7c538 (READ)
// 00539617: ADD ESP,0x8
// 0053961a: TEST ECX,ECX
// 0053961c: JZ 0x0053a3b9
//   XREF to: 0053a3b9 (CONDITIONAL_JUMP)
// 00539622: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00539622
//   XREF to: Stack[0x4] (READ)
// 00539628: MOV dword ptr [EAX + 0x2c],0x0
// 0053962f: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0053962f
//   XREF to: Stack[0x4] (READ)
// 00539635: CMP dword ptr [EAX + 0x28],0x0
// 00539639: JZ 0x005396fb
//   XREF to: 005396fb (CONDITIONAL_JUMP)
// 0053963f: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00539645: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00539646: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0053964b: ADD ESP,0x4
// 0053964e: PUSH EAX
// 0053964f: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539655: MOV EDX,dword ptr [EAX + 0x28]
// 00539658: PUSH EDX
// 00539659: CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 0053965e: ADD ESP,0x8
// 00539661: LEA ESI,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x124] (DATA)
// 00539667: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053966d: PUSH ESI
// 0053966e: MOV EAX,dword ptr [EAX + 0x28]
// 00539671: PUSH EAX
// 00539672: MOV EBX,dword ptr [EAX + 0x154]
// 00539678: CALL dword ptr [EBX + 0x14]
// 0053967b: LEA EBX,[EAX + 0xc]
// 0053967e: FLD float ptr [EBX]
// 00539680: FSUB float ptr [EAX]
// 00539682: FSTP float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc4] (WRITE)
// 00539685: FLD float ptr [EBX + 0x4]
// 00539688: FSUB float ptr [EAX + 0x4]
// 0053968b: FST float ptr [EBP + -0x32]
//   XREF to: Stack[-0xc0] (WRITE)
// 0053968e: FMUL float ptr [EBP + -0x32]
//   XREF to: Stack[-0xc0] (READ)
// 00539691: FLD float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc4] (READ)
// 00539694: FMUL ST0
// 00539696: FLD float ptr [EBX + 0x8]
// 00539699: FSUB float ptr [EAX + 0x8]
// 0053969c: FXCH
// 0053969e: FADDP ST2,ST0
// 005396a0: FST float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xbc] (WRITE)
// 005396a3: FMUL float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xbc] (READ)
// 005396a6: FADDP
// 005396a8: FSQRT
// 005396aa: FMUL double ptr [0x0063c57c]
//   XREF to: 0063c57c (READ)
// 005396b0: ADD ESP,0x8
// 005396b3: FST float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x40] (WRITE)
// 005396b6: FCOMP double ptr [0x0063c5a4]
//   XREF to: 0063c5a4 (READ)
// 005396bc: FNSTSW AX
// 005396be: SAHF
// 005396bf: JNC 0x005396c8
//   XREF to: 005396c8 (CONDITIONAL_JUMP)
// 005396c1: MOV dword ptr [EBP + 0x4e],0x3f000000
//   XREF to: Stack[-0x40] (WRITE)
// 005396c8: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_005396c8
//   XREF to: Stack[0x4] (READ)
// 005396ce: MOV EAX,dword ptr [EAX + 0x28]
// 005396d1: LEA EBX,[EAX + 0x30]
// 005396d4: PUSH EBX
// 005396d5: ADD EAX,0x20
// 005396d8: PUSH EAX
// 005396d9: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005396df: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 005396e0: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 005396e5: ADD ESP,0x4
// 005396e8: PUSH EAX
// 005396e9: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005396ef: PUSH dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x40] (READ)
// 005396f2: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005396f3: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
//   XREF to: 004a1e90 (UNCONDITIONAL_CALL)
// 005396f8: ADD ESP,0x14
// 005396fb: PUSH 0x0
//   Label: LAB_005396fb
// 005396fd: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00539702: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 00539707: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0053970c: ADD ESP,0x8
// 0053970f: DEC EAX
// 00539710: PUSH EAX
// 00539711: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00539716: DEC EAX
// 00539717: PUSH EAX
// 00539718: PUSH 0x0
// 0053971a: PUSH 0x0
// 0053971c: CALL engine_2d.c_setupViewportAndClipping_FUN_00401800
//   XREF to: 00401800 (UNCONDITIONAL_CALL)
// 00539721: ADD ESP,0x10
// 00539724: MOV EDI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053972a: PUSH EDI
// 0053972b: CALL core_msnedit.cpp_FUN_0053c4f0
//   XREF to: 0053c4f0 (UNCONDITIONAL_CALL)
// 00539730: MOV EDX,dword ptr [EDI + 0x2c]
// 00539733: ADD ESP,0x4
// 00539736: TEST EDX,EDX
// 00539738: JZ 0x00539751
//   XREF to: 00539751 (CONDITIONAL_JUMP)
// 0053973a: MOV ECX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00539740: PUSH ECX
// 00539741: MOV EBX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 00539747: PUSH EBX
// 00539748: PUSH EDX
// 00539749: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053974e: ADD ESP,0xc
// 00539751: FLD float ptr [0x02f7c540]
//   Label: LAB_00539751
//   XREF to: 02f7c540 (READ)
// 00539757: FLDZ
// 00539759: FCOMPP
// 0053975b: FNSTSW AX
// 0053975d: SAHF
// 0053975e: JNC 0x005397c2
//   XREF to: 005397c2 (CONDITIONAL_JUMP)
// 00539760: PUSH 0x0
// 00539762: PUSH 0x0
// 00539764: LEA EAX,[EBP + 0xfffffdde]
//   XREF to: Stack[-0x2b0] (DATA)
// 0053976a: PUSH EAX
// 0053976b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00539770: MOV EDI,dword ptr [0x02f7c53c]
//   XREF to: 02f7c53c (READ)
// 00539776: ADD ESP,0xc
// 00539779: TEST EDI,EDI
// 0053977b: JNZ 0x0053979a
//   XREF to: 0053979a (CONDITIONAL_JUMP)
// 0053977d: CMP dword ptr [0x02f7c548],0x0
//   XREF to: 02f7c548 (READ)
// 00539784: JZ 0x0053a415
//   XREF to: 0053a415 (CONDITIONAL_JUMP)
// 0053978a: PUSH 0xb
// 0053978c: PUSH EDI
// 0053978d: PUSH 0x63c431
//   XREF to: 0063c431 (DATA)
// 00539792: CALL engine_2d.c_drawText_FUN_00401fd0
//   Label: LAB_00539792
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00539797: ADD ESP,0xc
// 0053979a: MOV EAX,[0x0067b654]
//   Label: LAB_0053979a
//   XREF to: 0067b654 (READ)
// 0053979f: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005397a5: FSUBR float ptr [0x02f7c540]
//   XREF to: 02f7c540 (READ)
// 005397ab: FST float ptr [0x02f7c540]
//   XREF to: 02f7c540 (WRITE)
// 005397b1: FLDZ
// 005397b3: FCOMPP
// 005397b5: FNSTSW AX
// 005397b7: SAHF
// 005397b8: JBE 0x005397c2
//   XREF to: 005397c2 (CONDITIONAL_JUMP)
// 005397ba: XOR EDX,EDX
// 005397bc: MOV dword ptr [0x02f7c540],EDX
//   XREF to: 02f7c540 (WRITE)
// 005397c2: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_005397c2
//   XREF to: Stack[0x4] (READ)
// 005397c8: CMP dword ptr [EAX + 0x24],0x0
// 005397cc: JZ 0x0053991f
//   XREF to: 0053991f (CONDITIONAL_JUMP)
// 005397d2: MOV EBX,0x3
// 005397d7: MOV EDI,dword ptr [0x02f7c53c]
//   XREF to: 02f7c53c (READ)
// 005397dd: MOV ESI,0xf3
// 005397e2: TEST EDI,EDI
// 005397e4: SETZ AL
// 005397e7: AND EAX,0xff
// 005397ec: PUSH EAX
// 005397ed: PUSH 0x1
// 005397ef: PUSH ESI
// 005397f0: PUSH EBX
// 005397f1: PUSH 0x63c464
//   XREF to: 0063c464 (DATA)
// 005397f6: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 005397fb: ADD ESP,0x14
// 005397fe: TEST EAX,EAX
// 00539800: JZ 0x0053980f
//   XREF to: 0053980f (CONDITIONAL_JUMP)
// 00539802: MOV EDX,0x1
// 00539807: XOR EAX,EAX
// 00539809: MOV dword ptr [EBP + 0x2a],EDX
//   XREF to: Stack[-0x64] (WRITE)
// 0053980c: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053980f: MOV ECX,dword ptr [0x02f7c53c]
//   Label: LAB_0053980f
//   XREF to: 02f7c53c (READ)
// 00539815: ADD EBX,0x46
// 00539818: CMP ECX,0x1
// 0053981b: SETZ AL
// 0053981e: AND EAX,0xff
// 00539823: PUSH EAX
// 00539824: PUSH 0x1
// 00539826: PUSH ESI
// 00539827: PUSH EBX
// 00539828: PUSH 0x63c470
//   XREF to: 0063c470 (DATA)
// 0053982d: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 00539832: ADD ESP,0x14
// 00539835: TEST EAX,EAX
// 00539837: JZ 0x00539840
//   XREF to: 00539840 (CONDITIONAL_JUMP)
// 00539839: MOV dword ptr [EBP + 0x7a],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 00539840: MOV EDX,dword ptr [0x02f7c53c]
//   Label: LAB_00539840
//   XREF to: 02f7c53c (READ)
// 00539846: ADD EBX,0x46
// 00539849: CMP EDX,0x2
// 0053984c: SETZ AL
// 0053984f: AND EAX,0xff
// 00539854: PUSH EAX
// 00539855: PUSH 0x1
// 00539857: PUSH ESI
// 00539858: PUSH EBX
// 00539859: PUSH 0x63c47c
//   XREF to: 0063c47c (DATA)
// 0053985e: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 00539863: ADD ESP,0x14
// 00539866: TEST EAX,EAX
// 00539868: JZ 0x00539871
//   XREF to: 00539871 (CONDITIONAL_JUMP)
// 0053986a: MOV dword ptr [EBP + 0x7a],0x2
//   XREF to: Stack[-0x14] (WRITE)
// 00539871: MOV EDI,dword ptr [0x02f7c53c]
//   Label: LAB_00539871
//   XREF to: 02f7c53c (READ)
// 00539877: ADD EBX,0x38
// 0053987a: CMP EDI,0x3
// 0053987d: SETZ AL
// 00539880: AND EAX,0xff
// 00539885: PUSH EAX
// 00539886: PUSH 0x1
// 00539888: PUSH ESI
// 00539889: PUSH EBX
// 0053988a: PUSH 0x63c486
//   XREF to: 0063c486 (DATA)
// 0053988f: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 00539894: ADD ESP,0x14
// 00539897: TEST EAX,EAX
// 00539899: JZ 0x005398a2
//   XREF to: 005398a2 (CONDITIONAL_JUMP)
// 0053989b: MOV dword ptr [EBP + 0x7a],0x3
//   XREF to: Stack[-0x14] (WRITE)
// 005398a2: MOV EDX,dword ptr [0x02f7c53c]
//   Label: LAB_005398a2
//   XREF to: 02f7c53c (READ)
// 005398a8: ADD EBX,0x5b
// 005398ab: CMP EDX,0x4
// 005398ae: SETZ AL
// 005398b1: AND EAX,0xff
// 005398b6: PUSH EAX
// 005398b7: PUSH 0x1
// 005398b9: PUSH ESI
// 005398ba: PUSH EBX
// 005398bb: PUSH 0x63c495
//   XREF to: 0063c495 (DATA)
// 005398c0: CALL core_msnedit.cpp_FUN_00536cd0
//   XREF to: 00536cd0 (UNCONDITIONAL_CALL)
// 005398c5: ADD ESP,0x14
// 005398c8: TEST EAX,EAX
// 005398ca: JZ 0x005398d3
//   XREF to: 005398d3 (CONDITIONAL_JUMP)
// 005398cc: MOV dword ptr [EBP + 0x7a],0x4
//   XREF to: Stack[-0x14] (WRITE)
// 005398d3: CMP dword ptr [0x02f7c53c],0x0
//   Label: LAB_005398d3
//   XREF to: 02f7c53c (READ)
// 005398da: JNZ 0x0053991f
//   XREF to: 0053991f (CONDITIONAL_JUMP)
// 005398dc: PUSH 0x63c49f
//   XREF to: 0063c49f (DATA)
// 005398e1: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005398e6: PUSH ESI
// 005398e7: SUB EAX,0x8c
// 005398ec: PUSH EAX
// 005398ed: MOV EDI,0xff
// 005398f2: PUSH 0x2f7c544
//   XREF to: 02f7c544 (DATA)
// 005398f7: MOV dword ptr [0x02f7c550],EDI
//   XREF to: 02f7c550 (WRITE)
// 005398fd: CALL shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60
//   XREF to: 004a6a60 (UNCONDITIONAL_CALL)
// 00539902: ADD ESP,0x10
// 00539905: PUSH 0x2f7c544
//   XREF to: 02f7c544 (DATA)
// 0053990a: CALL shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20
//   XREF to: 004a6d20 (UNCONDITIONAL_CALL)
// 0053990f: ADD ESP,0x4
// 00539912: PUSH 0x2f7c544
//   XREF to: 02f7c544 (DATA)
// 00539917: CALL shape_edittool.cpp_CEdCheck_render_FUN_004a6c00
//   XREF to: 004a6c00 (UNCONDITIONAL_CALL)
// 0053991c: ADD ESP,0x4
// 0053991f: MOV EAX,[0x0067a3d0]
//   Label: LAB_0053991f
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 00539924: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 00539925: CALL core_fire.cpp_CFireEffect_process_FUN_004c6ec0
//   XREF to: 004c6ec0 (UNCONDITIONAL_CALL)
// 0053992a: ADD ESP,0x4
// 0053992d: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 00539933: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 00539934: CALL core_gore.cpp_CGore_process_FUN_004ed9e0
//   XREF to: 004ed9e0 (UNCONDITIONAL_CALL)
// 00539939: MOV ECX,dword ptr [0x02f7c634]
//   XREF to: 02f7c634 (READ)
// 0053993f: ADD ESP,0x4
// 00539942: TEST ECX,ECX
// 00539944: JZ 0x00539955
//   XREF to: 00539955 (CONDITIONAL_JUMP)
// 00539946: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053994c: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 0053994d: CALL core_script.cpp_FUN_005645d0
//   XREF to: 005645d0 (UNCONDITIONAL_CALL)
// 00539952: ADD ESP,0x4
// 00539955: PUSH 0x0
//   Label: LAB_00539955
// 00539957: PUSH 0x0
// 00539959: PUSH 0x0
// 0053995b: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00539961: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00539962: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
//   XREF to: 004a2920 (UNCONDITIONAL_CALL)
// 00539967: MOV EDI,dword ptr [0x02f7c634]
//   XREF to: 02f7c634 (READ)
// 0053996d: ADD ESP,0x10
// 00539970: TEST EDI,EDI
// 00539972: JZ 0x00539982
//   XREF to: 00539982 (CONDITIONAL_JUMP)
// 00539974: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00539979: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 0053997a: CALL core_script.cpp_FUN_00566bc0
//   XREF to: 00566bc0 (UNCONDITIONAL_CALL)
// 0053997f: ADD ESP,0x4
// 00539982: PUSH 0x0
//   Label: LAB_00539982
// 00539984: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053998a: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053998b: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 00539990: ADD ESP,0x8
// 00539993: PUSH 0x0
// 00539995: PUSH 0x0
// 00539997: PUSH 0x0
// 00539999: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053999f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005399a0: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
//   XREF to: 004a2920 (UNCONDITIONAL_CALL)
// 005399a5: ADD ESP,0x10
// 005399a8: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005399ad: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005399b3: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 005399b4: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 005399b9: ADD ESP,0x4
// 005399bc: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005399c2: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005399c3: CALL core_setcolid.cpp_CDemonSet_FUN_005743e0
//   XREF to: 005743e0 (UNCONDITIONAL_CALL)
// 005399c8: ADD ESP,0x4
// 005399cb: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005399d0: PUSH 0x1
// 005399d2: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005399d4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005399d5: CALL dword ptr [EBX + 0x4]
// 005399d8: ADD ESP,0x8
// 005399db: TEST EAX,EAX
// 005399dd: JZ 0x005399fb
//   XREF to: 005399fb (CONDITIONAL_JUMP)
// 005399df: PUSH 0x63c4b0
//   XREF to: 0063c4b0 (DATA)
// 005399e4: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005399ea: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005399eb: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 005399f0: ADD ESP,0x8
// 005399f3: TEST EAX,EAX
// 005399f5: JNZ 0x00539e00
//   XREF to: 00539e00 (CONDITIONAL_JUMP)
// 005399fb: CMP dword ptr [0x02f7c634],0x0
//   Label: LAB_005399fb
//   XREF to: 02f7c634 (READ)
// 00539a02: JNZ 0x0053a4cf
//   XREF to: 0053a4cf (CONDITIONAL_JUMP)
// 00539a08: CMP dword ptr [0x02f7c53c],0x4
//   XREF to: 02f7c53c (READ)
// 00539a0f: JNZ 0x00539c7c
//   XREF to: 00539c7c (CONDITIONAL_JUMP)
// 00539a15: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00539a1a: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00539a20: PUSH 0x38
// 00539a22: MOV dword ptr [EBP + 0x52],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00539a25: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00539a28: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539a2d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539a2e: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539a30: CALL dword ptr [EBX]
// 00539a32: ADD ESP,0x8
// 00539a35: TEST EAX,EAX
// 00539a37: JZ 0x0053a422
//   XREF to: 0053a422 (CONDITIONAL_JUMP)
// 00539a3d: FLD float ptr [EBP + 0x52]
//   XREF to: Stack[-0x3c] (READ)
// 00539a40: FMUL double ptr [0x0063c58c]
//   XREF to: 0063c58c (READ)
// 00539a46: FSTP float ptr [EBP + 0x62]
//   Label: LAB_00539a46
//   XREF to: Stack[-0x2c] (WRITE)
// 00539a49: FLD float ptr [EBP + 0x62]
//   Label: LAB_00539a49
//   XREF to: Stack[-0x2c] (READ)
// 00539a4c: FMUL double ptr [0x0063c594]
//   XREF to: 0063c594 (READ)
// 00539a52: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00539a55: FMUL double ptr [0x0063c59c]
//   XREF to: 0063c59c (READ)
// 00539a5b: FXCH
// 00539a5d: FSTP float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (WRITE)
// 00539a60: FST float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (WRITE)
// 00539a63: FLD1
// 00539a65: FCOMPP
// 00539a67: FNSTSW AX
// 00539a69: SAHF
// 00539a6a: JBE 0x00539a73
//   XREF to: 00539a73 (CONDITIONAL_JUMP)
// 00539a6c: MOV dword ptr [EBP + 0x72],0x3f800000
//   XREF to: Stack[-0x1c] (WRITE)
// 00539a73: FLD float ptr [EBP + 0x72]
//   Label: LAB_00539a73
//   XREF to: Stack[-0x1c] (READ)
// 00539a76: FMUL float ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 00539a79: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00539a7c: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00539a7f: FLD1
// 00539a81: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00539a84: FXCH ST2
// 00539a86: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (WRITE)
// 00539a89: FXCH
// 00539a8b: FCOMPP
// 00539a8d: FNSTSW AX
// 00539a8f: SAHF
// 00539a90: JBE 0x00539a99
//   XREF to: 00539a99 (CONDITIONAL_JUMP)
// 00539a92: MOV dword ptr [EBP + 0x6e],0x3f800000
//   XREF to: Stack[-0x20] (WRITE)
// 00539a99: FLD float ptr [EBP + 0x6e]
//   Label: LAB_00539a99
//   XREF to: Stack[-0x20] (READ)
// 00539a9c: PUSH 0x4a
// 00539a9e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539aa3: FMUL float ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 00539aa6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539aa7: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539aa9: FSTP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (WRITE)
// 00539aac: CALL dword ptr [EBX]
// 00539aae: ADD ESP,0x8
// 00539ab1: TEST EAX,EAX
// 00539ab3: JZ 0x00539abe
//   XREF to: 00539abe (CONDITIONAL_JUMP)
// 00539ab5: FLD float ptr [EBP + 0x12]
//   XREF to: Stack[-0x7c] (READ)
// 00539ab8: FADD float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 00539abb: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x7c] (WRITE)
// 00539abe: PUSH 0x4e
//   Label: LAB_00539abe
// 00539ac0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539ac5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539ac6: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539ac8: CALL dword ptr [EBX]
// 00539aca: ADD ESP,0x8
// 00539acd: TEST EAX,EAX
// 00539acf: JZ 0x00539ada
//   XREF to: 00539ada (CONDITIONAL_JUMP)
// 00539ad1: FLD float ptr [EBP + 0x12]
//   XREF to: Stack[-0x7c] (READ)
// 00539ad4: FSUB float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 00539ad7: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x7c] (WRITE)
// 00539ada: PUSH 0x52
//   Label: LAB_00539ada
// 00539adc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539ae1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539ae2: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539ae4: CALL dword ptr [EBX]
// 00539ae6: ADD ESP,0x8
// 00539ae9: TEST EAX,EAX
// 00539aeb: JZ 0x00539af6
//   XREF to: 00539af6 (CONDITIONAL_JUMP)
// 00539aed: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (READ)
// 00539af0: FADD float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 00539af3: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (WRITE)
// 00539af6: PUSH 0x53
//   Label: LAB_00539af6
// 00539af8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539afd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539afe: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539b00: CALL dword ptr [EBX]
// 00539b02: ADD ESP,0x8
// 00539b05: TEST EAX,EAX
// 00539b07: JZ 0x00539b12
//   XREF to: 00539b12 (CONDITIONAL_JUMP)
// 00539b09: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (READ)
// 00539b0c: FSUB float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x34] (READ)
// 00539b0f: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (WRITE)
// 00539b12: PUSH 0xd
//   Label: LAB_00539b12
// 00539b14: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539b19: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539b1a: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539b1c: CALL dword ptr [EBX]
// 00539b1e: ADD ESP,0x8
// 00539b21: TEST EAX,EAX
// 00539b23: JZ 0x00539b2e
//   XREF to: 00539b2e (CONDITIONAL_JUMP)
// 00539b25: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00539b28: FSUB float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 00539b2b: FSTP float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (WRITE)
// 00539b2e: PUSH 0xc
//   Label: LAB_00539b2e
// 00539b30: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539b35: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539b36: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539b38: CALL dword ptr [EBX]
// 00539b3a: ADD ESP,0x8
// 00539b3d: TEST EAX,EAX
// 00539b3f: JZ 0x00539b4a
//   XREF to: 00539b4a (CONDITIONAL_JUMP)
// 00539b41: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00539b44: FADD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 00539b47: FSTP float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (WRITE)
// 00539b4a: PUSH 0x29
//   Label: LAB_00539b4a
// 00539b4c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539b51: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539b52: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539b54: CALL dword ptr [EBX]
// 00539b56: ADD ESP,0x8
// 00539b59: TEST EAX,EAX
// 00539b5b: JZ 0x00539c09
//   XREF to: 00539c09 (CONDITIONAL_JUMP)
// 00539b61: PUSH 0x4b
// 00539b63: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539b68: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539b69: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539b6b: CALL dword ptr [EBX]
// 00539b6d: ADD ESP,0x8
// 00539b70: TEST EAX,EAX
// 00539b72: JZ 0x00539b7d
//   XREF to: 00539b7d (CONDITIONAL_JUMP)
// 00539b74: FLD float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 00539b77: FSUB float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 00539b7a: FSTP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (WRITE)
// 00539b7d: PUSH 0x4d
//   Label: LAB_00539b7d
// 00539b7f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539b84: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539b85: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539b87: CALL dword ptr [EBX]
// 00539b89: ADD ESP,0x8
// 00539b8c: TEST EAX,EAX
// 00539b8e: JZ 0x00539b99
//   XREF to: 00539b99 (CONDITIONAL_JUMP)
// 00539b90: FLD float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 00539b93: FADD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 00539b96: FSTP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (WRITE)
// 00539b99: PUSH 0x10
//   Label: LAB_00539b99
// 00539b9b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539ba0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539ba1: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539ba3: CALL dword ptr [EBX]
// 00539ba5: ADD ESP,0x8
// 00539ba8: TEST EAX,EAX
// 00539baa: JZ 0x00539bb5
//   XREF to: 00539bb5 (CONDITIONAL_JUMP)
// 00539bac: FLD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 00539baf: FADD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 00539bb2: FSTP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (WRITE)
// 00539bb5: PUSH 0x1e
//   Label: LAB_00539bb5
// 00539bb7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539bbc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539bbd: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539bbf: CALL dword ptr [EBX]
// 00539bc1: ADD ESP,0x8
// 00539bc4: TEST EAX,EAX
// 00539bc6: JZ 0x00539bd1
//   XREF to: 00539bd1 (CONDITIONAL_JUMP)
// 00539bc8: FLD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 00539bcb: FSUB float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x20] (READ)
// 00539bce: FSTP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (WRITE)
// 00539bd1: PUSH 0x48
//   Label: LAB_00539bd1
// 00539bd3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539bd8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539bd9: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539bdb: CALL dword ptr [EBX]
// 00539bdd: ADD ESP,0x8
// 00539be0: TEST EAX,EAX
// 00539be2: JZ 0x00539bed
//   XREF to: 00539bed (CONDITIONAL_JUMP)
// 00539be4: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00539be7: FSUB float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 00539bea: FSTP float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (WRITE)
// 00539bed: PUSH 0x50
//   Label: LAB_00539bed
// 00539bef: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539bf4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539bf5: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539bf7: CALL dword ptr [EBX]
// 00539bf9: ADD ESP,0x8
// 00539bfc: TEST EAX,EAX
// 00539bfe: JZ 0x00539c09
//   XREF to: 00539c09 (CONDITIONAL_JUMP)
// 00539c00: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 00539c03: FADD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x1c] (READ)
// 00539c06: FSTP float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (WRITE)
// 00539c09: FLD float ptr [EBP + 0x12]
//   Label: LAB_00539c09
//   XREF to: Stack[-0x7c] (READ)
// 00539c0c: FCOMP double ptr [0x0063c5ac]
//   XREF to: 0063c5ac (READ)
// 00539c12: FNSTSW AX
// 00539c14: SAHF
// 00539c15: JNC 0x00539c1e
//   XREF to: 00539c1e (CONDITIONAL_JUMP)
// 00539c17: MOV dword ptr [EBP + 0x12],0xbfc90fdb
//   XREF to: Stack[-0x7c] (WRITE)
// 00539c1e: FLD float ptr [EBP + 0x12]
//   Label: LAB_00539c1e
//   XREF to: Stack[-0x7c] (READ)
// 00539c21: FCOMP double ptr [0x0063c594]
//   XREF to: 0063c594 (READ)
// 00539c27: FNSTSW AX
// 00539c29: SAHF
// 00539c2a: JBE 0x00539c33
//   XREF to: 00539c33 (CONDITIONAL_JUMP)
// 00539c2c: MOV dword ptr [EBP + 0x12],0x3fc90fdb
//   XREF to: Stack[-0x7c] (WRITE)
// 00539c33: FLD float ptr [EBP + 0x16]
//   Label: LAB_00539c33
//   XREF to: Stack[-0x78] (READ)
// 00539c36: FCOMP double ptr [0x0063c5ac]
//   XREF to: 0063c5ac (READ)
// 00539c3c: FNSTSW AX
// 00539c3e: SAHF
// 00539c3f: JNC 0x00539c4d
//   XREF to: 00539c4d (CONDITIONAL_JUMP)
// 00539c41: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (READ)
// 00539c44: FADD float ptr [0x0063c5b4]
//   XREF to: 0063c5b4 (READ)
// 00539c4a: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (WRITE)
// 00539c4d: FLD float ptr [EBP + 0x16]
//   Label: LAB_00539c4d
//   XREF to: Stack[-0x78] (READ)
// 00539c50: FCOMP double ptr [0x0063c594]
//   XREF to: 0063c594 (READ)
// 00539c56: FNSTSW AX
// 00539c58: SAHF
// 00539c59: JBE 0x00539c67
//   XREF to: 00539c67 (CONDITIONAL_JUMP)
// 00539c5b: FLD float ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (READ)
// 00539c5e: FADD float ptr [0x0063c5b8]
//   XREF to: 0063c5b8 (READ)
// 00539c64: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (WRITE)
// 00539c67: FLD float ptr [EBP + 0x76]
//   Label: LAB_00539c67
//   XREF to: Stack[-0x18] (READ)
// 00539c6a: FCOMP double ptr [0x0063c5a4]
//   XREF to: 0063c5a4 (READ)
// 00539c70: FNSTSW AX
// 00539c72: SAHF
// 00539c73: JNC 0x00539c7c
//   XREF to: 00539c7c (CONDITIONAL_JUMP)
// 00539c75: MOV dword ptr [EBP + 0x76],0x3f000000
//   XREF to: Stack[-0x18] (WRITE)
// 00539c7c: CMP dword ptr [0x02f7c53c],0x2
//   Label: LAB_00539c7c
//   XREF to: 02f7c53c (READ)
// 00539c83: JNZ 0x0053a44b
//   XREF to: 0053a44b (CONDITIONAL_JUMP)
// 00539c89: LEA EAX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 00539c8f: PUSH EAX
// 00539c90: CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 00539c95: ADD ESP,0x4
//   Label: LAB_00539c95
// 00539c98: PUSH 0xe
//   Label: LAB_00539c98
// 00539c9a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539c9f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539ca0: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539ca2: CALL dword ptr [EBX + 0x4]
// 00539ca5: ADD ESP,0x8
// 00539ca8: TEST EAX,EAX
// 00539caa: JZ 0x00539cbb
//   XREF to: 00539cbb (CONDITIONAL_JUMP)
// 00539cac: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539cb2: PUSH EAX
// 00539cb3: CALL core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0
//   XREF to: 0053c0b0 (UNCONDITIONAL_CALL)
// 00539cb8: ADD ESP,0x4
// 00539cbb: PUSH 0xf
//   Label: LAB_00539cbb
// 00539cbd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539cc2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539cc3: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539cc5: CALL dword ptr [EBX + 0x4]
// 00539cc8: ADD ESP,0x8
// 00539ccb: TEST EAX,EAX
// 00539ccd: JZ 0x00539d07
//   XREF to: 00539d07 (CONDITIONAL_JUMP)
// 00539ccf: PUSH 0x2a
// 00539cd1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539cd6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539cd7: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539cd9: CALL dword ptr [EBX]
// 00539cdb: ADD ESP,0x8
// 00539cde: TEST EAX,EAX
// 00539ce0: JZ 0x0053a480
//   XREF to: 0053a480 (CONDITIONAL_JUMP)
// 00539ce6: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539cec: MOV ESI,dword ptr [EAX + 0x28]
// 00539cef: PUSH ESI
// 00539cf0: PUSH EAX
// 00539cf1: MOV EDI,EAX
// 00539cf3: CALL core_msnedit.cpp_FUN_0053ca80
//   XREF to: 0053ca80 (UNCONDITIONAL_CALL)
// 00539cf8: ADD ESP,0x8
// 00539cfb: PUSH EAX
// 00539cfc: MOV EAX,EDI
// 00539cfe: PUSH EAX
// 00539cff: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   Label: LAB_00539cff
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 00539d04: ADD ESP,0x8
// 00539d07: PUSH 0x3c
//   Label: LAB_00539d07
// 00539d09: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539d0e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539d0f: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539d11: CALL dword ptr [EBX + 0x4]
// 00539d14: ADD ESP,0x8
// 00539d17: TEST EAX,EAX
// 00539d19: JZ 0x00539d75
//   XREF to: 00539d75 (CONDITIONAL_JUMP)
// 00539d1b: PUSH 0x2a
// 00539d1d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539d22: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539d23: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539d25: CALL dword ptr [EBX]
// 00539d27: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00539d2d: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00539d33: ADD ESP,0x8
// 00539d36: DEC EBX
// 00539d37: DEC ESI
// 00539d38: TEST EAX,EAX
// 00539d3a: JZ 0x0053a4a0
//   XREF to: 0053a4a0 (CONDITIONAL_JUMP)
// 00539d40: PUSH ESI
// 00539d41: PUSH EBX
// 00539d42: PUSH 0x0
// 00539d44: PUSH 0x0
// 00539d46: MOV ESI,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 00539d4c: PUSH ESI
//   XREF to: 0310f858 (DATA)
// 00539d4d: CALL core_script.cpp_CScript_unk50_FUN_00566660
//   XREF to: 00566660 (UNCONDITIONAL_CALL)
// 00539d52: ADD ESP,0x14
// 00539d55: PUSH 0x1
// 00539d57: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00539d5c: MOV EDI,0x2
// 00539d61: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 00539d62: MOV dword ptr [0x02f7c634],EDI
//   XREF to: 02f7c634 (WRITE)
// 00539d68: CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   Label: LAB_00539d68
//   XREF to: 00539060 (UNCONDITIONAL_CALL)
// 00539d6d: ADD ESP,0x8
// 00539d70: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00539d75: PUSH 0x1d
//   Label: LAB_00539d75
// 00539d77: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539d7c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539d7d: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539d7f: CALL dword ptr [EBX]
// 00539d81: ADD ESP,0x8
// 00539d84: TEST EAX,EAX
// 00539d86: JZ 0x00539dca
//   XREF to: 00539dca (CONDITIONAL_JUMP)
// 00539d88: PUSH 0x1f
// 00539d8a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539d8f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539d90: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539d92: CALL dword ptr [EBX + 0x4]
// 00539d95: ADD ESP,0x8
// 00539d98: TEST EAX,EAX
// 00539d9a: JZ 0x00539dca
//   XREF to: 00539dca (CONDITIONAL_JUMP)
// 00539d9c: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00539da1: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539da7: CMP byte ptr [EAX + 0x44],0x0
// 00539dab: JNZ 0x0053a5fa
//   XREF to: 0053a5fa (CONDITIONAL_JUMP)
// 00539db1: PUSH 0x63c4bd
//   XREF to: 0063c4bd (DATA)
// 00539db6: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00539dbc: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00539dbd: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00539dc2: ADD ESP,0x8
//   Label: LAB_00539dc2
// 00539dc5: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_00539dc5
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00539dca: PUSH 0x1d
//   Label: LAB_00539dca
// 00539dcc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539dd1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539dd2: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539dd4: CALL dword ptr [EBX]
// 00539dd6: ADD ESP,0x8
// 00539dd9: TEST EAX,EAX
// 00539ddb: JZ 0x0053a64a
//   XREF to: 0053a64a (CONDITIONAL_JUMP)
// 00539de1: PUSH 0x19
// 00539de3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00539de8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00539de9: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00539deb: CALL dword ptr [EBX + 0x4]
// 00539dee: ADD ESP,0x8
// 00539df1: TEST EAX,EAX
// 00539df3: JZ 0x0053a64a
//   XREF to: 0053a64a (CONDITIONAL_JUMP)
// 00539df9: MOV dword ptr [EBP + 0x2e],0x1
//   XREF to: Stack[-0x60] (WRITE)
// 00539e00: MOV EDX,dword ptr [0x006810c8]
//   Label: LAB_00539e00
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00539e06: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00539e07: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 00539e0c: ADD ESP,0x4
// 00539e0f: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00539e14: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00539e1a: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 00539e1b: CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   XREF to: 004daed0 (UNCONDITIONAL_CALL)
// 00539e20: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00539e25: MOV dword ptr [EAX + 0x15ac80],0x0
//   XREF to: 0326eef8 (WRITE)
// 00539e2f: ADD ESP,0x4
// 00539e32: MOV dword ptr [EAX + 0x15ac84],0x0
//   XREF to: 0326eefc (WRITE)
// 00539e3c: PUSH 0x680800
//   XREF to: 00680800 (DATA)
// 00539e41: MOV dword ptr [EAX + 0x15ac8c],0x0
//   XREF to: 0326ef04 (WRITE)
// 00539e4b: MOV EBX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x60] (READ)
// 00539e4e: MOV dword ptr [EAX + 0x15ac90],0x0
//   XREF to: 0326ef08 (WRITE)
// 00539e58: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00539e5d: ADD ESP,0x4
// 00539e60: TEST EBX,EBX
// 00539e62: JZ 0x0053af19
//   XREF to: 0053af19 (CONDITIONAL_JUMP)
// 00539e68: MOV EAX,0x2
// 00539e6d: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 00539e70: POP EBP
// 00539e71: POP EDI
// 00539e72: POP ESI
// 00539e73: POP EBX
// 00539e74: RET
// 00539e75: MOV ECX,dword ptr [0x02db8848]
//   Label: LAB_00539e75
//   XREF to: 02db8848 (READ)
// 00539e7b: PUSH ECX
// 00539e7c: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 00539e83: PUSH EDX
// 00539e84: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00539e89: ADD ESP,0x8
// 00539e8c: TEST EAX,EAX
// 00539e8e: JZ 0x00539e9f
//   XREF to: 00539e9f (CONDITIONAL_JUMP)
// 00539e90: MOV ECX,dword ptr [EAX + 0x158]
// 00539e96: CMP EDI,ECX
// 00539e98: JLE 0x00539e9f
//   XREF to: 00539e9f (CONDITIONAL_JUMP)
// 00539e9a: MOV EDI,ECX
// 00539e9c: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00539e9f: INC EBX
//   Label: LAB_00539e9f
// 00539ea0: ADD ESI,0x4
// 00539ea3: JMP 0x00539291
//   XREF to: 00539291 (UNCONDITIONAL_JUMP)
// 00539ea8: PUSH 0x63c399
//   Label: caseD_1
//   XREF to: 0063c399 (DATA)
// 00539ead: LEA EAX,[EBP + 0xfffffdde]
//   XREF to: Stack[-0x2b0] (DATA)
// 00539eb3: PUSH EAX
// 00539eb4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00539eb9: LEA EAX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 00539ebf: ADD ESP,0x8
// 00539ec2: CMP EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 00539ec7: JZ 0x00539eea
//   XREF to: 00539eea (CONDITIONAL_JUMP)
// 00539ec9: MOV EAX,dword ptr [EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 00539ecf: MOV [0x032758e8],EAX
//   XREF to: 032758e8 (WRITE)
// 00539ed4: MOV EAX,dword ptr [EBP + 0xffffff22]
//   XREF to: Stack[-0x16c] (READ)
// 00539eda: MOV [0x032758ec],EAX
//   XREF to: 032758ec (WRITE)
// 00539edf: MOV EAX,dword ptr [EBP + 0xffffff26]
//   XREF to: Stack[-0x168] (READ)
// 00539ee5: MOV [0x032758f0],EAX
//   XREF to: 032758f0 (WRITE)
// 00539eea: LEA EAX,[EBP + 0xffffff2a]
//   Label: LAB_00539eea
//   XREF to: Stack[-0x164] (DATA)
// 00539ef0: PUSH EAX
// 00539ef1: PUSH 0x32758f4
//   XREF to: 032758f4 (DATA)
// 00539ef6: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00539efb: MOV EAX,dword ptr [EBP + 0xffffff36]
//   XREF to: Stack[-0x158] (READ)
// 00539f01: ADD ESP,0x8
// 00539f04: MOV [0x0327591c],EAX
//   XREF to: 0327591c (WRITE)
// 00539f09: JMP 0x00539490
//   XREF to: 00539490 (UNCONDITIONAL_JUMP)
// 00539f0e: PUSH 0x63c3c3
//   Label: caseD_2
//   XREF to: 0063c3c3 (DATA)
// 00539f13: LEA EAX,[EBP + 0xfffffdde]
//   XREF to: Stack[-0x2b0] (DATA)
// 00539f19: PUSH EAX
// 00539f1a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00539f1f: LEA EAX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 00539f25: ADD ESP,0x8
// 00539f28: CMP EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 00539f2d: JZ 0x00539f50
//   XREF to: 00539f50 (CONDITIONAL_JUMP)
// 00539f2f: MOV EAX,dword ptr [EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 00539f35: MOV [0x032758e8],EAX
//   XREF to: 032758e8 (WRITE)
// 00539f3a: MOV EAX,dword ptr [EBP + 0xffffff22]
//   XREF to: Stack[-0x16c] (READ)
// 00539f40: MOV [0x032758ec],EAX
//   XREF to: 032758ec (WRITE)
// 00539f45: MOV EAX,dword ptr [EBP + 0xffffff26]
//   XREF to: Stack[-0x168] (READ)
// 00539f4b: MOV [0x032758f0],EAX
//   XREF to: 032758f0 (WRITE)
// 00539f50: LEA EAX,[EBP + 0xffffff2a]
//   Label: LAB_00539f50
//   XREF to: Stack[-0x164] (DATA)
// 00539f56: PUSH EAX
// 00539f57: PUSH 0x32758f4
//   XREF to: 032758f4 (DATA)
// 00539f5c: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00539f61: MOV EAX,dword ptr [EBP + 0xffffff36]
//   XREF to: Stack[-0x158] (READ)
// 00539f67: ADD ESP,0x8
// 00539f6a: MOV [0x0327591c],EAX
//   XREF to: 0327591c (WRITE)
// 00539f6f: JMP 0x00539490
//   XREF to: 00539490 (UNCONDITIONAL_JUMP)
// 00539f74: PUSH 0x63c3eb
//   Label: caseD_3
//   XREF to: 0063c3eb (DATA)
// 00539f79: LEA EAX,[EBP + 0xfffffdde]
//   XREF to: Stack[-0x2b0] (DATA)
// 00539f7f: PUSH EAX
// 00539f80: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00539f85: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539f8b: MOV EDI,dword ptr [EAX + 0x28]
// 00539f8e: ADD ESP,0x8
// 00539f91: TEST EDI,EDI
// 00539f93: JZ 0x0053a072
//   XREF to: 0053a072 (CONDITIONAL_JUMP)
// 00539f99: LEA EBX,[EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (DATA)
// 00539f9f: PUSH EBX
// 00539fa0: MOV ESI,dword ptr [EDI + 0x154]
// 00539fa6: PUSH EDI
// 00539fa7: CALL dword ptr [ESI + 0x14]
// 00539faa: LEA EBX,[EAX + 0xc]
// 00539fad: FLD float ptr [EAX]
// 00539faf: FADD float ptr [EBX]
// 00539fb1: FST float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf4] (WRITE)
// 00539fb4: FLD float ptr [EAX + 0x4]
// 00539fb7: FADD float ptr [EBX + 0x4]
// 00539fba: FXCH
// 00539fbc: FLD float ptr [0x0063c574]
//   XREF to: 0063c574 (READ)
// 00539fc2: FXCH
// 00539fc4: FMUL ST1
// 00539fc6: FXCH ST2
// 00539fc8: FST float ptr [EBP + -0x62]
//   XREF to: Stack[-0xf0] (WRITE)
// 00539fcb: FLD float ptr [EAX + 0x8]
// 00539fce: FADD float ptr [EBX + 0x8]
// 00539fd1: FXCH
// 00539fd3: FMUL ST2
// 00539fd5: FXCH
// 00539fd7: FST float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xec] (WRITE)
// 00539fda: FMULP ST2
// 00539fdc: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 00539fe2: FXCH ST2
// 00539fe4: FSTP float ptr [EBP + -0x72]
//   XREF to: Stack[-0x100] (WRITE)
// 00539fe7: FXCH
// 00539fe9: FSTP float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xfc] (WRITE)
// 00539fec: FSTP float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf8] (WRITE)
// 00539fef: MOV EAX,dword ptr [EAX + 0x28]
// 00539ff2: FLD float ptr [EAX + 0x20]
// 00539ff5: FADD float ptr [EBP + -0x72]
//   XREF to: Stack[-0x100] (READ)
// 00539ff8: ADD ESP,0x8
// 00539ffb: FSTP float ptr [EBP + -0x1e]
//   XREF to: Stack[-0xac] (WRITE)
// 00539ffe: FLD float ptr [EAX + 0x24]
// 0053a001: FADD float ptr [EBP + -0x6e]
//   XREF to: Stack[-0xfc] (READ)
// 0053a004: LEA EBX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 0053a00a: FSTP float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa8] (WRITE)
// 0053a00d: FLD float ptr [EAX + 0x28]
// 0053a010: FADD float ptr [EBP + -0x6a]
//   XREF to: Stack[-0xf8] (READ)
// 0053a013: LEA EAX,[EBP + -0x1e]
//   XREF to: Stack[-0xac] (DATA)
// 0053a016: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa4] (WRITE)
// 0053a019: CMP EBX,EAX
// 0053a01b: JZ 0x0053a038
//   XREF to: 0053a038 (CONDITIONAL_JUMP)
// 0053a01d: MOV EAX,dword ptr [EBP + -0x1e]
//   XREF to: Stack[-0xac] (DATA)
// 0053a020: MOV dword ptr [EBP + 0xffffff1e],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 0053a026: MOV EAX,dword ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa8] (READ)
// 0053a029: MOV dword ptr [EBP + 0xffffff22],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 0053a02f: MOV EAX,dword ptr [EBP + -0x16]
//   XREF to: Stack[-0xa4] (READ)
// 0053a032: MOV dword ptr [EBP + 0xffffff26],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 0053a038: MOV EBX,dword ptr [EBP + 0x92]
//   Label: LAB_0053a038
//   XREF to: Stack[0x4] (READ)
// 0053a03e: MOV EBX,dword ptr [EBX + 0x28]
// 0053a041: LEA EAX,[EBP + 0xffffff2a]
//   XREF to: Stack[-0x164] (DATA)
// 0053a047: ADD EBX,0x30
// 0053a04a: CMP EAX,EBX
// 0053a04c: JZ 0x0053a068
//   XREF to: 0053a068 (CONDITIONAL_JUMP)
// 0053a04e: MOV EAX,dword ptr [EBX]
// 0053a050: MOV dword ptr [EBP + 0xffffff2a],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 0053a056: MOV EAX,dword ptr [EBX + 0x4]
// 0053a059: MOV dword ptr [EBP + 0xffffff2e],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 0053a05f: MOV EAX,dword ptr [EBX + 0x8]
// 0053a062: MOV dword ptr [EBP + 0xffffff32],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 0053a068: MOV dword ptr [EBP + 0xffffff36],0x41e00000
//   Label: LAB_0053a068
//   XREF to: Stack[-0x158] (WRITE)
// 0053a072: LEA EAX,[EBP + 0xffffff1e]
//   Label: LAB_0053a072
//   XREF to: Stack[-0x170] (DATA)
// 0053a078: CMP EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0053a07d: JZ 0x0053a0a0
//   XREF to: 0053a0a0 (CONDITIONAL_JUMP)
// 0053a07f: MOV EAX,dword ptr [EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 0053a085: MOV [0x032758e8],EAX
//   XREF to: 032758e8 (WRITE)
// 0053a08a: MOV EAX,dword ptr [EBP + 0xffffff22]
//   XREF to: Stack[-0x16c] (READ)
// 0053a090: MOV [0x032758ec],EAX
//   XREF to: 032758ec (WRITE)
// 0053a095: MOV EAX,dword ptr [EBP + 0xffffff26]
//   XREF to: Stack[-0x168] (READ)
// 0053a09b: MOV [0x032758f0],EAX
//   XREF to: 032758f0 (WRITE)
// 0053a0a0: LEA EAX,[EBP + 0xffffff2a]
//   Label: LAB_0053a0a0
//   XREF to: Stack[-0x164] (DATA)
// 0053a0a6: PUSH EAX
// 0053a0a7: PUSH 0x32758f4
//   XREF to: 032758f4 (DATA)
// 0053a0ac: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0053a0b1: MOV EAX,dword ptr [EBP + 0xffffff36]
//   XREF to: Stack[-0x158] (READ)
// 0053a0b7: ADD ESP,0x8
// 0053a0ba: MOV [0x0327591c],EAX
//   XREF to: 0327591c (WRITE)
// 0053a0bf: JMP 0x00539490
//   XREF to: 00539490 (UNCONDITIONAL_JUMP)
// 0053a0c4: PUSH 0x63c3fa
//   Label: caseD_4
//   XREF to: 0063c3fa (DATA)
// 0053a0c9: LEA EAX,[EBP + 0xfffffdde]
//   XREF to: Stack[-0x2b0] (DATA)
// 0053a0cf: PUSH EAX
// 0053a0d0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053a0d5: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a0db: MOV EBX,dword ptr [EAX + 0x28]
// 0053a0de: ADD ESP,0x8
// 0053a0e1: TEST EBX,EBX
// 0053a0e3: JZ 0x0053a240
//   XREF to: 0053a240 (CONDITIONAL_JUMP)
// 0053a0e9: LEA EAX,[EBP + 0xffffff2a]
//   XREF to: Stack[-0x164] (DATA)
// 0053a0ef: LEA EBX,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 0053a0f2: CMP EAX,EBX
// 0053a0f4: JZ 0x0053a111
//   XREF to: 0053a111 (CONDITIONAL_JUMP)
// 0053a0f6: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x7c] (READ)
// 0053a0f9: MOV dword ptr [EBP + 0xffffff2a],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 0053a0ff: MOV EAX,dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x78] (READ)
// 0053a102: MOV dword ptr [EBP + 0xffffff2e],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 0053a108: MOV EAX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x74] (READ)
// 0053a10b: MOV dword ptr [EBP + 0xffffff32],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 0053a111: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0053a111
//   XREF to: Stack[0x4] (READ)
// 0053a117: MOV EAX,dword ptr [EAX + 0x28]
// 0053a11a: FLD float ptr [EBP + 0xffffff2e]
//   XREF to: Stack[-0x160] (READ)
// 0053a120: FADD float ptr [EAX + 0x34]
// 0053a123: LEA EAX,[EBP + 0xffffff2a]
//   XREF to: Stack[-0x164] (DATA)
// 0053a129: PUSH EAX
// 0053a12a: LEA EAX,[EBP + 0xfffffef6]
//   XREF to: Stack[-0x198] (DATA)
// 0053a130: LEA ESI,[EBP + 0xffffff3a]
//   XREF to: Stack[-0x154] (DATA)
// 0053a136: PUSH EAX
// 0053a137: FSTP float ptr [EBP + 0xffffff2e]
//   XREF to: Stack[-0x160] (WRITE)
// 0053a13d: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0053a142: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x18] (READ)
// 0053a145: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x28] (READ)
// 0053a148: FCHS
// 0053a14a: MOV dword ptr [EBP + -0x6],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 0053a14d: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x24] (READ)
// 0053a150: FSTP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x68] (WRITE)
// 0053a153: MOV dword ptr [EBP + -0x2],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0053a156: MOV EAX,dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x68] (READ)
// 0053a159: ADD ESP,0x8
// 0053a15c: MOV dword ptr [EBP + 0x2],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0053a15f: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a165: PUSH ESI
// 0053a166: MOV EAX,dword ptr [EAX + 0x28]
// 0053a169: PUSH EAX
// 0053a16a: MOV EBX,dword ptr [EAX + 0x154]
// 0053a170: CALL dword ptr [EBX + 0x14]
// 0053a173: LEA EBX,[EAX + 0xc]
// 0053a176: FLD float ptr [EAX]
// 0053a178: FADD float ptr [EBX]
// 0053a17a: FST float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe8] (WRITE)
// 0053a17d: FLD float ptr [EAX + 0x4]
// 0053a180: FADD float ptr [EBX + 0x4]
// 0053a183: FXCH
// 0053a185: FLD float ptr [0x0063c574]
//   XREF to: 0063c574 (READ)
// 0053a18b: FXCH
// 0053a18d: FMUL ST1
// 0053a18f: FXCH ST2
// 0053a191: FST float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe4] (WRITE)
// 0053a194: FLD float ptr [EAX + 0x8]
// 0053a197: FADD float ptr [EBX + 0x8]
// 0053a19a: FXCH
// 0053a19c: FMUL ST2
// 0053a19e: FXCH
// 0053a1a0: FST float ptr [EBP + -0x52]
//   XREF to: Stack[-0xe0] (WRITE)
// 0053a1a3: FMULP ST2
// 0053a1a5: ADD ESP,0x8
// 0053a1a8: LEA EAX,[EBP + -0x6]
//   XREF to: Stack[-0x94] (DATA)
// 0053a1ab: FXCH ST2
// 0053a1ad: FSTP float ptr [EBP + -0x42]
//   XREF to: Stack[-0xd0] (WRITE)
// 0053a1b0: PUSH EAX
// 0053a1b1: LEA EAX,[EBP + -0x12]
//   XREF to: Stack[-0xa0] (DATA)
// 0053a1b4: FXCH
// 0053a1b6: FSTP float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xcc] (WRITE)
// 0053a1b9: PUSH EAX
// 0053a1ba: LEA EAX,[EBP + 0xfffffef6]
//   XREF to: Stack[-0x198] (DATA)
// 0053a1c0: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a1c6: PUSH EAX
// 0053a1c7: FSTP float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc8] (WRITE)
// 0053a1ca: MOV EBX,dword ptr [EBX + 0x28]
// 0053a1cd: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0053a1d2: FLD float ptr [EAX]
// 0053a1d4: FADD float ptr [EBX + 0x20]
// 0053a1d7: ADD ESP,0xc
// 0053a1da: FST float ptr [EBP + 0x6]
//   XREF to: Stack[-0x88] (WRITE)
// 0053a1dd: FLD float ptr [EAX + 0x4]
// 0053a1e0: FADD float ptr [EBX + 0x24]
// 0053a1e3: FXCH
// 0053a1e5: FADD float ptr [EBP + -0x42]
//   XREF to: Stack[-0xd0] (READ)
// 0053a1e8: FXCH
// 0053a1ea: FST float ptr [EBP + 0xa]
//   XREF to: Stack[-0x84] (WRITE)
// 0053a1ed: FLD float ptr [EAX + 0x8]
// 0053a1f0: LEA EAX,[EBP + -0x2a]
//   XREF to: Stack[-0xb8] (DATA)
// 0053a1f3: FADD float ptr [EBX + 0x28]
// 0053a1f6: FXCH
// 0053a1f8: FADD float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xcc] (READ)
// 0053a1fb: FXCH
// 0053a1fd: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x80] (WRITE)
// 0053a200: FXCH
// 0053a202: FSTP float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb8] (WRITE)
// 0053a205: FSTP float ptr [EBP + -0x26]
//   XREF to: Stack[-0xb4] (WRITE)
// 0053a208: FLD float ptr [EBP + 0xe]
//   XREF to: Stack[-0x80] (READ)
// 0053a20b: FADD float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc8] (READ)
// 0053a20e: LEA EBX,[EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 0053a214: FSTP float ptr [EBP + -0x22]
//   XREF to: Stack[-0xb0] (WRITE)
// 0053a217: CMP EBX,EAX
// 0053a219: JZ 0x0053a236
//   XREF to: 0053a236 (CONDITIONAL_JUMP)
// 0053a21b: MOV EAX,dword ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb8] (DATA)
// 0053a21e: MOV dword ptr [EBP + 0xffffff1e],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 0053a224: MOV EAX,dword ptr [EBP + -0x26]
//   XREF to: Stack[-0xb4] (READ)
// 0053a227: MOV dword ptr [EBP + 0xffffff22],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 0053a22d: MOV EAX,dword ptr [EBP + -0x22]
//   XREF to: Stack[-0xb0] (READ)
// 0053a230: MOV dword ptr [EBP + 0xffffff26],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 0053a236: MOV dword ptr [EBP + 0xffffff36],0x41e00000
//   Label: LAB_0053a236
//   XREF to: Stack[-0x158] (WRITE)
// 0053a240: LEA EAX,[EBP + 0xffffff1e]
//   Label: LAB_0053a240
//   XREF to: Stack[-0x170] (DATA)
// 0053a246: CMP EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0053a24b: JZ 0x0053a26e
//   XREF to: 0053a26e (CONDITIONAL_JUMP)
// 0053a24d: MOV EAX,dword ptr [EBP + 0xffffff1e]
//   XREF to: Stack[-0x170] (DATA)
// 0053a253: MOV [0x032758e8],EAX
//   XREF to: 032758e8 (WRITE)
// 0053a258: MOV EAX,dword ptr [EBP + 0xffffff22]
//   XREF to: Stack[-0x16c] (READ)
// 0053a25e: MOV [0x032758ec],EAX
//   XREF to: 032758ec (WRITE)
// 0053a263: MOV EAX,dword ptr [EBP + 0xffffff26]
//   XREF to: Stack[-0x168] (READ)
// 0053a269: MOV [0x032758f0],EAX
//   XREF to: 032758f0 (WRITE)
// 0053a26e: LEA EAX,[EBP + 0xffffff2a]
//   Label: LAB_0053a26e
//   XREF to: Stack[-0x164] (DATA)
// 0053a274: PUSH EAX
// 0053a275: PUSH 0x32758f4
//   XREF to: 032758f4 (DATA)
// 0053a27a: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0053a27f: MOV EAX,dword ptr [EBP + 0xffffff36]
//   XREF to: Stack[-0x158] (READ)
// 0053a285: ADD ESP,0x8
// 0053a288: MOV [0x0327591c],EAX
//   XREF to: 0327591c (WRITE)
// 0053a28d: JMP 0x00539490
//   XREF to: 00539490 (UNCONDITIONAL_JUMP)
// 0053a292: MOV EDX,0x63c409
//   Label: default
//   XREF to: 0063c409 (PARAM)
// 0053a297: MOV ECX,0x595
// 0053a29c: PUSH 0x63c41d
//   XREF to: 0063c41d (DATA)
// 0053a2a1: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0053a2a7: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0053a2ad: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053a2b2: ADD ESP,0x4
// 0053a2b5: JMP 0x00539490
//   XREF to: 00539490 (UNCONDITIONAL_JUMP)
// 0053a2ba: MOV EAX,dword ptr [EBP + 0x32]
//   Label: LAB_0053a2ba
//   XREF to: Stack[-0x5c] (READ)
// 0053a2bd: MOV [0x03276acc],EAX
//   XREF to: 03276acc (WRITE)
// 0053a2c2: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053a2c7: MOV dword ptr [EAX + 0x15ac80],ECX
//   XREF to: 0326eef8 (WRITE)
// 0053a2cd: MOV dword ptr [EAX + 0x15ac84],ECX
//   XREF to: 0326eefc (WRITE)
// 0053a2d3: JMP 0x005394ec
//   XREF to: 005394ec (UNCONDITIONAL_JUMP)
// 0053a2d8: MOV EAX,[0x006810c8]
//   Label: LAB_0053a2d8
//   XREF to: 006810c8 (READ)
// 0053a2dd: MOV dword ptr [EAX + 0x15ac80],0x1
//   XREF to: 0326eef8 (WRITE)
// 0053a2e7: MOV dword ptr [EAX + 0x15ac8c],0x0
//   XREF to: 0326ef04 (WRITE)
// 0053a2f1: MOV dword ptr [EAX + 0x15ac90],0x0
//   XREF to: 0326ef08 (WRITE)
// 0053a2fb: MOV EAX,[0x00680810]
//   XREF to: 00680810 (READ)
// 0053a300: MOV [0x03277d14],EAX
//   XREF to: 03277d14 (WRITE)
// 0053a305: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a30b: CMP dword ptr [EAX + 0x24],0x0
// 0053a30f: JNZ 0x0053a316
//   XREF to: 0053a316 (CONDITIONAL_JUMP)
// 0053a311: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0053a316: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   Label: LAB_0053a316
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0053a31b: PUSH 0x1
// 0053a31d: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053a322: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0053a327: ADD ESP,0x8
// 0053a32a: PUSH 0x0
// 0053a32c: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053a332: PUSH 0x43160000
// 0053a337: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0053a338: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0053a33d: ADD ESP,0xc
// 0053a340: PUSH -0x1
// 0053a342: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053a348: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0053a349: CALL core_set.cpp_CDemonSet_FUN_0056fbd0
//   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)
// 0053a34e: ADD ESP,0x8
// 0053a351: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053a356: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0053a357: CALL core_set.cpp_CDemonSet_FUN_0056cd60
//   XREF to: 0056cd60 (UNCONDITIONAL_CALL)
// 0053a35c: ADD ESP,0x4
// 0053a35f: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053a365: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0053a366: CALL core_set.cpp_CDemonSet_FUN_0056cf00
//   XREF to: 0056cf00 (UNCONDITIONAL_CALL)
// 0053a36b: ADD ESP,0x4
// 0053a36e: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0053a374: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 0053a375: CALL core_fire.cpp_CFireEffect_render_FUN_004c7180
//   XREF to: 004c7180 (UNCONDITIONAL_CALL)
// 0053a37a: ADD ESP,0x4
// 0053a37d: MOV EBX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0053a383: PUSH EBX
//   XREF to: 02d83364 (DATA)
// 0053a384: CALL core_gore.cpp_CGore_FUN_004ed7b0
//   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)
// 0053a389: ADD ESP,0x4
// 0053a38c: PUSH 0x1
// 0053a38e: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0053a394: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0053a395: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0053a39a: ADD ESP,0x8
// 0053a39d: PUSH 0x0
// 0053a39f: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053a3a4: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0053a3a9: ADD ESP,0x8
// 0053a3ac: JMP 0x00539549
//   XREF to: 00539549 (UNCONDITIONAL_JUMP)
// 0053a3b1: MOV dword ptr [EBP + 0x7a],EDI
//   Label: LAB_0053a3b1
//   XREF to: Stack[-0x14] (WRITE)
// 0053a3b4: JMP 0x00539605
//   XREF to: 00539605 (UNCONDITIONAL_JUMP)
// 0053a3b9: CMP dword ptr [0x02cf2b00],0x0
//   Label: LAB_0053a3b9
//   XREF to: 02cf2b00 (READ)
// 0053a3c0: JNZ 0x00539622
//   XREF to: 00539622 (CONDITIONAL_JUMP)
// 0053a3c6: MOV ESI,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0053a3cc: PUSH ESI
// 0053a3cd: MOV EDI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0053a3d3: PUSH EDI
// 0053a3d4: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a3da: PUSH EAX
// 0053a3db: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a3e1: CALL core_msnedit.cpp_FUN_0053c340
//   XREF to: 0053c340 (UNCONDITIONAL_CALL)
// 0053a3e6: ADD ESP,0xc
// 0053a3e9: MOV dword ptr [EBX + 0x2c],EAX
// 0053a3ec: TEST EAX,EAX
// 0053a3ee: JZ 0x0053962f
//   XREF to: 0053962f (CONDITIONAL_JUMP)
// 0053a3f4: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053a3fa: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053a3fb: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0053a400: ADD ESP,0x4
// 0053a403: PUSH EAX
// 0053a404: MOV EBX,dword ptr [EBX + 0x2c]
// 0053a407: PUSH EBX
// 0053a408: CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 0053a40d: ADD ESP,0x8
// 0053a410: JMP 0x0053962f
//   XREF to: 0053962f (UNCONDITIONAL_JUMP)
// 0053a415: PUSH 0xb
//   Label: LAB_0053a415
// 0053a417: PUSH EDI
// 0053a418: PUSH 0x63c44a
//   XREF to: 0063c44a (DATA)
// 0053a41d: JMP 0x00539792
//   XREF to: 00539792 (UNCONDITIONAL_JUMP)
// 0053a422: PUSH 0x2a
//   Label: LAB_0053a422
// 0053a424: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a429: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a42a: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a42c: CALL dword ptr [EBX]
// 0053a42e: ADD ESP,0x8
// 0053a431: TEST EAX,EAX
// 0053a433: JZ 0x00539a49
//   XREF to: 00539a49 (CONDITIONAL_JUMP)
// 0053a439: FLD float ptr [EBP + 0x52]
//   XREF to: Stack[-0x3c] (READ)
// 0053a43c: FLD ST0
// 0053a43e: FMUL double ptr [0x0063c584]
//   XREF to: 0063c584 (READ)
// 0053a444: FSTP ST1
// 0053a446: JMP 0x00539a46
//   XREF to: 00539a46 (UNCONDITIONAL_JUMP)
// 0053a44b: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0053a44b
//   XREF to: Stack[0x4] (READ)
// 0053a451: MOV ESI,dword ptr [EAX + 0x28]
// 0053a454: TEST ESI,ESI
// 0053a456: JZ 0x00539c98
//   XREF to: 00539c98 (CONDITIONAL_JUMP)
// 0053a45c: PUSH ESI
// 0053a45d: MOV EBX,dword ptr [ESI + 0x154]
// 0053a463: CALL dword ptr [EBX + 0xd0]
// 0053a469: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a46f: ADD ESP,0x4
// 0053a472: MOV EDI,dword ptr [EAX + 0x28]
// 0053a475: PUSH EDI
// 0053a476: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0053a47b: JMP 0x00539c95
//   XREF to: 00539c95 (UNCONDITIONAL_JUMP)
// 0053a480: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0053a480
//   XREF to: Stack[0x4] (READ)
// 0053a486: MOV EDX,dword ptr [EAX + 0x28]
// 0053a489: PUSH EDX
// 0053a48a: PUSH EAX
// 0053a48b: CALL core_msnedit.cpp_FUN_0053ca30
//   XREF to: 0053ca30 (UNCONDITIONAL_CALL)
// 0053a490: ADD ESP,0x8
// 0053a493: PUSH EAX
// 0053a494: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a49a: PUSH EBX
// 0053a49b: JMP 0x00539cff
//   XREF to: 00539cff (UNCONDITIONAL_JUMP)
// 0053a4a0: PUSH ESI
//   Label: LAB_0053a4a0
// 0053a4a1: PUSH EBX
// 0053a4a2: PUSH 0x101
// 0053a4a7: PUSH EAX
// 0053a4a8: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053a4ae: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 0053a4af: CALL core_script.cpp_CScript_unk50_FUN_00566660
//   XREF to: 00566660 (UNCONDITIONAL_CALL)
// 0053a4b4: ADD ESP,0x14
// 0053a4b7: MOV ECX,0x1
// 0053a4bc: PUSH ECX
// 0053a4bd: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0053a4c3: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 0053a4c4: MOV dword ptr [0x02f7c634],ECX
//   XREF to: 02f7c634 (WRITE)
// 0053a4ca: JMP 0x00539d68
//   XREF to: 00539d68 (UNCONDITIONAL_JUMP)
// 0053a4cf: MOV EDX,dword ptr [0x00680d50]
//   Label: LAB_0053a4cf
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053a4d5: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 0053a4d6: CALL core_script.cpp_CScript_Unk20_FUN_00565130
//   XREF to: 00565130 (UNCONDITIONAL_CALL)
// 0053a4db: ADD ESP,0x4
// 0053a4de: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a4e3: PUSH 0x3c
// 0053a4e5: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a4e7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a4e8: CALL dword ptr [EBX + 0x4]
// 0053a4eb: ADD ESP,0x8
// 0053a4ee: TEST EAX,EAX
// 0053a4f0: JZ 0x00539d75
//   XREF to: 00539d75 (CONDITIONAL_JUMP)
// 0053a4f6: CMP dword ptr [0x02f7c634],0x1
//   XREF to: 02f7c634 (READ)
// 0053a4fd: JNZ 0x0053a57d
//   XREF to: 0053a57d (CONDITIONAL_JUMP)
// 0053a503: PUSH 0x2a
// 0053a505: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a50a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a50b: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a50d: CALL dword ptr [EBX]
// 0053a50f: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0053a515: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0053a51b: ADD ESP,0x8
// 0053a51e: DEC EBX
// 0053a51f: DEC ESI
// 0053a520: TEST EAX,EAX
// 0053a522: JZ 0x0053a551
//   XREF to: 0053a551 (CONDITIONAL_JUMP)
// 0053a524: PUSH ESI
// 0053a525: PUSH EBX
// 0053a526: PUSH 0x101
// 0053a52b: PUSH 0x0
// 0053a52d: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053a532: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 0053a533: CALL core_script.cpp_CScript_unk50_FUN_00566660
//   XREF to: 00566660 (UNCONDITIONAL_CALL)
// 0053a538: ADD ESP,0x14
// 0053a53b: PUSH 0x1
// 0053a53d: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0053a543: XOR EDX,EDX
// 0053a545: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 0053a546: MOV dword ptr [0x02f7c634],EDX
//   XREF to: 02f7c634 (WRITE)
// 0053a54c: JMP 0x00539d68
//   XREF to: 00539d68 (UNCONDITIONAL_JUMP)
// 0053a551: PUSH ESI
//   Label: LAB_0053a551
// 0053a552: PUSH EBX
// 0053a553: PUSH EAX
// 0053a554: PUSH EAX
// 0053a555: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053a55b: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 0053a55c: CALL core_script.cpp_CScript_unk50_FUN_00566660
//   XREF to: 00566660 (UNCONDITIONAL_CALL)
// 0053a561: ADD ESP,0x14
// 0053a564: PUSH 0x1
// 0053a566: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 0053a56c: MOV ESI,0x2
// 0053a571: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 0053a572: MOV dword ptr [0x02f7c634],ESI
//   XREF to: 02f7c634 (WRITE)
// 0053a578: JMP 0x00539d68
//   XREF to: 00539d68 (UNCONDITIONAL_JUMP)
// 0053a57d: PUSH 0x2a
//   Label: LAB_0053a57d
// 0053a57f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a584: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a585: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a587: CALL dword ptr [EBX]
// 0053a589: MOV ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0053a58f: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0053a595: ADD ESP,0x8
// 0053a598: DEC ESI
// 0053a599: DEC EBX
// 0053a59a: TEST EAX,EAX
// 0053a59c: JZ 0x0053a5cd
//   XREF to: 0053a5cd (CONDITIONAL_JUMP)
// 0053a59e: PUSH EBX
// 0053a59f: PUSH ESI
// 0053a5a0: PUSH 0x101
// 0053a5a5: PUSH 0x0
// 0053a5a7: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053a5ac: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 0053a5ad: CALL core_script.cpp_CScript_unk50_FUN_00566660
//   XREF to: 00566660 (UNCONDITIONAL_CALL)
// 0053a5b2: ADD ESP,0x14
// 0053a5b5: MOV EDX,0x1
// 0053a5ba: PUSH EDX
// 0053a5bb: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0053a5c1: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 0053a5c2: MOV dword ptr [0x02f7c634],EDX
//   XREF to: 02f7c634 (WRITE)
// 0053a5c8: JMP 0x00539d68
//   XREF to: 00539d68 (UNCONDITIONAL_JUMP)
// 0053a5cd: PUSH EBX
//   Label: LAB_0053a5cd
// 0053a5ce: PUSH ESI
// 0053a5cf: PUSH 0x101
// 0053a5d4: PUSH EAX
// 0053a5d5: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053a5db: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 0053a5dc: CALL core_script.cpp_CScript_unk50_FUN_00566660
//   XREF to: 00566660 (UNCONDITIONAL_CALL)
// 0053a5e1: ADD ESP,0x14
// 0053a5e4: PUSH 0x1
// 0053a5e6: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 0053a5ec: XOR ESI,ESI
// 0053a5ee: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 0053a5ef: MOV dword ptr [0x02f7c634],ESI
//   XREF to: 02f7c634 (WRITE)
// 0053a5f5: JMP 0x00539d68
//   XREF to: 00539d68 (UNCONDITIONAL_JUMP)
// 0053a5fa: MOV EDX,dword ptr [EBP + 0x42]
//   Label: LAB_0053a5fa
//   XREF to: Stack[-0x4c] (READ)
// 0053a5fd: PUSH EDX
// 0053a5fe: PUSH 0x63c4ce
//   XREF to: 0063c4ce (DATA)
// 0053a603: LEA EAX,[EBP + 0xfffffcda]
//   XREF to: Stack[-0x3b4] (DATA)
// 0053a609: PUSH EAX
// 0053a60a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053a60f: ADD ESP,0xc
// 0053a612: MOV ECX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x4c] (READ)
// 0053a615: PUSH ECX
// 0053a616: PUSH 0x63c4d5
//   XREF to: 0063c4d5 (DATA)
// 0053a61b: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053a621: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0053a622: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 0053a627: ADD ESP,0xc
// 0053a62a: TEST EAX,EAX
// 0053a62c: JZ 0x00539dc5
//   XREF to: 00539dc5 (CONDITIONAL_JUMP)
// 0053a632: LEA EAX,[EBP + 0xfffffcda]
//   XREF to: Stack[-0x3b4] (DATA)
// 0053a638: PUSH EAX
// 0053a639: MOV ESI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a63f: PUSH ESI
// 0053a640: CALL core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
//   XREF to: 0053d190 (UNCONDITIONAL_CALL)
// 0053a645: JMP 0x00539dc2
//   XREF to: 00539dc2 (UNCONDITIONAL_JUMP)
// 0053a64a: CMP dword ptr [0x02f7c634],0x0
//   Label: LAB_0053a64a
//   XREF to: 02f7c634 (READ)
// 0053a651: JNZ 0x0053ab3c
//   XREF to: 0053ab3c (CONDITIONAL_JUMP)
// 0053a657: PUSH 0x12
//   Label: LAB_0053a657
// 0053a659: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a65e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a65f: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a661: CALL dword ptr [EBX + 0x4]
// 0053a664: ADD ESP,0x8
// 0053a667: TEST EAX,EAX
// 0053a669: JZ 0x0053a698
//   XREF to: 0053a698 (CONDITIONAL_JUMP)
// 0053a66b: CMP dword ptr [0x02f7c548],0x0
//   XREF to: 02f7c548 (READ)
// 0053a672: SETZ AL
// 0053a675: AND EAX,0xff
// 0053a67a: MOV [0x02f7c548],EAX
//   XREF to: 02f7c548 (WRITE)
// 0053a67f: JZ 0x0053a68e
//   XREF to: 0053a68e (CONDITIONAL_JUMP)
// 0053a681: MOV EBX,0x1
// 0053a686: XOR ECX,ECX
// 0053a688: MOV dword ptr [EBP + 0x2a],EBX
//   XREF to: Stack[-0x64] (WRITE)
// 0053a68b: MOV dword ptr [EBP + 0x7a],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0053a68e: MOV EAX,[0x00661c44]
//   Label: LAB_0053a68e
//   XREF to: 00661c44 (READ)
// 0053a693: MOV [0x02f7c540],EAX
//   XREF to: 02f7c540 (WRITE)
// 0053a698: PUSH 0x17
//   Label: LAB_0053a698
// 0053a69a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a69f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a6a0: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a6a2: CALL dword ptr [EBX + 0x4]
// 0053a6a5: ADD ESP,0x8
// 0053a6a8: TEST EAX,EAX
// 0053a6aa: JZ 0x0053a6bb
//   XREF to: 0053a6bb (CONDITIONAL_JUMP)
// 0053a6ac: MOV ESI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a6b2: PUSH ESI
// 0053a6b3: CALL core_msnedit.cpp_FUN_0053b9f0
//   XREF to: 0053b9f0 (UNCONDITIONAL_CALL)
// 0053a6b8: ADD ESP,0x4
// 0053a6bb: PUSH 0x20
//   Label: LAB_0053a6bb
// 0053a6bd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a6c2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a6c3: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a6c5: CALL dword ptr [EBX + 0x4]
// 0053a6c8: ADD ESP,0x8
// 0053a6cb: TEST EAX,EAX
// 0053a6cd: JZ 0x0053a6f5
//   XREF to: 0053a6f5 (CONDITIONAL_JUMP)
// 0053a6cf: PUSH 0x2a
// 0053a6d1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a6d6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a6d7: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a6d9: CALL dword ptr [EBX]
// 0053a6db: ADD ESP,0x8
// 0053a6de: TEST EAX,EAX
// 0053a6e0: JZ 0x0053ab58
//   XREF to: 0053ab58 (CONDITIONAL_JUMP)
// 0053a6e6: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a6ec: PUSH EDX
// 0053a6ed: CALL core_msnedit.cpp_DeleteActors_FUN_0053df90
//   XREF to: 0053df90 (UNCONDITIONAL_CALL)
// 0053a6f2: ADD ESP,0x4
// 0053a6f5: PUSH 0x13
//   Label: LAB_0053a6f5
// 0053a6f7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a6fc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a6fd: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a6ff: CALL dword ptr [EBX + 0x4]
// 0053a702: ADD ESP,0x8
// 0053a705: TEST EAX,EAX
// 0053a707: JZ 0x0053a718
//   XREF to: 0053a718 (CONDITIONAL_JUMP)
// 0053a709: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a70f: PUSH ECX
// 0053a710: CALL core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80
//   XREF to: 0053bd80 (UNCONDITIONAL_CALL)
// 0053a715: ADD ESP,0x4
// 0053a718: PUSH 0x18
//   Label: LAB_0053a718
// 0053a71a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a71f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a720: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a722: CALL dword ptr [EBX + 0x4]
// 0053a725: ADD ESP,0x8
// 0053a728: TEST EAX,EAX
// 0053a72a: JZ 0x0053a73b
//   XREF to: 0053a73b (CONDITIONAL_JUMP)
// 0053a72c: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a732: PUSH EBX
// 0053a733: CALL core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680
//   XREF to: 00537680 (UNCONDITIONAL_CALL)
// 0053a738: ADD ESP,0x4
// 0053a73b: PUSH 0x14
//   Label: LAB_0053a73b
// 0053a73d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a742: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a743: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a745: CALL dword ptr [EBX + 0x4]
// 0053a748: ADD ESP,0x8
// 0053a74b: TEST EAX,EAX
// 0053a74d: JZ 0x0053a75e
//   XREF to: 0053a75e (CONDITIONAL_JUMP)
// 0053a74f: MOV ESI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a755: PUSH ESI
// 0053a756: CALL core_msnedit.cpp_FUN_0053d8b0
//   XREF to: 0053d8b0 (UNCONDITIONAL_CALL)
// 0053a75b: ADD ESP,0x4
// 0053a75e: PUSH 0x2e
//   Label: LAB_0053a75e
// 0053a760: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a765: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a766: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a768: CALL dword ptr [EBX + 0x4]
// 0053a76b: ADD ESP,0x8
// 0053a76e: TEST EAX,EAX
// 0053a770: JZ 0x0053a7c6
//   XREF to: 0053a7c6 (CONDITIONAL_JUMP)
// 0053a772: PUSH 0x2a
// 0053a774: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a779: XOR EDI,EDI
// 0053a77b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a77c: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a77e: MOV dword ptr [0x02f7c548],EDI
//   XREF to: 02f7c548 (WRITE)
// 0053a784: CALL dword ptr [EBX]
// 0053a786: ADD ESP,0x8
// 0053a789: TEST EAX,EAX
// 0053a78b: JZ 0x0053ab87
//   XREF to: 0053ab87 (CONDITIONAL_JUMP)
// 0053a791: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a797: MOV EBX,dword ptr [EAX + 0x10]
// 0053a79a: DEC EBX
// 0053a79b: MOV dword ptr [EAX + 0x10],EBX
// 0053a79e: TEST EBX,EBX
// 0053a7a0: JL 0x0053ab71
//   XREF to: 0053ab71 (CONDITIONAL_JUMP)
// 0053a7a6: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0053a7a6
//   XREF to: Stack[0x4] (READ)
// 0053a7ac: MOV EDI,dword ptr [EAX + 0x10]
// 0053a7af: PUSH EDI
// 0053a7b0: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053a7b5: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0053a7b6: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0053a7bb: XOR EDX,EDX
// 0053a7bd: ADD ESP,0x8
// 0053a7c0: MOV dword ptr [EBP + 0x7a],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0053a7c3: MOV dword ptr [EBP + 0x2a],EDX
//   XREF to: Stack[-0x64] (WRITE)
// 0053a7c6: PUSH 0x23
//   Label: LAB_0053a7c6
// 0053a7c8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a7cd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a7ce: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a7d0: CALL dword ptr [EBX + 0x4]
// 0053a7d3: ADD ESP,0x8
// 0053a7d6: TEST EAX,EAX
// 0053a7d8: JZ 0x0053a800
//   XREF to: 0053a800 (CONDITIONAL_JUMP)
// 0053a7da: PUSH 0x2a
// 0053a7dc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a7e1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a7e2: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a7e4: CALL dword ptr [EBX]
// 0053a7e6: ADD ESP,0x8
// 0053a7e9: TEST EAX,EAX
// 0053a7eb: JZ 0x0053aba9
//   XREF to: 0053aba9 (CONDITIONAL_JUMP)
// 0053a7f1: MOV EDI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a7f7: PUSH EDI
// 0053a7f8: CALL core_msnedit.cpp_HideActors_FUN_0053dcf0
//   XREF to: 0053dcf0 (UNCONDITIONAL_CALL)
// 0053a7fd: ADD ESP,0x4
//   Label: LAB_0053a7fd
// 0053a800: PUSH 0x16
//   Label: LAB_0053a800
// 0053a802: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a807: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a808: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a80a: CALL dword ptr [EBX + 0x4]
// 0053a80d: ADD ESP,0x8
// 0053a810: TEST EAX,EAX
// 0053a812: JZ 0x0053a89d
//   XREF to: 0053a89d (CONDITIONAL_JUMP)
// 0053a818: PUSH 0x2a
// 0053a81a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a81f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a820: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a822: CALL dword ptr [EBX]
// 0053a824: ADD ESP,0x8
// 0053a827: TEST EAX,EAX
// 0053a829: JNZ 0x0053abcf
//   XREF to: 0053abcf (CONDITIONAL_JUMP)
// 0053a82f: MOV ESI,0xffffffff
// 0053a834: XOR EDI,EDI
// 0053a836: LEA EAX,[EBP + 0xfffff6da]
//   Label: LAB_0053a836
//   XREF to: Stack[-0x9b4] (DATA)
// 0053a83c: PUSH EAX
// 0053a83d: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a843: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053a848: MOV EBX,dword ptr [EBX + 0x548]
// 0053a84e: ADD ESP,0x4
// 0053a851: TEST EBX,EBX
// 0053a853: JZ 0x0053a877
//   XREF to: 0053a877 (CONDITIONAL_JUMP)
// 0053a855: CMP EDI,dword ptr [EBX + 0x148]
//   Label: LAB_0053a855
// 0053a85b: JZ 0x0053a86d
//   XREF to: 0053a86d (CONDITIONAL_JUMP)
// 0053a85d: PUSH EBX
// 0053a85e: LEA EAX,[EBP + 0xfffff6da]
//   XREF to: Stack[-0x9b4] (DATA)
// 0053a864: PUSH EAX
// 0053a865: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053a86a: ADD ESP,0x8
// 0053a86d: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_0053a86d
// 0053a873: TEST EBX,EBX
// 0053a875: JNZ 0x0053a855
//   XREF to: 0053a855 (CONDITIONAL_JUMP)
// 0053a877: CMP dword ptr [EBP + 0xfffff6da],0x1
//   Label: LAB_0053a877
//   XREF to: Stack[-0x9b4] (READ)
// 0053a87e: JGE 0x0053ac13
//   XREF to: 0053ac13 (CONDITIONAL_JUMP)
// 0053a884: TEST ESI,ESI
// 0053a886: JL 0x0053abfa
//   XREF to: 0053abfa (CONDITIONAL_JUMP)
// 0053a88c: PUSH 0x0
//   Label: LAB_0053a88c
// 0053a88e: LEA EAX,[EBP + 0xfffff6da]
//   XREF to: Stack[-0x9b4] (DATA)
// 0053a894: PUSH EAX
// 0053a895: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053a89a: ADD ESP,0x8
// 0053a89d: PUSH 0x2f
//   Label: LAB_0053a89d
// 0053a89f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a8a4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a8a5: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a8a7: CALL dword ptr [EBX + 0x4]
// 0053a8aa: ADD ESP,0x8
// 0053a8ad: TEST EAX,EAX
// 0053a8af: JZ 0x0053a8e0
//   XREF to: 0053a8e0 (CONDITIONAL_JUMP)
// 0053a8b1: PUSH 0x2a
// 0053a8b3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a8b8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a8b9: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a8bb: CALL dword ptr [EBX]
// 0053a8bd: ADD ESP,0x8
// 0053a8c0: TEST EAX,EAX
// 0053a8c2: JZ 0x0053acb1
//   XREF to: 0053acb1 (CONDITIONAL_JUMP)
// 0053a8c8: MOV EAX,[0x02f7c53c]
//   XREF to: 02f7c53c (READ)
// 0053a8cd: DEC EAX
// 0053a8ce: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053a8d1: TEST EAX,EAX
// 0053a8d3: JL 0x0053aca5
//   XREF to: 0053aca5 (CONDITIONAL_JUMP)
// 0053a8d9: MOV dword ptr [EBP + 0x2a],0x1
//   Label: LAB_0053a8d9
//   XREF to: Stack[-0x64] (WRITE)
// 0053a8e0: PUSH 0x31
//   Label: LAB_0053a8e0
// 0053a8e2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a8e7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a8e8: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a8ea: CALL dword ptr [EBX + 0x4]
// 0053a8ed: ADD ESP,0x8
// 0053a8f0: TEST EAX,EAX
// 0053a8f2: JZ 0x0053a920
//   XREF to: 0053a920 (CONDITIONAL_JUMP)
// 0053a8f4: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a8fa: MOV ECX,dword ptr [EAX + 0x28]
// 0053a8fd: PUSH ECX
// 0053a8fe: PUSH 0x63c535
//   XREF to: 0063c535 (DATA)
// 0053a903: PUSH EAX
// 0053a904: CALL core_msnedit.cpp_FUN_0053c210
//   XREF to: 0053c210 (UNCONDITIONAL_CALL)
// 0053a909: ADD ESP,0xc
// 0053a90c: TEST EAX,EAX
// 0053a90e: JZ 0x0053a920
//   XREF to: 0053a920 (CONDITIONAL_JUMP)
// 0053a910: PUSH EAX
// 0053a911: MOV ESI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a917: PUSH ESI
// 0053a918: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053a91d: ADD ESP,0x8
// 0053a920: PUSH 0x11
//   Label: LAB_0053a920
// 0053a922: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a927: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a928: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a92a: CALL dword ptr [EBX + 0x4]
// 0053a92d: ADD ESP,0x8
// 0053a930: TEST EAX,EAX
// 0053a932: JZ 0x0053a956
//   XREF to: 0053a956 (CONDITIONAL_JUMP)
// 0053a934: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a93a: CMP dword ptr [EAX + 0x24],0x0
// 0053a93e: SETZ AL
// 0053a941: AND EAX,0xff
// 0053a946: PUSH EAX
// 0053a947: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a94d: PUSH EAX
// 0053a94e: CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   XREF to: 00539060 (UNCONDITIONAL_CALL)
// 0053a953: ADD ESP,0x8
// 0053a956: PUSH 0x1c
//   Label: LAB_0053a956
// 0053a958: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a95d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a95e: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a960: CALL dword ptr [EBX + 0x4]
// 0053a963: ADD ESP,0x8
// 0053a966: TEST EAX,EAX
// 0053a968: JZ 0x0053a979
//   XREF to: 0053a979 (CONDITIONAL_JUMP)
// 0053a96a: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a970: PUSH EDX
// 0053a971: CALL core_msnedit.cpp_FUN_0053c730
//   XREF to: 0053c730 (UNCONDITIONAL_CALL)
// 0053a976: ADD ESP,0x4
// 0053a979: PUSH 0x19
//   Label: LAB_0053a979
// 0053a97b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a980: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a981: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a983: CALL dword ptr [EBX + 0x4]
// 0053a986: ADD ESP,0x8
// 0053a989: TEST EAX,EAX
// 0053a98b: JZ 0x0053a9b7
//   XREF to: 0053a9b7 (CONDITIONAL_JUMP)
// 0053a98d: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x48] (READ)
// 0053a990: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053a996: PUSH EAX
// 0053a997: MOV dword ptr [EBX + 0x10],EAX
// 0053a99a: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053a9a0: XOR ESI,ESI
// 0053a9a2: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0053a9a3: MOV dword ptr [EBP + 0x2a],ESI
//   XREF to: Stack[-0x64] (WRITE)
// 0053a9a6: MOV dword ptr [EBP + 0x7a],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0053a9a9: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0053a9ae: ADD ESP,0x8
// 0053a9b1: MOV dword ptr [0x02f7c548],ESI
//   XREF to: 02f7c548 (WRITE)
// 0053a9b7: PUSH 0x3b
//   Label: LAB_0053a9b7
// 0053a9b9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a9be: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a9bf: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a9c1: CALL dword ptr [EBX + 0x4]
// 0053a9c4: ADD ESP,0x8
// 0053a9c7: TEST EAX,EAX
// 0053a9c9: JZ 0x0053a9d0
//   XREF to: 0053a9d0 (CONDITIONAL_JUMP)
// 0053a9cb: CALL core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70
//   XREF to: 00535e70 (UNCONDITIONAL_CALL)
// 0053a9d0: PUSH 0x41
//   Label: LAB_0053a9d0
// 0053a9d2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053a9d7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053a9d8: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053a9da: CALL dword ptr [EBX + 0x4]
// 0053a9dd: ADD ESP,0x8
// 0053a9e0: TEST EAX,EAX
// 0053a9e2: JZ 0x0053aa41
//   XREF to: 0053aa41 (CONDITIONAL_JUMP)
// 0053a9e4: MOV EDX,dword ptr [0x02f7c634]
//   XREF to: 02f7c634 (READ)
// 0053a9ea: TEST EDX,EDX
// 0053a9ec: JNZ 0x0053aa32
//   XREF to: 0053aa32 (CONDITIONAL_JUMP)
// 0053a9ee: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0053a9f4: DEC EBX
// 0053a9f5: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053a9fa: PUSH EBX
// 0053a9fb: DEC EAX
// 0053a9fc: PUSH EAX
// 0053a9fd: PUSH 0x101
// 0053aa02: PUSH EDX
// 0053aa03: MOV ECX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053aa09: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 0053aa0a: CALL core_script.cpp_CScript_unk50_FUN_00566660
//   XREF to: 00566660 (UNCONDITIONAL_CALL)
// 0053aa0f: ADD ESP,0x14
// 0053aa12: MOV EBX,0x1
// 0053aa17: PUSH EBX
// 0053aa18: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 0053aa1e: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 0053aa1f: MOV dword ptr [0x02f7c634],EBX
//   XREF to: 02f7c634 (WRITE)
// 0053aa25: CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   XREF to: 00539060 (UNCONDITIONAL_CALL)
// 0053aa2a: ADD ESP,0x8
// 0053aa2d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053aa32: MOV EDI,dword ptr [0x00680d50]
//   Label: LAB_0053aa32
//   XREF to: 00680d50 (READ)
// 0053aa38: PUSH EDI
//   XREF to: 0310f858 (DATA)
// 0053aa39: CALL core_script.cpp_FUN_00566080
//   XREF to: 00566080 (UNCONDITIONAL_CALL)
// 0053aa3e: ADD ESP,0x4
// 0053aa41: MOV EAX,dword ptr [EBP + 0x7a]
//   Label: LAB_0053aa41
//   XREF to: Stack[-0x14] (READ)
// 0053aa44: TEST EAX,EAX
// 0053aa46: JL 0x0053aa9b
//   XREF to: 0053aa9b (CONDITIONAL_JUMP)
// 0053aa48: MOV [0x02f7c53c],EAX
//   XREF to: 02f7c53c (WRITE)
// 0053aa4d: CMP EAX,0x4
// 0053aa50: JA 0x0053acda
//   XREF to: 0053acda (CONDITIONAL_JUMP)
// 0053aa56: JMP dword ptr [EAX*0x4 + 0x5390dc]
//   Label: switchD
//   XREF to: 0053aa5d (COMPUTED_JUMP)
//   XREF to: 0053aa91 (COMPUTED_JUMP)
//   XREF to: 0053accd (COMPUTED_JUMP)
//   XREF to: 005390dc (DATA)
// 0053aa5d: CMP dword ptr [EBP + 0x2a],0x0
//   Label: caseD_0
//   XREF to: Stack[-0x64] (READ)
// 0053aa61: JZ 0x0053aa7e
//   XREF to: 0053aa7e (CONDITIONAL_JUMP)
// 0053aa63: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053aa69: PUSH 0x2
// 0053aa6b: MOV EDX,dword ptr [EAX + 0x28]
// 0053aa6e: PUSH EDX
// 0053aa6f: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053aa75: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0053aa76: CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   XREF to: 005751d0 (UNCONDITIONAL_CALL)
// 0053aa7b: ADD ESP,0xc
// 0053aa7e: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0053aa7e
//   XREF to: Stack[0x4] (READ)
// 0053aa84: MOV EBX,dword ptr [EAX + 0x24]
// 0053aa87: PUSH EBX
// 0053aa88: PUSH EAX
// 0053aa89: CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060
//   XREF to: 00539060 (UNCONDITIONAL_CALL)
// 0053aa8e: ADD ESP,0x8
// 0053aa91: MOV EAX,[0x00661c44]
//   Label: caseD_3
//   XREF to: 00661c44 (READ)
// 0053aa96: MOV [0x02f7c540],EAX
//   XREF to: 02f7c540 (WRITE)
// 0053aa9b: MOV EDI,dword ptr [EBP + 0x56]
//   Label: LAB_0053aa9b
//   XREF to: Stack[-0x38] (READ)
// 0053aa9e: TEST EDI,EDI
// 0053aaa0: JL 0x0053aace
//   XREF to: 0053aace (CONDITIONAL_JUMP)
// 0053aaa2: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053aaa8: PUSH EDI
// 0053aaa9: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053aaaf: XOR EAX,EAX
// 0053aab1: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0053aab2: MOV [0x02f7c548],EAX
//   XREF to: 02f7c548 (WRITE)
// 0053aab7: MOV dword ptr [EBX + 0x10],EDI
// 0053aaba: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0053aabf: FLD float ptr [0x00661c44]
//   XREF to: 00661c44 (READ)
// 0053aac5: ADD ESP,0x8
// 0053aac8: FSTP float ptr [0x02f7c540]
//   XREF to: 02f7c540 (WRITE)
// 0053aace: TEST byte ptr [0x02cf6a94],0x1
//   Label: LAB_0053aace
//   XREF to: 02cf6a94 (READ)
// 0053aad5: JZ 0x0053ad02
//   XREF to: 0053ad02 (CONDITIONAL_JUMP)
// 0053aadb: MOV EAX,[0x0067b654]
//   Label: LAB_0053aadb
//   XREF to: 0067b654 (READ)
// 0053aae0: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0053aae6: FADD float ptr [0x00680818]
//   XREF to: 00680818 (READ)
// 0053aaec: FSTP float ptr [0x00680818]
//   XREF to: 00680818 (WRITE)
// 0053aaf2: TEST byte ptr [0x02cf6a94],0x1
//   Label: LAB_0053aaf2
//   XREF to: 02cf6a94 (READ)
// 0053aaf9: JZ 0x0053af0c
//   XREF to: 0053af0c (CONDITIONAL_JUMP)
// 0053aaff: TEST byte ptr [EBP + 0x5e],0x1
//   XREF to: Stack[-0x30] (READ)
// 0053ab03: JZ 0x0053af0c
//   XREF to: 0053af0c (CONDITIONAL_JUMP)
// 0053ab09: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0053ab0e: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0053ab14: FADD float ptr [0x02f7c630]
//   XREF to: 02f7c630 (READ)
// 0053ab1a: FSTP float ptr [0x02f7c630]
//   XREF to: 02f7c630 (WRITE)
// 0053ab20: MOV EAX,[0x006810c8]
//   Label: LAB_0053ab20
//   XREF to: 006810c8 (READ)
// 0053ab25: MOV ESI,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x44] (READ)
// 0053ab28: CMP ESI,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 0053ab2e: JZ 0x00539342
//   XREF to: 00539342 (CONDITIONAL_JUMP)
// 0053ab34: MOV dword ptr [EBP + 0x46],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0053ab37: JMP 0x00539342
//   XREF to: 00539342 (UNCONDITIONAL_JUMP)
// 0053ab3c: PUSH 0x38
//   Label: LAB_0053ab3c
// 0053ab3e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053ab43: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053ab44: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053ab46: CALL dword ptr [EBX]
// 0053ab48: ADD ESP,0x8
// 0053ab4b: TEST EAX,EAX
// 0053ab4d: JNZ 0x0053a657
//   XREF to: 0053a657 (CONDITIONAL_JUMP)
// 0053ab53: JMP 0x0053a9b7
//   XREF to: 0053a9b7 (UNCONDITIONAL_JUMP)
// 0053ab58: PUSH EAX
//   Label: LAB_0053ab58
// 0053ab59: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053ab5f: MOV EDI,dword ptr [EAX + 0x28]
// 0053ab62: PUSH EDI
// 0053ab63: PUSH EAX
// 0053ab64: CALL core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
//   XREF to: 0053bc80 (UNCONDITIONAL_CALL)
// 0053ab69: ADD ESP,0xc
// 0053ab6c: JMP 0x0053a6f5
//   XREF to: 0053a6f5 (UNCONDITIONAL_JUMP)
// 0053ab71: MOV EAX,[0x006810c8]
//   Label: LAB_0053ab71
//   XREF to: 006810c8 (READ)
// 0053ab76: MOV EAX,dword ptr [EAX]
//   XREF to: 03114278 (READ)
// 0053ab78: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053ab7e: DEC EAX
// 0053ab7f: MOV dword ptr [EBX + 0x10],EAX
// 0053ab82: JMP 0x0053a7a6
//   XREF to: 0053a7a6 (UNCONDITIONAL_JUMP)
// 0053ab87: MOV EBX,dword ptr [EBP + 0x92]
//   Label: LAB_0053ab87
//   XREF to: Stack[0x4] (READ)
// 0053ab8d: MOV EDX,dword ptr [EBX + 0x10]
// 0053ab90: INC EDX
// 0053ab91: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053ab96: MOV dword ptr [EBX + 0x10],EDX
// 0053ab99: CMP EDX,dword ptr [EAX]
//   XREF to: 03114278 (READ)
// 0053ab9b: JL 0x0053a7a6
//   XREF to: 0053a7a6 (CONDITIONAL_JUMP)
// 0053aba1: MOV dword ptr [EBX + 0x10],EDI
// 0053aba4: JMP 0x0053a7a6
//   XREF to: 0053a7a6 (UNCONDITIONAL_JUMP)
// 0053aba9: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0053aba9
//   XREF to: Stack[0x4] (READ)
// 0053abaf: MOV EBX,dword ptr [EAX + 0x28]
// 0053abb2: TEST EBX,EBX
// 0053abb4: JZ 0x0053a800
//   XREF to: 0053a800 (CONDITIONAL_JUMP)
// 0053abba: PUSH EAX
// 0053abbb: MOV dword ptr [EBX + 0x148],0x1
// 0053abc5: CALL core_msnedit.cpp_FUN_0053bcf0
//   XREF to: 0053bcf0 (UNCONDITIONAL_CALL)
// 0053abca: JMP 0x0053a7fd
//   XREF to: 0053a7fd (UNCONDITIONAL_JUMP)
// 0053abcf: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0053abcf
//   XREF to: Stack[0x4] (READ)
// 0053abd5: MOV EAX,dword ptr [EAX + 0x548]
// 0053abdb: TEST EAX,EAX
// 0053abdd: JZ 0x0053a89d
//   XREF to: 0053a89d (CONDITIONAL_JUMP)
// 0053abe3: XOR EBX,EBX
// 0053abe5: MOV dword ptr [EAX + 0x148],EBX
//   Label: LAB_0053abe5
// 0053abeb: MOV EAX,dword ptr [EAX + 0x14c]
// 0053abf1: TEST EAX,EAX
// 0053abf3: JNZ 0x0053abe5
//   XREF to: 0053abe5 (CONDITIONAL_JUMP)
// 0053abf5: JMP 0x0053a89d
//   XREF to: 0053a89d (UNCONDITIONAL_JUMP)
// 0053abfa: PUSH 0x63c4ec
//   Label: LAB_0053abfa
//   XREF to: 0063c4ec (DATA)
// 0053abff: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053ac05: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053ac06: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053ac0b: ADD ESP,0x8
// 0053ac0e: JMP 0x0053a88c
//   XREF to: 0053a88c (UNCONDITIONAL_JUMP)
// 0053ac13: LEA EAX,[EBP + 0xfffff6da]
//   Label: LAB_0053ac13
//   XREF to: Stack[-0x9b4] (DATA)
// 0053ac19: PUSH EAX
// 0053ac1a: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0053ac1f: ADD ESP,0x4
// 0053ac22: PUSH EDI
// 0053ac23: PUSH ESI
// 0053ac24: PUSH 0x63c4fe
//   XREF to: 0063c4fe (DATA)
// 0053ac29: LEA EAX,[EBP + 0xfffff6da]
//   XREF to: Stack[-0x9b4] (DATA)
// 0053ac2f: PUSH EAX
// 0053ac30: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053ac35: ADD ESP,0x10
// 0053ac38: MOV ESI,EAX
// 0053ac3a: TEST EAX,EAX
// 0053ac3c: JL 0x0053a88c
//   XREF to: 0053a88c (CONDITIONAL_JUMP)
// 0053ac42: PUSH EAX
// 0053ac43: LEA EAX,[EBP + 0xfffff6da]
//   XREF to: Stack[-0x9b4] (DATA)
// 0053ac49: PUSH EAX
// 0053ac4a: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053ac4f: ADD ESP,0x8
// 0053ac52: PUSH EAX
// 0053ac53: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053ac59: PUSH EDX
// 0053ac5a: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053ac5f: ADD ESP,0x8
// 0053ac62: MOV EBX,EAX
// 0053ac64: TEST EAX,EAX
// 0053ac66: JNZ 0x0053ac8a
//   XREF to: 0053ac8a (CONDITIONAL_JUMP)
// 0053ac68: MOV ECX,0x63c515
//   XREF to: 0063c515 (PARAM)
// 0053ac6d: MOV EAX,0x739
// 0053ac72: PUSH 0x63c529
//   XREF to: 0063c529 (DATA)
// 0053ac77: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0053ac7d: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0053ac82: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053ac87: ADD ESP,0x4
// 0053ac8a: PUSH EDI
//   Label: LAB_0053ac8a
// 0053ac8b: LEA EAX,[EBP + 0xfffff6da]
//   XREF to: Stack[-0x9b4] (DATA)
// 0053ac91: PUSH EAX
// 0053ac92: MOV dword ptr [EBX + 0x148],EDI
// 0053ac98: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053ac9d: ADD ESP,0x8
// 0053aca0: JMP 0x0053a836
//   XREF to: 0053a836 (UNCONDITIONAL_JUMP)
// 0053aca5: MOV dword ptr [EBP + 0x7a],0x4
//   Label: LAB_0053aca5
//   XREF to: Stack[-0x14] (WRITE)
// 0053acac: JMP 0x0053a8d9
//   XREF to: 0053a8d9 (UNCONDITIONAL_JUMP)
// 0053acb1: MOV EAX,[0x02f7c53c]
//   Label: LAB_0053acb1
//   XREF to: 02f7c53c (READ)
// 0053acb6: INC EAX
// 0053acb7: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053acba: CMP EAX,0x4
// 0053acbd: JLE 0x0053a8d9
//   XREF to: 0053a8d9 (CONDITIONAL_JUMP)
// 0053acc3: XOR ESI,ESI
// 0053acc5: MOV dword ptr [EBP + 0x7a],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0053acc8: JMP 0x0053a8d9
//   XREF to: 0053a8d9 (UNCONDITIONAL_JUMP)
// 0053accd: XOR ESI,ESI
//   Label: caseD_4
// 0053accf: MOV dword ptr [EBP + 0x66],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0053acd2: MOV dword ptr [EBP + 0x6a],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0053acd5: JMP 0x0053aa91
//   XREF to: 0053aa91 (UNCONDITIONAL_JUMP)
// 0053acda: MOV ECX,0x63c54a
//   Label: default
//   XREF to: 0063c54a (PARAM)
// 0053acdf: MOV EBX,0x78b
// 0053ace4: PUSH 0x63c55e
//   XREF to: 0063c55e (DATA)
// 0053ace9: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0053acef: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0053acf5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053acfa: ADD ESP,0x4
// 0053acfd: JMP 0x0053aa91
//   XREF to: 0053aa91 (UNCONDITIONAL_JUMP)
// 0053ad02: TEST byte ptr [EBP + 0x5e],0x1
//   Label: LAB_0053ad02
//   XREF to: Stack[-0x30] (READ)
// 0053ad06: JZ 0x0053aadb
//   XREF to: 0053aadb (CONDITIONAL_JUMP)
// 0053ad0c: CMP dword ptr [0x02f7c538],0x0
//   XREF to: 02f7c538 (READ)
// 0053ad13: JNZ 0x0053aadb
//   XREF to: 0053aadb (CONDITIONAL_JUMP)
// 0053ad19: CMP dword ptr [0x02cf2b00],0x0
//   XREF to: 02cf2b00 (READ)
// 0053ad20: JNZ 0x0053aadb
//   XREF to: 0053aadb (CONDITIONAL_JUMP)
// 0053ad26: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053ad2c: CMP dword ptr [EAX + 0x28],0x0
// 0053ad30: JZ 0x0053ae63
//   XREF to: 0053ae63 (CONDITIONAL_JUMP)
// 0053ad36: MOV EAX,[0x02f7c528]
//   XREF to: 02f7c528 (READ)
// 0053ad3b: TEST EAX,EAX
// 0053ad3d: JL 0x0053ae63
//   XREF to: 0053ae63 (CONDITIONAL_JUMP)
// 0053ad43: IMUL EBX,EAX,0xec
// 0053ad49: PUSH 0x2a
// 0053ad4b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053ad50: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053ad51: MOV ESI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053ad53: ADD EBX,0x2f7a02c
//   XREF to: 02f7a02c (DATA)
// 0053ad59: CALL dword ptr [ESI]
// 0053ad5b: ADD ESP,0x8
// 0053ad5e: TEST EAX,EAX
// 0053ad60: JZ 0x0053ad81
//   XREF to: 0053ad81 (CONDITIONAL_JUMP)
// 0053ad62: PUSH EBX
// 0053ad63: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053ad69: PUSH EDX
// 0053ad6a: CALL core_msnedit.cpp_FUN_0053af50
//   XREF to: 0053af50 (UNCONDITIONAL_CALL)
// 0053ad6f: ADD ESP,0x8
// 0053ad72: MOV dword ptr [0x00680818],0x501502f9
//   Label: LAB_0053ad72
//   XREF to: 00680818 (WRITE)
// 0053ad7c: JMP 0x0053aaf2
//   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)
// 0053ad81: PUSH 0x38
//   Label: LAB_0053ad81
// 0053ad83: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053ad88: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053ad89: MOV ESI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053ad8b: CALL dword ptr [ESI]
// 0053ad8d: ADD ESP,0x8
// 0053ad90: TEST EAX,EAX
// 0053ad92: JZ 0x0053addb
//   XREF to: 0053addb (CONDITIONAL_JUMP)
// 0053ad94: CMP dword ptr [0x02f7c634],0x0
//   XREF to: 02f7c634 (READ)
// 0053ad9b: JZ 0x0053ad72
//   XREF to: 0053ad72 (CONDITIONAL_JUMP)
// 0053ad9d: LEA EAX,[EBP + 0xfffffa82]
//   XREF to: Stack[-0x60c] (DATA)
// 0053ada3: PUSH EAX
// 0053ada4: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053adaa: MOV EDI,dword ptr [EAX + 0x28]
// 0053adad: PUSH EDI
// 0053adae: PUSH EBX
// 0053adaf: CALL core_actor.cpp_CActorProperty_FUN_0040ea50
//   XREF to: 0040ea50 (UNCONDITIONAL_CALL)
// 0053adb4: ADD ESP,0xc
// 0053adb7: LEA EAX,[EBP + 0xfffffa82]
//   XREF to: Stack[-0x60c] (DATA)
// 0053adbd: PUSH EAX
// 0053adbe: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053adc3: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 0053adc4: CALL core_script.cpp_FUN_00565f70
//   XREF to: 00565f70 (UNCONDITIONAL_CALL)
// 0053adc9: ADD ESP,0x8
// 0053adcc: MOV dword ptr [0x00680818],0x501502f9
//   XREF to: 00680818 (WRITE)
// 0053add6: JMP 0x0053aaf2
//   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)
// 0053addb: PUSH 0x1d
//   Label: LAB_0053addb
// 0053addd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053ade2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053ade3: MOV ESI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053ade5: CALL dword ptr [ESI]
// 0053ade7: ADD ESP,0x8
// 0053adea: TEST EAX,EAX
// 0053adec: JNZ 0x0053ae24
//   XREF to: 0053ae24 (CONDITIONAL_JUMP)
// 0053adee: CMP dword ptr [EBX + 0x54],0x0
//   XREF to: 02f7a080 (DATA)
// 0053adf2: JZ 0x0053ad72
//   XREF to: 0053ad72 (CONDITIONAL_JUMP)
// 0053adf8: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053adfe: MOV EDI,dword ptr [EAX + 0x28]
// 0053ae01: PUSH EDI
// 0053ae02: PUSH EBX
// 0053ae03: CALL core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
//   XREF to: 0040eed0 (UNCONDITIONAL_CALL)
// 0053ae08: ADD ESP,0x8
// 0053ae0b: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053ae10: XOR EAX,EAX
// 0053ae12: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0053ae15: MOV dword ptr [0x00680818],0x501502f9
//   XREF to: 00680818 (WRITE)
// 0053ae1f: JMP 0x0053aaf2
//   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)
// 0053ae24: LEA EAX,[EBP + 0xfffffbae]
//   Label: LAB_0053ae24
//   XREF to: Stack[-0x4e0] (DATA)
// 0053ae2a: PUSH EAX
// 0053ae2b: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053ae31: MOV EDX,dword ptr [EAX + 0x28]
// 0053ae34: PUSH EDX
// 0053ae35: PUSH EBX
// 0053ae36: CALL core_actor.cpp_CActorProperty_FUN_0040ea50
//   XREF to: 0040ea50 (UNCONDITIONAL_CALL)
// 0053ae3b: ADD ESP,0xc
// 0053ae3e: LEA EAX,[EBP + 0xfffffbae]
//   XREF to: Stack[-0x4e0] (DATA)
// 0053ae44: PUSH EAX
// 0053ae45: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053ae4b: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053ae4c: CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)
// 0053ae51: ADD ESP,0x8
// 0053ae54: MOV dword ptr [0x00680818],0x501502f9
//   XREF to: 00680818 (WRITE)
// 0053ae5e: JMP 0x0053aaf2
//   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)
// 0053ae63: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0053ae63
//   XREF to: Stack[0x4] (READ)
// 0053ae69: CMP dword ptr [EAX + 0x2c],0x0
// 0053ae6d: JZ 0x0053aaf2
//   XREF to: 0053aaf2 (CONDITIONAL_JUMP)
// 0053ae73: PUSH 0x38
// 0053ae75: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053ae7a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053ae7b: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053ae7d: CALL dword ptr [EBX]
// 0053ae7f: ADD ESP,0x8
// 0053ae82: TEST EAX,EAX
// 0053ae84: JZ 0x0053aeb4
//   XREF to: 0053aeb4 (CONDITIONAL_JUMP)
// 0053ae86: CMP dword ptr [0x02f7c634],0x0
//   XREF to: 02f7c634 (READ)
// 0053ae8d: JZ 0x0053aea7
//   XREF to: 0053aea7 (CONDITIONAL_JUMP)
// 0053ae8f: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053ae95: MOV EDI,dword ptr [EAX + 0x2c]
// 0053ae98: PUSH EDI
// 0053ae99: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053ae9e: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 0053ae9f: CALL core_script.cpp_FUN_00565f70
//   XREF to: 00565f70 (UNCONDITIONAL_CALL)
// 0053aea4: ADD ESP,0x8
// 0053aea7: XOR EDX,EDX
//   Label: LAB_0053aea7
// 0053aea9: MOV dword ptr [0x00680818],EDX
//   XREF to: 00680818 (WRITE)
// 0053aeaf: JMP 0x0053aaf2
//   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)
// 0053aeb4: MOV EBX,dword ptr [EBP + 0x92]
//   Label: LAB_0053aeb4
//   XREF to: Stack[0x4] (READ)
// 0053aeba: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 0053aec0: MOV ECX,dword ptr [EBX + 0x2c]
// 0053aec3: CMP ECX,dword ptr [EAX + 0x28]
// 0053aec6: JNZ 0x0053aef5
//   XREF to: 0053aef5 (CONDITIONAL_JUMP)
// 0053aec8: CMP dword ptr [EBP + 0x5e],0x0
//   XREF to: Stack[-0x30] (READ)
// 0053aecc: JNZ 0x0053aea7
//   XREF to: 0053aea7 (CONDITIONAL_JUMP)
// 0053aece: CMP dword ptr [0x00680818],0x3e99999a
//   XREF to: 00680818 (READ)
// 0053aed8: JGE 0x0053aea7
//   XREF to: 0053aea7 (CONDITIONAL_JUMP)
// 0053aeda: PUSH EBX
// 0053aedb: CALL core_msnedit.cpp_FUN_0053c730
//   XREF to: 0053c730 (UNCONDITIONAL_CALL)
// 0053aee0: ADD ESP,0x4
// 0053aee3: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053aee8: XOR EDX,EDX
// 0053aeea: MOV dword ptr [0x00680818],EDX
//   XREF to: 00680818 (WRITE)
// 0053aef0: JMP 0x0053aaf2
//   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)
// 0053aef5: PUSH ECX
//   Label: LAB_0053aef5
// 0053aef6: PUSH EBX
// 0053aef7: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053aefc: ADD ESP,0x8
// 0053aeff: XOR EDX,EDX
// 0053af01: MOV dword ptr [0x00680818],EDX
//   XREF to: 00680818 (WRITE)
// 0053af07: JMP 0x0053aaf2
//   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)
// 0053af0c: XOR EBX,EBX
//   Label: LAB_0053af0c
// 0053af0e: MOV dword ptr [0x02f7c630],EBX
//   XREF to: 02f7c630 (WRITE)
// 0053af14: JMP 0x0053ab20
//   XREF to: 0053ab20 (UNCONDITIONAL_JUMP)
// 0053af19: XOR EAX,EAX
//   Label: LAB_0053af19
// 0053af1b: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 0053af1e: POP EBP
// 0053af1f: POP EDI
// 0053af20: POP ESI
// 0053af21: POP EBX
// 0053af22: RET
