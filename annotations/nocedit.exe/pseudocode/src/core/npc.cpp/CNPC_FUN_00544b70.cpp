// Name: core_npc.cpp_CNPC_FUN_00544b70
// Address: 00544b70
// Address Range: [[00544b70, 00544b99]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_FUN_00544b70(CNPC * this_ptr)
// Cross-references:
//   core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120 (004f6120) at 004f6165 [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042a390

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_FUN_00544b70(CNPC *this_ptr)

{
  int in_stack_00000008;
  
  if (this_ptr->pool_me != 0) {
    if (in_stack_00000008 != 0) {
      (this_ptr->base_character).field2_0x240c[0] = '\x01';
      (this_ptr->base_character).field2_0x240c[1] = '\0';
      (this_ptr->base_character).field2_0x240c[2] = '\0';
      (this_ptr->base_character).field2_0x240c[3] = '\0';
    }
    core_charactr_cpp_CCharacter_FUN_0042a390(&this_ptr->base_character);
  }
  return;
}


// Assembly code:
// 00544b70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_npc.cpp_CNPC_FUN_00544b70
//   XREF to: Stack[0x4] (READ)
// 00544b74: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00544b78: CMP dword ptr [EAX + 0x1f704],0x0
// 00544b7f: JZ 0x00544b99
//   XREF to: 00544b99 (CONDITIONAL_JUMP)
// 00544b81: TEST EDX,EDX
// 00544b83: JZ 0x00544b8f
//   XREF to: 00544b8f (CONDITIONAL_JUMP)
// 00544b85: MOV dword ptr [EAX + 0x240c],0x1
// 00544b8f: PUSH EDX
//   Label: LAB_00544b8f
// 00544b90: PUSH EAX
// 00544b91: CALL core_charactr.cpp_CCharacter_FUN_0042a390
//   XREF to: 0042a390 (UNCONDITIONAL_CALL)
// 00544b96: ADD ESP,0x8
// 00544b99: RET
//   Label: LAB_00544b99
