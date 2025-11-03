// Name: core_stranger.cpp_CStranger_FUN_005c1f00
// Address: 005c1f00
// Address Range: [[005c1f00, 005c1f78]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c1f00()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be2ce [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_actionPending_d_stranger_00653aac
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   undefined4 g_CAmmoBoxClassInfo.name_hash
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c1f00(CStranger* param_1) */

void core_stranger_cpp_CStranger_FUN_005c1f00(void)

{
  CDemonActor *pCVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fba0) != 0) {
    if (*(int *)(in_stack_00000004 + 0x1fc38) != 4) {
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                (g_CEditorToolsPtr,"actionPending = %d\nstranger.cpp line %d",
                 *(int *)(in_stack_00000004 + 0x1fc38),0xd52);
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(in_stack_00000004 + 0x1fba0),g_CAmmoBoxClassInfo.name_hash
                       );
    if (pCVar1 != (CDemonActor *)0x0) {
      core_ammobox_cpp_AllocateMemoryMaybe_FUN_00411700();
    }
    *(undefined4 *)(in_stack_00000004 + 0x1fc38) = 1;
    *(undefined4 *)(in_stack_00000004 + 0x1fba0) = 0;
  }
  return;
}


// Assembly code:
// 005c1f00: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c1f00
// 005c1f01: PUSH EBP
// 005c1f02: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005c1f06: CMP dword ptr [EBX + 0x1fba0],0x0
// 005c1f0d: JZ 0x005c1f58
//   XREF to: 005c1f58 (CONDITIONAL_JUMP)
// 005c1f0f: MOV ECX,dword ptr [EBX + 0x1fc38]
// 005c1f15: CMP ECX,0x4
// 005c1f18: JNZ 0x005c1f5b
//   XREF to: 005c1f5b (CONDITIONAL_JUMP)
// 005c1f1a: MOV EBP,dword ptr [0x008223e0]
//   Label: LAB_005c1f1a
//   XREF to: 008223e0 (READ)
// 005c1f20: PUSH EBP
// 005c1f21: MOV EAX,dword ptr [EBX + 0x1fba0]
// 005c1f27: PUSH EAX
// 005c1f28: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c1f2d: ADD ESP,0x8
// 005c1f30: TEST EAX,EAX
// 005c1f32: JZ 0x005c1f44
//   XREF to: 005c1f44 (CONDITIONAL_JUMP)
// 005c1f34: LEA EDX,[EBX + 0x1f738]
// 005c1f3a: PUSH EDX
// 005c1f3b: PUSH EAX
// 005c1f3c: CALL core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700
//   XREF to: 00411700 (UNCONDITIONAL_CALL)
// 005c1f41: ADD ESP,0x8
// 005c1f44: MOV dword ptr [EBX + 0x1fc38],0x1
//   Label: LAB_005c1f44
// 005c1f4e: MOV dword ptr [EBX + 0x1fba0],0x0
// 005c1f58: POP EBP
//   Label: LAB_005c1f58
// 005c1f59: POP EBX
// 005c1f5a: RET
// 005c1f5b: PUSH EDI
//   Label: LAB_005c1f5b
// 005c1f5c: PUSH 0xd52
// 005c1f61: PUSH ECX
// 005c1f62: PUSH 0x653aac
//   XREF to: 00653aac (DATA)
// 005c1f67: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005c1f6d: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005c1f6e: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005c1f73: ADD ESP,0x10
// 005c1f76: POP EDI
// 005c1f77: JMP 0x005c1f1a
//   XREF to: 005c1f1a (UNCONDITIONAL_JUMP)
