// Name: core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0
// Address: 005390f0
// Address Range: [[005390f0, 0053af22]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_msnedit_cpp_PrepareMissionMaybe_FUN_005390f0(void)

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
  int iVar7;
  uint *puVar8;
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
  byte local_170 [16];
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
  _DAT_02f7c540 = 0x40A00000;
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
        *(uint *)pcVar14 = *puVar8;
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
          local_100 = local_f4 * 0.5f;
          local_ec = pfVar3[2] + pfVar3[5];
          local_fc = local_f0 * 0.5f;
          local_f8 = local_ec * 0.5f;
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
          local_d0 = local_e8 * 0.5f;
          local_e0 = pfVar3[2] + pfVar3[5];
          local_cc = local_e4 * 0.5f;
          local_c8 = local_e0 * 0.5f;
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
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      }
      iVar10 = local_14;
      if ((((*(int *)(in_stack_00000004->field2_0xc + 0x18) != 0) &&
           (iVar6 = DAT_02f7c634, DAT_02f7c634 == 0)) &&
          (local_38 = core_setedit_cpp_CDemonSet_FUN_00577af0(g_CDemonSetPtr), iVar10 = local_14,
          -1 < local_38)) &&
         (iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38), iVar10 = iVar6, iVar7 != 0))
      {
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
                   (float)0.25;
        if (local_40 < (float)0.5) {
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
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if ((iVar10 != 0) &&
       (iVar10 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                           (g_CEditorToolsPtr,"Exit editor?"), iVar10 != 0))
    goto LAB_00539e00;
    if (DAT_02f7c634 == 0) {
      if (DAT_02f7c53c == 4) {
        local_3c = g_CGamePtr->delta_time_float;
        local_2c = local_3c;
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        if (iVar10 == 0) {
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
          if (iVar10 != 0) {
            local_2c = local_3c * (float)10;
          }
        }
        else {
          local_2c = local_3c * (float)0.050000000000000003;
        }
        local_34 = local_2c * (float)1.57079632675;
        local_1c = local_18 * (float)1.5;
        if (local_1c < 1.0) {
          local_1c = 1.0;
        }
        local_1c = local_1c * local_2c;
        local_20 = local_18;
        if (local_18 < 1.0) {
          local_20 = 1.0;
        }
        local_20 = local_20 * local_2c;
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
        if (iVar10 != 0) {
          local_7c = local_7c + local_34;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
        if (iVar10 != 0) {
          local_7c = local_7c - local_34;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
        if (iVar10 != 0) {
          local_78 = local_78 + local_34;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
        if (iVar10 != 0) {
          local_78 = local_78 - local_34;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0xd);
        if (iVar10 != 0) {
          local_18 = local_18 - local_1c;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0xc);
        if (iVar10 != 0) {
          local_18 = local_18 + local_1c;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x29);
        if (iVar10 != 0) {
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
          if (iVar10 != 0) {
            local_28 = local_28 - local_20;
          }
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
          if (iVar10 != 0) {
            local_28 = local_28 + local_20;
          }
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
          if (iVar10 != 0) {
            local_24 = local_24 + local_20;
          }
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
          if (iVar10 != 0) {
            local_24 = local_24 - local_20;
          }
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
          if (iVar10 != 0) {
            local_18 = local_18 - local_1c;
          }
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
          if (iVar10 != 0) {
            local_18 = local_18 + local_1c;
          }
        }
        if (local_7c < (float)-1.57079632675) {
          local_7c = -1.5707964;
        }
        if ((float)1.57079632675 < local_7c) {
          local_7c = 1.5707964;
        }
        if (local_78 < (float)-1.57079632675) {
          local_78 = local_78 + 6.283185f;
        }
        if ((float)1.57079632675 < local_78) {
          local_78 = local_78 + -6.283185f;
        }
        if (local_18 < (float)0.5) {
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
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xe);
      if (iVar10 != 0) {
        core_msnedit_cpp_UndoChangeMaybe_FUN_0053c0b0();
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar10 == 0) {
          core_msnedit_cpp_FUN_0053ca30();
        }
        else {
          core_msnedit_cpp_FUN_0053ca80();
        }
        core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3c);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
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
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3c);
      if (iVar10 != 0) {
        if (DAT_02f7c634 == 1) {
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
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
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
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
    iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (iVar10 != 0) {
      d3 = 0x539d95;
      in_stack_fffff668 = g_CKeysPtr;
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
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
    iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if ((iVar10 != 0) &&
       (iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19), iVar10 != 0)) {
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
       (iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38), iVar10 != 0)) {
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x12);
      if (iVar10 != 0) {
        bVar12 = g_CEdCheckInstance.checked_state == 0;
        g_CEdCheckInstance.checked_state = (int)bVar12;
        if (bVar12) {
          local_64 = 1;
          local_14 = 0;
        }
        _DAT_02f7c540 = 0x40A00000;
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x17);
      if (iVar10 != 0) {
        core_msnedit_cpp_FUN_0053b9f0();
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar10 == 0) {
          core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80();
        }
        else {
          core_msnedit_cpp_DeleteActors_FUN_0053df90();
        }
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
      if (iVar10 != 0) {
        core_msnedit_cpp_DuplicateActorCheckMaybe_FUN_0053bd80();
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x18);
      if (iVar10 != 0) {
        core_msnedit_cpp_DementedMissionEditorSomething_FUN_00537680();
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x14);
      if (iVar10 != 0) {
        core_msnedit_cpp_FUN_0053d8b0();
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
      if (iVar10 != 0) {
        g_CEdCheckInstance.checked_state = 0;
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
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
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x23);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar10 == 0) {
          if (*(int *)(in_stack_00000004->field2_0xc + 0x1c) != 0) {
            *(uint *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) + 0x148) = 1;
            core_msnedit_cpp_FUN_0053bcf0();
          }
        }
        else {
          core_msnedit_cpp_HideActors_FUN_0053dcf0();
        }
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x16);
      if (iVar10 != 0) {
        iVar10 = 0x53a824;
        iVar6 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
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
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f);
      if (iVar10 != 0) {
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
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
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
      if (iVar10 != 0) {
        in_stack_fffff668 = (CKeys *)0x53a909;
        iVar10 = core_msnedit_cpp_FUN_0053c210();
        if (iVar10 != 0) {
          core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
        }
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x11);
      if (iVar10 != 0) {
        core_msnedit_cpp_CalltoCallToDemonCameraInit_FUN_00539060();
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
      if (iVar10 != 0) {
        core_msnedit_cpp_FUN_0053c730();
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
      if (iVar10 != 0) {
        *(int *)(in_stack_00000004->field2_0xc + 4) = local_48;
        local_64 = 0;
        local_14 = 0;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,local_48);
        g_CEdCheckInstance.checked_state = 0;
      }
    }
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar10 != 0) {
      core_msnedit_cpp_MasterEditorKeysHelpScreen_FUN_00535e70();
    }
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x41);
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
      _DAT_02f7c540 = 0x40A00000;
    }
    pCVar1 = g_CDemonSetPtr;
    if (-1 < local_38) {
      g_CEdCheckInstance.checked_state = 0;
      *(int *)(in_stack_00000004->field2_0xc + 4) = local_38;
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(pCVar1,local_38);
      _DAT_02f7c540 = 0x40A00000;
    }
    if (((((g_MouseButtonFlags & 1U) == 0) && ((local_30 & 1) != 0)) && (DAT_02f7c538 == 0)) &&
       (g_ActiveButton == (CEdButton *)0x0)) {
      if ((*(int *)(in_stack_00000004->field2_0xc + 0x1c) == 0) || (DAT_02f7c528 < 0)) {
        if (*(int *)(in_stack_00000004->field2_0xc + 0x20) != 0) {
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
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
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar10 == 0) {
          iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
          if (iVar10 == 0) {
            iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
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
