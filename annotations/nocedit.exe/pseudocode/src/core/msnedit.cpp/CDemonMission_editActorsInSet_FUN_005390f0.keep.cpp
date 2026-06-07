// Name: core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0
// Address: 005390f0
// MANUAL RECONSTRUCTION
// Address Range: [[005390f0, 0053af22] [03fc30b0, 03fc3168]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_editActorsInSet_FUN_005390f0(CDemonMission *this_ptr,int reset_cameras)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_CDemonMission_editActorsInSet_FUN_005390f0(CDemonMission *this_ptr,int reset_cameras)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonSet *pCVar7;
  CVector3f *pCVar8;
  int iVar9;
  int iVar2;
  uint uVar3;
  CBoundingBox3D *pCVar4;
  uint uVar10;
  CDemonActor *pCVar11;
  CHeroPlaceholder *pCVar14;
  CBoundingBox3D *pCVar12;
  CVector3f *pCVar5;
  CDemonActor *pCVar6;
  char *pcVar13;
  int iVar14;
  int iVar7;
  CActorProperty *this_ptr_01;
  int iVar11;
  int iVar15;
  bool bVar13;
  CPickList local_9b4;
  char local_60c [300];
  char local_4e0 [300];
  char local_3b4 [260];
  char local_2b0 [200];
  CMatrix3x3f local_1c0;
  CMatrix3x3f local_198;
  CSlew local_170;
  CBoundingBox3D local_154;
  CBoundingBox3D local_13c;
  CBoundingBox3D local_124;
  float local_10c;
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
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  float local_7c;
  float local_78;
  float local_74;
  int local_64;
  int local_60;
  int local_5c;
  float *local_58;
  float *local_54;
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
  UOrientationVector *orientation;
  char *pcVar15;
  CDemonSet *pCVar1;
  CGame *this_ptr_00;
  byte bVar14;
  float local_68;
  
  bVar14 = 0;
  remove("$$UNDO$$.TMP");
  this_ptr->is_in_editor = 1;
  core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150(&g_MsnEditPropertyList);
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
  core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(g_CDemonSetPtr,0);
  core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing actors.");
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Setting initial camera view.");
  if (reset_cameras != 0) {
    INT_02f7c53c = 0;
    this_ptr->current_camera_index = 0;
    INT_02f7c634 = 0;
    g_CEdCheckInstance.checked_state = 1;
  }
  FLOAT_02f7c540 = 5.0f;
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,this_ptr->current_camera_index);
  iVar14 = g_WindowHeight;
  this_ptr->show_3d_viewport = -1;
  core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(this_ptr,(uint)(400 < iVar14));
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_50 = this_ptr->first_actor;
  if (0 < g_CDemonSetPtr->actor_count) {
    iVar11 = 999999;
    local_50 = g_CDemonSetPtr->actors[0];
    for (iVar7 = 0; iVar7 < g_CDemonSetPtr->actor_count; iVar7 = iVar7 + 1) {
      pCVar14 = (CHeroPlaceholder *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          (g_CDemonSetPtr->actors[iVar7],
                           g_CHeroPlaceholderClassInfo.name_hash);
      if ((pCVar14 != (CHeroPlaceholder *)0x0) && (pCVar14->index < iVar11)) {
        iVar11 = pCVar14->index;
        local_50 = (CDemonActor *)pCVar14;
      }
    }
  }
  core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,local_50);
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  core_slew_cpp_CSlew_init_FUN_005a2060(&local_170);
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
  local_54 = &g_CDemonCameraInstance.base.position.f.y;
  FLOAT_00680818 = 1e+20;
  local_58 = &g_CDemonCameraInstance.base.position.f.z;
  do {
    local_44 = g_CDemonSetPtr->selected_camera_index;
    local_64 = 0;
    local_14 = -1;
    local_30 = g_MouseButtonFlags;
    wincore_winrun_cpp_doNothing1_FUN_005f2f80();
    local_38 = -1;
    if (INT_02f7c634 != 2) {
      memcpy(local_2b0,g_MsnEditCameraStatusBuffer,200);
      switch(INT_02f7c53c) {
      case 0:
        if ((g_CEdCheckInstance.checked_state != 0) && (g_MouseButtonFlags.dword == 0)) {
          core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                    (g_CDemonSetPtr,this_ptr->selected_actor,0);
        }
        _sprintf(local_2b0,"Static cam: %s",g_CDemonCameraInstance.camera_name);
        local_10c = g_CDemonCameraInstance.base.position.f.x;
        local_108 = *local_54;
        local_104 = *local_58;
        if (&local_170 != (CSlew *)&local_10c) {
          local_170.position.x = g_CDemonCameraInstance.base.position.f.x;
          local_170.position.y = local_108;
          local_170.position.z = local_104;
        }
        local_1c0 = g_CDemonCameraInstance.base.rotation_matrix;
        pCVar8 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&local_1c0,&local_dc);
        if (&local_170.orientation.vec != pCVar8) {
          local_170.orientation.vec = *pCVar8;
        }
        local_170.slew_rate = g_CDemonCameraInstance.base.focal_length;
        break;
      case 1:
        _sprintf(local_2b0,"Custom cam (camera fixed, slew the actor)");
        g_CDemonCameraInstance.base.position.f = local_170.position;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&g_CDemonCameraInstance.base.rotation_matrix,&local_170.orientation.vec);
        g_CDemonCameraInstance.base.focal_length = local_170.slew_rate;
        break;
      case 2:
        _sprintf(local_2b0,"Slew cam (actor fixed, slew the camera)");
        g_CDemonCameraInstance.base.position.f = local_170.position;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&g_CDemonCameraInstance.base.rotation_matrix,&local_170.orientation.vec);
        g_CDemonCameraInstance.base.focal_length = local_170.slew_rate;
        break;
      case 3:
        _sprintf(local_2b0,"1st person cam");
        pCVar11 = this_ptr->selected_actor;
        if (pCVar11 != (CDemonActor *)0x0) {
          pCVar12 = (*((pCVar11->vtable)._ub)->getBoundingBox)(pCVar11,&local_13c);
          local_f4 = (pCVar12->min).x + (pCVar12->max).x;
          local_f0 = (pCVar12->min).y + (pCVar12->max).y;
          local_100 = local_f4 * 0.5f;
          local_ec = (pCVar12->min).z + (pCVar12->max).z;
          local_fc = local_f0 * 0.5f;
          local_f8 = local_ec * 0.5f;
          pCVar11 = this_ptr->selected_actor;
          local_ac = (pCVar11->location).position.x + local_100;
          local_a8 = (pCVar11->location).position.y + local_fc;
          local_a4 = (pCVar11->location).position.z + local_f8;
          if (&local_170 != (CSlew *)&local_ac) {
            local_170.position.x = local_ac;
            local_170.position.y = local_a8;
            local_170.position.z = local_a4;
          }
          pCVar11 = this_ptr->selected_actor;
          if (&local_170.orientation != &pCVar11->orient) {
            local_170.orientation.vec = (pCVar11->orient).vec;
          }
          local_170.slew_rate = 28.0;
        }
        g_CDemonCameraInstance.base.position.f = local_170.position;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&g_CDemonCameraInstance.base.rotation_matrix,&local_170.orientation.vec);
        g_CDemonCameraInstance.base.focal_length = local_170.slew_rate;
        break;
      case 4:
        _sprintf(local_2b0,"Chase/spot cam");
        if (this_ptr->selected_actor != (CDemonActor *)0x0) {
          if (&local_170.orientation.vec.x != &local_7c) {
            local_170.orientation.vec.x = local_7c;
            local_170.orientation.vec.y = local_78;
            local_170.orientation.vec.z = local_74;
          }
          local_170.orientation.vec.y = local_170.orientation.vec.y + (this_ptr->selected_actor->orient).vec.y;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                    (&local_198,&local_170.orientation.vec);
          local_94.z = -local_18;
          local_94.x = local_28;
          local_94.y = local_24;
          local_68 = local_94.z;
          pCVar12 = (*((this_ptr->selected_actor->vtable)._ub)->getBoundingBox)
                              (this_ptr->selected_actor,&local_154);
          local_e8 = (pCVar12->min).x + (pCVar12->max).x;
          local_e4 = (pCVar12->min).y + (pCVar12->max).y;
          fVar1 = local_e8 * 0.5f;
          local_e0 = (pCVar12->min).z + (pCVar12->max).z;
          fVar2 = local_e4 * 0.5f;
          fVar3 = local_e0 * 0.5f;
          pCVar11 = this_ptr->selected_actor;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&local_198,&local_a0,&local_94);
          local_b8 = pCVar5->x + (pCVar11->location).position.x + fVar1;
          local_b4 = pCVar5->y + (pCVar11->location).position.y + fVar2;
          local_b0 = pCVar5->z + (pCVar11->location).position.z + fVar3;
          if (&local_170 != (CSlew *)&local_b8) {
            local_170.position.x = local_b8;
            local_170.position.y = local_b4;
            local_170.position.z = local_b0;
          }
          local_170.slew_rate = 28.0;
        }
        g_CDemonCameraInstance.base.position.f = local_170.position;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&g_CDemonCameraInstance.base.rotation_matrix,&local_170.orientation.vec);
        g_CDemonCameraInstance.base.focal_length = local_170.slew_rate;
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
      pCVar1 = g_CDemonSetPtr;
      if (INT_02f7c53c == 0) {
        if (this_ptr->full_light_in_editor == 0) {
          g_CDemonCameraInstance.corona_blend_factor = local_5c;
          g_CDemonSetPtr->lighting_quality_mode = 0;
          pCVar1->disable_spotlight_shadows = 0;
        }
        else {
          g_CDemonCameraInstance.corona_blend_factor = 0xffff;
          g_CDemonSetPtr->lighting_quality_mode = 1;
          pCVar1->disable_spotlight_shadows = 1;
        }
        pCVar7 = g_CDemonSetPtr;
        g_CDemonSetPtr->disable_water_rendering = (uint)(this_ptr->render_sky_in_editor == 0);
        pCVar7->disable_sky_rendering = (uint)(this_ptr->render_water_in_editor == 0);
        core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(pCVar7,1);
        core_set_cpp_CDemonSet_renderStaticLights_FUN_0056be80(g_CDemonSetPtr);
        core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(&g_CDemonCameraInstance);
      }
      else {
        g_CDemonSetPtr->lighting_quality_mode = 1;
        pCVar1->disable_water_rendering = 0;
        pCVar1->disable_sky_rendering = 0;
        g_CDemonRaytraceInstance.rendering_mode = g_DynamicRenderMode;
        if (this_ptr->show_3d_viewport == 0) {
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
        }
        wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,150.0,0);
        core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(g_CDemonSetPtr,0xffffffff);
        core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0056cd60(g_CDemonSetPtr);
        core_set_cpp_CDemonSet_renderTransparentActors_FUN_0056cf00(g_CDemonSetPtr);
        core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
        core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(g_CGorePtr);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      }
      iVar14 = local_14;
      if ((((this_ptr->show_3d_viewport != 0) && (iVar15 = INT_02f7c634, INT_02f7c634 == 0)) &&
          (iVar9 = core_setedit_cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0
                             (g_CDemonSetPtr,(int *)0x0), local_38 = iVar9, iVar14 = local_14,
          -1 < iVar9)) &&
         (iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU), iVar14 = iVar15,
         iVar2 != 0)) {
        core_script_cpp_CScript_initEditorLayout_FUN_00566660
                  (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
        INT_02f7c634 = 1;
        core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(g_CDemonMissionPtr,1);
        engine_2d_c_clearInputAndWait_FUN_00403260();
        core_script_cpp_CScript_setParameterValue_FUN_00565f70
                  (g_CScriptPtr,g_CDemonSetPtr->cameras[iVar9].name);
        local_38 = -1;
        iVar14 = local_14;
      }
      local_14 = iVar14;
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
      if ((INT_02f7c538 == 0) && (g_ActiveControl == (void *)0x0)) {
        pCVar11 = core_msnedit_cpp_CDemonMission_raycastPickActor_FUN_0053c340
                            (this_ptr,g_MouseX,g_MouseY);
        this_ptr->hovered_actor = pCVar11;
        if (pCVar11 != (CDemonActor *)0x0) {
          uVar10 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                             (g_CEditorToolsPtr);
          core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(this_ptr->hovered_actor,uVar10);
        }
      }
      else {
        this_ptr->hovered_actor = (CDemonActor *)0x0;
      }
      if (this_ptr->selected_actor != (CDemonActor *)0x0) {
        uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                          (g_CEditorToolsPtr);
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(this_ptr->selected_actor,uVar3);
        pCVar4 = (*((this_ptr->selected_actor->vtable)._ub)->getBoundingBox)
                           (this_ptr->selected_actor,&local_124);
        fVar1 = (pCVar4->max).x - (pCVar4->min).x;
        fVar2 = (pCVar4->max).y - (pCVar4->min).y;
        fVar3 = (pCVar4->max).z - (pCVar4->min).z;
        local_40 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) * (float)0.25;
        if (local_40 < (float)0.5) {
          local_40 = 0.5;
        }
        orientation = &this_ptr->selected_actor->orient;
        pCVar8 = &(this_ptr->selected_actor->location).position;
        uVar10 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                           (g_CEditorToolsPtr);
        shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
                  (g_CEditorToolsPtr,local_40,uVar10,pCVar8,orientation);
      }
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      engine_2d_c_setupViewportAndClipping_FUN_00401800(0,0,g_WindowWidth + -1,g_WindowHeight + -1);
      core_msnedit_cpp_CDemonMission_drawPropertyPanel_FUN_0053c4f0(this_ptr);
      if (this_ptr->hovered_actor != (CDemonActor *)0x0) {
        engine_2d_c_drawText_FUN_00401fd0(this_ptr->hovered_actor->actor_name,g_MouseX,g_MouseY);
      }
      if (0.0 < FLOAT_02f7c540) {
        engine_2d_c_drawText_FUN_00401fd0(local_2b0,0,0);
        if (INT_02f7c53c == 0) {
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
        iVar14 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                           (" StaticCam ",3,0xf3,1,(uint)(INT_02f7c53c == 0));
        if (iVar14 != 0) {
          local_64 = 1;
          local_14 = 0;
        }
        iVar14 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                           (" CustomCam ",0x49,0xf3,1,(uint)(INT_02f7c53c == 1));
        if (iVar14 != 0) {
          local_14 = 1;
        }
        iVar14 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                           (" SlewCam ",0x8f,0xf3,1,(uint)(INT_02f7c53c == 2));
        if (iVar14 != 0) {
          local_14 = 2;
        }
        iVar14 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                           (" 1stPersonCam ",199,0xf3,1,(uint)(INT_02f7c53c == 3));
        if (iVar14 != 0) {
          local_14 = 3;
        }
        iVar14 = core_msnedit_cpp_drawClickableButton_FUN_00536cd0
                           (" SpotCam ",0x122,0xf3,1,(uint)(INT_02f7c53c == 4));
        if (iVar14 != 0) {
          local_14 = 4;
        }
        if (INT_02f7c53c == 0) {
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
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(g_CEditorToolsPtr,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005743e0(g_CDemonSetPtr);
    iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if ((iVar14 != 0) &&
       (iVar14 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                           (g_CEditorToolsPtr,"Exit editor?"), iVar14 != 0))
    goto LAB_00539e00;
    if (INT_02f7c634 == 0) {
      if (INT_02f7c53c == 4) {
        local_3c = g_CGamePtr->delta_time_float;
        local_2c = local_3c;
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
        if (iVar14 == 0) {
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
          if (iVar14 != 0) {
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
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SUBTRACT);
        if (iVar14 != 0) {
          local_7c = local_7c + local_34;
        }
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ADD);
        if (iVar14 != 0) {
          local_7c = local_7c - local_34;
        }
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD0);
        if (iVar14 != 0) {
          local_78 = local_78 + local_34;
        }
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_DECIMAL);
        if (iVar14 != 0) {
          local_78 = local_78 - local_34;
        }
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_EQUALS);
        if (iVar14 != 0) {
          local_18 = local_18 - local_1c;
        }
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_MINUS);
        if (iVar14 != 0) {
          local_18 = local_18 + local_1c;
        }
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_GRAVE);
        if (iVar14 != 0) {
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
          if (iVar14 != 0) {
            local_28 = local_28 - local_20;
          }
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
          if (iVar14 != 0) {
            local_28 = local_28 + local_20;
          }
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
          if (iVar14 != 0) {
            local_24 = local_24 + local_20;
          }
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
          if (iVar14 != 0) {
            local_24 = local_24 - local_20;
          }
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
          if (iVar14 != 0) {
            local_18 = local_18 - local_1c;
          }
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
          if (iVar14 != 0) {
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
      if (INT_02f7c53c == 2) {
        core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_170);
      }
      else {
        pCVar11 = this_ptr->selected_actor;
        if (pCVar11 != (CDemonActor *)0x0) {
          (*((pCVar11->vtable)._ub)->processInEditor)(pCVar11);
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr->selected_actor);
        }
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_BACK);
      if (iVar14 != 0) {
        core_msnedit_cpp_CDemonMission_undoActorChanges_FUN_0053c0b0(this_ptr);
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
      if (iVar14 != 0) {
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar14 == 0) {
          pCVar11 = core_msnedit_cpp_CDemonMission_findNextVisibleActor_FUN_0053ca30
                              (this_ptr,this_ptr->selected_actor);
        }
        else {
          pCVar11 = core_msnedit_cpp_CDemonMission_findPrevVisibleActor_FUN_0053ca80
                              (this_ptr,this_ptr->selected_actor);
        }
        core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,pCVar11);
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F2);
      if (iVar14 != 0) {
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar14 == 0) {
          core_script_cpp_CScript_initEditorLayout_FUN_00566660
                    (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
          INT_02f7c634 = 1;
        }
        else {
          core_script_cpp_CScript_initEditorLayout_FUN_00566660
                    (g_CScriptPtr,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
          INT_02f7c634 = 2;
        }
LAB_00539d68:
        core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(g_CDemonMissionPtr,1);
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
    }
    else {
      core_script_cpp_CScript_processEditorInput_FUN_00565130(g_CScriptPtr);
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F2);
      if (iVar14 != 0) {
        if (INT_02f7c634 == 1) {
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
          if (iVar14 == 0) {
            core_script_cpp_CScript_initEditorLayout_FUN_00566660
                      (g_CScriptPtr,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
            INT_02f7c634 = 2;
          }
          else {
            core_script_cpp_CScript_initEditorLayout_FUN_00566660
                      (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
            INT_02f7c634 = 0;
          }
        }
        else {
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
          if (iVar14 == 0) {
            core_script_cpp_CScript_initEditorLayout_FUN_00566660
                      (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
            INT_02f7c634 = 0;
          }
          else {
            core_script_cpp_CScript_initEditorLayout_FUN_00566660
                      (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
            INT_02f7c634 = 1;
          }
        }
        goto LAB_00539d68;
      }
    }
    iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar14 != 0) &&
       (iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S), iVar14 != 0)) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      if (this_ptr->mission_name[0] == '\0') {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"No mission name!");
      }
      else {
        _sprintf(local_3b4,"%s.msn",local_4c);
        iVar14 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                           (g_CEditorToolsPtr,"Save mission to %s.msn",local_4c);
        if (iVar14 != 0) {
          core_msnedit_cpp_CDemonMission_saveMissionAndScript_FUN_0053d190(this_ptr,local_3b4);
        }
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar14 != 0) &&
       (iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P), iVar14 != 0)) {
      local_60 = 1;
LAB_00539e00:
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(g_CDemonSetPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
      iVar14 = local_60;
      pCVar7 = g_CDemonSetPtr;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      pCVar7->disable_spotlight_shadows = 0;
      pCVar7->disable_water_rendering = 0;
      pCVar7->disable_sky_rendering = 0;
      remove("$$UNDO$$.TMP");
      if (iVar14 == 0) {
        return 0;
      }
      return 2;
    }
    if ((INT_02f7c634 == 0) ||
       (iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU), iVar14 != 0)) {
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_E);
      if (iVar14 != 0) {
        bVar13 = g_CEdCheckInstance.checked_state == 0;
        g_CEdCheckInstance.checked_state = (int)bVar13;
        if (bVar13) {
          local_64 = 1;
          local_14 = 0;
        }
        FLOAT_02f7c540 = 5.0f;
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_I);
      if (iVar14 != 0) {
        core_msnedit_cpp_CDemonMission_importActorsFrom_FUN_0053b9f0(this_ptr);
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
      if (iVar14 != 0) {
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar14 == 0) {
          core_msnedit_cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80
                    (this_ptr,this_ptr->selected_actor,0);
        }
        else {
          core_msnedit_cpp_CDemonMission_deleteMultipleActorsMenu_FUN_0053df90(this_ptr);
        }
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
      if (iVar14 != 0) {
        core_msnedit_cpp_CDemonMission_replicateActor_FUN_0053bd80(this_ptr);
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_O);
      if (iVar14 != 0) {
        core_msnedit_cpp_CDemonMission_showOptionsMenu_FUN_00537680(this_ptr);
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_T);
      if (iVar14 != 0) {
        core_msnedit_cpp_CDemonMission_changeActorType_FUN_0053d8b0(this_ptr);
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
      if (iVar14 != 0) {
        g_CEdCheckInstance.checked_state = 0;
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        pCVar7 = g_CDemonSetPtr;
        if (iVar14 == 0) {
          iVar14 = this_ptr->current_camera_index + 1;
          this_ptr->current_camera_index = iVar14;
          if (pCVar7->camera_count <= iVar14) {
            this_ptr->current_camera_index = 0;
          }
        }
        else {
          iVar14 = this_ptr->current_camera_index + -1;
          this_ptr->current_camera_index = iVar14;
          if (iVar14 < 0) {
            this_ptr->current_camera_index = g_CDemonSetPtr->camera_count + -1;
          }
        }
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,this_ptr->current_camera_index);
        local_14 = 0;
        local_64 = 0;
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H);
      if (iVar14 != 0) {
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar14 == 0) {
          if (this_ptr->selected_actor != (CDemonActor *)0x0) {
            this_ptr->selected_actor->is_editor_hidden = 1;
            core_msnedit_cpp_CDemonMission_selectNearestActor_FUN_0053bcf0(this_ptr);
          }
        }
        else {
          core_msnedit_cpp_CDemonMission_hideActorsMenu_FUN_0053dcf0(this_ptr);
        }
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_U);
      if (iVar14 != 0) {
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar14 == 0) {
          iVar14 = -1;
          while( true ) {
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_9b4);
            for (pCVar11 = this_ptr->first_actor; pCVar11 != (CDemonActor *)0x0;
                pCVar11 = pCVar11->next_actor) {
              if (pCVar11->is_editor_hidden != 0) {
                shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_9b4.base,pCVar11->actor_name);
              }
            }
            if (local_9b4.base.item_count < 1) break;
            shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_9b4.base);
            iVar14 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_9b4,"Select actor to unhide",iVar14,0);
            if (iVar14 < 0) goto LAB_0053a88c;
            pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_9b4.base,iVar14);
            pCVar11 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(this_ptr,pcVar13);
            if (pCVar11 == (CDemonActor *)0x0) {
              g_CurrentFilename = "..\\core\\msnedit.cpp";
              g_CurrentLineNumber = 0x739;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
            }
            pCVar11->is_editor_hidden = 0;
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_9b4,0);
          }
          if (iVar14 < 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"No actors hidden.");
          }
