// Name: core_msnedit.cpp_CDemonMission_FUN_0053e220
// Address: 0053e220
// Address Range: [[0053e220, 0053e9d9]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053e220(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: core_slew.cpp_CSlew_init_FUN_005a2060 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053e220(CDemonMission *this_ptr)

{
  float fVar1;
  CGame *this_ptr_00;
  CDemonSet *pCVar2;
  CBoxActor *actor;
  CDemonActor *actor_00;
  CBoxActor *pCVar3;
  int iVar4;
  CDemonActor *unaff_EBP;
  byte bVar5;
  int unaff_retaddr;
  float afStackY_1034 [982];
  CVector3i *input_ptr;
  float fVar6;
  CKeys *pCVar7;
  float fVar8;
  double in_stack_ffffff54;
  float fStack_a4;
  CVector3f CStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f aCStack_7c [2];
  CVector3f CStack_64;
  CVector3f CStack_58;
  byte auStack_4c [8];
  float fStack_44;
  CVector3i aCStack_40 [2];
  CVector3i CStack_28;
  CBoxActor *pCStack_1c;
  CDemonActor *pCStack_18;
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
  pCVar7 = (CKeys *)0x0;
  fVar6 = 0.0;
                    /* WARNING: Ignoring partial resolution of indirect */
  fVar8 = 0.0;
  fVar8 = 0.0;
  fVar8 = 0.0;
  fStack_a4 = 28.0;
  CStack_28.x = g_CDemonCameraInstance.corona_blend_factor;
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
  pCStack_1c = (CBoxActor *)&(actor->base).orient;
  CStack_28.z = (int)&(pCVar3->base).location;
  while( true ) {
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    actor_00 = pCStack_18;
    ((CVector3f *)CStack_28.z)->x = fVar6;
    ((CVector3f *)CStack_28.z)->y = (float)pCVar7;
    ((CVector3f *)CStack_28.z)->z = fVar8;
    if ((CBoxActor *)&stack0xffffff54 != pCStack_1c) {
      *(float *)&pCStack_1c->base = SUB84(in_stack_ffffff54,0);
      *(float *)((int)pCStack_1c + 4) = (float)((ulonglong)in_stack_ffffff54 >> 0x20);
      *(float *)((int)pCStack_1c + 8) = fStack_a4;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCStack_18);
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(g_CDemonSetPtr,actor_00,0);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pCVar2 = g_CDemonSetPtr;
    if (this_ptr->full_light_in_editor == 0) {
      g_CDemonCameraInstance.corona_blend_factor = CStack_28.y;
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
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xffffff50);
    if ((g_MouseButtonFlags.bytes[0] & 1) != 0) {
      if ((((0 < g_MouseX) && (g_MouseX < g_WindowWidth + -2)) && (0 < g_MouseY)) &&
         (g_MouseY < g_WindowHeight + -2)) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,g_MouseX,g_MouseY,aCStack_40);
        input_ptr = &CStack_28;
        CStack_28.x = aCStack_40[0].x;
        *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)aCStack_40 + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)aCStack_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,input_ptr,(CVector3i *)auStack_4c);
        CStack_28.x = auStack_4c._0_4_;
        *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4) =
             *(uint *)(auStack_4c + (uint)bVar5 * -8 + 4);
        *(float *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             (&fStack_44)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
        fStack_88 = (float)CStack_28.x * 0.00390625f;
        fStack_84 = (float)CStack_28.y * 0.00390625f;
        fStack_80 = (float)CStack_28.z * 0.00390625f;
        if ((float *)&stack0xffffff50 != &fStack_88) {
          in_stack_ffffff54 = (double)CONCAT44(fStack_80,fStack_84);
        }
      }
      g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SPACE);
    if ((iVar4 != 0) && ((float)pCVar7 - g_CGamePtr->delta_time_float < 0.0)) {
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0
                (g_CGorePtr,(CVector3f *)&stack0xffffff58,(CVector3f *)0x0,0);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_RETURN);
    if (iVar4 == 0) {
      fStack_a4 = 0.0;
    }
    else {
      fStack_a4 = fStack_a4 - g_CGamePtr->delta_time_float;
      if (fStack_a4 < 0.0) {
        aCStack_40[0].x = (int)(float)10;
        auStack_4c._4_4_ = *(float *)(unaff_retaddr + 0x44) * (float)aCStack_40[0].x;
        fStack_44 = *(float *)(unaff_retaddr + 0x50) * (float)aCStack_40[0].x;
        aCStack_40[0].x = (int)((float)aCStack_40[0].x * *(float *)(unaff_retaddr + 0x5c));
        fStack_a4 = fStack_a4 + 0.1f;
        core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0
                  (g_CGorePtr,&CStack_a0,(CVector3f *)(auStack_4c + 4),0);
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
    if (iVar4 != 0) {
      CStack_58.x = CStack_a0.z;
      CStack_58.y = fStack_94;
      CStack_58.z = fStack_90;
      aCStack_7c[0].x = CStack_a0.z;
      aCStack_7c[0].y = fStack_94 + -100.0f;
      aCStack_7c[0].z = fStack_90;
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      CStack_a0.x = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                              (g_CDemonSetPtr,&CStack_58,aCStack_7c);
      in_stack_ffffff54 = (double)CStack_a0.x;
      if ((0.0 < in_stack_ffffff54) && (in_stack_ffffff54 < 1.0)) {
        pCStack_1c = (CBoxActor *)(aCStack_7c[0].x - CStack_58.x);
        auStack_4c._0_4_ = (float)pCStack_1c * CStack_a0.x;
        pCStack_18 = (CDemonActor *)(aCStack_7c[0].y - CStack_58.y);
        fStack_14 = aCStack_7c[0].z - CStack_58.z;
        auStack_4c._4_4_ = (float)pCStack_18 * CStack_a0.x;
        fStack_44 = fStack_14 * CStack_a0.x;
        CStack_64.x = CStack_58.x + (float)auStack_4c._0_4_;
        CStack_64.y = CStack_58.y + (float)auStack_4c._4_4_;
        CStack_64.z = CStack_58.z + fStack_44;
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&CStack_64,0);
      }
    }
    fVar8 = 2.66247e-44;
    fVar6 = 7.705812e-39;
    pCVar7 = g_CKeysPtr;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar4 != 0) {
      in_stack_ffffff54 = (double)CONCAT44("Reset gore?",g_CEditorToolsPtr);
      fVar8 = 7.705851e-39;
      iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Reset gore?");
      if (iVar4 != 0) {
        core_gore_cpp_CGore_reset_FUN_004ed760(g_CGorePtr);
        in_stack_ffffff54 = (double)CONCAT44(g_CDemonSetPtr->selected_camera_index,g_CDemonSetPtr);
        fVar8 = 7.705913e-39;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50
                  (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      }
    }
  }
  core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(this_ptr,unaff_EBP,1);
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
