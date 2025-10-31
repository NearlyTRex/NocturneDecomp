// Name: core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220
// Address: 0053e220
// Address Range: [[0053e220, 0053e9d9]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005388a1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Preparing_set_0063cf64
//   TerminatedCString s_Preparing_actors_0063cf73
//   TerminatedCString s_Setting_initial_camera_v_0063cf85
//   TerminatedCString s_core_msnedit_cpp_0063cfa2
//   TerminatedCString s_core_msnedit_cpp_0063cfb6
//   TerminatedCString s_CDemonMission_editGore_O_0063cfca
//   TerminatedCString s_stranger_hat_kfm_0063cff2
//   TerminatedCString s_Reset_gore_0063d003
//   undefined4 DAT_0063d014
//   undefined4 DAT_0063d01c
//   undefined4 DAT_0063d020
//   undefined4 DAT_00661c30
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   CFireEffect g_CFireEffectInstance
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CDemonLightInstance.base.max_distance
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   CGore g_CGoreInstance
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f7c634
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.field22_0x15ac80[0]
//   undefined4 g_CDemonSetInstance.field22_0x15ac80[4]
//   undefined4 g_CDemonSetInstance.field22_0x15ac80[12]
//   undefined4 g_CDemonSetInstance.field22_0x15ac80[16]
//   undefined4 g_CDemonSetInstance.selected_camera_index
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 g_CDemonCameraInstance.corona_blend_factor
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
//   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_fire.cpp_CFireEffect_FUN_004c6c80
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_setGameRes_FUN_004dade0
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_gore.cpp_CGore_process_FUN_004ed9e0
//   core_gore.cpp_FUN_004ed760
//   core_gore.cpp_FUN_004edaa0
//   core_gore.cpp_FUN_004ede30
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_mission.cpp_CDemonMission_FUN_00523f20
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   core_set.cpp_CDemonSet_FUN_0056c1a0
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   core_setcolid.cpp_CDemonSet_FUN_005743e0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   core_skeleton.cpp_FUN_005a2060
//   core_skeleton.cpp_FUN_005a20b0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_doNothing_FUN_005f2f80

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_msnedit.cpp_PrepareMissionAndEditGore(undefined4 param_1) */

void core_msnedit_cpp_PrepareMissionAndEditGore_FUN_0053e220(void)

