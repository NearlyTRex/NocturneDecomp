// Name: core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0
// Address: 00565aa0
// Address Range: [[00565aa0, 00565ad3]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 0056590f [UNCONDITIONAL_CALL]
// Function calls:
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_CalltoScriptEditorX2Index(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

void core_script_cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (-1 < in_stack_0000000c) {
    iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_0000000c < iVar1) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      return;
    }
  }
  return;
}


// Assembly code:
// 00565aa0: PUSH EBX
//   Label: core_script.cpp_CScript_CalltoScriptEditorX2Index_FUN_00565aa0
// 00565aa1: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00565aa5: TEST EBX,EBX
// 00565aa7: JGE 0x00565aab
//   XREF to: 00565aab (CONDITIONAL_JUMP)
// 00565aa9: POP EBX
//   Label: LAB_00565aa9
// 00565aaa: RET
// 00565aab: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00565aab
//   XREF to: Stack[0x4] (READ)
// 00565aaf: ADD EAX,0x38
// 00565ab2: PUSH EAX
// 00565ab3: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00565ab8: ADD ESP,0x4
// 00565abb: CMP EBX,EAX
// 00565abd: JGE 0x00565aa9
//   XREF to: 00565aa9 (CONDITIONAL_JUMP)
// 00565abf: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00565ac3: PUSH EDX
// 00565ac4: PUSH EBX
// 00565ac5: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00565ac9: PUSH ECX
// 00565aca: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00565acf: ADD ESP,0xc
// 00565ad2: POP EBX
// 00565ad3: RET
