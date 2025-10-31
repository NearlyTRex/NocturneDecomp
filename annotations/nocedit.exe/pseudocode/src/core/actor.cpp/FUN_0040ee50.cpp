// Name: core_actor.cpp_FUN_0040ee50
// Address: 0040ee50
// Address Range: [[0040ee50, 0040ee82]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040ee50()
// Cross-references:
//   core_actor.cpp_CActorPropertyList_FUN_0040e770 (0040e770) at 0040e79f [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorProperty_FUN_0040ea50
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void core_actor_cpp_FUN_0040ee50(void)

{
  BADSPACEBASE *in_ESP;
  char acStack_128 [296];
  
  core_actor_cpp_CActorProperty_FUN_0040ea50();
  engine_2d_c_getStringWidth_FUN_004018a0(acStack_128);
  return;
}


// Assembly code:
// 0040ee50: SUB ESP,0x12c
//   Label: core_actor.cpp_FUN_0040ee50
// 0040ee56: MOV EAX,ESP
// 0040ee58: PUSH EAX
// 0040ee59: MOV EDX,dword ptr [ESP + 0x138]
//   XREF to: Stack[0x8] (READ)
// 0040ee60: PUSH EDX
// 0040ee61: MOV ECX,dword ptr [ESP + 0x138]
//   XREF to: Stack[0x4] (READ)
// 0040ee68: PUSH ECX
// 0040ee69: CALL core_actor.cpp_CActorProperty_FUN_0040ea50
//   XREF to: 0040ea50 (UNCONDITIONAL_CALL)
// 0040ee6e: ADD ESP,0xc
// 0040ee71: MOV EAX,ESP
// 0040ee73: PUSH EAX
// 0040ee74: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 0040ee79: ADD ESP,0x4
// 0040ee7c: ADD ESP,0x12c
// 0040ee82: RET
