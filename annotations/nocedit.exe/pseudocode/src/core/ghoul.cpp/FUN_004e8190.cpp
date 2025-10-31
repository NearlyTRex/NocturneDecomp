// Name: core_ghoul.cpp_FUN_004e8190
// Address: 004e8190
// Address Range: [[004e8190, 004e81b7]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e8190()
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9fa0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e8190(undefined4 param_1, undefined4 param_2)
    */

void core_ghoul_cpp_FUN_004e8190(void)

{
  CEnemy *in_stack_00000004;
  
  if ((in_stack_00000004[1].base_character.base_actor.location.position.z == 0.0) &&
     ((int)in_stack_00000004[1].base_character.base_actor.location.position.y < 1)) {
    core_enemy_cpp_CEnemy_FUN_004a9fa0(in_stack_00000004);
    return;
  }
  return;
}


// Assembly code:
// 004e8190: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_ghoul.cpp_FUN_004e8190
//   XREF to: Stack[0x4] (READ)
// 004e8194: CMP dword ptr [EAX + 0xbedc],0x0
// 004e819b: JNZ 0x004e81a6
//   XREF to: 004e81a6 (CONDITIONAL_JUMP)
// 004e819d: CMP dword ptr [EAX + 0xbed8],0x0
// 004e81a4: JLE 0x004e81a7
//   XREF to: 004e81a7 (CONDITIONAL_JUMP)
// 004e81a6: RET
//   Label: LAB_004e81a6
// 004e81a7: PUSH EBX
//   Label: LAB_004e81a7
// 004e81a8: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e81ac: PUSH EBX
// 004e81ad: PUSH EAX
// 004e81ae: CALL core_enemy.cpp_CEnemy_FUN_004a9fa0
//   XREF to: 004a9fa0 (UNCONDITIONAL_CALL)
// 004e81b3: ADD ESP,0x8
// 004e81b6: POP EBX
// 004e81b7: RET
