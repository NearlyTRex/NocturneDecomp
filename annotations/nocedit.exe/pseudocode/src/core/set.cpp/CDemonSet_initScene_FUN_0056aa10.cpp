// Name: core_set.cpp_CDemonSet_initScene_FUN_0056aa10
// Address: 0056aa10
// Address Range: [[0056aa10, 0056ac9d]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db1f1 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_process_FUN_00524250 (00524250) at 00524383 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e292 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539184 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a73c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 0058065a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581aca [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 0058319a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057a963 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f475 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b410 (0057b410) at 0057b4d1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b500 (0057b500) at 0057b5ea [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b600 (0057b600) at 0057b8f1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 00581364 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c07c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c600 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Initializing_scene_00645b9b
//   TerminatedCString s_core_set_cpp_00645bae
//   TerminatedCString s_CDemonSet_initScene_Memo_00645bbe
//   TerminatedCString s_core_set_cpp_00645bff
//   TerminatedCString s_CDemonSet_initScene_Too__00645c0f
//   CFilterCache* g_CFilterCachePtr = 020a4c08
//   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
//   CWeather* g_CWeatherPtr = 03f95dc0
//   CFilterCache g_CFilterCacheInstance
//   CLevelLoader g_CLevelLoaderInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonCamera g_CDemonCameraInstance
//   int g_MasterLightCount
//   CDemonLight*[96] g_MasterLightList
//   undefined4 DAT_03276db4
//   int g_ActiveLightCount
//   int g_DynamicLightCount
//   int g_CoronaGlobeCount
//   undefined4 DAT_0327785c
//   undefined4 DAT_03277d80
//   CWeather g_CWeatherInstance
// Function calls:
//   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
//   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0
//   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   core_dfilter.cpp_CFilterCache_free_FUN_00470000
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
//   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
//   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
//   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
//   core_level.cpp_CLevelLoader_update_FUN_00504160
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_setdir.cpp_CDemonSet_FUN_00576710
//   core_setdir.cpp_CDemonSet_FUN_00576870
//   core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
//   core_setutil.cpp_C3DSLight_create_FUN_00586a90
//   core_weather.cpp_CWeather_FUN_005ef8c0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet *this_ptr)

{
  char *text;
  CDemonLight *pCVar1;
  int iVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int in_stack_ffffffec;
  
  text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Initializing scene");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,text,in_stack_ffffffec);
  core_dlight_cpp_resetRestoreMemoryAllocator_FUN_004729c0();
  core_dfilter_cpp_CFilterCache_free_FUN_00470000(g_CFilterCachePtr);
  g_DynamicLightCount = 0;
  this_ptr->mirror_glass_count = 0;
  core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(&g_CDemonCameraInstance);
  core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640
            (&g_CDemonCameraInstance,(SFog *)(this_ptr->field19_0x14f0a0 + 0xbb90));
  *(int *)(this_ptr->field19_0x14f0a0 + 0xbbb4) =
       (((SFog *)(this_ptr->field19_0x14f0a0 + 0xbb90))->color_index).r;
  *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbb8) =
       *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbb94);
  *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbbc) =
       *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbb98);
  if (this_ptr->field19_0x14f0a0 + 0xbbc0 != this_ptr->field19_0x14f0a0 + 0xbb9c) {
    *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbc0) =
         *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbb9c);
    *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbc4) =
         *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbba0);
    *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbc8) =
         *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbba4);
  }
  *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbcc) =
       *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbba8);
  *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbd0) =
       *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbac);
  *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbd4) =
       *(undefined4 *)(this_ptr->field19_0x14f0a0 + 0xbbb0);
  iVar3 = 0;
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
            (&g_CDemonCameraInstance,this_ptr->min_ambient_value);
  do {
    if (*(int *)((int)g_MasterLightList + iVar3) != 0) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 899;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::initScene - Memory leakage detected in masterSpotList");
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x180);
  iVar3 = 0;
  g_MasterLightCount = 0;
  pCVar4 = this_ptr;
  if (0 < this_ptr->light_count) {
    do {
      if (pCVar4->lights[0].light_type == 0) {
        pCVar1 = core_setutil_cpp_C3DSLight_create_FUN_00586a90(this_ptr->lights + iVar3);
        g_MasterLightList[g_MasterLightCount] = pCVar1;
        core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(this_ptr->lights + iVar3,pCVar1);
        g_MasterLightCount = g_MasterLightCount + 1;
        if (0x60 < g_MasterLightCount) {
          g_CurrentFilename = "..\\core\\set.cpp";
          g_CurrentLineNumber = 0x39a;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::initScene - Too many spotlights!");
        }
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CDemonSet *)&pCVar4->cameras[0xe].field16_0x19c;
    } while (iVar3 < this_ptr->light_count);
  }
  iVar3 = 0;
  if (0 < g_MasterLightCount) {
    iVar2 = 0;
    do {
      pCVar1 = *(CDemonLight **)((int)g_MasterLightList + iVar2);
      core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(pCVar1,0);
      core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(pCVar1);
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(pCVar1);
    } while (iVar3 < g_MasterLightCount);
  }
  this_ptr->selected_camera_index = -1;
  this_ptr->previous_best_camera_index = -1;
  iVar2 = 0;
  g_ActiveLightCount = 0;
  DAT_03277d80 = 0;
  g_CoronaGlobeCount = 0;
  DAT_0327785c = 0;
  this_ptr->previous_best_camera_timer = 0.0;
  core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
  iVar3 = this_ptr->camera_count;
  pCVar4 = this_ptr;
  if (0 < iVar3) {
    do {
      iVar2 = iVar2 + 1;
      iVar3 = core_setdir_cpp_CDemonSet_FUN_00576870(this_ptr);
      pCVar4->cameras[0].field16_0x19c = iVar3;
      pCVar4 = (CDemonSet *)&pCVar4->cameras[0].field17_0x1a0;
    } while (iVar2 < this_ptr->camera_count);
  }
  core_weather_cpp_CWeather_FUN_005ef8c0(iVar3);
  return;
}


