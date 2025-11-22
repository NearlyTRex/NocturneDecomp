// Name: engine_2d.c_drawText_FUN_00401fd0
// Address: 00401fd0
// Address Range: [[00401fd0, 00402023]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
// Cross-references:
//   core_actor.cpp_CActorPropertyList_FUN_0040e850 (0040e850) at 0040e960 [UNCONDITIONAL_CALL]
//   core_actor.cpp_drawTextLine_FUN_0040d240 (0040d240) at 0040d256 [UNCONDITIONAL_CALL]
//   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 (0040d1e0) at 0040d222 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043de28 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043dbd2 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443083 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443760 (00443760) at 00443b1a [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443f8d [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b8d0 (0044b8d0) at 0044b94d [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 004795b5 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d19b [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0 (0047c5f0) at 0047c60d [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a9350 (004a9350) at 004a9379 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004addf0 (004addf0) at 004ade40 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be340 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004cb0a0 (004cb0a0) at 004cb0c9 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004ccc70 (004ccc70) at 004ccc99 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da782 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004d7810 (004d7810) at 004d7af7 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_showEditorHelp_FUN_004eb600 (004eb600) at 004eb661 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004eead0 (004eead0) at 004eeaf9 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502e50 (00502e50) at 00502e79 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507460 [UNCONDITIONAL_CALL]
//   core_menu.cpp_calibrateGamepad_FUN_005104d0 (005104d0) at 00510599 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showJoystickCalibrationScreen_FUN_00510410 (00510410) at 005104ae [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00513289 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_process_FUN_00524250 (00524250) at 00524340 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_render_FUN_0052e700 (0052e700) at 0052e888 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538360 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 (00537680) at 005377c2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00535e10 (00535e10) at 00535e27 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536cd0 (00536cd0) at 00536d4d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c706 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 005367a0 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539749 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 (005401e0) at 00540342 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541451 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_previewPathfinding_FUN_00547c00 (00547c00) at 00547ca7 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054f060 (0054f060) at 0054f0a1 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880 (00554880) at 005548a5 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056d190 (0056d190) at 0056d2a4 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056a15e [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a6c1 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70 (00575f70) at 005760fa [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 005806ad [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581e06 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583d5d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578bd2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ac42 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584a00 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b162 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057e8a0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580987 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00578c90 (00578c90) at 00578cde [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581520 (00581520) at 00581555 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581590 (00581590) at 005815b5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00582f30 (00582f30) at 00582f55 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057bca3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e04c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c8a2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 005972bc [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00596860 (00596860) at 00596888 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 0059914b [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderBones_FUN_0059b800 (0059b800) at 0059b8c6 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dadc0 (005dadc0) at 005dade9 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e5400 (005e5400) at 005e5429 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005ebc10 (005ebc10) at 005ebc39 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredAt_FUN_00402280 (00402280) at 004022ab [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCentered_FUN_00402350 (00402350) at 0040237f [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextFormatted_FUN_00402150 (00402150) at 004021a1 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextRightAligned_FUN_004021c0 (004021c0) at 004021e2 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextXY_FUN_00402130 (00402130) at 00402140 [UNCONDITIONAL_CALL]
//   engine_2d.c_getInputWithPrompt_FUN_004032c0 (004032c0) at 0040330b [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_004406c0 (004406c0) at 0044080b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b70e7 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 (00447f20) at 00448047 [UNCONDITIONAL_CALL]
//   shape_design.c_FUN_0046e6f0 (0046e6f0) at 0046e71f [UNCONDITIONAL_CALL]
//   shape_design.c_FUN_0046e760 (0046e760) at 0046e786 [UNCONDITIONAL_CALL]
//   shape_design.c_centerObject_FUN_00466610 (00466610) at 004667a8 [UNCONDITIONAL_CALL]
//   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 (0045ea90) at 0045eaf9 [UNCONDITIONAL_CALL]
//   shape_design.c_checkVertexCountLimit_FUN_00460a10 (00460a10) at 00460a5a [UNCONDITIONAL_CALL]
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 004645aa [UNCONDITIONAL_CALL]
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 00465621 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 0046187e [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046ca60 [UNCONDITIONAL_CALL]
//   shape_design.c_createBoxPrimitive_FUN_0045e520 (0045e520) at 0045e626 [UNCONDITIONAL_CALL]
//   shape_design.c_createCenterVertex_FUN_00469690 (00469690) at 0046982b [UNCONDITIONAL_CALL]
//   shape_design.c_createPolygonFromVertexList_FUN_0045cc80 (0045cc80) at 0045cc96 [UNCONDITIONAL_CALL]
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e08b [UNCONDITIONAL_CALL]
//   shape_design.c_crushModel_FUN_00469bd0 (00469bd0) at 00469c56 [UNCONDITIONAL_CALL]
//   shape_design.c_deletePolygonRange_FUN_0045dd70 (0045dd70) at 0045ddfc [UNCONDITIONAL_CALL]
//   shape_design.c_detachFaces_FUN_0046eba0 (0046eba0) at 0046ec6a [UNCONDITIONAL_CALL]
//   shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0 (0045bbc0) at 0045bcfc [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045ab58 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToMDL_FUN_00459e80 (00459e80) at 00459edc [UNCONDITIONAL_CALL]
//   shape_design.c_groundCenterObject_FUN_00466a30 (00466a30) at 00466c48 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveGlobalWeld_FUN_00466040 (00466040) at 004660a9 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveWeldVertices_FUN_00465e90 (00465e90) at 00465f27 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 004581d2 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458d29 [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e82b [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004594b3 [UNCONDITIONAL_CALL]
//   shape_design.c_mergeAdjacentPolygons_FUN_00462b70 (00462b70) at 00462c34 [UNCONDITIONAL_CALL]
//   shape_design.c_modelExportWizard_FUN_0045a7b0 (0045a7b0) at 0045a8e0 [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 00465909 [UNCONDITIONAL_CALL]
//   shape_design.c_realignObject_FUN_0045ee70 (0045ee70) at 0045ee8b [UNCONDITIONAL_CALL]
//   shape_design.c_removeUnusedVertices_FUN_00463830 (00463830) at 0046387e [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditorHelp_FUN_00460ac0 (00460ac0) at 00460af1 [UNCONDITIONAL_CALL]
//   shape_design.c_showHelpFile_FUN_00457f00 (00457f00) at 00457f62 [UNCONDITIONAL_CALL]
//   shape_design.c_showModelEditor_FUN_00461aa0 (00461aa0) at 00461abb [UNCONDITIONAL_CALL]
//   shape_design.c_showModelPartsList_FUN_0045dbe0 (0045dbe0) at 0045dc95 [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045c820 [UNCONDITIONAL_CALL]
//   shape_design.c_showPolygonDetailsList_FUN_0045d9c0 (0045d9c0) at 0045dbb1 [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f500 [UNCONDITIONAL_CALL]
//   shape_design.c_simpleTexture_FUN_00467350 (00467350) at 00467401 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelInOneDimension_FUN_00469850 (00469850) at 00469945 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToXFeet_FUN_00466e40 (00466e40) at 00466ec8 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToYFeet_FUN_00467010 (00467010) at 00467098 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToZFeet_FUN_00466c70 (00466c70) at 00466cf8 [UNCONDITIONAL_CALL]
//   shape_design.c_smoothMesh_FUN_0046ed00 (0046ed00) at 0046ed39 [UNCONDITIONAL_CALL]
//   shape_design.c_squashShapeFor3DMorph_FUN_004685e0 (004685e0) at 00468600 [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a204 [UNCONDITIONAL_CALL]
//   shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90 (0045ec90) at 0045ed44 [UNCONDITIONAL_CALL]
//   shape_design.c_turnModelInsideOut_FUN_004671e0 (004671e0) at 00467336 [UNCONDITIONAL_CALL]
//   shape_design.c_validateModelTextures_FUN_00459a20 (00459a20) at 00459ce3 [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467e46 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051ddbb [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d6e0 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ecd0 (0051ecd0) at 0051ed1e [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f048 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_ColorQuantizationMaybe_FUN_00556490 (00556490) at 00556663 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_005568f0 (005568f0) at 00556989 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0 (005ed2a0) at 005ed448 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TextWrapEnabled = 0x1
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   engine_2d.c_drawTextMultiline_FUN_00401cf0
//   engine_2d.c_drawTextWrapped_FUN_00401c60

#include "nocturne.h"

void __cdecl engine_2d_c_drawText_FUN_00401fd0(char *text,int x_pos,int y_pos)

{
  if (g_TextWrapEnabled != 0) {
    engine_2d_c_drawTextWrapped_FUN_00401c60(text,x_pos,y_pos,g_ClipRight,g_ClipBottom);
    return;
  }
  engine_2d_c_drawTextMultiline_FUN_00401cf0(text,x_pos,y_pos,g_ClipRight);
  return;
}


// Assembly code:
// 00401fd0: PUSH ESI
//   Label: engine_2d.c_drawText_FUN_00401fd0
// 00401fd1: PUSH EDI
// 00401fd2: PUSH EBP
// 00401fd3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00401fd7: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00401fdb: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00401fdf: CMP dword ptr [0x0066df74],0x0
//   XREF to: 0066df74 (READ)
// 00401fe6: JZ 0x00402007
//   XREF to: 00402007 (CONDITIONAL_JUMP)
// 00401fe8: PUSH EBX
// 00401fe9: MOV EBP,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00401fef: PUSH EBP
// 00401ff0: MOV EBX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00401ff6: PUSH EBX
// 00401ff7: PUSH EDX
// 00401ff8: PUSH ECX
// 00401ff9: PUSH EAX
// 00401ffa: CALL engine_2d.c_drawTextWrapped_FUN_00401c60
//   XREF to: 00401c60 (UNCONDITIONAL_CALL)
// 00401fff: ADD ESP,0x14
// 00402002: POP EBX
// 00402003: POP EBP
// 00402004: POP EDI
// 00402005: POP ESI
// 00402006: RET
// 00402007: MOV ESI,dword ptr [0x02d02564]
//   Label: LAB_00402007
//   XREF to: 02d02564 (READ)
// 0040200d: PUSH ESI
// 0040200e: MOV EDI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00402014: PUSH EDI
// 00402015: PUSH EDX
// 00402016: PUSH ECX
// 00402017: PUSH EAX
// 00402018: CALL engine_2d.c_drawTextMultiline_FUN_00401cf0
//   XREF to: 00401cf0 (UNCONDITIONAL_CALL)
// 0040201d: ADD ESP,0x14
// 00402020: POP EBP
// 00402021: POP EDI
// 00402022: POP ESI
// 00402023: RET
