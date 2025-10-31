// Name: core_grave.cpp_FUN_004ee790
// Address: 004ee790
// Address Range: [[004ee790, 004ee7e7]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee790()
// Cross-references:
//   core_grave.cpp_FUN_004ee5c0 (004ee5c0) at 004ee615 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db15d [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa5cd [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056ade0

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004ee790(undefined4 param_1) */

void core_grave_cpp_FUN_004ee790(void)

{
  int in_stack_00000004;
  
  if ((*(int *)(in_stack_00000004 + 0x2dc) == 0) && (*(int *)(in_stack_00000004 + 0x2e0) == 0)) {
    *(undefined4 *)(in_stack_00000004 + 0x2e0) = 1;
    *(undefined4 *)(in_stack_00000004 + 0x2d4) = 0;
    if (*(char *)(in_stack_00000004 + 0x34c) != '\0') {
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    }
    core_set_cpp_CDemonSet_FUN_0056ade0(g_CDemonSetPtr);
  }
  return;
}


// Assembly code:
// 004ee790: PUSH EBX
//   Label: core_grave.cpp_FUN_004ee790
// 004ee791: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004ee795: MOV EDX,dword ptr [EBX + 0x2dc]
// 004ee79b: TEST EDX,EDX
// 004ee79d: JNZ 0x004ee7e6
//   XREF to: 004ee7e6 (CONDITIONAL_JUMP)
// 004ee79f: CMP dword ptr [EBX + 0x2e0],0x0
// 004ee7a6: JNZ 0x004ee7e6
//   XREF to: 004ee7e6 (CONDITIONAL_JUMP)
// 004ee7a8: MOV dword ptr [EBX + 0x2e0],0x1
// 004ee7b2: MOV AH,byte ptr [EBX + 0x34c]
// 004ee7b8: MOV dword ptr [EBX + 0x2d4],EDX
// 004ee7be: TEST AH,AH
// 004ee7c0: JZ 0x004ee7d6
//   XREF to: 004ee7d6 (CONDITIONAL_JUMP)
// 004ee7c2: LEA EAX,[EBX + 0x34c]
// 004ee7c8: PUSH EAX
// 004ee7c9: MOV EDX,dword ptr [EBX + 0x154]
// 004ee7cf: PUSH EBX
// 004ee7d0: CALL dword ptr [EDX + 0x24]
// 004ee7d3: ADD ESP,0x8
// 004ee7d6: PUSH EBX
//   Label: LAB_004ee7d6
// 004ee7d7: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004ee7dd: PUSH EBX
//   XREF to: 03114278 (DATA)
// 004ee7de: CALL core_set.cpp_CDemonSet_FUN_0056ade0
//   XREF to: 0056ade0 (UNCONDITIONAL_CALL)
// 004ee7e3: ADD ESP,0x8
// 004ee7e6: POP EBX
//   Label: LAB_004ee7e6
// 004ee7e7: RET
