// Name: core_hero.cpp_FUN_004f3910
// Address: 004f3910
// Address Range: [[004f3910, 004f3927]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3910()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055e4ec [UNCONDITIONAL_CALL]
// Function calls:
//   core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f3910(undefined4 param_1, undefined4 param_2)
    */

void core_hero_cpp_FUN_004f3910(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0
            ((CInventory *)(in_stack_00000004 + 0x1f738),in_stack_00000008);
  return;
}


// Assembly code:
// 004f3910: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_hero.cpp_FUN_004f3910
//   XREF to: Stack[0x8] (READ)
// 004f3914: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004f3918: PUSH EDX
// 004f3919: ADD EAX,0x1f738
// 004f391e: PUSH EAX
// 004f391f: CALL core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0
//   XREF to: 005014a0 (UNCONDITIONAL_CALL)
// 004f3924: ADD ESP,0x8
// 004f3927: RET
