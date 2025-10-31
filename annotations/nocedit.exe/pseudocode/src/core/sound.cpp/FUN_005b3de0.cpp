// Name: core_sound.cpp_FUN_005b3de0
// Address: 005b3de0
// Address Range: [[005b3de0, 005b3dff]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b3de0()
// Cross-references:
//   core_actor.cpp_AnotherActorParser_FUN_0040eed0 (0040eed0) at 0040f629 [UNCONDITIONAL_CALL]
// Globals:
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0

#include "nocturne.h"

/* Signature: undefined1 core_sound.cpp_FUN_005b3de0(undefined4 param_1, undefined4 param_2) */

void core_sound_cpp_FUN_005b3de0(void)

{
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
            (g_CEditorToolsPtr,in_stack_00000008,in_stack_00000004,0x20,1);
  return;
}


// Assembly code:
// 005b3de0: PUSH EBX
//   Label: core_sound.cpp_FUN_005b3de0
// 005b3de1: PUSH 0x1
// 005b3de3: PUSH 0x20
// 005b3de5: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005b3de9: PUSH EDX
// 005b3dea: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005b3dee: PUSH ECX
// 005b3def: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005b3df5: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 005b3df6: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 005b3dfb: ADD ESP,0x14
// 005b3dfe: POP EBX
// 005b3dff: RET
