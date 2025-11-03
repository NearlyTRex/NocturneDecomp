// Name: wincore_windll.cpp_clearScreen_FUN_005b3e70
// Address: 005b3e70
// Address Range: [[005b3e70, 005b3ed3]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_clearScreen_FUN_005b3e70(void)
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043ca7b [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c430 (0043c430) at 0043c454 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043de1a [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443064 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443cca [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c653 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 004795a7 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0 (0047c5f0) at 0047c5ff [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be283 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e3839 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3cc4 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2ae3 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da1f4 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e41a4 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 (004daed0) at 004daf0e [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0 (00503dc0) at 00504080 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508602 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00508049 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050740e [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 005071ed [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 005083a1 [UNCONDITIONAL_CALL]
//   core_menu.cpp_MonitorCalibrationPressAnyKeyToContinue_FUN_00510a50 (00510a50) at 00510ad7 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingCustomKeys_FUN_005138e0 (005138e0) at 005146c5 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00513142 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_process_FUN_00524250 (00524250) at 00524332 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_FUN_00529ed0 (00529ed0) at 00529ee1 [UNCONDITIONAL_CALL]
//   core_moon.cpp_FUN_0052a2c0 (0052a2c0) at 0052a2c7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 0053876a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 (00537680) at 005376a5 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00535eaf [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e318 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005394a6 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 (005401e0) at 0054028d [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541429 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880 (00554880) at 00554889 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cd4b [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056a150 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581ae2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005831b2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578bc1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00578d8a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 0058497b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057af73 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057e83f [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 005807e1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581590 (00581590) at 00581594 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00582f30 (00582f30) at 00582f34 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057bc75 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057d946 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d063 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c615 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 0059895c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058f810 (0058f810) at 0059093e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 0059913f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b6f2f [UNCONDITIONAL_CALL]
//   engine_texture.cpp_renderTextureAtlas_FUN_005dd990 (005dd990) at 005dd9af [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 (00447f20) at 0044801f [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 004681ac [UNCONDITIONAL_CALL]
//   shape_design.c_centerObject_FUN_00466610 (00466610) at 00466744 [UNCONDITIONAL_CALL]
//   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 (0045ea90) at 0045ea9c [UNCONDITIONAL_CALL]
//   shape_design.c_checkVertexCountLimit_FUN_00460a10 (00460a10) at 00460a31 [UNCONDITIONAL_CALL]
//   shape_design.c_combineTextureMaps_FUN_00469ee0 (00469ee0) at 00469eec [UNCONDITIONAL_CALL]
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00463f82 [UNCONDITIONAL_CALL]
//   shape_design.c_configureFullPassPolygonReduction_FUN_00465810 (00465810) at 00465831 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 00465581 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046c501 [UNCONDITIONAL_CALL]
//   shape_design.c_createBoxPrimitive_FUN_0045e520 (0045e520) at 0045e52c [UNCONDITIONAL_CALL]
//   shape_design.c_createCenterVertex_FUN_00469690 (00469690) at 0046969c [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 00468342 [UNCONDITIONAL_CALL]
//   shape_design.c_crushModel_FUN_00469bd0 (00469bd0) at 00469c47 [UNCONDITIONAL_CALL]
//   shape_design.c_detachFaces_FUN_0046eba0 (0046eba0) at 0046eccf [UNCONDITIONAL_CALL]
//   shape_design.c_displayPalette_FUN_00461560 (00461560) at 0046157a [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045ab44 [UNCONDITIONAL_CALL]
//   shape_design.c_groundCenterObject_FUN_00466a30 (00466a30) at 00466c39 [UNCONDITIONAL_CALL]
//   shape_design.c_handleEditorHotkeys_FUN_0045b990 (0045b990) at 0045b9f0 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveGlobalWeld_FUN_00466040 (00466040) at 0046604c [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveWeldVertices_FUN_00465e90 (00465e90) at 00465e9c [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 004581a4 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458acc [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e81c [UNCONDITIONAL_CALL]
//   shape_design.c_mergeAdjacentPolygons_FUN_00462b70 (00462b70) at 00462c25 [UNCONDITIONAL_CALL]
//   shape_design.c_modelExportWizard_FUN_0045a7b0 (0045a7b0) at 0045a7bc [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 004658fa [UNCONDITIONAL_CALL]
//   shape_design.c_polygonReducer_FUN_004654e0 (004654e0) at 004654ec [UNCONDITIONAL_CALL]
//   shape_design.c_promptForModelNameAndLoad_FUN_00458a10 (00458a10) at 00458a1c [UNCONDITIONAL_CALL]
//   shape_design.c_realignObject_FUN_0045ee70 (0045ee70) at 0045ee7c [UNCONDITIONAL_CALL]
//   shape_design.c_removeUnusedVertices_FUN_00463830 (00463830) at 0046386f [UNCONDITIONAL_CALL]
//   shape_design.c_saveCurrentModel_FUN_00459de0 (00459de0) at 00459dec [UNCONDITIONAL_CALL]
//   shape_design.c_scaleModel_FUN_00467e70 (00467e70) at 00467e81 [UNCONDITIONAL_CALL]
//   shape_design.c_scaleXYZ_FUN_00467f30 (00467f30) at 00467f3c [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditorHelp_FUN_00460ac0 (00460ac0) at 00460ad1 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f30e [UNCONDITIONAL_CALL]
//   shape_design.c_showHelpFile_FUN_00457f00 (00457f00) at 00457f8a [UNCONDITIONAL_CALL]
//   shape_design.c_showModelEditor_FUN_00461aa0 (00461aa0) at 00461aac [UNCONDITIONAL_CALL]
//   shape_design.c_showModelPartsList_FUN_0045dbe0 (0045dbe0) at 0045dc21 [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045c6e5 [UNCONDITIONAL_CALL]
//   shape_design.c_showPolygonDetailsList_FUN_0045d9c0 (0045d9c0) at 0045da01 [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f3ca [UNCONDITIONAL_CALL]
//   shape_design.c_simpleTexture_FUN_00467350 (00467350) at 004673b0 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeForStadium_FUN_00469c70 (00469c70) at 00469c7c [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelInOneDimension_FUN_00469850 (00469850) at 00469936 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToXFeet_FUN_00466e40 (00466e40) at 00466e5a [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToYFeet_FUN_00467010 (00467010) at 0046702a [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToZFeet_FUN_00466c70 (00466c70) at 00466c8a [UNCONDITIONAL_CALL]
//   shape_design.c_smoothMesh_FUN_0046ed00 (0046ed00) at 0046ed2a [UNCONDITIONAL_CALL]
//   shape_design.c_squashShapeFor3DMorph_FUN_004685e0 (004685e0) at 004685ec [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a660 [UNCONDITIONAL_CALL]
//   shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90 (0045ec90) at 0045ec9c [UNCONDITIONAL_CALL]
//   shape_design.c_turnModelInsideOut_FUN_004671e0 (004671e0) at 00467327 [UNCONDITIONAL_CALL]
//   shape_design.c_validateModelTextures_FUN_00459a20 (00459a20) at 00459a46 [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467887 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 (0049e790) at 0049e7e6 [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053ee83 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0 (005ed2a0) at 005ed429 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 (005ecef0) at 005ed255 [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00 (005f4a00) at 005f4da1 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   double g_SelectedClearColor = 0.0
//   double g_ClearColor = 0.0
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_UseExternalRenderer
// Function calls:
//   wincore_windll.cpp_clear_FUN_005b7a30

#include "nocturne.h"

void __cdecl wincore_windll_cpp_clearScreen_FUN_005b3e70(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  
  if (g_UseExternalRenderer != 0) {
    wincore_windll_cpp_clear_FUN_005b7a30();
    return;
  }
  iVar4 = 0;
  do {
    g_ClearColor = g_SelectedClearColor;
    pdVar5 = (double *)g_ScreenBufferArray[iVar4];
    uVar2 = (uint)(g_WindowWidth * g_BitsPerPixel) >> 3;
    do {
      *pdVar5 = g_ClearColor;
      pdVar5[1] = g_ClearColor;
      pdVar5[2] = g_ClearColor;
      pdVar5[3] = g_ClearColor;
      pdVar5 = pdVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < g_WindowHeight);
  return;
}


// Assembly code:
// 005b3e70: PUSH ESI
//   Label: wincore_windll.cpp_clearScreen_FUN_005b3e70
// 005b3e71: PUSH EDI
// 005b3e72: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b3e79: JZ 0x005b3e83
//   XREF to: 005b3e83 (CONDITIONAL_JUMP)
// 005b3e7b: CALL wincore_windll.cpp_clear_FUN_005b7a30
//   XREF to: 005b7a30 (UNCONDITIONAL_CALL)
// 005b3e80: POP EDI
// 005b3e81: POP ESI
// 005b3e82: RET
// 005b3e83: PUSHAD
//   Label: LAB_005b3e83
// 005b3e84: CLD
// 005b3e85: PUSH DS
// 005b3e86: POP ES
// 005b3e87: MOV EAX,0x0
// 005b3e8c: MOV EBX,0x0
// 005b3e91: MOV EAX,[0x00679394]
//   Label: LAB_005b3e91
//   XREF to: 00679394 (READ)
// 005b3e96: IMUL dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005b3e9c: SHR EAX,0x3
// 005b3e9f: MOV ECX,EAX
// 005b3ea1: MOV EDI,dword ptr [EBX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 005b3ea8: FLD double ptr [0x0068261c]
//   XREF to: 0068261c (READ)
// 005b3eae: FST double ptr [EDI]
//   Label: LAB_005b3eae
// 005b3eb0: FST double ptr [EDI + 0x8]
// 005b3eb3: FST double ptr [EDI + 0x10]
// 005b3eb6: FST double ptr [EDI + 0x18]
// 005b3eb9: ADD EDI,0x20
// 005b3ebc: SUB ECX,0x20
// 005b3ebf: JG 0x005b3eae
//   XREF to: 005b3eae (CONDITIONAL_JUMP)
// 005b3ec1: FSTP double ptr [0x00682624]
//   XREF to: 00682624 (WRITE)
// 005b3ec7: INC EBX
// 005b3ec8: CMP EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005b3ece: JL 0x005b3e91
//   XREF to: 005b3e91 (CONDITIONAL_JUMP)
// 005b3ed0: POPAD
// 005b3ed1: POP EDI
// 005b3ed2: POP ESI
// 005b3ed3: RET
