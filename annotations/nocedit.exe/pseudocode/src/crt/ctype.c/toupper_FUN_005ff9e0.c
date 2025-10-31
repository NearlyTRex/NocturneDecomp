// Name: crt_ctype.c_toupper_FUN_005ff9e0
// Address: 005ff9e0
// Address Range: [[005ff9e0, 005ff9f1]]
// Convention: __cdecl
// Signature: int crt_ctype.c_toupper_FUN_005ff9e0(int c)
// Cross-references:
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443157 [UNCONDITIONAL_CALL]
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004aae5c [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be3ca [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004dee80 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004dd7f0 (004dd7f0) at 004dd828 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004dd9d0 (004dd9d0) at 004dda0b [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005074fd [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParse_parse_FUN_00561fd0 (00561fd0) at 00562181 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00594994 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 (005dc2a0) at 005dc392 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_load_FUN_005dbe00 (005dbe00) at 005dbfc8 [UNCONDITIONAL_CALL]
//   crt_env.c_findEnvVar_FUN_0060f1f0 (0060f1f0) at 0060f220 [UNCONDITIONAL_CALL]
//   crt_string.c_strupr_FUN_0060389c (0060389c) at 006038ac [UNCONDITIONAL_CALL]
//   engine_dosio.c_getFile_FUN_00481a50 (00481a50) at 00481a8a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_load_FUN_004b6c00 (004b6c00) at 004b6c6d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 (004b7d50) at 004b7d7a [UNCONDITIONAL_CALL]
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 (00502470) at 0050247b [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelFile_FUN_00527ec0 (00527ec0) at 00528081 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_findFilesByExtension_FUN_00550ce0 (00550ce0) at 00550d0d [UNCONDITIONAL_CALL]
//   shape_design.c_centerObject_FUN_00466610 (00466610) at 00466828 [UNCONDITIONAL_CALL]
//   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 (0045ea90) at 0045ebb9 [UNCONDITIONAL_CALL]
//   shape_design.c_configureFullPassPolygonReduction_FUN_00465810 (00465810) at 004658a8 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 004655f8 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 00461812 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046cc67 [UNCONDITIONAL_CALL]
//   shape_design.c_createBoxPrimitive_FUN_0045e520 (0045e520) at 0045e63e [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 004685b4 [UNCONDITIONAL_CALL]
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e0a3 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458b36 [UNCONDITIONAL_CALL]
//   shape_design.c_modelExportWizard_FUN_0045a7b0 (0045a7b0) at 0045aa07 [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f653 [UNCONDITIONAL_CALL]
//   shape_design.c_simpleTexture_FUN_00467350 (00467350) at 00467424 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelInOneDimension_FUN_00469850 (00469850) at 00469962 [UNCONDITIONAL_CALL]
//   shape_design.c_squashShapeFor3DMorph_FUN_004685e0 (004685e0) at 00468618 [UNCONDITIONAL_CALL]
//   shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90 (0045ec90) at 0045ed8d [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467920 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a6730 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ee59 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl crt_ctype_c_toupper_FUN_005ff9e0(int c)

{
  if ((0x60 < c) && (c < 0x7b)) {
    c = c + -0x20;
  }
  return c;
}


// Assembly code:
// 005ff9e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: Stack[0x4] (READ)
// 005ff9e4: CMP EAX,0x61
// 005ff9e7: JL 0x005ff9f1
//   XREF to: 005ff9f1 (CONDITIONAL_JUMP)
// 005ff9e9: CMP EAX,0x7a
// 005ff9ec: JG 0x005ff9f1
//   XREF to: 005ff9f1 (CONDITIONAL_JUMP)
// 005ff9ee: SUB EAX,0x20
// 005ff9f1: RET
//   Label: LAB_005ff9f1
