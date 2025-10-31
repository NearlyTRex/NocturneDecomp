// Name: core_succubus.cpp_CSuccubus_FUN_005c77f0
// Address: 005c77f0
// Address Range: [[005c77f0, 005c781b]]
// Convention: __cdecl
// Signature: void core_succubus.cpp_CSuccubus_FUN_005c77f0(CSuccubus * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_FUN_005c77f0(CSuccubus *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 005c77f0: PUSH EBX
//   Label: core_succubus.cpp_CSuccubus_FUN_005c77f0
// 005c77f1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005c77f5: PUSH EDX
// 005c77f6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005c77fa: PUSH ECX
// 005c77fb: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005c7800: ADD ESP,0x8
// 005c7803: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005c7807: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c780b: PUSH EBX
// 005c780c: ADD EAX,0x158
// 005c7811: PUSH EAX
// 005c7812: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 005c7817: ADD ESP,0x8
// 005c781a: POP EBX
// 005c781b: RET
