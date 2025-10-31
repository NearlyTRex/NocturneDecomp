// Name: core_dog.cpp_CZombieDog_FUN_0047f960
// Address: 0047f960
// Address Range: [[0047f960, 0047f96d]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_FUN_0047f960(CZombieDog * this_ptr)
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004aa250

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_FUN_0047f960(CZombieDog *this_ptr)

{
  core_enemy_cpp_CEnemy_FUN_004aa250(&this_ptr->base_enemy);
  return;
}


// Assembly code:
// 0047f960: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dog.cpp_CZombieDog_FUN_0047f960
//   XREF to: Stack[0x4] (READ)
// 0047f964: PUSH EDX
// 0047f965: CALL core_enemy.cpp_CEnemy_FUN_004aa250
//   XREF to: 004aa250 (UNCONDITIONAL_CALL)
// 0047f96a: ADD ESP,0x4
// 0047f96d: RET
