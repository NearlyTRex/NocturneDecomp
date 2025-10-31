// Name: core_actor.cpp_FUN_0040ee30
// Address: 0040ee30
// Address Range: [[0040ee30, 0040ee40]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040ee30()
// Cross-references:
//   core_actor.cpp_CActorPropertyList_FUN_0040e770 (0040e770) at 0040e78d [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_FUN_0040e850 (0040e850) at 0040e8bb [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void core_actor_cpp_FUN_0040ee30(void)

{
  int in_stack_00000004;
  
  engine_2d_c_getStringWidth_FUN_004018a0((char *)(in_stack_00000004 + 4));
  return;
}


// Assembly code:
// 0040ee30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_FUN_0040ee30
//   XREF to: Stack[0x4] (READ)
// 0040ee34: ADD EAX,0x4
// 0040ee37: PUSH EAX
// 0040ee38: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 0040ee3d: ADD ESP,0x4
// 0040ee40: RET
