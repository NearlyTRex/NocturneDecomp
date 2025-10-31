// Name: core_script.cpp_CScript_editorIndex2X_FUN_00566b30
// Address: 00566b30
// Address Range: [[00566b30, 00566bbe]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_editorIndex2X_FUN_00566b30()
// Cross-references:
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910 (00566910) at 0056696f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 005659ef [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 005649b4 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565c3e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 00566042 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566390 (00566390) at 005664aa [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566cc0 (00566cc0) at 00566e47 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_0064400c
//   TerminatedCString s_CScript_editorIndex2X_in_0064401f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_editorIndex2X(CScript* param_1, undefined4 param_2,
   undefined4 param_3) */

uint core_script_cpp_CScript_editorIndex2X_FUN_00566b30(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if (in_stack_00000008 < 0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1bde;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorIndex2X - invalid y");
  }
  iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(in_stack_00000008 + 0x38))
  ;
  if (in_stack_00000008 < iVar1) {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)(in_stack_00000008 + 0x38),in_stack_00000008);
    iVar1 = 0;
    uVar3 = 0;
    if (0 < (int)in_stack_0000000c) {
      while (*pcVar2 != '\0') {
        if (*pcVar2 == '\t') {
          uVar3 = uVar3 + 8 & 0xfffffff8;
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
          if ((int)in_stack_0000000c <= iVar1) {
            return uVar3;
          }
        }
        else {
          uVar3 = uVar3 + 1;
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
          if ((int)in_stack_0000000c <= iVar1) {
            return uVar3;
          }
        }
      }
      uVar3 = uVar3 + (in_stack_0000000c - iVar1);
    }
    return uVar3;
  }
  return in_stack_0000000c;
}


// Assembly code:
// 00566b30: PUSH EBX
//   Label: core_script.cpp_CScript_editorIndex2X_FUN_00566b30
// 00566b31: PUSH ESI
// 00566b32: PUSH EDI
// 00566b33: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00566b37: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00566b3b: TEST EDI,EDI
// 00566b3d: JL 0x00566b75
//   XREF to: 00566b75 (CONDITIONAL_JUMP)
// 00566b3f: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_00566b3f
//   XREF to: Stack[0x4] (READ)
// 00566b43: ADD EBX,0x38
// 00566b46: PUSH EBX
// 00566b47: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566b4c: ADD ESP,0x4
// 00566b4f: CMP EDI,EAX
// 00566b51: JGE 0x00566b9a
//   XREF to: 00566b9a (CONDITIONAL_JUMP)
// 00566b53: PUSH EDI
// 00566b54: PUSH EBX
// 00566b55: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00566b5a: MOV EDX,EAX
// 00566b5c: ADD ESP,0x8
// 00566b5f: XOR ECX,ECX
// 00566b61: XOR EAX,EAX
// 00566b63: TEST ESI,ESI
// 00566b65: JLE 0x00566b71
//   XREF to: 00566b71 (CONDITIONAL_JUMP)
// 00566b67: MOV BL,byte ptr [EDX]
//   Label: LAB_00566b67
// 00566b69: TEST BL,BL
// 00566b6b: JNZ 0x00566ba0
//   XREF to: 00566ba0 (CONDITIONAL_JUMP)
// 00566b6d: SUB ESI,ECX
// 00566b6f: ADD EAX,ESI
// 00566b71: POP EDI
//   Label: LAB_00566b71
// 00566b72: POP ESI
// 00566b73: POP EBX
// 00566b74: RET
// 00566b75: MOV EDX,0x64400c
//   Label: LAB_00566b75
//   XREF to: 0064400c (PARAM)
// 00566b7a: MOV ECX,0x1bde
// 00566b7f: PUSH 0x64401f
//   XREF to: 0064401f (DATA)
// 00566b84: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00566b8a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00566b90: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00566b95: ADD ESP,0x4
// 00566b98: JMP 0x00566b3f
//   XREF to: 00566b3f (UNCONDITIONAL_JUMP)
// 00566b9a: MOV EAX,ESI
//   Label: LAB_00566b9a
// 00566b9c: POP EDI
// 00566b9d: POP ESI
// 00566b9e: POP EBX
// 00566b9f: RET
// 00566ba0: CMP BL,0x9
//   Label: LAB_00566ba0
// 00566ba3: JNZ 0x00566bb4
//   XREF to: 00566bb4 (CONDITIONAL_JUMP)
// 00566ba5: ADD EAX,0x8
// 00566ba8: AND AL,0xf8
// 00566baa: INC ECX
// 00566bab: INC EDX
// 00566bac: CMP ECX,ESI
// 00566bae: JL 0x00566b67
//   XREF to: 00566b67 (CONDITIONAL_JUMP)
// 00566bb0: POP EDI
// 00566bb1: POP ESI
// 00566bb2: POP EBX
// 00566bb3: RET
// 00566bb4: INC EAX
//   Label: LAB_00566bb4
// 00566bb5: INC ECX
// 00566bb6: INC EDX
// 00566bb7: CMP ECX,ESI
// 00566bb9: JL 0x00566b67
//   XREF to: 00566b67 (CONDITIONAL_JUMP)
// 00566bbb: POP EDI
// 00566bbc: POP ESI
// 00566bbd: POP EBX
// 00566bbe: RET
