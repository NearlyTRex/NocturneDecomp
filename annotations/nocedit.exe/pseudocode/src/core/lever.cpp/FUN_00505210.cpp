// Name: core_lever.cpp_FUN_00505210
// Address: 00505210
// Address Range: [[00505210, 00505232]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00505210()
// Cross-references:
//   core_lever.cpp_FUN_00505240 (00505240) at 00505283 [DATA]
// Globals:
//   undefined4 g_CLeverClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_lever.cpp_FUN_00504c90

#include "nocturne.h"

undefined4 core_lever_cpp_FUN_00505210(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CLeverClassInfo.name_hash);
  core_lever_cpp_FUN_00504c90();
  return 1;
}


// Assembly code:
// 00505210: MOV EDX,dword ptr [0x02dd3090]
//   Label: core_lever.cpp_FUN_00505210
//   XREF to: 02dd3090 (READ)
// 00505216: PUSH EDX
// 00505217: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050521b: PUSH ECX
// 0050521c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00505221: ADD ESP,0x8
// 00505224: PUSH EAX
// 00505225: CALL core_lever.cpp_FUN_00504c90
//   XREF to: 00504c90 (UNCONDITIONAL_CALL)
// 0050522a: MOV EAX,0x1
// 0050522f: ADD ESP,0x4
// 00505232: RET
