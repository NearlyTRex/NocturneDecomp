// Name: wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
// Address: 005f2e90
// Address Range: [[005f2e90, 005f2ef6]]
// Convention: __cdecl
// Signature: int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90(void)
// Cross-references:
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 0044314c [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be3bf [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3fea [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004dbb71 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508786 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005074f2 [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 00508514 [UNCONDITIONAL_CALL]
//   core_menu.cpp_MonitorCalibrationPressAnyKeyToContinue_FUN_00510a50 (00510a50) at 00510b86 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 005132ac [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005245ed [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538786 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880 (00554880) at 005548c9 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565780 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056a170 [UNCONDITIONAL_CALL]
//   engine_2d.c_getInputWithPrompt_FUN_004032c0 (004032c0) at 00403318 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b744e [UNCONDITIONAL_CALL]
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460 (00502460) at 00502460 [UNCONDITIONAL_CALL]
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 (00502470) at 00502470 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 00447479 [UNCONDITIONAL_CALL]
//   shape_design.c_centerObject_FUN_00466610 (00466610) at 004667b5 [UNCONDITIONAL_CALL]
//   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 (0045ea90) at 0045eb06 [UNCONDITIONAL_CALL]
//   shape_design.c_checkVertexCountLimit_FUN_00460a10 (00460a10) at 00460a9f [UNCONDITIONAL_CALL]
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00463fa3 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 00465803 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 0046188b [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046cd46 [UNCONDITIONAL_CALL]
//   shape_design.c_createBoxPrimitive_FUN_0045e520 (0045e520) at 0045e633 [UNCONDITIONAL_CALL]
//   shape_design.c_createCenterVertex_FUN_00469690 (00469690) at 00469838 [UNCONDITIONAL_CALL]
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e098 [UNCONDITIONAL_CALL]
//   shape_design.c_crushModel_FUN_00469bd0 (00469bd0) at 00469c63 [UNCONDITIONAL_CALL]
//   shape_design.c_deletePolygonRange_FUN_0045dd70 (0045dd70) at 0045de09 [UNCONDITIONAL_CALL]
//   shape_design.c_detachFaces_FUN_0046eba0 (0046eba0) at 0046ec7c [UNCONDITIONAL_CALL]
//   shape_design.c_displayPalette_FUN_00461560 (00461560) at 0046168d [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045ab65 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToMDL_FUN_00459e80 (00459e80) at 00459ee9 [UNCONDITIONAL_CALL]
//   shape_design.c_groundCenterObject_FUN_00466a30 (00466a30) at 00466c55 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveGlobalWeld_FUN_00466040 (00466040) at 004660b6 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveWeldVertices_FUN_00465e90 (00465e90) at 00465fa7 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 004581df [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458e66 [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e8d8 [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004594c0 [UNCONDITIONAL_CALL]
//   shape_design.c_mergeAdjacentPolygons_FUN_00462b70 (00462b70) at 00462c46 [UNCONDITIONAL_CALL]
//   shape_design.c_modelExportWizard_FUN_0045a7b0 (0045a7b0) at 0045aa42 [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 00465b32 [UNCONDITIONAL_CALL]
//   shape_design.c_removeUnusedVertices_FUN_00463830 (00463830) at 0046388b [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditorHelp_FUN_00460ac0 (00460ac0) at 00460d80 [UNCONDITIONAL_CALL]
//   shape_design.c_showHelpFile_FUN_00457f00 (00457f00) at 00457f80 [UNCONDITIONAL_CALL]
//   shape_design.c_showModelEditor_FUN_00461aa0 (00461aa0) at 00461ac8 [UNCONDITIONAL_CALL]
//   shape_design.c_showModelPartsList_FUN_0045dbe0 (0045dbe0) at 0045dca8 [UNCONDITIONAL_CALL]
//   shape_design.c_showPolygonDetailsList_FUN_0045d9c0 (0045d9c0) at 0045dbc7 [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f648 [UNCONDITIONAL_CALL]
//   shape_design.c_simpleTexture_FUN_00467350 (00467350) at 004673d1 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelInOneDimension_FUN_00469850 (00469850) at 00469957 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToXFeet_FUN_00466e40 (00466e40) at 00466ed5 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToYFeet_FUN_00467010 (00467010) at 004670a5 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToZFeet_FUN_00466c70 (00466c70) at 00466d05 [UNCONDITIONAL_CALL]
//   shape_design.c_squashShapeFor3DMorph_FUN_004685e0 (004685e0) at 0046860d [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a223 [UNCONDITIONAL_CALL]
//   shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90 (0045ec90) at 0045ed51 [UNCONDITIONAL_CALL]
//   shape_design.c_turnModelInsideOut_FUN_004671e0 (004671e0) at 00467343 [UNCONDITIONAL_CALL]
//   shape_design.c_validateModelTextures_FUN_00459a20 (00459a20) at 00459dc5 [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467a14 [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f2fe [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0 (005ed2a0) at 005ed488 [UNCONDITIONAL_CALL]
// Globals:
//   int[20] g_InputBuffer
//   int g_InputReadIndex
//   int g_InputWriteIndex
//   int g_InputDisabled
// Function calls:
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005f2e90(void)

{
  int iVar1;
  undefined3 uVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  if (g_InputReadIndex == g_InputWriteIndex) {
    do {
      if (g_InputDisabled != 0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    } while (g_InputReadIndex == g_InputWriteIndex);
  }
  uVar2 = (undefined3)((uint)g_InputReadIndex >> 8);
  if (g_InputReadIndex != g_InputWriteIndex) {
    iVar1 = g_InputReadIndex + 1;
    uVar3 = (undefined1)g_InputBuffer[g_InputReadIndex];
    g_InputReadIndex = iVar1;
    if (0x13 < iVar1) {
      g_InputReadIndex = 0;
      return CONCAT31(uVar2,uVar3);
    }
  }
  return CONCAT31(uVar2,uVar3);
}


// Assembly code:
// 005f2e90: PUSH EBX
//   Label: wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
// 005f2e91: PUSH EDI
// 005f2e92: PUSH EBP
// 005f2e93: MOV EAX,[0x03f96c18]
//   XREF to: 03f96c18 (READ)
// 005f2e98: MOV EDX,dword ptr [0x03f96c1c]
//   XREF to: 03f96c1c (READ)
// 005f2e9e: XOR EBX,EBX
// 005f2ea0: CMP EAX,EDX
// 005f2ea2: JNZ 0x005f2ebf
//   XREF to: 005f2ebf (CONDITIONAL_JUMP)
// 005f2ea4: CMP dword ptr [0x03f9846c],0x0
//   Label: LAB_005f2ea4
//   XREF to: 03f9846c (READ)
// 005f2eab: JNZ 0x005f2ebf
//   XREF to: 005f2ebf (CONDITIONAL_JUMP)
// 005f2ead: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005f2eb2: MOV EAX,[0x03f96c18]
//   XREF to: 03f96c18 (READ)
// 005f2eb7: CMP EAX,dword ptr [0x03f96c1c]
//   XREF to: 03f96c1c (READ)
// 005f2ebd: JZ 0x005f2ea4
//   XREF to: 005f2ea4 (CONDITIONAL_JUMP)
// 005f2ebf: MOV EDI,dword ptr [0x03f96c1c]
//   Label: LAB_005f2ebf
//   XREF to: 03f96c1c (READ)
// 005f2ec5: MOV EAX,[0x03f96c18]
//   XREF to: 03f96c18 (READ)
// 005f2eca: CMP EAX,EDI
// 005f2ecc: JZ 0x005f2ee3
//   XREF to: 005f2ee3 (CONDITIONAL_JUMP)
// 005f2ece: LEA EBP,[EAX + 0x1]
// 005f2ed1: MOV EBX,dword ptr [EAX*0x4 + 0x3f96bc8]
//   XREF to: 03f96bc8 (DATA)
// 005f2ed8: MOV dword ptr [0x03f96c18],EBP
//   XREF to: 03f96c18 (WRITE)
// 005f2ede: CMP EBP,0x14
// 005f2ee1: JGE 0x005f2ee9
//   XREF to: 005f2ee9 (CONDITIONAL_JUMP)
// 005f2ee3: MOV AL,BL
//   Label: LAB_005f2ee3
// 005f2ee5: POP EBP
// 005f2ee6: POP EDI
// 005f2ee7: POP EBX
// 005f2ee8: RET
// 005f2ee9: XOR EDX,EDX
//   Label: LAB_005f2ee9
// 005f2eeb: MOV dword ptr [0x03f96c18],EDX
//   XREF to: 03f96c18 (WRITE)
// 005f2ef1: MOV AL,BL
// 005f2ef3: POP EBP
// 005f2ef4: POP EDI
// 005f2ef5: POP EBX
// 005f2ef6: RET