// Assembly code:
// 0056aa10: PUSH EBX
//   Label: core_set.cpp_CDemonSet_initScene_FUN_0056aa10
// 0056aa11: PUSH ESI
// 0056aa12: PUSH EDI
// 0056aa13: PUSH EBP
// 0056aa14: SUB ESP,0x4
// 0056aa17: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0056aa1b: PUSH 0x0
// 0056aa1d: PUSH 0x645b9b
//   XREF to: 00645b9b (DATA)
// 0056aa22: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0056aa27: ADD ESP,0x4
// 0056aa2a: PUSH EAX
// 0056aa2b: MOV EDX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 0056aa31: PUSH EDX
//   XREF to: 02dcd850 (DATA)
// 0056aa32: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 0056aa37: ADD ESP,0xc
// 0056aa3a: CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
//   XREF to: 004729c0 (UNCONDITIONAL_CALL)
// 0056aa3f: MOV ECX,dword ptr [0x0066efcc]
//   XREF to: 020a4c08 (PARAM)
//   XREF to: 0066efcc (READ)
// 0056aa45: PUSH ECX
//   XREF to: 020a4c08 (DATA)
// 0056aa46: CALL core_dfilter.cpp_CFilterCache_free_FUN_00470000
//   XREF to: 00470000 (UNCONDITIONAL_CALL)
// 0056aa4b: ADD ESP,0x4
// 0056aa4e: XOR ESI,ESI
// 0056aa50: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056aa55: MOV dword ptr [0x032776b4],ESI
//   XREF to: 032776b4 (WRITE)
// 0056aa5b: MOV dword ptr [EBX + 0x15acb4],0x0
// 0056aa65: CALL core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0
//   XREF to: 0044c0f0 (UNCONDITIONAL_CALL)
// 0056aa6a: ADD ESP,0x4
// 0056aa6d: LEA ESI,[EBX + 0x15ac30]
// 0056aa73: PUSH ESI
// 0056aa74: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056aa79: MOV EDI,ESI
// 0056aa7b: CALL core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
//   XREF to: 00453640 (UNCONDITIONAL_CALL)
// 0056aa80: LEA EAX,[EBX + 0x15ac54]
// 0056aa86: MOV EBP,dword ptr [ESI]
// 0056aa88: ADD ESI,0xc
// 0056aa8b: MOV dword ptr [EAX],EBP
// 0056aa8d: MOV EBP,dword ptr [ESI + -0x8]
// 0056aa90: MOV EDX,EAX
// 0056aa92: MOV dword ptr [EAX + 0x4],EBP
// 0056aa95: ADD EAX,0xc
// 0056aa98: MOV EBP,dword ptr [ESI + -0x4]
// 0056aa9b: ADD ESP,0x8
// 0056aa9e: MOV dword ptr [EAX + -0x4],EBP
// 0056aaa1: CMP EAX,ESI
// 0056aaa3: JZ 0x0056aab5
//   XREF to: 0056aab5 (CONDITIONAL_JUMP)
// 0056aaa5: MOV ECX,dword ptr [ESI]
// 0056aaa7: MOV dword ptr [EAX],ECX
// 0056aaa9: MOV ECX,dword ptr [ESI + 0x4]
// 0056aaac: MOV dword ptr [EAX + 0x4],ECX
// 0056aaaf: MOV ECX,dword ptr [ESI + 0x8]
// 0056aab2: MOV dword ptr [EAX + 0x8],ECX
// 0056aab5: MOV EAX,dword ptr [EDI + 0x18]
//   Label: LAB_0056aab5
// 0056aab8: MOV dword ptr [EDX + 0x18],EAX
// 0056aabb: MOV EAX,dword ptr [EDI + 0x1c]
// 0056aabe: MOV dword ptr [EDX + 0x1c],EAX
// 0056aac1: MOV EAX,dword ptr [EDI + 0x20]
// 0056aac4: MOV dword ptr [EDX + 0x20],EAX
// 0056aac7: PUSH dword ptr [EBX + 0x14d150]
// 0056aacd: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056aad2: MOV EBP,0x645bae
//   XREF to: 00645bae (DATA)
// 0056aad7: XOR ESI,ESI
// 0056aad9: CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   XREF to: 004528e0 (UNCONDITIONAL_CALL)
// 0056aade: ADD ESP,0x8
// 0056aae1: CMP dword ptr [ESI + 0x3276db0],0x0
//   Label: LAB_0056aae1
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0056aae8: JZ 0x0056ab07
//   XREF to: 0056ab07 (CONDITIONAL_JUMP)
// 0056aaea: MOV EAX,0x383
// 0056aaef: PUSH 0x645bbe
//   XREF to: 00645bbe (DATA)
// 0056aaf4: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0056aafa: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0056aaff: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056ab04: ADD ESP,0x4
// 0056ab07: ADD ESI,0x4
//   Label: LAB_0056ab07
// 0056ab0a: CMP ESI,0x180
// 0056ab10: JNZ 0x0056aae1
//   XREF to: 0056aae1 (CONDITIONAL_JUMP)
// 0056ab12: MOV ECX,dword ptr [EBX + 0x19a2c]
// 0056ab18: XOR EDX,EDX
// 0056ab1a: XOR ESI,ESI
// 0056ab1c: MOV dword ptr [0x03276dac],EDX
//   XREF to: 03276dac (WRITE)
// 0056ab22: TEST ECX,ECX
// 0056ab24: JLE 0x0056ab55
//   XREF to: 0056ab55 (CONDITIONAL_JUMP)
// 0056ab26: LEA EAX,[EBX + 0x19a30]
// 0056ab2c: MOV EDI,EBX
// 0056ab2e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0056ab31: IMUL EBP,ESI,0x1898
//   Label: LAB_0056ab31
// 0056ab37: CMP dword ptr [EDI + 0x19a30],0x0
// 0056ab3e: JZ 0x0056ac3e
//   XREF to: 0056ac3e (CONDITIONAL_JUMP)
// 0056ab44: INC ESI
//   Label: LAB_0056ab44
// 0056ab45: MOV EBP,dword ptr [EBX + 0x19a2c]
// 0056ab4b: ADD EDI,0x1898
// 0056ab51: CMP ESI,EBP
// 0056ab53: JL 0x0056ab31
//   XREF to: 0056ab31 (CONDITIONAL_JUMP)
// 0056ab55: MOV EAX,[0x03276dac]
//   Label: LAB_0056ab55
//   XREF to: 03276dac (READ)
// 0056ab5a: XOR EDI,EDI
// 0056ab5c: TEST EAX,EAX
// 0056ab5e: JLE 0x0056abb0
//   XREF to: 0056abb0 (CONDITIONAL_JUMP)
// 0056ab60: XOR EBP,EBP
// 0056ab62: PUSH 0x0
//   Label: LAB_0056ab62
// 0056ab64: MOV ESI,dword ptr [EBP + 0x3276db0]
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0056ab6a: PUSH ESI
// 0056ab6b: CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
//   XREF to: 00472a80 (UNCONDITIONAL_CALL)
// 0056ab70: ADD ESP,0x8
// 0056ab73: PUSH ESI
// 0056ab74: CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
//   XREF to: 004735c0 (UNCONDITIONAL_CALL)
// 0056ab79: ADD ESP,0x4
// 0056ab7c: PUSH 0x0
// 0056ab7e: PUSH 0x461c3f9a
// 0056ab83: PUSH EBX
// 0056ab84: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0056ab89: ADD ESP,0xc
// 0056ab8c: PUSH 0x0
// 0056ab8e: PUSH ESI
// 0056ab8f: ADD EBP,0x4
// 0056ab92: INC EDI
// 0056ab93: CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
//   XREF to: 00472d30 (UNCONDITIONAL_CALL)
// 0056ab98: MOV EDX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0056ab9e: ADD ESP,0x8
// 0056aba1: CMP EDI,EDX
// 0056aba3: JL 0x0056ab62
//   XREF to: 0056ab62 (CONDITIONAL_JUMP)
// 0056aba5: LEA EAX,[EAX]
// 0056abab: LEA EDX,[EDX]
// 0056abae: MOV EBX,EBX
// 0056abb0: MOV dword ptr [EBX + 0x15aea4],0xffffffff
//   Label: LAB_0056abb0
// 0056abba: PUSH EBX
// 0056abbb: MOV dword ptr [EBX + 0x15aea8],0xffffffff
// 0056abc5: XOR ECX,ECX
// 0056abc7: XOR ESI,ESI
// 0056abc9: MOV dword ptr [0x03276f30],ECX
//   XREF to: 03276f30 (WRITE)
// 0056abcf: MOV dword ptr [0x03277d80],ECX
//   XREF to: 03277d80 (WRITE)
// 0056abd5: MOV dword ptr [0x032776c8],ECX
//   XREF to: 032776c8 (WRITE)
// 0056abdb: MOV dword ptr [0x0327785c],ECX
//   XREF to: 0327785c (WRITE)
// 0056abe1: MOV dword ptr [EBX + 0x15aeac],ECX
// 0056abe7: CALL core_setdir.cpp_CDemonSet_FUN_00576710
//   XREF to: 00576710 (UNCONDITIONAL_CALL)
// 0056abec: MOV EAX,dword ptr [EBX]
// 0056abee: ADD ESP,0x4
// 0056abf1: TEST EAX,EAX
// 0056abf3: JLE 0x0056ac20
//   XREF to: 0056ac20 (CONDITIONAL_JUMP)
// 0056abf5: MOV EDI,EBX
// 0056abf7: LEA EBP,[EBX + 0x104]
// 0056abfd: PUSH EBP
//   Label: LAB_0056abfd
// 0056abfe: PUSH EBX
// 0056abff: ADD EDI,0x1a4
// 0056ac05: INC ESI
// 0056ac06: CALL core_setdir.cpp_CDemonSet_FUN_00576870
//   XREF to: 00576870 (UNCONDITIONAL_CALL)
// 0056ac0b: MOV dword ptr [EDI + -0x4],EAX
// 0056ac0e: ADD EBP,0x1a4
// 0056ac14: MOV EDX,dword ptr [EBX]
// 0056ac16: ADD ESP,0x8
// 0056ac19: CMP ESI,EDX
// 0056ac1b: JL 0x0056abfd
//   XREF to: 0056abfd (CONDITIONAL_JUMP)
// 0056ac1d: LEA EAX,[EAX]
// 0056ac20: MOV ECX,dword ptr [EBX + 0x161668]
//   Label: LAB_0056ac20
// 0056ac26: PUSH ECX
// 0056ac27: MOV EBX,dword ptr [0x006848fc]
//   XREF to: 03f95dc0 (PARAM)
//   XREF to: 006848fc (READ)
// 0056ac2d: PUSH EBX
//   XREF to: 03f95dc0 (DATA)
// 0056ac2e: CALL core_weather.cpp_CWeather_FUN_005ef8c0
//   XREF to: 005ef8c0 (UNCONDITIONAL_CALL)
// 0056ac33: ADD ESP,0x8
// 0056ac36: ADD ESP,0x4
// 0056ac39: POP EBP
// 0056ac3a: POP EDI
// 0056ac3b: POP ESI
// 0056ac3c: POP EBX
// 0056ac3d: RET
// 0056ac3e: ADD EBP,dword ptr [ESP]
//   Label: LAB_0056ac3e
//   XREF to: Stack[-0x14] (DATA)
// 0056ac41: PUSH EBP
// 0056ac42: CALL core_setutil.cpp_C3DSLight_create_FUN_00586a90
//   XREF to: 00586a90 (UNCONDITIONAL_CALL)
// 0056ac47: ADD ESP,0x4
// 0056ac4a: PUSH EAX
// 0056ac4b: MOV EDX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0056ac51: PUSH EBP
// 0056ac52: MOV dword ptr [EDX*0x4 + 0x3276db0],EAX
//   XREF to: 03276db0 (WRITE)
// 0056ac59: CALL core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
//   XREF to: 00586bf0 (UNCONDITIONAL_CALL)
// 0056ac5e: MOV EDX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0056ac64: INC EDX
// 0056ac65: ADD ESP,0x8
// 0056ac68: MOV dword ptr [0x03276dac],EDX
//   XREF to: 03276dac (WRITE)
// 0056ac6e: CMP EDX,0x60
// 0056ac71: JLE 0x0056ab44
//   XREF to: 0056ab44 (CONDITIONAL_JUMP)
// 0056ac77: MOV EBP,0x645bff
//   XREF to: 00645bff (DATA)
// 0056ac7c: MOV EAX,0x39a
// 0056ac81: PUSH 0x645c0f
//   XREF to: 00645c0f (DATA)
// 0056ac86: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0056ac8c: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0056ac91: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056ac96: ADD ESP,0x4
// 0056ac99: JMP 0x0056ab44
//   XREF to: 0056ab44 (UNCONDITIONAL_JUMP)
