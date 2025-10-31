// Name: core_script.cpp_CScript_editorX2Index_FUN_00566a90
// Address: 00566a90
// Address Range: [[00566a90, 00566b24]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_editorX2Index_FUN_00566a90()
// Cross-references:
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 (00566910) at 00566959 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0 (00565aa0) at 00565aca [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 005659b9 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564c00 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565b1f [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565d2c [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565e70 (00565e70) at 00565eaf [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 00565fa9 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566390 (00566390) at 005663ae [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566cc0 (00566cc0) at 00566d32 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_00643fd6
//   TerminatedCString s_CScript_editorX2Index_in_00643fe9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_editorX2Index(CScript* param_1, undefined4 param_2,
   undefined4 param_3) */

int core_script_cpp_CScript_editorX2Index_FUN_00566a90(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000008 < 0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1bc5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorX2Index - invalid y");
  }
  iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(in_stack_00000008 + 0x38))
  ;
  if (in_stack_00000008 < iVar1) {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)(in_stack_00000008 + 0x38),in_stack_00000008);
    iVar1 = 0;
    uVar3 = 0;
    if (0 < in_stack_0000000c) {
      while (*pcVar2 != '\0') {
        if (*pcVar2 == '\t') {
          uVar3 = uVar3 + 8 & 0xfffffff8;
          pcVar2 = pcVar2 + 1;
          iVar1 = iVar1 + 1;
          if (in_stack_0000000c <= (int)uVar3) {
            return iVar1;
          }
        }
        else {
          uVar3 = uVar3 + 1;
          pcVar2 = pcVar2 + 1;
          iVar1 = iVar1 + 1;
          if (in_stack_0000000c <= (int)uVar3) {
            return iVar1;
          }
        }
      }
      iVar1 = iVar1 + (in_stack_0000000c - uVar3);
    }
    return iVar1;
  }
  return in_stack_0000000c;
}


// Assembly code:
// 00566a90: PUSH EBX
//   Label: core_script.cpp_CScript_editorX2Index_FUN_00566a90
// 00566a91: PUSH ESI
// 00566a92: PUSH EDI
// 00566a93: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00566a97: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00566a9b: TEST EDI,EDI
// 00566a9d: JL 0x00566ad7
//   XREF to: 00566ad7 (CONDITIONAL_JUMP)
// 00566a9f: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_00566a9f
//   XREF to: Stack[0x4] (READ)
// 00566aa3: ADD EBX,0x38
// 00566aa6: PUSH EBX
// 00566aa7: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566aac: ADD ESP,0x4
// 00566aaf: CMP EDI,EAX
// 00566ab1: JGE 0x00566afc
//   XREF to: 00566afc (CONDITIONAL_JUMP)
// 00566ab3: PUSH EDI
// 00566ab4: PUSH EBX
// 00566ab5: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00566aba: MOV EDX,EAX
// 00566abc: ADD ESP,0x8
// 00566abf: XOR ECX,ECX
// 00566ac1: XOR EAX,EAX
// 00566ac3: TEST ESI,ESI
// 00566ac5: JLE 0x00566ad1
//   XREF to: 00566ad1 (CONDITIONAL_JUMP)
// 00566ac7: MOV BL,byte ptr [EDX]
//   Label: LAB_00566ac7
// 00566ac9: TEST BL,BL
// 00566acb: JNZ 0x00566b02
//   XREF to: 00566b02 (CONDITIONAL_JUMP)
// 00566acd: SUB ESI,EAX
// 00566acf: ADD ECX,ESI
// 00566ad1: MOV EAX,ECX
//   Label: LAB_00566ad1
// 00566ad3: POP EDI
// 00566ad4: POP ESI
// 00566ad5: POP EBX
// 00566ad6: RET
// 00566ad7: MOV EDX,0x643fd6
//   Label: LAB_00566ad7
//   XREF to: 00643fd6 (PARAM)
// 00566adc: MOV ECX,0x1bc5
// 00566ae1: PUSH 0x643fe9
//   XREF to: 00643fe9 (DATA)
// 00566ae6: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00566aec: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00566af2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00566af7: ADD ESP,0x4
// 00566afa: JMP 0x00566a9f
//   XREF to: 00566a9f (UNCONDITIONAL_JUMP)
// 00566afc: MOV EAX,ESI
//   Label: LAB_00566afc
// 00566afe: POP EDI
// 00566aff: POP ESI
// 00566b00: POP EBX
// 00566b01: RET
// 00566b02: CMP BL,0x9
//   Label: LAB_00566b02
// 00566b05: JNZ 0x00566b18
//   XREF to: 00566b18 (CONDITIONAL_JUMP)
// 00566b07: ADD EAX,0x8
// 00566b0a: AND AL,0xf8
// 00566b0c: INC EDX
// 00566b0d: INC ECX
// 00566b0e: CMP EAX,ESI
// 00566b10: JL 0x00566ac7
//   XREF to: 00566ac7 (CONDITIONAL_JUMP)
// 00566b12: MOV EAX,ECX
// 00566b14: POP EDI
// 00566b15: POP ESI
// 00566b16: POP EBX
// 00566b17: RET
// 00566b18: INC EAX
//   Label: LAB_00566b18
// 00566b19: INC EDX
// 00566b1a: INC ECX
// 00566b1b: CMP EAX,ESI
// 00566b1d: JL 0x00566ac7
//   XREF to: 00566ac7 (CONDITIONAL_JUMP)
// 00566b1f: MOV EAX,ECX
// 00566b21: POP EDI
// 00566b22: POP ESI
// 00566b23: POP EBX
// 00566b24: RET