LAB_0053a88c:
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_9b4,0);
        }
        else {
          for (pCVar11 = this_ptr->first_actor; pCVar11 != (CDemonActor *)0x0;
              pCVar11 = pCVar11->next_actor) {
            pCVar11->is_editor_hidden = 0;
          }
        }
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_V);
      if (iVar14 != 0) {
        iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar14 == 0) {
          local_14 = INT_02f7c53c + 1;
          if (4 < local_14) {
            local_14 = 0;
          }
        }
        else {
          local_14 = INT_02f7c53c + -1;
          if (local_14 < 0) {
            local_14 = 4;
          }
        }
        local_64 = 1;
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
      if ((iVar14 != 0) &&
         (pCVar6 = (CDemonActor *)
                   core_msnedit_cpp_CDemonMission_pickActorByName_FUN_0053c210
                             (this_ptr,"Select actor by name",
                              this_ptr->selected_actor->actor_name), pCVar6 != (CDemonActor *)0x0))
      {
        core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,pCVar6);
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_W);
      if (iVar14 != 0) {
        core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060
                  (this_ptr,(uint)(this_ptr->show_3d_viewport == 0));
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
      if (iVar14 != 0) {
        core_msnedit_cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730(this_ptr);
      }
      iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
      if (iVar14 != 0) {
        this_ptr->current_camera_index = local_48;
        local_64 = 0;
        local_14 = 0;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,local_48);
        g_CEdCheckInstance.checked_state = 0;
      }
    }
    iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar14 != 0) {
      core_msnedit_cpp_showEditorHelpScreen_FUN_00535e70();
    }
    iVar14 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F7);
    if (iVar14 != 0) {
      if (INT_02f7c634 == 0) {
        core_script_cpp_CScript_initEditorLayout_FUN_00566660
                  (g_CScriptPtr,0,0x101,g_WindowWidth + -1,g_WindowHeight + -1);
        INT_02f7c634 = 1;
        core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(g_CDemonMissionPtr,1);
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
      core_script_cpp_CScript_checkSyntax_FUN_00566080(g_CScriptPtr);
    }
    if (-1 < local_14) {
      INT_02f7c53c = local_14;
      switch(local_14) {
      case 0:
        if (local_64 != 0) {
          core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                    (g_CDemonSetPtr,this_ptr->selected_actor,2);
        }
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
        core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid cameraMode!");
      }
      FLOAT_02f7c540 = 5.0f;
    }
    pCVar7 = g_CDemonSetPtr;
    if (-1 < local_38) {
      g_CEdCheckInstance.checked_state = 0;
      this_ptr->current_camera_index = local_38;
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(pCVar7,local_38);
      FLOAT_02f7c540 = 5.0f;
    }
    iVar14 = INT_02f7c528;
    if (((((g_MouseButtonFlags.dword & 1) == 0) && ((local_30.dword & 1) != 0)) &&
        (INT_02f7c538 == 0)) && (g_ActiveControl == (void *)0x0)) {
      if ((this_ptr->selected_actor == (CDemonActor *)0x0) || (INT_02f7c528 < 0)) {
        if (this_ptr->hovered_actor != (CDemonActor *)0x0) {
          iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
          if (iVar14 == 0) {
            if (this_ptr->hovered_actor == this_ptr->selected_actor) {
              if ((local_30.dword != 0) || (0.3f < FLOAT_00680818)) goto LAB_0053aea7;
              core_msnedit_cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730(this_ptr);
              engine_2d_c_clearInputAndWait_FUN_00403260();
              FLOAT_00680818 = 0.0;
            }
            else {
              core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140
                        (this_ptr,this_ptr->hovered_actor);
              FLOAT_00680818 = 0.0;
            }
          }
          else {
            if (INT_02f7c634 != 0) {
              core_script_cpp_CScript_setParameterValue_FUN_00565f70
                        (g_CScriptPtr,this_ptr->hovered_actor->actor_name);
            }
LAB_0053aea7:
            FLOAT_00680818 = 0.0;
          }
        }
      }
      else {
        this_ptr_01 = g_MsnEditPropertyList.properties + INT_02f7c528;
        iVar15 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar15 == 0) {
          iVar15 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
          if (iVar15 == 0) {
            iVar15 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
            if (iVar15 == 0) {
              if (g_MsnEditPropertyList.properties[iVar14].enabled_flag == 0) goto LAB_0053ad72;
              core_actor_cpp_CActorProperty_editInteractive_FUN_0040eed0
                        (this_ptr_01,this_ptr->selected_actor);
              engine_2d_c_clearInputAndWait_FUN_00403260();
              local_30.dword = 0;
              FLOAT_00680818 = 1e+10;
            }
            else {
              core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                        (this_ptr_01,this_ptr->selected_actor,local_4e0);
              shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                        (g_CEditorToolsPtr,local_4e0);
              FLOAT_00680818 = 1e+10;
            }
          }
          else {
            if (INT_02f7c634 == 0) goto LAB_0053ad72;
            core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50
                      (this_ptr_01,this_ptr->selected_actor,local_60c);
            core_script_cpp_CScript_setParameterValue_FUN_00565f70(g_CScriptPtr,local_60c);
            FLOAT_00680818 = 1e+10;
          }
        }
        else {
          core_msnedit_cpp_CDemonMission_pasteActorProperty_FUN_0053af50(this_ptr,this_ptr_01);
LAB_0053ad72:
          FLOAT_00680818 = 1e+10;
        }
      }
    }
    else {
      FLOAT_00680818 = g_CGamePtr->delta_time_float + FLOAT_00680818;
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
