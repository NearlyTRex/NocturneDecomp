// Name: engine_2d.c_clearInputAndWait_FUN_00403260
// Address: 00403260
// Address Range: [[00403260, 004032b7]]
// Convention: __cdecl
// Signature: void engine_2d.c_clearInputAndWait_FUN_00403260(void)
// Cross-references:
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043df12 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043dcb0 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443147 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 004440a6 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 004794d0 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cbd6 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be288 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3fe5 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2eaf [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e3306 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e43e0 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db966 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508781 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050752b [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 0050734d [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 00508364 [UNCONDITIONAL_CALL]
//   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 (005107c0) at 0051082d [UNCONDITIONAL_CALL]
//   core_menu.cpp_cleanupMenuTransition_FUN_0050fe60 (0050fe60) at 0050fe60 [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 00514aaa [UNCONDITIONAL_CALL]
//   core_menu.cpp_showCalibrationTestPattern_FUN_00510a50 (00510a50) at 00510b81 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showCalibrationTest_FUN_00510ba0 (00510ba0) at 00510c48 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 005132a7 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005245e8 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052ca5d [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052cbfd [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538467 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 (00537680) at 00537696 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005374b0 (005374b0) at 005374f7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053eb89 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00536b9b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e992 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053aee3 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 (005401e0) at 00540445 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 005416d1 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880 (00554880) at 005548c4 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a24c [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565464 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056a16b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 00580662 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581ae7 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005831b7 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ae33 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584b0d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b254 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057eb51 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580c30 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 00581420 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581590 (00581590) at 005817ab [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00582f30 (00582f30) at 0058314b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c011 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dbb8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057ca22 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00598dd4 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00599168 [UNCONDITIONAL_CALL]
//   engine_2d.c_getInputWithPrompt_FUN_004032c0 (004032c0) at 00403380 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4998 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bba71 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b710f [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 00447500 [UNCONDITIONAL_CALL]
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 004645c1 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046c6fe [UNCONDITIONAL_CALL]
//   shape_design.c_createBoxPrimitive_FUN_0045e520 (0045e520) at 0045e531 [UNCONDITIONAL_CALL]
//   shape_design.c_createCenterVertex_FUN_00469690 (00469690) at 00469833 [UNCONDITIONAL_CALL]
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e07c [UNCONDITIONAL_CALL]
//   shape_design.c_deletePolygonRange_FUN_0045dd70 (0045dd70) at 0045dd7c [UNCONDITIONAL_CALL]
//   shape_design.c_deleteSinglePolygon_FUN_0045dcc0 (0045dcc0) at 0045dccc [UNCONDITIONAL_CALL]
//   shape_design.c_detachFaces_FUN_0046eba0 (0046eba0) at 0046ec77 [UNCONDITIONAL_CALL]
//   shape_design.c_displayPalette_FUN_00461560 (00461560) at 00461688 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045ab49 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 004581a9 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458c8d [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e8dd [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004594c5 [UNCONDITIONAL_CALL]
//   shape_design.c_mergeAdjacentPolygons_FUN_00462b70 (00462b70) at 00462c41 [UNCONDITIONAL_CALL]
//   shape_design.c_modelExportWizard_FUN_0045a7b0 (0045a7b0) at 0045a7c1 [UNCONDITIONAL_CALL]
//   shape_design.c_scaleModel_FUN_00467e70 (00467e70) at 00467e7c [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditorHelp_FUN_00460ac0 (00460ac0) at 00460acc [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f304 [UNCONDITIONAL_CALL]
//   shape_design.c_showHelpFile_FUN_00457f00 (00457f00) at 00457f85 [UNCONDITIONAL_CALL]
//   shape_design.c_showModelPartsList_FUN_0045dbe0 (0045dbe0) at 0045dbec [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045ca93 [UNCONDITIONAL_CALL]
//   shape_design.c_showPolygonDetailsList_FUN_0045d9c0 (0045d9c0) at 0045d9cc [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f884 [UNCONDITIONAL_CALL]
//   shape_design.c_simpleTexture_FUN_00467350 (00467350) at 004673cc [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelInOneDimension_FUN_00469850 (00469850) at 00469952 [UNCONDITIONAL_CALL]
//   shape_design.c_squashShapeFor3DMorph_FUN_004685e0 (004685e0) at 004685f1 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049ff41 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a4ca6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 (004a3e20) at 004a3ec3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e3d7 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ed70 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049ddeb [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d834 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_testLodGeneration_FUN_0051ed60 (0051ed60) at 0051ed9a [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f2f9 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 (00556490) at 005565fb [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_mainWindowProc_FUN_005f3150 (005f3150) at 005f326e [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00 (005f4a00) at 005f4dab [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_KeyboardState
//   undefined4 CHAR_ARRAY_02d03e99
// Function calls:
//   wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl engine_2d_c_clearInputAndWait_FUN_00403260(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack0000000c;
  
  wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
  wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    g_KeyboardState[iVar2] = '\0';
    iVar2 = iVar1;
  } while (iVar1 < 600);
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  while( true ) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    if (iVar2 >> 0x10 != iVar1 >> 0x10) break;
    wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
  }
  wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
  uStack0000000c = 0x40329d;
  wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    g_KeyboardState[iVar2] = '\0';
    iVar2 = iVar1;
  } while (iVar1 < 600);
  return;
}


// Assembly code:
// 00403260: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   Label: engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 00403265: CALL wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
//   XREF to: 005f30c0 (UNCONDITIONAL_CALL)
// 0040326a: XOR EAX,EAX
// 0040326c: INC EAX
//   Label: LAB_0040326c
// 0040326d: XOR DL,DL
// 0040326f: MOV byte ptr [EAX + 0x2d03e97],DL
//   XREF to: 02d03e98 (WRITE)
//   XREF to: 02d03e99 (WRITE)
// 00403275: CMP EAX,0x258
// 0040327a: JL 0x0040326c
//   XREF to: 0040326c (CONDITIONAL_JUMP)
// 0040327c: PUSH EBX
// 0040327d: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00403282: MOV EBX,EAX
// 00403284: SAR EBX,0x10
// 00403287: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_00403287
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0040328c: SAR EAX,0x10
// 0040328f: CMP EBX,EAX
// 00403291: JZ 0x004032b1
//   XREF to: 004032b1 (CONDITIONAL_JUMP)
// 00403293: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 00403298: CALL wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
//   XREF to: 005f30c0 (UNCONDITIONAL_CALL)
// 0040329d: XOR EAX,EAX
// 0040329f: POP EBX
// 004032a0: INC EAX
//   Label: LAB_004032a0
// 004032a1: XOR DH,DH
// 004032a3: MOV byte ptr [EAX + 0x2d03e97],DH
//   XREF to: 02d03e98 (WRITE)
//   XREF to: 02d03e99 (WRITE)
// 004032a9: CMP EAX,0x258
// 004032ae: JL 0x004032a0
//   XREF to: 004032a0 (CONDITIONAL_JUMP)
// 004032b0: RET
// 004032b1: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   Label: LAB_004032b1
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 004032b6: JMP 0x00403287
//   XREF to: 00403287 (UNCONDITIONAL_JUMP)
