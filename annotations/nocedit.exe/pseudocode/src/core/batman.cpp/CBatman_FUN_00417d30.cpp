// Name: core_batman.cpp_CBatman_FUN_00417d30
// Address: 00417d30
// Address Range: [[00417d30, 00417d5b]]
// Convention: __cdecl
// Signature: void core_batman.cpp_CBatman_FUN_00417d30(CBatman * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_FUN_00417d30(CBatman *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 00417d30: PUSH EBX
//   Label: core_batman.cpp_CBatman_FUN_00417d30
// 00417d31: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00417d35: PUSH EDX
// 00417d36: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00417d3a: PUSH ECX
// 00417d3b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00417d40: ADD ESP,0x8
// 00417d43: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00417d47: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00417d4b: PUSH EBX
// 00417d4c: ADD EAX,0x158
// 00417d51: PUSH EAX
// 00417d52: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 00417d57: ADD ESP,0x8
// 00417d5a: POP EBX
// 00417d5b: RET
