// Name: core_script.cpp_FUN_00565f70
// Address: 00565f70
// Address Range: [[00565f70, 0056607b]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00565f70()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053adc4 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_s_label_006441c0_00680e28 = 006441c0
//   undefined4 DAT_0310cb74
//   undefined4 DAT_0310cc44
//   undefined4 DAT_0310cca8
//   undefined4 DAT_0310cca9
//   undefined4 DAT_0310ccaa
//   undefined4 DAT_0310ccab
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
//   undefined1 DAT_031101c0
// Function calls:
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   core_script.cpp_CScript_Unk18_FUN_005669a0
//   core_script.cpp_FUN_005624f0
//   core_script.cpp_FUN_00562760
//   core_script.cpp_FUN_005644e0
//   core_script.cpp_FUN_00566390
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00565f70(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_00565f70(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  if (-1 < DAT_0310fd48) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (DAT_0310fd48 < iVar2) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                ((CStrList *)(in_stack_00000004 + 0x38),DAT_0310fd48);
      iVar2 = core_script_cpp_SCmdParse_bestParse_FUN_00561db0();
      if (iVar2 < 0) {
        core_script_cpp_FUN_00566390();
        return;
      }
      pcVar3 = &DAT_0310cca8 + iVar2 * 0x328;
      do {
        cVar1 = *in_stack_00000008;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      core_script_cpp_FUN_005624f0();
      core_script_cpp_CScript_editorPutLine_FUN_005662a0();
      core_script_cpp_FUN_00562760();
      DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
      core_script_cpp_FUN_005644e0();
      core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
      core_script_cpp_CScript_Unk18_FUN_005669a0();
      return;
    }
  }
  return;
}


// Assembly code:
// 00565f70: PUSH EBX
//   Label: core_script.cpp_FUN_00565f70
// 00565f71: PUSH ESI
// 00565f72: PUSH EDI
// 00565f73: PUSH EBP
// 00565f74: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00565f78: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00565f7c: CMP dword ptr [0x0310fd48],0x0
//   XREF to: 0310fd48 (READ)
// 00565f83: JGE 0x00565f8a
//   XREF to: 00565f8a (CONDITIONAL_JUMP)
// 00565f85: POP EBP
//   Label: LAB_00565f85
// 00565f86: POP EDI
// 00565f87: POP ESI
// 00565f88: POP EBX
// 00565f89: RET
// 00565f8a: LEA EDI,[EBX + 0x38]
//   Label: LAB_00565f8a
// 00565f8d: PUSH EDI
// 00565f8e: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00565f93: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565f99: ADD ESP,0x4
// 00565f9c: CMP EAX,ECX
// 00565f9e: JLE 0x00565f85
//   XREF to: 00565f85 (CONDITIONAL_JUMP)
// 00565fa0: MOV EBP,dword ptr [0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 00565fa6: PUSH EBP
// 00565fa7: PUSH ECX
// 00565fa8: PUSH EBX
// 00565fa9: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00565fae: ADD ESP,0xc
// 00565fb1: PUSH 0x78
// 00565fb3: PUSH 0x680e28
//   XREF to: 00680e28 (DATA)
// 00565fb8: PUSH EAX
// 00565fb9: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565fbf: PUSH EDX
// 00565fc0: PUSH EDI
// 00565fc1: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00565fc6: ADD ESP,0x8
// 00565fc9: PUSH EAX
// 00565fca: PUSH 0x310cb74
//   XREF to: 0310cb74 (DATA)
// 00565fcf: CALL core_script.cpp_SCmdParse_bestParse_FUN_00561db0
//   XREF to: 00561db0 (UNCONDITIONAL_CALL)
// 00565fd4: MOV EBP,EAX
// 00565fd6: ADD ESP,0x14
// 00565fd9: TEST EAX,EAX
// 00565fdb: JL 0x0056606b
//   XREF to: 0056606b (CONDITIONAL_JUMP)
// 00565fe1: IMUL EAX,EAX,0x328
// 00565fe7: ADD EAX,0x310cc44
//   XREF to: 0310cc44 (DATA)
// 00565fec: LEA EDI,[EAX + 0x64]
// 00565fef: PUSH EDI
// 00565ff0: MOV AL,byte ptr [ESI]
//   Label: LAB_00565ff0
// 00565ff2: MOV byte ptr [EDI],AL
//   XREF to: 0310cca8 (DATA)
//   XREF to: 0310ccaa (DATA)
// 00565ff4: CMP AL,0x0
// 00565ff6: JZ 0x00566008
//   XREF to: 00566008 (CONDITIONAL_JUMP)
// 00565ff8: MOV AL,byte ptr [ESI + 0x1]
// 00565ffb: ADD ESI,0x2
// 00565ffe: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0310cca9 (DATA)
//   XREF to: 0310ccab (DATA)
// 00566001: ADD EDI,0x2
// 00566004: CMP AL,0x0
// 00566006: JNZ 0x00565ff0
//   XREF to: 00565ff0 (CONDITIONAL_JUMP)
// 00566008: POP EDI
//   Label: LAB_00566008
// 00566009: PUSH 0x31101c0
//   XREF to: 031101c0 (DATA)
// 0056600e: PUSH 0x310cb74
//   XREF to: 0310cb74 (DATA)
// 00566013: CALL core_script.cpp_FUN_005624f0
//   XREF to: 005624f0 (UNCONDITIONAL_CALL)
// 00566018: ADD ESP,0x8
// 0056601b: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00566021: PUSH ECX
// 00566022: PUSH EBX
// 00566023: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 00566028: ADD ESP,0x8
// 0056602b: PUSH EBP
// 0056602c: PUSH 0x310cb74
//   XREF to: 0310cb74 (DATA)
// 00566031: CALL core_script.cpp_FUN_00562760
//   XREF to: 00562760 (UNCONDITIONAL_CALL)
// 00566036: ADD ESP,0x8
// 00566039: PUSH EAX
// 0056603a: MOV ESI,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00566040: PUSH ESI
// 00566041: PUSH EBX
// 00566042: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 00566047: ADD ESP,0xc
// 0056604a: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 0056604f: CALL core_script.cpp_FUN_005644e0
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 00566054: PUSH EBX
// 00566055: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 0056605a: ADD ESP,0x4
// 0056605d: PUSH EBX
// 0056605e: CALL core_script.cpp_CScript_Unk18_FUN_005669a0
//   XREF to: 005669a0 (UNCONDITIONAL_CALL)
// 00566063: ADD ESP,0x4
// 00566066: POP EBP
// 00566067: POP EDI
// 00566068: POP ESI
// 00566069: POP EBX
// 0056606a: RET
// 0056606b: PUSH 0x1
//   Label: LAB_0056606b
// 0056606d: PUSH ESI
// 0056606e: PUSH EBX
// 0056606f: CALL core_script.cpp_FUN_00566390
//   XREF to: 00566390 (UNCONDITIONAL_CALL)
// 00566074: ADD ESP,0xc
// 00566077: POP EBP
// 00566078: POP EDI
// 00566079: POP ESI
// 0056607a: POP EBX
// 0056607b: RET
