// Name: core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0
// Address: 005390f0
// Address Range: [[005390f0, 0053af22]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_editActorsInSet_FUN_005390f0(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Inlined function: core_slew.cpp_CSlew_init_FUN_005a2060 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl core_msnedit_cpp_CDemonMission_editActorsInSet_FUN_005390f0(CDemonMission *this_ptr,int param_2)

{
  CGame *this_ptr_00;
  int iVar1;
  uint uVar2;
  CBoundingBox3D *pCVar3;
  CQuaternion4f *world_position;
  CStrList_vtable *extraout_EAX;
  CVector3f *pCVar4;
  CStrList_vtable *extraout_EAX_00;
  CDemonActor *pCVar5;
  int iVar6;
  CActorProperty *this_ptr_01;
  int iVar7;
  uint *puVar8;
  CMatrix3x3i *pCVar9;
  float *pfVar10;
  int iVar11;
  CMatrix3x3f *pCVar12;
  bool bVar13;
  byte bVar14;
  CKeys *in_stack_fffff61c;
  int in_stack_fffff620;
  CDemonMission *in_stack_fffff624;
  CKeys *in_stack_fffff62c;
  CDemonMission *in_stack_fffff630;
  CKeys *in_stack_fffff634;
  char *pcVar15;
  CQuaternion4f *label_offset;
  CPickList *this_ptr_02;
  UOrientationVector *param5;
  CStrList_vtable *pCVar16;
  CDemonSet *in_stack_fffff694;
  CDemonSet *pCVar17;
  char local_60c [300];
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
  CBoundingBox3D local_154;
  CBoundingBox3D local_13c;
  CBoundingBox3D local_124;
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
  _BIT_INTEGER32 local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar14 = 0;
  remove("$$UNDO$$.TMP");
  this_ptr->is_in_editor = 1;
  core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150((CActorPropertyList *)&DAT_02f7a024)
  ;
  this_ptr_00 = g_CGamePtr;
  this_ptr->selected_actor = (CDemonActor *)0x0;
  this_ptr->hovered_actor = (CDemonActor *)0x0;
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
  if (param_2 != 0) {
    DAT_02f7c53c = 0;
    this_ptr->current_camera_index = 0;
    INT_02f7c634 = 0;
    g_CEdCheckInstance.checked_state = 1;
  }
  FLOAT_02f7c540 = 5.0f;
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,this_ptr->current_camera_index);
  iVar11 = g_WindowHeight;
  this_ptr->show_3d_viewport = -1;
  core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(this_ptr,(uint)(400 < iVar11));
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_50 = this_ptr->first_actor;
  if (0 < g_CDemonSetPtr->actor_count) {
    iVar11 = 999999;
    local_50 = g_CDemonSetPtr->actors[0];
    iVar7 = 0;
    for (iVar6 = 0; iVar6 < g_CDemonSetPtr->actor_count; iVar6 = iVar6 + 1) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar7),
                          g_CHeroPlaceholderClassInfo.name_hash);
      if ((pCVar5 != (CDemonActor *)0x0) && (*(int *)pCVar5[1].actor_name < iVar11)) {
        iVar11 = *(int *)pCVar5[1].actor_name;
        local_50 = pCVar5;
      }
      iVar7 = iVar7 + 4;
    }
  }
  core_msnedit_cpp_CDemonMission_FUN_0053c140(this_ptr,(int)local_50);
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  local_170._8_4_ = 0.0;
  local_170._4_4_ = 0.0;
  local_170._0_4_ = 0.0;
  local_15c = 0.0;
  local_160 = 0.0;
  local_170._12_4_ = 0.0;
  local_158 = 28.0;
  local_7c = 0.0;
  local_78 = 0.0;
  local_5c = g_CDemonCameraInstance.corona_blend_factor;
  local_74 = 0.0;
  local_18 = 10.0;
  local_48 = g_CDemonSetPtr->selected_camera_index;
  local_4c = this_ptr->mission_name;
  local_28 = 0.0;
  local_24 = 0.0;
  local_60 = 0;
  local_54 = &g_CDemonCameraInstance.base.position.y;
  INT_00680818 = 0x60ad78ec;
  local_58 = &g_CDemonCameraInstance.base.position.z;
  do {
    local_44 = g_CDemonSetPtr->selected_camera_index;
    local_64 = 0;
    local_14 = -1;
    local_30 = g_MouseButtonFlags;
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    local_38 = -1;
    if (INT_02f7c634 != 2) {
      puVar8 = &DAT_00680830;
      pcVar15 = local_2b0;
      for (iVar11 = 0x32; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(uint *)pcVar15 = *puVar8;
        puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
        pcVar15 = pcVar15 + ((uint)bVar14 * -2 + 1) * 4;
      }
      switch(DAT_02f7c53c) {
      case 0:
        if ((g_CEdCheckInstance.checked_state != 0) && (g_MouseButtonFlags.dword == 0)) {
          core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                    (g_CDemonSetPtr,this_ptr->selected_actor,0);
        }
        _sprintf(local_2b0,"Static cam: %s",0x3275924);
        local_10c = g_CDemonCameraInstance.base.position.x;
        local_108 = (float)*local_54;
        local_104 = (float)*local_58;
        if ((int *)local_170 != &local_10c) {
          local_170._0_4_ = g_CDemonCameraInstance.base.position.x;
          local_170._4_4_ = *local_54;
          local_170._8_4_ = *local_58;
        }
        pCVar9 = &g_CDemonCameraInstance.base.rotation_matrix;
        pfVar10 = local_1e8;
        for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
          *pfVar10 = (float)pCVar9->m[0].x;
          pCVar9 = (CMatrix3x3i *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
          pfVar10 = pfVar10 + (uint)bVar14 * -2 + 1;
        }
        pfVar10 = local_1e8;
        pCVar12 = &local_1c0;
        for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
          pCVar12->m[0].x = *pfVar10;
          pfVar10 = pfVar10 + (uint)bVar14 * -2 + 1;
          pCVar12 = (CMatrix3x3f *)((int)pCVar12 + ((uint)bVar14 * -2 + 1) * 4);
        }
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&local_1c0,&local_dc);
        if ((CVector3f *)(local_170 + 0xc) != pCVar4) {
          local_170._12_4_ = pCVar4->x;
          local_160 = pCVar4->y;
          local_15c = pCVar4->z;
        }
        local_158 = g_CDemonCameraInstance.base.projection_scale;
        break;
      case 1:
        _sprintf(local_2b0,"Custom cam (camera fixed, slew the actor)");
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
        _sprintf(local_2b0,"Slew cam (actor fixed, slew the camera)");
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
        _sprintf(local_2b0,"1st person cam");
        pCVar5 = this_ptr->selected_actor;
        if (pCVar5 != (CDemonActor *)0x0) {
          pCVar3 = (*((pCVar5->vtable)._ub)->getBoundingBox)(pCVar5,&local_13c);
          local_f4 = (pCVar3->min).x + (pCVar3->max).x;
          local_f0 = (pCVar3->min).y + (pCVar3->max).y;
          local_100 = local_f4 * 0.5f;
          local_ec = (pCVar3->min).z + (pCVar3->max).z;
          local_fc = local_f0 * 0.5f;
          local_f8 = local_ec * 0.5f;
          pCVar5 = this_ptr->selected_actor;
          local_ac = (pCVar5->location).position.x + local_100;
          local_a8 = (pCVar5->location).position.y + local_fc;
          local_a4 = (pCVar5->location).position.z + local_f8;
          if ((float *)local_170 != &local_ac) {
            local_170._0_4_ = local_ac;
            local_170._4_4_ = local_a8;
            local_170._8_4_ = local_a4;
          }
          pCVar5 = this_ptr->selected_actor;
          if ((UOrientationVector *)(local_170 + 0xc) != &pCVar5->orient) {
            local_170._12_4_ = (pCVar5->orient).vec.x;
            local_160 = (pCVar5->orient).vec.y;
            local_15c = (pCVar5->orient).vec.z;
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
        _sprintf(local_2b0,"Chase/spot cam");
        if (this_ptr->selected_actor != (CDemonActor *)0x0) {
          if ((float *)(local_170 + 0xc) != &local_7c) {
            local_170._12_4_ = local_7c;
            local_160 = local_78;
            local_15c = local_74;
          }
          local_160 = local_160 + (this_ptr->selected_actor->orient).vec.y;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                    (&local_198,(CVector3f *)(local_170 + 0xc));
          local_94.z = -local_18;
          local_94.x = local_28;
          local_94.y = local_24;
          local_68 = local_94.z;
          pCVar3 = (*((this_ptr->selected_actor->vtable)._ub)->getBoundingBox)
                             (this_ptr->selected_actor,&local_154);
          local_e8 = (pCVar3->min).x + (pCVar3->max).x;
          local_e4 = (pCVar3->min).y + (pCVar3->max).y;
          local_d0 = local_e8 * 0.5f;
          local_e0 = (pCVar3->min).z + (pCVar3->max).z;
          local_cc = local_e4 * 0.5f;
          local_c8 = local_e0 * 0.5f;
          pCVar5 = this_ptr->selected_actor;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&local_198,&local_a0,&local_94);
          local_88 = pCVar4->x + (pCVar5->location).position.x;
          local_84 = pCVar4->y + (pCVar5->location).position.y;
          local_b8 = local_88 + local_d0;
          local_80 = pCVar4->z + (pCVar5->location).position.z;
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
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
      if (this_ptr->show_3d_viewport != 0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
      }
      pCVar17 = g_CDemonSetPtr;
      if (DAT_02f7c53c == 0) {
        if (this_ptr->full_light_in_editor == 0) {
          g_CDemonCameraInstance.corona_blend_factor = local_5c;
          g_CDemonSetPtr->lighting_quality_mode = 0;
          pCVar17->disable_spotlight_shadows = 0;
        }
        else {
          g_CDemonCameraInstance.corona_blend_factor = 0xffff;
          g_CDemonSetPtr->lighting_quality_mode = 1;
          pCVar17->disable_spotlight_shadows = 1;
        }
        pCVar17 = g_CDemonSetPtr;
        g_CDemonSetPtr->disable_water_rendering = (uint)(this_ptr->render_sky_in_editor == 0);
        pCVar17->disable_sky_rendering = (uint)(this_ptr->render_water_in_editor == 0);
        core_set_cpp_CDemonSet_FUN_0056c1a0(pCVar17);
        core_set_cpp_CDemonSet_FUN_0056be80(g_CDemonSetPtr);
        core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(&g_CDemonCameraInstance);
      }
      else {
        g_CDemonSetPtr->lighting_quality_mode = 1;
        pCVar17->disable_water_rendering = 0;
        pCVar17->disable_sky_rendering = 0;
        g_CDemonRaytraceInstance.rendering_mode = g_DynamicRenderMode;
        if (this_ptr->show_3d_viewport == 0) {
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
        }
        wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,150.0,0);
        core_set_cpp_CDemonSet_FUN_0056fbd0(g_CDemonSetPtr);
        core_set_cpp_CDemonSet_FUN_0056cd60(g_CDemonSetPtr);
        core_set_cpp_CDemonSet_FUN_0056cf00(g_CDemonSetPtr);
        core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
        core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(g_CGorePtr);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      }
      iVar11 = local_14;
      if ((((this_ptr->show_3d_viewport != 0) && (iVar6 = INT_02f7c634, INT_02f7c634 == 0)) &&
          (iVar7 = core_setedit_cpp_CDemonSet_FUN_00577af0(g_CDemonSetPtr), local_38 = iVar7,
          iVar11 = local_14, -1 < iVar7)) &&
         (iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU), iVar11 = iVar6,
         iVar1 != 0)) {
        core_script_cpp_CScript_initEditorLayout_FUN_00566660
                  (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
        INT_02f7c634 = 1;
        core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(g_CDemonMissionPtr,1);
        engine_2d_c_clearInputAndWait_FUN_00403260();
        core_script_cpp_CScript_setParameterValue_FUN_00565f70
                  (g_CScriptPtr,g_CDemonSetPtr->cameras[iVar7].name);
        local_38 = -1;
        iVar11 = local_14;
      }
      local_14 = iVar11;
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
      if ((DAT_02f7c538 == 0) && (g_ActiveControl == (void *)0x0)) {
        pCVar5 = core_msnedit_cpp_CDemonMission_FUN_0053c340(this_ptr,g_MouseX,g_MouseY);
        this_ptr->hovered_actor = pCVar5;
        if (pCVar5 != (CDemonActor *)0x0) {
          uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(this_ptr->hovered_actor,uVar2);
        }
      }
      else {
        this_ptr->hovered_actor = (CDemonActor *)0x0;
      }
      if (this_ptr->selected_actor != (CDemonActor *)0x0) {
        uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                          (g_CEditorToolsPtr);
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(this_ptr->selected_actor,uVar2);
        pCVar3 = (*((this_ptr->selected_actor->vtable)._ub)->getBoundingBox)
                           (this_ptr->selected_actor,&local_124);
        local_c4 = (pCVar3->max).x - (pCVar3->min).x;
        local_c0 = (pCVar3->max).y - (pCVar3->min).y;
        local_bc = (pCVar3->max).z - (pCVar3->min).z;
        local_40 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0) *
                   (float)0.25;
        if (local_40 < (float)0.5) {
          local_40 = 0.5;
        }
        param5 = &this_ptr->selected_actor->orient;
        label_offset = (CQuaternion4f *)&this_ptr->selected_actor->location;
        world_position =
             (CQuaternion4f *)
             shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
        shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
                  (g_CEditorToolsPtr,(int)local_40,world_position,label_offset,param5);
      }
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      engine_2d_c_setupViewportAndClipping_FUN_00401800(0,0,g_WindowWidth + -1,g_WindowHeight + -1);
      core_msnedit_cpp_CDemonMission_FUN_0053c4f0(this_ptr);
      if (this_ptr->hovered_actor != (CDemonActor *)0x0) {
        engine_2d_c_drawText_FUN_00401fd0(this_ptr->hovered_actor->actor_name,g_MouseX,g_MouseY);
      }
      if (0.0 < FLOAT_02f7c540) {
        engine_2d_c_drawText_FUN_00401fd0(local_2b0,0,0);
        if (DAT_02f7c53c == 0) {
          if (g_CEdCheckInstance.checked_state == 0) {
            pcVar15 = "Virtual Director DISABLED";
          }
          else {
            pcVar15 = "Virtual Director ENABLED";
          }
          engine_2d_c_drawText_FUN_00401fd0(pcVar15,0,0xb);
        }
        FLOAT_02f7c540 = FLOAT_02f7c540 - g_CGamePtr->delta_time_float;
        if (FLOAT_02f7c540 < 0.0) {
          FLOAT_02f7c540 = 0.0;
        }
      }
      if (this_ptr->show_3d_viewport != 0) {
        iVar11 = core_msnedit_cpp_FUN_00536cd0
                           (" StaticCam ",3,0xf3,1,(uint)(DAT_02f7c53c == 0));
        if (iVar11 != 0) {
          local_64 = 1;
          local_14 = 0;
        }
        iVar11 = core_msnedit_cpp_FUN_00536cd0
                           (" CustomCam ",0x49,0xf3,1,(uint)(DAT_02f7c53c == 1));
        if (iVar11 != 0) {
          local_14 = 1;
        }
        iVar11 = core_msnedit_cpp_FUN_00536cd0
                           (" SlewCam ",0x8f,0xf3,1,(uint)(DAT_02f7c53c == 2));
        if (iVar11 != 0) {
          local_14 = 2;
        }
        iVar11 = core_msnedit_cpp_FUN_00536cd0
                           (" 1stPersonCam ",199,0xf3,1,(uint)(DAT_02f7c53c == 3));
        if (iVar11 != 0) {
          local_14 = 3;
        }
        in_stack_fffff634 = (CKeys *)0x5398c5;
        iVar11 = core_msnedit_cpp_FUN_00536cd0
                           (" SpotCam ",0x122,0xf3,1,(uint)(DAT_02f7c53c == 4));
        if (iVar11 != 0) {
          local_14 = 4;
        }
        if (DAT_02f7c53c == 0) {
          g_CEdCheckInstance.text_color_mode = 0xff;
          shape_edittool_cpp_CEdCheck_setupWithText_FUN_004a6a60
                    (&g_CEdCheckInstance,g_WindowWidth + -0x8c,0xf3,"Virtual Director");
          shape_edittool_cpp_CEdCheck_handleInput_FUN_004a6d20(&g_CEdCheckInstance);
          shape_edittool_cpp_CEdCheck_render_FUN_004a6c00(&g_CEdCheckInstance);
        }
      }
    }
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0(g_CGorePtr);
    if (INT_02f7c634 != 0) {
      core_script_cpp_CScript_drawEditor_FUN_005645d0(g_CScriptPtr);
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    if (INT_02f7c634 != 0) {
      core_script_cpp_CScript_updateMouseCursor_FUN_00566bc0(g_CScriptPtr);
    }
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if ((iVar11 != 0) &&
       (iVar11 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                           (g_CEditorToolsPtr,"Exit editor?"), iVar11 != 0))
    goto LAB_00539e00;
    if (INT_02f7c634 == 0) {
      if (DAT_02f7c53c == 4) {
        local_3c = g_CGamePtr->delta_time_float;
        local_2c = local_3c;
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
        if (iVar11 == 0) {
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
          if (iVar11 != 0) {
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
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SUBTRACT);
        if (iVar11 != 0) {
          local_7c = local_7c + local_34;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ADD);
        if (iVar11 != 0) {
          local_7c = local_7c - local_34;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD0);
        if (iVar11 != 0) {
          local_78 = local_78 + local_34;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_DECIMAL);
        if (iVar11 != 0) {
          local_78 = local_78 - local_34;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_EQUALS);
        if (iVar11 != 0) {
          local_18 = local_18 - local_1c;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_MINUS);
        if (iVar11 != 0) {
          local_18 = local_18 + local_1c;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_GRAVE);
        if (iVar11 != 0) {
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
          if (iVar11 != 0) {
            local_28 = local_28 - local_20;
          }
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
          if (iVar11 != 0) {
            local_28 = local_28 + local_20;
          }
          in_stack_fffff61c = g_CKeysPtr;
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
          if (iVar11 != 0) {
            local_24 = local_24 + local_20;
          }
          in_stack_fffff620 = 0x539bc1;
          in_stack_fffff624 = (CDemonMission *)g_CKeysPtr;
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
          if (iVar11 != 0) {
            local_24 = local_24 - local_20;
          }
          in_stack_fffff62c = g_CKeysPtr;
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
          if (iVar11 != 0) {
            local_18 = local_18 - local_1c;
          }
          in_stack_fffff630 = (CDemonMission *)0x539bf9;
          in_stack_fffff634 = g_CKeysPtr;
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
          if (iVar11 != 0) {
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
      else {
        pCVar5 = this_ptr->selected_actor;
        if (pCVar5 != (CDemonActor *)0x0) {
          (*((pCVar5->vtable)._ub)->processInEditor)(pCVar5);
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr->selected_actor);
        }
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_BACK);
      if (iVar11 != 0) {
        core_msnedit_cpp_CDemonMission_FUN_0053c0b0(this_ptr);
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
      if (iVar11 != 0) {
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar11 == 0) {
          core_msnedit_cpp_CDemonMission_FUN_0053ca30(this_ptr,(int)this_ptr->selected_actor);
          pCVar16 = extraout_EAX_00;
        }
        else {
          core_msnedit_cpp_CDemonMission_FUN_0053ca80(this_ptr,(int)this_ptr->selected_actor);
          pCVar16 = extraout_EAX;
        }
        core_msnedit_cpp_CDemonMission_FUN_0053c140(this_ptr,(int)pCVar16);
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F2);
      if (iVar11 != 0) {
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar11 == 0) {
          iVar11 = 0x101;
          core_script_cpp_CScript_initEditorLayout_FUN_00566660
                    (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
          INT_02f7c634 = 1;
        }
        else {
          iVar11 = 0;
          core_script_cpp_CScript_initEditorLayout_FUN_00566660
                    (g_CScriptPtr,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
          INT_02f7c634 = 2;
        }
LAB_00539d68:
        core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(g_CDemonMissionPtr,iVar11);
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
    }
    else {
      core_script_cpp_CScript_processEditorInput_FUN_00565130(g_CScriptPtr);
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F2);
      if (iVar11 != 0) {
        if (INT_02f7c634 == 1) {
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
          if (iVar11 == 0) {
            core_script_cpp_CScript_initEditorLayout_FUN_00566660
                      (g_CScriptPtr,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
            iVar11 = 1;
            INT_02f7c634 = 2;
          }
          else {
            core_script_cpp_CScript_initEditorLayout_FUN_00566660
                      (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
            iVar11 = 1;
            INT_02f7c634 = 0;
          }
        }
        else {
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
          if (iVar11 == 0) {
            core_script_cpp_CScript_initEditorLayout_FUN_00566660
                      (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
            iVar11 = 1;
            INT_02f7c634 = 0;
          }
          else {
            core_script_cpp_CScript_initEditorLayout_FUN_00566660
                      (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
            iVar11 = 1;
            INT_02f7c634 = 1;
          }
        }
        goto LAB_00539d68;
      }
    }
    iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar11 != 0) &&
       (iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S), iVar11 != 0)) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      if (this_ptr->mission_name[0] == '\0') {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No mission name!");
      }
      else {
        _sprintf(local_3b4,"%s.msn");
        iVar11 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                           (g_CEditorToolsPtr,"Save mission to %s.msn");
        if (iVar11 != 0) {
          core_msnedit_cpp_CDemonMission_saveMissionAndScript_FUN_0053d190(this_ptr,local_3b4);
        }
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar11 != 0) &&
       (iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P), iVar11 != 0)) {
      local_60 = 1;
LAB_00539e00:
      core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
      iVar11 = local_60;
      pCVar17 = g_CDemonSetPtr;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      pCVar17->disable_spotlight_shadows = 0;
      pCVar17->disable_water_rendering = 0;
      pCVar17->disable_sky_rendering = 0;
      remove("$$UNDO$$.TMP");
      if (iVar11 == 0) {
        return 0;
      }
      return 2;
    }
    if ((INT_02f7c634 == 0) ||
       (iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU), iVar11 != 0)) {
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_E);
      if (iVar11 != 0) {
        bVar13 = g_CEdCheckInstance.checked_state == 0;
        g_CEdCheckInstance.checked_state = (int)bVar13;
        if (bVar13) {
          local_64 = 1;
          local_14 = 0;
        }
        FLOAT_02f7c540 = 5.0f;
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_I);
      if (iVar11 != 0) {
        core_msnedit_cpp_CDemonMission_importActorsFrom_FUN_0053b9f0
                  (this_ptr,(CDemonMission *)in_stack_fffff694);
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
      if (iVar11 != 0) {
        in_stack_fffff694 = (CDemonSet *)g_CKeysPtr;
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar11 == 0) {
          in_stack_fffff694 = (CDemonSet *)0x53ab69;
          core_msnedit_cpp_CDemonMission_FUN_0053bc80(this_ptr,(int)this_ptr->selected_actor,0);
        }
        else {
          core_msnedit_cpp_CDemonMission_FUN_0053df90(this_ptr);
        }
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
      if (iVar11 != 0) {
        core_msnedit_cpp_CDemonMission_FUN_0053bd80
                  (this_ptr,(int)in_stack_fffff61c,in_stack_fffff620,in_stack_fffff624);
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_O);
      if (iVar11 != 0) {
        core_msnedit_cpp_CDemonMission_showOptionsMenu_FUN_00537680(this_ptr);
      }
      in_stack_fffff61c = g_CKeysPtr;
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
      if (iVar11 != 0) {
        core_msnedit_cpp_CDemonMission_FUN_0053d8b0
                  (this_ptr,(int)in_stack_fffff62c,in_stack_fffff630,(int)in_stack_fffff634);
      }
      in_stack_fffff620 = 0x53a76b;
      in_stack_fffff624 = (CDemonMission *)g_CKeysPtr;
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
      if (iVar11 != 0) {
        g_CEdCheckInstance.checked_state = 0;
        in_stack_fffff62c = g_CKeysPtr;
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        pCVar17 = g_CDemonSetPtr;
        if (iVar11 == 0) {
          iVar11 = this_ptr->current_camera_index + 1;
          this_ptr->current_camera_index = iVar11;
          if (pCVar17->camera_count <= iVar11) {
            this_ptr->current_camera_index = 0;
          }
        }
        else {
          iVar11 = this_ptr->current_camera_index + -1;
          this_ptr->current_camera_index = iVar11;
          if (iVar11 < 0) {
            this_ptr->current_camera_index = g_CDemonSetPtr->camera_count + -1;
          }
        }
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,this_ptr->current_camera_index);
        local_14 = 0;
        local_64 = 0;
      }
      in_stack_fffff630 = (CDemonMission *)0x53a7d3;
      in_stack_fffff634 = g_CKeysPtr;
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H);
      if (iVar11 != 0) {
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar11 == 0) {
          if (this_ptr->selected_actor != (CDemonActor *)0x0) {
            this_ptr->selected_actor->is_editor_hidden = 1;
            core_msnedit_cpp_CDemonMission_FUN_0053bcf0(this_ptr);
          }
        }
        else {
          core_msnedit_cpp_CDemonMission_FUN_0053dcf0(this_ptr);
        }
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_U);
      if (iVar11 != 0) {
        this_ptr_02 = (CPickList *)g_CKeysPtr;
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar11 == 0) {
          iVar11 = -1;
          while( true ) {
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff64c);
            for (pCVar5 = this_ptr->first_actor; pCVar5 != (CDemonActor *)0x0;
                pCVar5 = pCVar5->next_actor) {
              if (pCVar5->is_editor_hidden != 0) {
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          ((CStrList *)&stack0xfffff64c,pCVar5->actor_name);
              }
            }
            if ((int)this_ptr_02 < 1) break;
            shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff64c);
            this_ptr_02 = (CPickList *)&stack0xfffff64c;
            iVar11 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (this_ptr_02,"Select actor to unhide",iVar11,0);
            if (iVar11 < 0) goto LAB_0053a88c;
            pcVar15 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                ((CStrList *)&stack0xfffff64c,iVar11);
            pCVar5 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,pcVar15);
            if (pCVar5 == (CDemonActor *)0x0) {
              g_CurrentFilename = "..\\core\\msnedit.cpp";
              g_CurrentLineNumber = 0x739;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
            }
            pCVar5->is_editor_hidden = 0;
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffff64c,0);
          }
          if (iVar11 < 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"No actors hidden.");
          }
