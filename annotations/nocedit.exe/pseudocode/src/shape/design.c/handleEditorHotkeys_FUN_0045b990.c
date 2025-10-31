// Name: shape_design.c_handleEditorHotkeys_FUN_0045b990
// Address: 0045b990
// Address Range: [[0045b990, 0045ba57]]
// Convention: __cdecl
// Signature: void shape_design.c_handleEditorHotkeys_FUN_0045b990(void)
// Cross-references:
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045ca53 [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f874 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_art_0061b2c2
//   undefined4 CHAR_ARRAY_02d03ea9
//   undefined4 CHAR_ARRAY_02d03eb5
//   undefined4 CHAR_ARRAY_02d03eb7
//   undefined4 CHAR_ARRAY_02d03ebe
//   undefined4 CHAR_ARRAY_02d03ec8
// Function calls:
//   shape_design.c_exportVertexListFile_FUN_0045a610
//   shape_design.c_modelExportWizard_FUN_0045a7b0
//   shape_design.c_promptForModelNameAndLoad_FUN_00458a10
//   shape_design.c_saveCurrentModel_FUN_00459de0
//   shape_design.c_validateModelTextures_FUN_00459a20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_handleEditorHotkeys_FUN_0045b990(void)

{
  int iVar1;
  
  if ((g_KeyboardState[0x26] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x26] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    iVar1 = shape_design_c_promptForModelNameAndLoad_FUN_00458a10();
    if (iVar1 != 0) {
      shape_design_c_validateModelTextures_FUN_00459a20("art",0);
    }
  }
  if ((g_KeyboardState[0x1f] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x1f] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_design_c_saveCurrentModel_FUN_00459de0();
  }
  if ((g_KeyboardState[0x11] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x11] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_design_c_modelExportWizard_FUN_0045a7b0(0);
  }
  if ((g_KeyboardState[0x30] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x30] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_design_c_exportVertexListFile_FUN_0045a610();
    shape_design_c_modelExportWizard_FUN_0045a7b0(1);
  }
  return;
}


// Assembly code:
// 0045b990: PUSH EBX
//   Label: shape_design.c_handleEditorHotkeys_FUN_0045b990
// 0045b991: PUSH ESI
// 0045b992: PUSH EDI
// 0045b993: PUSH EBP
// 0045b994: MOV EBP,ESP
// 0045b996: SUB ESP,0x0
// 0045b99c: CMP byte ptr [0x02d03ebe],0x0
//   XREF to: 02d03ebe (READ)
// 0045b9a3: JZ 0x0045b9ae
//   XREF to: 0045b9ae (CONDITIONAL_JUMP)
// 0045b9a5: CMP byte ptr [0x02d03eb5],0x0
//   XREF to: 02d03eb5 (READ)
// 0045b9ac: JNZ 0x0045b9b0
//   XREF to: 0045b9b0 (CONDITIONAL_JUMP)
// 0045b9ae: JMP 0x0045b9d5
//   Label: LAB_0045b9ae
//   XREF to: 0045b9d5 (UNCONDITIONAL_JUMP)
// 0045b9b0: MOV byte ptr [0x02d03ebe],0x0
//   Label: LAB_0045b9b0
//   XREF to: 02d03ebe (WRITE)
// 0045b9b7: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045b9bc: CALL shape_design.c_promptForModelNameAndLoad_FUN_00458a10
//   XREF to: 00458a10 (UNCONDITIONAL_CALL)
// 0045b9c1: TEST EAX,EAX
// 0045b9c3: JZ 0x0045b9d5
//   XREF to: 0045b9d5 (CONDITIONAL_JUMP)
// 0045b9c5: PUSH 0x0
// 0045b9c7: MOV EAX,0x61b2c2
//   XREF to: 0061b2c2 (PARAM)
// 0045b9cc: PUSH EAX
//   XREF to: 0061b2c2 (DATA)
// 0045b9cd: CALL shape_design.c_validateModelTextures_FUN_00459a20
//   XREF to: 00459a20 (UNCONDITIONAL_CALL)
// 0045b9d2: ADD ESP,0x8
// 0045b9d5: CMP byte ptr [0x02d03eb7],0x0
//   Label: LAB_0045b9d5
//   XREF to: 02d03eb7 (READ)
// 0045b9dc: JZ 0x0045b9e7
//   XREF to: 0045b9e7 (CONDITIONAL_JUMP)
// 0045b9de: CMP byte ptr [0x02d03eb5],0x0
//   XREF to: 02d03eb5 (READ)
// 0045b9e5: JNZ 0x0045b9e9
//   XREF to: 0045b9e9 (CONDITIONAL_JUMP)
// 0045b9e7: JMP 0x0045b9fa
//   Label: LAB_0045b9e7
//   XREF to: 0045b9fa (UNCONDITIONAL_JUMP)
// 0045b9e9: MOV byte ptr [0x02d03eb7],0x0
//   Label: LAB_0045b9e9
//   XREF to: 02d03eb7 (WRITE)
// 0045b9f0: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045b9f5: CALL shape_design.c_saveCurrentModel_FUN_00459de0
//   XREF to: 00459de0 (UNCONDITIONAL_CALL)
// 0045b9fa: CMP byte ptr [0x02d03ea9],0x0
//   Label: LAB_0045b9fa
//   XREF to: 02d03ea9 (READ)
// 0045ba01: JZ 0x0045ba0c
//   XREF to: 0045ba0c (CONDITIONAL_JUMP)
// 0045ba03: CMP byte ptr [0x02d03eb5],0x0
//   XREF to: 02d03eb5 (READ)
// 0045ba0a: JNZ 0x0045ba0e
//   XREF to: 0045ba0e (CONDITIONAL_JUMP)
// 0045ba0c: JMP 0x0045ba24
//   Label: LAB_0045ba0c
//   XREF to: 0045ba24 (UNCONDITIONAL_JUMP)
// 0045ba0e: MOV byte ptr [0x02d03ea9],0x0
//   Label: LAB_0045ba0e
//   XREF to: 02d03ea9 (WRITE)
// 0045ba15: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045ba1a: PUSH 0x0
// 0045ba1c: CALL shape_design.c_modelExportWizard_FUN_0045a7b0
//   XREF to: 0045a7b0 (UNCONDITIONAL_CALL)
// 0045ba21: ADD ESP,0x4
// 0045ba24: CMP byte ptr [0x02d03ec8],0x0
//   Label: LAB_0045ba24
//   XREF to: 02d03ec8 (READ)
// 0045ba2b: JZ 0x0045ba36
//   XREF to: 0045ba36 (CONDITIONAL_JUMP)
// 0045ba2d: CMP byte ptr [0x02d03eb5],0x0
//   XREF to: 02d03eb5 (READ)
// 0045ba34: JNZ 0x0045ba38
//   XREF to: 0045ba38 (CONDITIONAL_JUMP)
// 0045ba36: JMP 0x0045ba53
//   Label: LAB_0045ba36
//   XREF to: 0045ba53 (UNCONDITIONAL_JUMP)
// 0045ba38: MOV byte ptr [0x02d03ec8],0x0
//   Label: LAB_0045ba38
//   XREF to: 02d03ec8 (WRITE)
// 0045ba3f: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045ba44: CALL shape_design.c_exportVertexListFile_FUN_0045a610
//   XREF to: 0045a610 (UNCONDITIONAL_CALL)
// 0045ba49: PUSH 0x1
// 0045ba4b: CALL shape_design.c_modelExportWizard_FUN_0045a7b0
//   XREF to: 0045a7b0 (UNCONDITIONAL_CALL)
// 0045ba50: ADD ESP,0x4
// 0045ba53: POP EBP
//   Label: LAB_0045ba53
// 0045ba54: POP EDI
// 0045ba55: POP ESI
// 0045ba56: POP EBX
// 0045ba57: RET
