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
  CEditorTools *pCVar2;
  CGame *this_ptr;
  CDemonSet *pCVar3;
  CBoxActor *this_ptr_00;
  int iVar4;
  CBoxActor *pCVar5;
  BADSPACEBASE *in_ESP;
  byte bVar6;
  CDemonMission *in_stack_00000004;
  CGore *in_stack_00000008;
  CDemonSet *in_stack_00000028;
  CDemonSet *in_stack_0000002c;
  CVector3f *in_stack_00000030;
  CBoxActor *in_stack_00000034;
  float fStack00000038;
  CDemonActor *pCStack0000003c;
  float fStack00000044;
  COrientation *pCVar7;
  char *in_stack_0000004c;
  CDemonSet *in_stack_00000050;
  CDemonActor *in_stack_00000054;
  int in_stack_00000058;
  float in_stack_00000064;
  char *in_stack_00000068;
  float in_stack_0000006c;
  float in_stack_00000070;
  float in_stack_00000080;
  float in_stack_00000084;
  COrientation *in_stack_00000088;
  char *in_stack_0000008c;
  float in_stack_00000090;
  float in_stack_00000094;
  float in_stack_00000098;
  float in_stack_0000009c;
  float in_stack_000000a0;
  float in_stack_000000c8;
  float in_stack_000000cc;
  float in_stack_000000d0;
  float in_stack_000000f0;
  uint auStack_f84 [7];
  uint auStack_f68 [933];
  CGame *in_stack_ffffff68;
  float fStack_80;
  CEditorTools *in_stack_ffffffb4;
  uint in_stack_ffffffb8;
  uint uStack_44;
  int in_stack_ffffffc0;
  CKeys *in_stack_ffffffc4;
  uint in_stack_ffffffc8;
  CKeys *in_stack_ffffffe4;
  CVector3i *output_ptr;
  CVector3i *in_stack_ffffffe8;
  
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
  core_fire_cpp_CFireEffect_init_FUN_004c6c80(g_CFireEffectPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffff68);
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&fStack_80);
  this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\msnedit.cpp",0xe7b);
  pCVar5 = (CBoxActor *)0x0;
  if (this_ptr_00 != (CBoxActor *)0x0) {
    pCVar5 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(this_ptr_00);
  }
  in_stack_00000034 = pCVar5;
  if (pCVar5 == (CBoxActor *)0x0) {
    g_CurrentFilename = "..\\core\\msnedit.cpp";
    g_CurrentLineNumber = 0xe7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::editGore - Out of memory");
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)in_stack_00000034->model_name,"stranger-hat.kfm");
  fStack_80 = fStack00000038;
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(in_stack_00000004);
  *(uint *)((int)fStack00000038 + 0x28) = 0;
  *(uint *)((int)fStack00000038 + 0x24) = *(uint *)((int)fStack00000038 + 0x28);
  *(uint *)((int)fStack00000038 + 0x20) = *(uint *)((int)fStack00000038 + 0x28);
  (pCStack0000003c->orient).heading = 0.0;
  (pCStack0000003c->orient).bank = (pCStack0000003c->orient).heading;
  (pCStack0000003c->orient).pitch = (pCStack0000003c->orient).bank;
  fStack_80 = 7.704122e-39;
  (*pCStack0000003c->vtable->setup)(pCStack0000003c);
  fStack00000044 = (float)((int)fStack00000038 + 0x20);
  core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_00000004);
  pCVar7 = &pCStack0000003c->orient;
  while( true ) {
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920(g_CEditorToolsPtr,0,0,0);
    *(CEditorTools **)in_stack_0000004c = in_stack_ffffffb4;
    *(uint *)(in_stack_0000004c + 4) = in_stack_ffffffb8;
    *(uint *)(in_stack_0000004c + 8) = uStack_44;
    if ((CDemonSet *)&stack0xffffffc0 != in_stack_00000050) {
      in_stack_00000050->camera_count = in_stack_ffffffc0;
      *(CKeys **)in_stack_00000050->cameras[0].name = in_stack_ffffffc4;
      *(uint *)(in_stack_00000050->cameras[0].name + 4) = in_stack_ffffffc8;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000054);
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
              (g_CDemonSetPtr,in_stack_00000054,0);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pCVar3 = g_CDemonSetPtr;
    if (*(int *)(in_stack_00000004->field2_0xc + 0x2c) == 0) {
      g_CDemonCameraInstance.corona_blend_factor = in_stack_00000058;
      g_CDemonSetPtr->lighting_quality_mode = 0;
      pCVar3->unk_lighting_param1 = 0;
    }
    else {
      g_CDemonCameraInstance.corona_blend_factor = 0xffff;
      g_CDemonSetPtr->lighting_quality_mode = 1;
      pCVar3->unk_lighting_param1 = 1;
    }
    pCVar3 = g_CDemonSetPtr;
    g_CDemonSetPtr->unk_lighting_param3 =
         (uint)(*(int *)(in_stack_00000004->field2_0xc + 0x24) == 0);
    pCVar3->unk_lighting_param4 = (uint)(*(int *)(in_stack_00000004->field2_0xc + 0x28) == 0);
    core_set_cpp_CDemonSet_FUN_0056c1a0(pCVar3);
    core_fire_cpp_CFireEffect_process_FUN_004c6ec0(g_CFireEffectPtr);
    core_gore_cpp_CGore_process_FUN_004ed9e0();
    in_stack_ffffffb8 = 0;
    in_stack_ffffffb4 = g_CEditorToolsPtr;
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uStack_44 = 0x53e54f;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
    in_stack_ffffffc8._0_1_ = '\x01';
    in_stack_ffffffc8._1_1_ = '\0';
    in_stack_ffffffc8._2_1_ = '\0';
    in_stack_ffffffc8._3_1_ = '\0';
    in_stack_ffffffc0 = 0x53e56e;
    in_stack_ffffffc4 = g_CKeysPtr;
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar4 != 0) break;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xfffffff4);
    if (((byte)g_MouseButtonFlags & 1) != 0) {
      if ((((0 < g_MouseX) && (g_MouseX < g_WindowWidth + -2)) && (0 < g_MouseY)) &&
         (g_MouseY < g_WindowHeight + -2)) {
        core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                  (&g_CDemonCameraInstance,(CVector3i *)g_MouseX,g_MouseY,(int)in_stack_ffffffe4);
        output_ptr = (CVector3i *)&stack0x00000084;
        in_stack_00000080 = in_stack_0000006c;
        (&stack0x00000084)[(uint)bVar6 * -2] = (&stack0x00000070)[(uint)bVar6 * -2];
        (&stack0x00000088)[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
             (COrientation *)*(uint *)(&stack0x00000074 + (uint)bVar6 * -8 + (uint)bVar6 * -8)
        ;
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,output_ptr,in_stack_ffffffe8);
        in_stack_00000084 = in_stack_00000064;
        (&stack0x00000088)[(uint)bVar6 * -2] = (COrientation *)(&stack0x00000068)[(uint)bVar6 * -2];
        (&stack0x0000008c)[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
             (char *)(&stack0x0000006c)[(uint)bVar6 * -2 + (uint)bVar6 * -2];
        in_stack_00000028 = (CDemonSet *)((float)(int)in_stack_0000008c * _DAT_00661c30);
        in_stack_0000002c = (CDemonSet *)((float)(int)in_stack_00000090 * _DAT_00661c30);
        if ((CDemonSet **)&stack0x00000000 != &stack0x00000028) {
          in_stack_00000008 = (CGore *)in_stack_00000030;
          in_stack_00000004 = (CDemonMission *)in_stack_0000002c;
        }
      }
      g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
    }
    in_stack_ffffffe8 = (CVector3i *)0x39;
    in_stack_ffffffe4 = g_CKeysPtr;
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x39);
    if (iVar4 == 0) {
      in_stack_00000008 = (CGore *)0x0;
    }
    else {
      in_stack_00000008 = (CGore *)((float)in_stack_00000008 - g_CGamePtr->delta_time_float);
      if ((float)in_stack_00000008 < 0.0) {
        in_stack_00000008 = (CGore *)((float)in_stack_00000008 + 0.1f);
        core_gore_cpp_FUN_004edaa0();
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1c);
    if (iVar4 == 0) {
      in_stack_00000028 = (CDemonSet *)0x0;
    }
    else {
      in_stack_00000028 = (CDemonSet *)((float)in_stack_00000028 - g_CGamePtr->delta_time_float);
      if ((float)in_stack_00000028 < 0.0) {
        fVar1 = (float)10;
        in_stack_00000084 = *(float *)((int)in_stack_000000cc + 0x44) * fVar1;
        in_stack_00000088 = (COrientation *)(*(float *)((int)in_stack_000000cc + 0x50) * fVar1);
        in_stack_0000008c = (char *)(fVar1 * *(float *)((int)in_stack_000000cc + 0x5c));
        in_stack_00000028 = (CDemonSet *)((float)in_stack_00000028 + 0.1f);
        in_stack_00000008 = g_CGorePtr;
        in_stack_00000004 = (CDemonMission *)0x53e758;
        core_gore_cpp_FUN_004edaa0();
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19);
    if (iVar4 != 0) {
      in_stack_00000084 = fStack00000044;
      in_stack_0000008c = in_stack_0000004c;
      in_stack_0000002c = g_CDemonSetPtr;
      in_stack_00000064 = (float)pCVar7 + -100f;
      in_stack_00000068 = in_stack_0000004c;
      in_stack_00000028 = (CDemonSet *)0x53e7bd;
      in_stack_00000088 = pCVar7;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      in_stack_00000030 = (CVector3f *)&stack0x00000064;
      in_stack_0000002c = (CDemonSet *)&stack0x00000088;
      in_stack_00000028 = g_CDemonSetPtr;
      fStack00000044 =
           core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                     (g_CDemonSetPtr,(CVector3f *)in_stack_0000002c,in_stack_00000030);
      in_stack_000000f0 = fStack00000044;
      if ((0.0 < fStack00000044) && (fStack00000044 < 1.0)) {
        in_stack_000000c8 = (float)in_stack_00000068 - (float)in_stack_0000008c;
        in_stack_00000098 = in_stack_000000c8 * fStack00000044;
        in_stack_000000cc = in_stack_0000006c - in_stack_00000090;
        in_stack_000000d0 = in_stack_00000070 - in_stack_00000094;
        in_stack_0000009c = in_stack_000000cc * fStack00000044;
        in_stack_000000a0 = in_stack_000000d0 * fStack00000044;
        in_stack_00000034 = (CBoxActor *)0x0;
        in_stack_00000030 = (CVector3f *)&stack0x00000080;
        in_stack_0000002c = (CDemonSet *)g_CGorePtr;
        in_stack_00000080 = (float)in_stack_0000008c + in_stack_00000098;
        in_stack_00000084 = in_stack_00000090 + in_stack_0000009c;
        in_stack_00000088 = (COrientation *)(in_stack_00000094 + in_stack_000000a0);
        in_stack_00000028 = (CDemonSet *)0x53e89b;
        core_gore_cpp_FUN_004ede30();
      }
    }
    in_stack_00000034 = (CBoxActor *)g_CKeysPtr;
    in_stack_00000030 = (CVector3f *)0x53e8ab;
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
    pCVar2 = g_CEditorToolsPtr;
    if (iVar4 != 0) {
      in_stack_0000004c = "Reset gore?";
      fStack00000044 = 7.705851e-39;
      iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Reset gore?");
      pCVar7 = (COrientation *)pCVar2;
      if (iVar4 != 0) {
        core_gore_cpp_FUN_004ed760();
        in_stack_00000054 = (CDemonActor *)g_CDemonSetPtr->selected_camera_index;
        in_stack_00000050 = g_CDemonSetPtr;
        in_stack_0000004c = (char *)0x53e8f3;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(g_CDemonSetPtr,(int)in_stack_00000054);
      }
    }
  }
  core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_00000004);
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
  core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(g_CGamePtr);
  pCVar3 = g_CDemonSetPtr;
  g_CDemonSetPtr->lighting_quality_mode = 0;
  pCVar3->unk_lighting_param1 = 0;
  pCVar3->unk_lighting_param3 = 0;
  pCVar3->unk_lighting_param4 = 0;
  return;
}