{
  float fVar1;
  CDemonSet *pCVar2;
  CGame *this_ptr;
  CBoxActor *pCVar3;
  CBoxActor *pCVar4;
  CDemonActor *actor;
  int iVar5;
  BADSPACEBASE *in_ESP;
  byte bVar6;
  int unaff_retaddr;
  CDemonMission *in_stack_00000004;
  float afStackY_1034 [982];
  CGame *in_stack_ffffff30;
  CVector3i *output_ptr;
  CVector3i *in_stack_ffffff3c;
  float in_stack_ffffff48;
  CKeys *in_stack_ffffff4c;
  float in_stack_ffffff50;
  double in_stack_ffffff54;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f aCStack_7c [2];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [8];
  CVector3i CStack_28;
  CBoxActor *pCStack_1c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  this_ptr = g_CGamePtr;
  bVar6 = 0;
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
  core_fire_cpp_CFireEffect_FUN_004c6c80(g_CFireEffectPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff30);
  core_skeleton_cpp_FUN_005a2060();
  CStack_28.x = g_CDemonCameraInstance.corona_blend_factor;
  pCStack_1c = (CBoxActor *)
               shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\msnedit.cpp",0xe7b);
  if (pCStack_1c != (CBoxActor *)0x0) {
    pCStack_1c = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(pCStack_1c);
  }
  if (pCStack_1c == (CBoxActor *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xe7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::editGore - Out of memory");
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)pCStack_1c->model_name,"stranger-hat.kfm");
  pCVar3 = pCStack_1c;
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
  pCVar4 = pCStack_1c;
  (pCVar3->base_actor).location.position.z = 0.0;
  fVar1 = (pCVar3->base_actor).location.position.z;
  (pCVar3->base_actor).location.position.y = fVar1;
  (pCVar3->base_actor).location.position.x = fVar1;
  (pCStack_1c->base_actor).orient.heading = 0.0;
  (pCStack_1c->base_actor).orient.bank = (pCStack_1c->base_actor).orient.heading;
  (pCStack_1c->base_actor).orient.pitch = (pCStack_1c->base_actor).orient.bank;
  (*((pCStack_1c->base_actor).metadata.vtable)->setup)(&pCStack_1c->base_actor);
  core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
  pCStack_1c = (CBoxActor *)&(pCVar4->base_actor).orient;
  CStack_28.z = (int)&(pCVar3->base_actor).location;
  while( true ) {
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    actor = pCStack_18;
    ((CVector3f *)CStack_28.z)->x = in_stack_ffffff48;
    ((CVector3f *)CStack_28.z)->y = (float)in_stack_ffffff4c;
    ((CVector3f *)CStack_28.z)->z = in_stack_ffffff50;
    if ((CBoxActor *)&stack0xffffff54 != pCStack_1c) {
      *(float *)&pCStack_1c->base_actor = SUB84(in_stack_ffffff54,0);
      *(float *)((int)pCStack_1c + 4) = (float)((ulonglong)in_stack_ffffff54 >> 0x20);
      *(float *)((int)pCStack_1c + 8) = fStack_a4;
    }
    core_actor_cpp_CDemonActor_FUN_00408c10(pCStack_18);
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(g_CDemonSetPtr,actor,0);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pCVar2 = g_CDemonSetPtr;
    if (*(int *)(in_stack_00000004->field2_0xc + 0x2c) == 0) {
      g_CDemonCameraInstance.corona_blend_factor = CStack_28.y;
      pCVar2->field22_0x15ac80[0] = '\0';
      pCVar2->field22_0x15ac80[1] = '\0';
      pCVar2->field22_0x15ac80[2] = '\0';
      pCVar2->field22_0x15ac80[3] = '\0';
      pCVar2->field22_0x15ac80[4] = '\0';
      pCVar2->field22_0x15ac80[5] = '\0';
      pCVar2->field22_0x15ac80[6] = '\0';
      pCVar2->field22_0x15ac80[7] = '\0';
    }
    else {
      g_CDemonCameraInstance.corona_blend_factor = 0xffff;
      pCVar2->field22_0x15ac80[0] = '\x01';
      pCVar2->field22_0x15ac80[1] = '\0';
      pCVar2->field22_0x15ac80[2] = '\0';
      pCVar2->field22_0x15ac80[3] = '\0';
      pCVar2->field22_0x15ac80[4] = '\x01';
      pCVar2->field22_0x15ac80[5] = '\0';
      pCVar2->field22_0x15ac80[6] = '\0';
      pCVar2->field22_0x15ac80[7] = '\0';
    }
    pCVar2 = g_CDemonSetPtr;
    *(uint *)(g_CDemonSetPtr->field22_0x15ac80 + 0xc) =
         (uint)(*(int *)(in_stack_00000004->field2_0xc + 0x24) == 0);
    *(uint *)(pCVar2->field22_0x15ac80 + 0x10) =
         (uint)(*(int *)(in_stack_00000004->field2_0xc + 0x28) == 0);
    core_set_cpp_CDemonSet_FUN_0056c1a0(pCVar2);
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar5 != 0) break;
    core_skeleton_cpp_FUN_005a20b0();
    if (((byte)g_MouseButtonFlags & 1) != 0) {
      if ((((0 < g_MouseX) && (g_MouseX < g_WindowWidth + -2)) && (0 < g_MouseY)) &&
         (g_MouseY < g_WindowHeight + -2)) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,(CVector3i *)g_MouseX,g_MouseY,(int)in_stack_ffffff3c);
        output_ptr = &CStack_28;
        CStack_28.x = (int)afStack_48[2];
        *(float *)((int)&CStack_28 + (uint)bVar6 * -8 + 4) = afStack_48[(uint)bVar6 * -2 + 3];
        *(float *)((int)&CStack_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,output_ptr,in_stack_ffffff3c);
        CStack_28.x = (int)fStack_4c;
        *(float *)((int)&CStack_28 + (uint)bVar6 * -8 + 4) = afStack_48[(uint)bVar6 * -2];
        *(float *)((int)&CStack_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        fStack_88 = (float)CStack_28.x * _DAT_00661c30;
        fStack_84 = (float)CStack_28.y * _DAT_00661c30;
        fStack_80 = (float)CStack_28.z * _DAT_00661c30;
        if ((float *)&stack0xffffff50 != &stack0xffffff78) {
          in_stack_ffffff54 = (double)CONCAT44(fStack_80,fStack_84);
        }
      }
      g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
    }
    iVar5 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x39);
    if ((iVar5 != 0) && ((float)in_stack_ffffff4c - g_CGamePtr->delta_time_float < 0.0)) {
      core_gore_cpp_FUN_004edaa0();
    }
    in_stack_ffffff3c = (CVector3i *)g_CKeysPtr;
    iVar5 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1c);
    if (iVar5 == 0) {
      fStack_a4 = 0.0;
    }
    else {
      fStack_a4 = fStack_a4 - g_CGamePtr->delta_time_float;
      if (fStack_a4 < 0.0) {
        afStack_48[2] = (float)_DAT_0063d014;
        afStack_48[0] = *(float *)(unaff_retaddr + 0x44) * afStack_48[2];
        afStack_48[1] = *(float *)(unaff_retaddr + 0x50) * afStack_48[2];
        afStack_48[2] = afStack_48[2] * *(float *)(unaff_retaddr + 0x5c);
        fStack_a4 = fStack_a4 + _DAT_0063d01c;
        in_stack_ffffff3c = (CVector3i *)g_CGorePtr;
        core_gore_cpp_FUN_004edaa0();
      }
    }
    iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19);
    if (iVar5 != 0) {
      CStack_58.x = fStack_98;
      CStack_58.y = fStack_94;
      CStack_58.z = fStack_90;
      aCStack_7c[0].x = fStack_98;
      aCStack_7c[0].y = fStack_94 + _DAT_0063d020;
      aCStack_7c[0].z = fStack_90;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      fStack_a0 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                            (g_CDemonSetPtr,&CStack_58,aCStack_7c);
      in_stack_ffffff54 = (double)fStack_a0;
      if ((0.0 < in_stack_ffffff54) && (in_stack_ffffff54 < 1.0)) {
        pCStack_1c = (CBoxActor *)(aCStack_7c[0].x - CStack_58.x);
        fStack_4c = (float)pCStack_1c * fStack_a0;
        pCStack_18 = (CDemonActor *)(aCStack_7c[0].y - CStack_58.y);
        fStack_14 = aCStack_7c[0].z - CStack_58.z;
        afStack_48[0] = (float)pCStack_18 * fStack_a0;
        afStack_48[1] = fStack_14 * fStack_a0;
        fStack_64 = CStack_58.x + fStack_4c;
        fStack_60 = CStack_58.y + afStack_48[0];
        fStack_5c = CStack_58.z + afStack_48[1];
        core_gore_cpp_FUN_004ede30();
      }
    }
    in_stack_ffffff50 = 2.66247e-44;
    in_stack_ffffff48 = 7.705812e-39;
    in_stack_ffffff4c = g_CKeysPtr;
    iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
    if (iVar5 != 0) {
      in_stack_ffffff54 = (double)CONCAT44("Reset gore?",g_CEditorToolsPtr);
      in_stack_ffffff50 = 7.705851e-39;
      iVar5 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Reset gore?");
      if (iVar5 != 0) {
        core_gore_cpp_FUN_004ed760();
        in_stack_ffffff54 = (double)CONCAT44(g_CDemonSetPtr->selected_camera_index,g_CDemonSetPtr);
        in_stack_ffffff50 = 7.705913e-39;
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
  pCVar2->field22_0x15ac80[0] = '\0';
  pCVar2->field22_0x15ac80[1] = '\0';
  pCVar2->field22_0x15ac80[2] = '\0';
  pCVar2->field22_0x15ac80[3] = '\0';
  pCVar2->field22_0x15ac80[4] = '\0';
  pCVar2->field22_0x15ac80[5] = '\0';
  pCVar2->field22_0x15ac80[6] = '\0';
  pCVar2->field22_0x15ac80[7] = '\0';
  pCVar2->field22_0x15ac80[0xc] = '\0';
  pCVar2->field22_0x15ac80[0xd] = '\0';
  pCVar2->field22_0x15ac80[0xe] = '\0';
  pCVar2->field22_0x15ac80[0xf] = '\0';
  pCVar2->field22_0x15ac80[0x10] = '\0';
  pCVar2->field22_0x15ac80[0x11] = '\0';
  pCVar2->field22_0x15ac80[0x12] = '\0';
  pCVar2->field22_0x15ac80[0x13] = '\0';
  return;
}


// Assembly code:
// 0053e220: PUSH EBX
//   Label: core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220
// 0053e221: PUSH ESI
// 0053e222: PUSH EDI
// 0053e223: PUSH EBP
// 0053e224: MOV EBP,ESP
// 0053e226: SUB ESP,0xbc
// 0053e22c: AND ESP,0xfffffff8
// 0053e22f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e232: XOR EDX,EDX
// 0053e234: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0053e23a: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0xc0] (WRITE)
// 0053e23e: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0xc8] (WRITE)
// 0053e242: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 0053e243: MOV dword ptr [0x02f7c634],EDX
//   XREF to: 02f7c634 (WRITE)
// 0053e249: MOV dword ptr [EAX + 0x4],0x1
// 0053e250: CALL core_game.cpp_CGame_setGameRes_FUN_004dade0
//   XREF to: 004dade0 (UNCONDITIONAL_CALL)
// 0053e255: ADD ESP,0x4
// 0053e258: PUSH 0x63cf64
//   XREF to: 0063cf64 (DATA)
// 0053e25d: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053e263: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053e264: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053e269: ADD ESP,0x8
// 0053e26c: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 0053e271: CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   XREF to: 004727c0 (UNCONDITIONAL_CALL)
// 0053e276: MOV EDX,0x42800000
// 0053e27b: ADD ESP,0x4
// 0053e27e: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053e284: XOR EAX,EAX
// 0053e286: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0053e287: MOV [0x02d807a4],EAX
//   XREF to: 02d807a4 (WRITE)
// 0053e28c: MOV dword ptr [0x02d7ec30],EDX
//   XREF to: 02d7ec30 (WRITE)
// 0053e292: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0053e297: ADD ESP,0x4
// 0053e29a: XOR EBX,EBX
// 0053e29c: PUSH EBX
// 0053e29d: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053e2a3: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0053e2a4: CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
//   XREF to: 00576da0 (UNCONDITIONAL_CALL)
// 0053e2a9: ADD ESP,0x8
// 0053e2ac: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053e2b2: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0053e2b3: CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
//   XREF to: 00575b20 (UNCONDITIONAL_CALL)
// 0053e2b8: ADD ESP,0x4
// 0053e2bb: PUSH 0x63cf73
//   XREF to: 0063cf73 (DATA)
// 0053e2c0: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053e2c6: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053e2c7: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053e2cc: ADD ESP,0x8
// 0053e2cf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e2d2: PUSH EAX
// 0053e2d3: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 0053e2d8: ADD ESP,0x4
// 0053e2db: PUSH 0x63cf85
//   XREF to: 0063cf85 (DATA)
// 0053e2e0: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053e2e6: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053e2e7: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053e2ec: ADD ESP,0x8
// 0053e2ef: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e2f2: MOV dword ptr [EAX + 0x10],0x0
// 0053e2f9: MOV ECX,dword ptr [EAX + 0x10]
// 0053e2fc: PUSH ECX
// 0053e2fd: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053e303: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0053e304: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0053e309: ADD ESP,0x8
// 0053e30c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e30f: PUSH ESI
// 0053e310: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053e315: ADD ESP,0x4
// 0053e318: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0053e31d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053e322: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 0053e328: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 0053e329: CALL core_fire.cpp_CFireEffect_FUN_004c6c80
//   XREF to: 004c6c80 (UNCONDITIONAL_CALL)
// 0053e32e: ADD ESP,0x4
// 0053e331: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0053e336: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 0053e337: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0053e33c: ADD ESP,0x4
// 0053e33f: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xbc] (DATA)
// 0053e343: PUSH EAX
// 0053e344: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 0053e349: ADD ESP,0x4
// 0053e34c: PUSH 0xe7b
// 0053e351: PUSH 0x63cfa2
//   XREF to: 0063cfa2 (DATA)
// 0053e356: MOV EAX,[0x03276acc]
//   XREF to: 03276acc (READ)
// 0053e35b: PUSH 0x66c
// 0053e360: MOV dword ptr [ESP + 0xb4],EAX
// 0053e367: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0053e36c: ADD ESP,0xc
// 0053e36f: TEST EAX,EAX
// 0053e371: JNZ 0x0053e8fb
//   XREF to: 0053e8fb (CONDITIONAL_JUMP)
// 0053e377: MOV dword ptr [ESP + 0xb4],EAX
//   Label: LAB_0053e377
// 0053e37e: TEST EAX,EAX
// 0053e380: JZ 0x0053e909
//   XREF to: 0053e909 (CONDITIONAL_JUMP)
// 0053e386: MOV EAX,dword ptr [ESP + 0xb4]
//   Label: LAB_0053e386
// 0053e38d: PUSH 0x63cff2
//   XREF to: 0063cff2 (DATA)
// 0053e392: ADD EAX,0x158
// 0053e397: PUSH EAX
// 0053e398: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0053e39d: ADD ESP,0x8
// 0053e3a0: MOV EBX,dword ptr [ESP + 0xb4]
// 0053e3a7: PUSH EBX
// 0053e3a8: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e3ab: PUSH ESI
// 0053e3ac: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 0053e3b1: MOV dword ptr [EBX + 0x28],0x0
// 0053e3b8: ADD ESP,0x8
// 0053e3bb: FLD float ptr [EBX + 0x28]
// 0053e3be: MOV ESI,dword ptr [ESP + 0xb4]
// 0053e3c5: MOV EAX,dword ptr [ESP + 0xb4]
// 0053e3cc: MOV EDI,dword ptr [ESP + 0xb4]
// 0053e3d3: FST float ptr [EBX + 0x24]
// 0053e3d6: FSTP float ptr [EBX + 0x20]
// 0053e3d9: MOV dword ptr [ESI + 0x38],0x0
// 0053e3e0: PUSH EDI
// 0053e3e1: MOV EDX,dword ptr [ESI + 0x38]
// 0053e3e4: MOV dword ptr [ESI + 0x34],EDX
// 0053e3e7: MOV EDX,dword ptr [ESI + 0x34]
// 0053e3ea: MOV dword ptr [ESI + 0x30],EDX
// 0053e3ed: MOV EAX,dword ptr [EAX + 0x154]
// 0053e3f3: CALL dword ptr [EAX]
// 0053e3f5: ADD ESP,0x4
// 0053e3f8: PUSH EDI
// 0053e3f9: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e3fc: PUSH EDX
// 0053e3fd: ADD EBX,0x20
// 0053e400: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 0053e405: ADD ESP,0x8
// 0053e408: ADD ESI,0x30
// 0053e40b: MOV dword ptr [ESP + 0xac],EBX
// 0053e412: MOV dword ptr [ESP + 0xb0],ESI
// 0053e419: CALL wincore_winrun.cpp_doNothing_FUN_005f2f80
//   Label: LAB_0053e419
//   XREF to: 005f2f80 (UNCONDITIONAL_CALL)
// 0053e41e: PUSH 0x0
// 0053e420: PUSH 0x0
// 0053e422: PUSH 0x0
// 0053e424: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053e42a: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053e42b: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
//   XREF to: 004a2920 (UNCONDITIONAL_CALL)
// 0053e430: ADD ESP,0x10
// 0053e433: MOV EBX,dword ptr [ESP + 0xac]
// 0053e43a: MOV EAX,dword ptr [ESP + 0x14]
// 0053e43e: MOV dword ptr [EBX],EAX
// 0053e440: MOV EAX,dword ptr [ESP + 0x18]
// 0053e444: MOV dword ptr [EBX + 0x4],EAX
// 0053e447: MOV EAX,dword ptr [ESP + 0x1c]
// 0053e44b: MOV dword ptr [EBX + 0x8],EAX
// 0053e44e: LEA EAX,[ESP + 0x20]
// 0053e452: MOV EBX,dword ptr [ESP + 0xb0]
// 0053e459: CMP EAX,EBX
// 0053e45b: JZ 0x0053e471
//   XREF to: 0053e471 (CONDITIONAL_JUMP)
// 0053e45d: MOV EAX,dword ptr [ESP + 0x20]
// 0053e461: MOV dword ptr [EBX],EAX
// 0053e463: MOV EAX,dword ptr [ESP + 0x24]
// 0053e467: MOV dword ptr [EBX + 0x4],EAX
// 0053e46a: MOV EAX,dword ptr [ESP + 0x28]
// 0053e46e: MOV dword ptr [EBX + 0x8],EAX
// 0053e471: MOV ESI,dword ptr [ESP + 0xb4]
//   Label: LAB_0053e471
// 0053e478: PUSH ESI
// 0053e479: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0053e47e: ADD ESP,0x4
// 0053e481: PUSH 0x0
// 0053e483: PUSH ESI
// 0053e484: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053e489: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0053e48a: CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
//   XREF to: 005751d0 (UNCONDITIONAL_CALL)
// 0053e48f: ADD ESP,0xc
// 0053e492: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e495: PUSH EDX
// 0053e496: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053e49b: ADD ESP,0x4
// 0053e49e: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0053e4a3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e4a6: MOV ECX,dword ptr [EAX + 0x38]
// 0053e4a9: TEST ECX,ECX
// 0053e4ab: JZ 0x0053e931
//   XREF to: 0053e931 (CONDITIONAL_JUMP)
// 0053e4b1: MOV EBX,0xffff
// 0053e4b6: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053e4bb: MOV dword ptr [0x03276acc],EBX
//   XREF to: 03276acc (WRITE)
// 0053e4c1: MOV dword ptr [EAX + 0x15ac80],0x1
//   XREF to: 0326eef8 (WRITE)
// 0053e4cb: MOV dword ptr [EAX + 0x15ac84],0x1
//   XREF to: 0326eefc (WRITE)
// 0053e4d5: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0053e4d5
//   XREF to: Stack[0x4] (READ)
// 0053e4d8: MOV ESI,dword ptr [EAX + 0x30]
// 0053e4db: XOR EBX,EBX
// 0053e4dd: TEST ESI,ESI
// 0053e4df: SETZ AL
// 0053e4e2: MOV BL,AL
// 0053e4e4: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053e4e9: MOV dword ptr [EAX + 0x15ac8c],EBX
//   XREF to: 0326ef04 (WRITE)
// 0053e4ef: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e4f2: CMP dword ptr [EBX + 0x34],0x0
// 0053e4f6: SETZ BL
// 0053e4f9: PUSH 0x0
// 0053e4fb: AND EBX,0xff
// 0053e501: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0053e502: MOV dword ptr [EAX + 0x15ac90],EBX
//   XREF to: 0326ef08 (WRITE)
// 0053e508: CALL core_set.cpp_CDemonSet_FUN_0056c1a0
//   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)
// 0053e50d: ADD ESP,0x8
// 0053e510: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0053e515: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 0053e516: CALL core_fire.cpp_CFireEffect_process_FUN_004c6ec0
//   XREF to: 004c6ec0 (UNCONDITIONAL_CALL)
// 0053e51b: ADD ESP,0x4
// 0053e51e: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0053e524: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 0053e525: CALL core_gore.cpp_CGore_process_FUN_004ed9e0
//   XREF to: 004ed9e0 (UNCONDITIONAL_CALL)
// 0053e52a: ADD ESP,0x4
// 0053e52d: PUSH 0x0
// 0053e52f: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053e535: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053e536: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 0053e53b: ADD ESP,0x8
// 0053e53e: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0053e543: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0053e549: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 0053e54a: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0053e54f: ADD ESP,0x4
// 0053e552: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053e558: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0053e559: CALL core_setcolid.cpp_CDemonSet_FUN_005743e0
//   XREF to: 005743e0 (UNCONDITIONAL_CALL)
// 0053e55e: ADD ESP,0x4
// 0053e561: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053e566: PUSH 0x1
// 0053e568: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053e56a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053e56b: CALL dword ptr [EBX + 0x4]
// 0053e56e: ADD ESP,0x8
// 0053e571: TEST EAX,EAX
// 0053e573: JNZ 0x0053e965
//   XREF to: 0053e965 (CONDITIONAL_JUMP)
// 0053e579: LEA EAX,[ESP + 0x14]
// 0053e57d: PUSH EAX
// 0053e57e: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0053e583: MOV AH,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 0053e589: ADD ESP,0x4
// 0053e58c: TEST AH,0x1
// 0053e58f: JZ 0x0053e67d
//   XREF to: 0053e67d (CONDITIONAL_JUMP)
// 0053e595: MOV EDI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0053e59b: TEST EDI,EDI
// 0053e59d: JLE 0x0053e676
//   XREF to: 0053e676 (CONDITIONAL_JUMP)
// 0053e5a3: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053e5a8: SUB EAX,0x2
// 0053e5ab: CMP EAX,EDI
// 0053e5ad: JLE 0x0053e676
//   XREF to: 0053e676 (CONDITIONAL_JUMP)
// 0053e5b3: MOV ECX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0053e5b9: TEST ECX,ECX
// 0053e5bb: JLE 0x0053e676
//   XREF to: 0053e676 (CONDITIONAL_JUMP)
// 0053e5c1: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0053e5c6: SUB EAX,0x2
// 0053e5c9: CMP EAX,ECX
// 0053e5cb: JLE 0x0053e676
//   XREF to: 0053e676 (CONDITIONAL_JUMP)
// 0053e5d1: PUSH ECX
// 0053e5d2: PUSH EDI
// 0053e5d3: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053e5d8: LEA ESI,[ESP + 0x90]
// 0053e5df: LEA EDI,[ESP + 0xa8]
// 0053e5e6: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 0053e5eb: LEA ESI,[ESP + 0x90]
// 0053e5f2: ADD ESP,0xc
// 0053e5f5: LEA EAX,[ESP + 0x9c]
// 0053e5fc: LEA EBX,[ESP + 0x3c]
// 0053e600: PUSH EAX
// 0053e601: MOVSD ES:EDI,ESI
// 0053e602: MOVSD ES:EDI,ESI
// 0053e603: MOVSD ES:EDI,ESI
// 0053e604: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053e609: LEA ESI,[ESP + 0x80]
// 0053e610: LEA EDI,[ESP + 0xa4]
// 0053e617: CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   XREF to: 0044d370 (UNCONDITIONAL_CALL)
// 0053e61c: LEA ESI,[ESP + 0x80]
// 0053e623: ADD ESP,0x8
// 0053e626: LEA EAX,[ESP + 0x9c]
// 0053e62d: MOVSD ES:EDI,ESI
// 0053e62e: MOVSD ES:EDI,ESI
// 0053e62f: MOVSD ES:EDI,ESI
// 0053e630: FILD dword ptr [EAX]
// 0053e632: FMUL float ptr [0x00661c30]
//   XREF to: 00661c30 (READ)
// 0053e638: FSTP float ptr [EBX]
// 0053e63a: FILD dword ptr [EAX + 0x4]
// 0053e63d: FMUL float ptr [0x00661c30]
//   XREF to: 00661c30 (READ)
// 0053e643: FSTP float ptr [EBX + 0x4]
// 0053e646: FILD dword ptr [EAX + 0x8]
// 0053e649: FMUL float ptr [0x00661c30]
//   XREF to: 00661c30 (READ)
// 0053e64f: FSTP float ptr [EBX + 0x8]
// 0053e652: LEA EBX,[ESP + 0x3c]
// 0053e656: LEA EAX,[ESP + 0x14]
// 0053e65a: CMP EAX,EBX
// 0053e65c: JZ 0x0053e676
//   XREF to: 0053e676 (CONDITIONAL_JUMP)
// 0053e65e: MOV EAX,dword ptr [ESP + 0x3c]
// 0053e662: MOV dword ptr [ESP + 0x14],EAX
// 0053e666: MOV EAX,dword ptr [ESP + 0x40]
// 0053e66a: MOV dword ptr [ESP + 0x18],EAX
// 0053e66e: MOV EAX,dword ptr [ESP + 0x44]
// 0053e672: MOV dword ptr [ESP + 0x1c],EAX
// 0053e676: AND byte ptr [0x02cf6a94],0xfe
//   Label: LAB_0053e676
//   XREF to: 02cf6a94 (READ_WRITE)
// 0053e67d: PUSH 0x39
//   Label: LAB_0053e67d
// 0053e67f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053e684: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053e685: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053e687: CALL dword ptr [EBX]
// 0053e689: ADD ESP,0x8
// 0053e68c: TEST EAX,EAX
// 0053e68e: JZ 0x0053e953
//   XREF to: 0053e953 (CONDITIONAL_JUMP)
// 0053e694: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0053e699: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0053e69f: FSUBR float ptr [ESP + 0x8]
// 0053e6a3: FST float ptr [ESP + 0x8]
// 0053e6a7: FLDZ
// 0053e6a9: FCOMPP
// 0053e6ab: FNSTSW AX
// 0053e6ad: SAHF
// 0053e6ae: JBE 0x0053e6d6
//   XREF to: 0053e6d6 (CONDITIONAL_JUMP)
// 0053e6b0: PUSH 0x0
// 0053e6b2: FLD float ptr [ESP + 0xc]
// 0053e6b6: PUSH 0x0
// 0053e6b8: LEA EAX,[ESP + 0x1c]
// 0053e6bc: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0053e6c2: PUSH EAX
// 0053e6c3: FADD float ptr [0x0063d01c]
//   XREF to: 0063d01c (READ)
// 0053e6c9: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 0053e6ca: FSTP float ptr [ESP + 0x18]
// 0053e6ce: CALL core_gore.cpp_FUN_004edaa0
//   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
// 0053e6d3: ADD ESP,0x10
// 0053e6d6: PUSH 0x1c
//   Label: LAB_0053e6d6
// 0053e6d8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053e6dd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053e6de: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053e6e0: CALL dword ptr [EBX]
// 0053e6e2: ADD ESP,0x8
// 0053e6e5: TEST EAX,EAX
// 0053e6e7: JZ 0x0053e95c
//   XREF to: 0053e95c (CONDITIONAL_JUMP)
// 0053e6ed: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0053e6f2: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0053e6f8: FSUBR float ptr [ESP + 0x10]
// 0053e6fc: FST float ptr [ESP + 0x10]
// 0053e700: FLDZ
// 0053e702: FCOMPP
// 0053e704: FNSTSW AX
// 0053e706: SAHF
// 0053e707: JBE 0x0053e75b
//   XREF to: 0053e75b (CONDITIONAL_JUMP)
// 0053e709: MOV EAX,dword ptr [ESP + 0xb4]
// 0053e710: FLD double ptr [0x0063d014]
//   XREF to: 0063d014 (READ)
// 0053e716: FLD float ptr [EAX + 0x44]
// 0053e719: FMUL ST1
// 0053e71b: FSTP float ptr [ESP + 0x6c]
// 0053e71f: FLD float ptr [EAX + 0x50]
// 0053e722: FMUL ST1
// 0053e724: FSTP float ptr [ESP + 0x70]
// 0053e728: FMUL float ptr [EAX + 0x5c]
// 0053e72b: FLD float ptr [ESP + 0x10]
// 0053e72f: PUSH 0x0
// 0053e731: LEA EAX,[ESP + 0x70]
// 0053e735: MOV EBX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0053e73b: PUSH EAX
// 0053e73c: LEA EAX,[ESP + 0x1c]
// 0053e740: FADD float ptr [0x0063d01c]
//   XREF to: 0063d01c (READ)
// 0053e746: PUSH EAX
// 0053e747: FSTP float ptr [ESP + 0x1c]
// 0053e74b: PUSH EBX
//   XREF to: 02d83364 (DATA)
// 0053e74c: FSTP float ptr [ESP + 0x84]
// 0053e753: CALL core_gore.cpp_FUN_004edaa0
//   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
// 0053e758: ADD ESP,0x10
// 0053e75b: PUSH 0x19
//   Label: LAB_0053e75b
// 0053e75d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053e762: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053e763: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053e765: CALL dword ptr [EBX + 0x4]
// 0053e768: ADD ESP,0x8
// 0053e76b: TEST EAX,EAX
// 0053e76d: JZ 0x0053e89e
//   XREF to: 0053e89e (CONDITIONAL_JUMP)
// 0053e773: MOV EAX,dword ptr [ESP + 0x14]
// 0053e777: MOV dword ptr [ESP + 0x54],EAX
// 0053e77b: MOV EAX,dword ptr [ESP + 0x18]
// 0053e77f: MOV dword ptr [ESP + 0x58],EAX
// 0053e783: MOV EAX,dword ptr [ESP + 0x1c]
// 0053e787: MOV dword ptr [ESP + 0x5c],EAX
// 0053e78b: MOV EAX,dword ptr [ESP + 0x14]
// 0053e78f: MOV dword ptr [ESP + 0x30],EAX
// 0053e793: MOV EAX,dword ptr [ESP + 0x18]
// 0053e797: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053e79d: MOV dword ptr [ESP + 0x34],EAX
// 0053e7a1: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0053e7a2: FLD float ptr [ESP + 0x38]
// 0053e7a6: MOV EAX,dword ptr [ESP + 0x20]
// 0053e7aa: FADD float ptr [0x0063d020]
//   XREF to: 0063d020 (READ)
// 0053e7b0: MOV dword ptr [ESP + 0x3c],EAX
// 0053e7b4: FSTP float ptr [ESP + 0x38]
// 0053e7b8: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0053e7bd: ADD ESP,0x4
// 0053e7c0: LEA EAX,[ESP + 0x30]
// 0053e7c4: PUSH EAX
// 0053e7c5: LEA EAX,[ESP + 0x58]
// 0053e7c9: PUSH EAX
// 0053e7ca: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053e7d0: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0053e7d1: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 0053e7d6: MOV dword ptr [ESP + 0xc4],EAX
// 0053e7dd: FLD float ptr [ESP + 0xc4]
// 0053e7e4: ADD ESP,0xc
// 0053e7e7: FLDZ
// 0053e7e9: FXCH
// 0053e7eb: FST float ptr [ESP + 0xc]
// 0053e7ef: FSTP double ptr [ESP]
// 0053e7f2: FCOMP double ptr [ESP]
// 0053e7f5: FNSTSW AX
// 0053e7f7: SAHF
// 0053e7f8: JNC 0x0053e89e
//   XREF to: 0053e89e (CONDITIONAL_JUMP)
// 0053e7fe: FLD1
// 0053e800: FCOMP double ptr [ESP]
// 0053e803: FNSTSW AX
// 0053e805: SAHF
// 0053e806: JBE 0x0053e89e
//   XREF to: 0053e89e (CONDITIONAL_JUMP)
// 0053e80c: FLD float ptr [ESP + 0x30]
// 0053e810: FSUB float ptr [ESP + 0x54]
// 0053e814: FST float ptr [ESP + 0x90]
// 0053e81b: FLD float ptr [ESP + 0xc]
// 0053e81f: FXCH
// 0053e821: FMUL ST1
// 0053e823: FLD float ptr [ESP + 0x38]
// 0053e827: FLD float ptr [ESP + 0x34]
// 0053e82b: FSUB float ptr [ESP + 0x58]
// 0053e82f: FXCH
// 0053e831: FSUB float ptr [ESP + 0x5c]
// 0053e835: FXCH
// 0053e837: FST float ptr [ESP + 0x94]
// 0053e83e: FMUL ST3
// 0053e840: FXCH
// 0053e842: FST float ptr [ESP + 0x98]
// 0053e849: FMULP ST3
// 0053e84b: FLD float ptr [ESP + 0x54]
// 0053e84f: PUSH 0x0
// 0053e851: LEA EAX,[ESP + 0x4c]
// 0053e855: FLD float ptr [ESP + 0x5c]
// 0053e859: PUSH EAX
// 0053e85a: MOV EAX,[0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0053e85f: FLD float ptr [ESP + 0x64]
// 0053e863: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 0053e864: FXCH ST4
// 0053e866: FSTP float ptr [ESP + 0x6c]
// 0053e86a: FXCH ST2
// 0053e86c: FSTP float ptr [ESP + 0x70]
// 0053e870: FXCH ST3
// 0053e872: FSTP float ptr [ESP + 0x74]
// 0053e876: FXCH ST2
// 0053e878: FADD float ptr [ESP + 0x6c]
// 0053e87c: FXCH ST2
// 0053e87e: FADD float ptr [ESP + 0x70]
// 0053e882: FXCH
// 0053e884: FADD float ptr [ESP + 0x74]
// 0053e888: FXCH ST2
// 0053e88a: FSTP float ptr [ESP + 0x54]
// 0053e88e: FSTP float ptr [ESP + 0x58]
// 0053e892: FSTP float ptr [ESP + 0x5c]
// 0053e896: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 0053e89b: ADD ESP,0xc
// 0053e89e: PUSH 0x13
//   Label: LAB_0053e89e
// 0053e8a0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053e8a5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053e8a6: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053e8a8: CALL dword ptr [EBX + 0x4]
// 0053e8ab: ADD ESP,0x8
// 0053e8ae: TEST EAX,EAX
// 0053e8b0: JZ 0x0053e419
//   XREF to: 0053e419 (CONDITIONAL_JUMP)
// 0053e8b6: PUSH 0x63d003
//   XREF to: 0063d003 (DATA)
// 0053e8bb: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053e8c1: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053e8c2: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 0053e8c7: ADD ESP,0x8
// 0053e8ca: TEST EAX,EAX
// 0053e8cc: JZ 0x0053e419
//   XREF to: 0053e419 (CONDITIONAL_JUMP)
// 0053e8d2: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0053e8d8: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 0053e8d9: CALL core_gore.cpp_FUN_004ed760
//   XREF to: 004ed760 (UNCONDITIONAL_CALL)
// 0053e8de: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053e8e3: ADD ESP,0x4
// 0053e8e6: MOV EBX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 0053e8ec: PUSH EBX
// 0053e8ed: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0053e8ee: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0053e8f3: ADD ESP,0x8
// 0053e8f6: JMP 0x0053e419
//   XREF to: 0053e419 (UNCONDITIONAL_JUMP)
// 0053e8fb: PUSH EAX
//   Label: LAB_0053e8fb
// 0053e8fc: CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
//   XREF to: 00421700 (UNCONDITIONAL_CALL)
// 0053e901: ADD ESP,0x4
// 0053e904: JMP 0x0053e377
//   XREF to: 0053e377 (UNCONDITIONAL_JUMP)
// 0053e909: MOV EDX,0x63cfb6
//   Label: LAB_0053e909
//   XREF to: 0063cfb6 (PARAM)
// 0053e90e: MOV ECX,0xe7c
// 0053e913: PUSH 0x63cfca
//   XREF to: 0063cfca (DATA)
// 0053e918: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0053e91e: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0053e924: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053e929: ADD ESP,0x4
// 0053e92c: JMP 0x0053e386
//   XREF to: 0053e386 (UNCONDITIONAL_JUMP)
// 0053e931: MOV EAX,dword ptr [ESP + 0xa8]
//   Label: LAB_0053e931
// 0053e938: MOV [0x03276acc],EAX
//   XREF to: 03276acc (WRITE)
// 0053e93d: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0053e942: MOV dword ptr [EAX + 0x15ac80],ECX
//   XREF to: 0326eef8 (WRITE)
// 0053e948: MOV dword ptr [EAX + 0x15ac84],ECX
//   XREF to: 0326eefc (WRITE)
// 0053e94e: JMP 0x0053e4d5
//   XREF to: 0053e4d5 (UNCONDITIONAL_JUMP)
// 0053e953: MOV dword ptr [ESP + 0x8],EAX
//   Label: LAB_0053e953
// 0053e957: JMP 0x0053e6d6
//   XREF to: 0053e6d6 (UNCONDITIONAL_JUMP)
// 0053e95c: MOV dword ptr [ESP + 0x10],EAX
//   Label: LAB_0053e95c
// 0053e960: JMP 0x0053e75b
//   XREF to: 0053e75b (UNCONDITIONAL_JUMP)
// 0053e965: PUSH 0x1
//   Label: LAB_0053e965
// 0053e967: MOV EBX,dword ptr [ESP + 0xb8]
// 0053e96e: PUSH EBX
// 0053e96f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053e972: PUSH ESI
// 0053e973: CALL core_mission.cpp_CDemonMission_FUN_00523f20
//   XREF to: 00523f20 (UNCONDITIONAL_CALL)
// 0053e978: ADD ESP,0xc
// 0053e97b: PUSH ESI
// 0053e97c: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053e981: ADD ESP,0x4
// 0053e984: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053e989: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0053e98a: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0053e98f: ADD ESP,0x4
// 0053e992: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053e997: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0053e99d: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 0053e99e: CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
//   XREF to: 004daed0 (UNCONDITIONAL_CALL)
// 0053e9a3: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 0053e9a8: MOV dword ptr [EAX + 0x15ac80],0x0
//   XREF to: 0326eef8 (WRITE)
// 0053e9b2: MOV dword ptr [EAX + 0x15ac84],0x0
//   XREF to: 0326eefc (WRITE)
// 0053e9bc: MOV dword ptr [EAX + 0x15ac8c],0x0
//   XREF to: 0326ef04 (WRITE)
// 0053e9c6: ADD ESP,0x4
// 0053e9c9: MOV dword ptr [EAX + 0x15ac90],0x0
//   XREF to: 0326ef08 (WRITE)
// 0053e9d3: MOV ESP,EBP
// 0053e9d5: POP EBP
// 0053e9d6: POP EDI
// 0053e9d7: POP ESI
// 0053e9d8: POP EBX
// 0053e9d9: RET
