// Name: core_hero.cpp_FUN_004f2ed0
// Address: 004f2ed0
// Address Range: [[004f2ed0, 004f2f49]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2ed0()
// Cross-references:
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fe0a [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d4005 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d4c5c [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1297 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f861a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be3a9 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5d17 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d90d2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_door.cpp_CDoor_FUN_00481210
//   core_door.cpp_FUN_0047fcf0
//   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f2ed0(undefined4 param_1) */

undefined4 core_hero_cpp_FUN_004f2ed0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fb9c) == 0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0
                    ((CInventory *)(in_stack_00000004 + 0x1f738),
                     *(uint *)(*(int *)(in_stack_00000004 + 0x1fb9c) + 0x990),1);
  if (iVar1 != 0) {
    core_door_cpp_FUN_0047fcf0();
    *(undefined4 *)(in_stack_00000004 + 0x1fb9c) = 0;
    return 1;
  }
  core_door_cpp_CDoor_FUN_00481210(*(CDoor **)(in_stack_00000004 + 0x1fb9c));
  *(undefined4 *)(in_stack_00000004 + 0x1fb9c) = 0;
  return 0;
}


// Assembly code:
// 004f2ed0: PUSH EBX
//   Label: core_hero.cpp_FUN_004f2ed0
// 004f2ed1: PUSH ESI
// 004f2ed2: PUSH EBP
// 004f2ed3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f2ed7: MOV EDX,dword ptr [EBX + 0x1fb9c]
// 004f2edd: XOR ESI,ESI
// 004f2edf: TEST EDX,EDX
// 004f2ee1: JNZ 0x004f2ee9
//   XREF to: 004f2ee9 (CONDITIONAL_JUMP)
// 004f2ee3: MOV EAX,ESI
// 004f2ee5: POP EBP
// 004f2ee6: POP ESI
// 004f2ee7: POP EBX
// 004f2ee8: RET
// 004f2ee9: PUSH 0x1
//   Label: LAB_004f2ee9
// 004f2eeb: MOV ECX,dword ptr [EDX + 0x990]
// 004f2ef1: PUSH ECX
// 004f2ef2: LEA EAX,[EBX + 0x1f738]
// 004f2ef8: PUSH EAX
// 004f2ef9: CALL core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0
//   XREF to: 005013d0 (UNCONDITIONAL_CALL)
// 004f2efe: ADD ESP,0xc
// 004f2f01: TEST EAX,EAX
// 004f2f03: JZ 0x004f2f29
//   XREF to: 004f2f29 (CONDITIONAL_JUMP)
// 004f2f05: MOV EBP,dword ptr [EBX + 0x1fb9c]
// 004f2f0b: PUSH EBP
// 004f2f0c: MOV ESI,0x1
// 004f2f11: CALL core_door.cpp_FUN_0047fcf0
//   XREF to: 0047fcf0 (UNCONDITIONAL_CALL)
// 004f2f16: ADD ESP,0x4
// 004f2f19: MOV dword ptr [EBX + 0x1fb9c],0x0
// 004f2f23: MOV EAX,ESI
// 004f2f25: POP EBP
// 004f2f26: POP ESI
// 004f2f27: POP EBX
// 004f2f28: RET
// 004f2f29: PUSH EDI
//   Label: LAB_004f2f29
// 004f2f2a: MOV EDI,dword ptr [EBX + 0x1fb9c]
// 004f2f30: PUSH EDI
// 004f2f31: CALL core_door.cpp_CDoor_FUN_00481210
//   XREF to: 00481210 (UNCONDITIONAL_CALL)
// 004f2f36: ADD ESP,0x4
// 004f2f39: POP EDI
// 004f2f3a: MOV dword ptr [EBX + 0x1fb9c],0x0
// 004f2f44: MOV EAX,ESI
// 004f2f46: POP EBP
// 004f2f47: POP ESI
// 004f2f48: POP EBX
// 004f2f49: RET