LAB_0053a88c:
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffff64c,0);
        }
        else {
          for (pCVar5 = this_ptr->first_actor; pCVar5 != (CDemonActor *)0x0;
              pCVar5 = pCVar5->next_actor) {
            pCVar5->is_editor_hidden = 0;
          }
        }
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_V);
      if (iVar11 != 0) {
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar11 == 0) {
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
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
      if ((iVar11 != 0) &&
         (pcVar15 = core_msnedit_cpp_CDemonMission_FUN_0053c210
                              (this_ptr,"Select actor by name",
                               this_ptr->selected_actor->actor_name), pcVar15 != (char *)0x0)) {
        core_msnedit_cpp_CDemonMission_FUN_0053c140(this_ptr,(int)pcVar15);
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_W);
      if (iVar11 != 0) {
        core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060
                  (this_ptr,(uint)(this_ptr->show_3d_viewport == 0));
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
      if (iVar11 != 0) {
        core_msnedit_cpp_CDemonMission_FUN_0053c730(this_ptr);
      }
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
      if (iVar11 != 0) {
        this_ptr->current_camera_index = local_48;
        local_64 = 0;
        local_14 = 0;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,local_48);
        g_CEdCheckInstance.checked_state = 0;
      }
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar11 != 0) {
      core_msnedit_cpp_FUN_00535e70();
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F7);
    if (iVar11 != 0) {
      if (INT_02f7c634 == 0) {
        core_script_cpp_CScript_initEditorLayout_FUN_00566660
                  (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
        INT_02f7c634 = 1;
        core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(g_CDemonMissionPtr,1);
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
      in_stack_fffff694 = (CDemonSet *)0x53aa3e;
      core_script_cpp_CScript_checkSyntax_FUN_00566080(g_CScriptPtr);
    }
    if (-1 < local_14) {
      DAT_02f7c53c = local_14;
      switch(local_14) {
      case 0:
        if (local_64 != 0) {
          core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                    (g_CDemonSetPtr,this_ptr->selected_actor,2);
        }
        in_stack_fffff694 = (CDemonSet *)this_ptr;
        core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060
                  (this_ptr,this_ptr->show_3d_viewport);
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
        in_stack_fffff694 = (CDemonSet *)0x53acfa;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid cameraMode!");
      }
      FLOAT_02f7c540 = 5.0f;
    }
    pCVar17 = g_CDemonSetPtr;
    if (-1 < local_38) {
      g_CEdCheckInstance.checked_state = 0;
      this_ptr->current_camera_index = local_38;
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(pCVar17,local_38);
      FLOAT_02f7c540 = 5.0f;
      in_stack_fffff694 = pCVar17;
    }
    if (((((g_MouseButtonFlags.dword & 1) == 0) && ((local_30.dword & 1) != 0)) &&
        (DAT_02f7c538 == 0)) && (g_ActiveControl == (void *)0x0)) {
      if ((this_ptr->selected_actor == (CDemonActor *)0x0) || (DAT_02f7c528 < 0)) {
        if (this_ptr->hovered_actor != (CDemonActor *)0x0) {
          in_stack_fffff694 = (CDemonSet *)g_CKeysPtr;
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
          if (iVar11 == 0) {
            if (this_ptr->hovered_actor == this_ptr->selected_actor) {
              if ((local_30.dword != 0) || (0x3e999999 < INT_00680818)) goto LAB_0053aea7;
              core_msnedit_cpp_CDemonMission_FUN_0053c730(this_ptr);
              engine_2d_c_clearInputAndWait_FUN_00403260();
              INT_00680818 = 0;
            }
            else {
              core_msnedit_cpp_CDemonMission_FUN_0053c140(this_ptr,(int)this_ptr->hovered_actor);
              INT_00680818 = 0;
            }
          }
          else {
            if (INT_02f7c634 != 0) {
              core_script_cpp_CScript_setParameterValue_FUN_00565f70
                        (g_CScriptPtr,this_ptr->hovered_actor->actor_name);
            }
LAB_0053aea7:
            INT_00680818 = 0;
          }
        }
      }
      else {
        iVar6 = DAT_02f7c528 * 0xec;
        this_ptr_01 = (CActorProperty *)(&DAT_02f7a02c + iVar6);
        in_stack_fffff694 = (CDemonSet *)g_CKeysPtr;
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar11 == 0) {
          iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
          if (iVar11 == 0) {
            iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
            if (iVar11 == 0) {
              if (*(int *)(&DAT_02f7a080 + iVar6) == 0) goto LAB_0053ad72;
              core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                        (this_ptr_01,this_ptr->selected_actor);
              engine_2d_c_clearInputAndWait_FUN_00403260();
              local_30.dword = 0;
              INT_00680818 = 0x501502f9;
            }
            else {
              core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                        (this_ptr_01,this_ptr->selected_actor,local_4e0);
              shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                        (g_CEditorToolsPtr,local_4e0);
              INT_00680818 = 0x501502f9;
            }
          }
          else {
            if (INT_02f7c634 == 0) goto LAB_0053ad72;
            core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                      (this_ptr_01,this_ptr->selected_actor,local_60c);
            core_script_cpp_CScript_setParameterValue_FUN_00565f70(g_CScriptPtr,local_60c);
            INT_00680818 = 0x501502f9;
          }
        }
        else {
          core_msnedit_cpp_CDemonMission_pasteActorProperty_FUN_0053af50
                    (this_ptr,(char *)this_ptr_01);
LAB_0053ad72:
          INT_00680818 = 0x501502f9;
        }
      }
    }
    else {
      INT_00680818 = (int)(g_CGamePtr->delta_time_float + (float)INT_00680818);
    }
    if (((g_MouseButtonFlags.dword & 1) == 0) || ((local_30.dword & 1) == 0)) {
      FLOAT_02f7c630 = 0.0;
    }
    else {
      FLOAT_02f7c630 = g_CGamePtr->delta_time_float + FLOAT_02f7c630;
    }
    if (local_44 != g_CDemonSetPtr->selected_camera_index) {
      local_48 = local_44;
    }
  } while( true );
}
