// Name: core_enemy.cpp_CEnemy_FUN_004a9fa0
// Address: 004a9fa0
// Address Range: [[004a9fa0, 004a9fc9]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_FUN_004a9fa0(CEnemy * this_ptr)
// Cross-references:
//   core_ghoul.cpp_FUN_004e8190 (004e8190) at 004e81ae [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042a390

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004a9fa0(CEnemy *this_ptr)

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
// 004a9fa0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_enemy.cpp_CEnemy_FUN_004a9fa0
//   XREF to: Stack[0x4] (READ)
// 004a9fa4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004a9fa8: CMP dword ptr [EAX + 0xbe28],0x0
// 004a9faf: JZ 0x004a9fc9
//   XREF to: 004a9fc9 (CONDITIONAL_JUMP)
// 004a9fb1: TEST EDX,EDX
// 004a9fb3: JZ 0x004a9fbf
//   XREF to: 004a9fbf (CONDITIONAL_JUMP)
// 004a9fb5: MOV dword ptr [EAX + 0x240c],0x1
// 004a9fbf: PUSH EDX
//   Label: LAB_004a9fbf
// 004a9fc0: PUSH EAX
// 004a9fc1: CALL core_charactr.cpp_CCharacter_FUN_0042a390
//   XREF to: 0042a390 (UNCONDITIONAL_CALL)
// 004a9fc6: ADD ESP,0x8
// 004a9fc9: RET
//   Label: LAB_004a9fc9
