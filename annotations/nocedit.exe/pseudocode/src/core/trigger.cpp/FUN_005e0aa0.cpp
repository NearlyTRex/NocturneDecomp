// Name: core_trigger.cpp_FUN_005e0aa0
// Address: 005e0aa0
// Address Range: [[005e0aa0, 005e0ab8]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_FUN_005e0aa0()
// Cross-references:
//   core_crossbow.cpp_CCrossbow_FUN_00448f20 (00448f20) at 0044926d [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0a62 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 005061f3 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de27b [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3b89 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_trigger.cpp_FUN_005e0aa0(undefined4 param_1) */

void core_trigger_cpp_FUN_005e0aa0(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x174) != 4) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x2f0) = 1;
  return;
}


// Assembly code:
// 005e0aa0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_trigger.cpp_FUN_005e0aa0
//   XREF to: Stack[0x4] (READ)
// 005e0aa4: CMP dword ptr [EAX + 0x174],0x4
// 005e0aab: JZ 0x005e0aae
//   XREF to: 005e0aae (CONDITIONAL_JUMP)
// 005e0aad: RET
// 005e0aae: MOV dword ptr [EAX + 0x2f0],0x1
//   Label: LAB_005e0aae
// 005e0ab8: RET
