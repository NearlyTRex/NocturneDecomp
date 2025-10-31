// Name: core_zombie.cpp_CZombie_FUN_005fc920
// Address: 005fc920
// Address Range: [[005fc920, 005fc950]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fc920()
// Globals:
//   undefined4 s_CTentacle_00658a3d
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_charactr.cpp_CCharacter_FUN_0042bf30

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fc920(CZombie* param_1, undefined4
   param_2) */

int core_zombie_cpp_CZombie_FUN_005fc920(void)

{
  int iVar1;
  CCharacter *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                    (&in_stack_00000008->base_actor,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042bf30(in_stack_00000008);
  return iVar1;
}


// Assembly code:
// 005fc920: PUSH 0x658a3d
//   Label: core_zombie.cpp_CZombie_FUN_005fc920
//   XREF to: 00658a3d (DATA)
// 005fc925: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005fc929: PUSH EDX
// 005fc92a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005fc92f: ADD ESP,0x8
// 005fc932: TEST EAX,EAX
// 005fc934: JZ 0x005fc93c
//   XREF to: 005fc93c (CONDITIONAL_JUMP)
// 005fc936: MOV EAX,0x1
// 005fc93b: RET
// 005fc93c: PUSH EBX
//   Label: LAB_005fc93c
// 005fc93d: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005fc941: PUSH ECX
// 005fc942: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005fc946: PUSH EBX
// 005fc947: CALL core_charactr.cpp_CCharacter_FUN_0042bf30
//   XREF to: 0042bf30 (UNCONDITIONAL_CALL)
// 005fc94c: ADD ESP,0x8
// 005fc94f: POP EBX
// 005fc950: RET
