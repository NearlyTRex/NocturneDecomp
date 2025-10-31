// Name: core_werewolf.cpp_CWerewolf_FUN_005f21f0
// Address: 005f21f0
// Address Range: [[005f21f0, 005f221b]]
// Convention: __cdecl
// Signature: void core_werewolf.cpp_CWerewolf_FUN_005f21f0(CWerewolf * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f21f0(CWerewolf *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 005f21f0: PUSH EBX
//   Label: core_werewolf.cpp_CWerewolf_FUN_005f21f0
// 005f21f1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005f21f5: PUSH EDX
// 005f21f6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f21fa: PUSH ECX
// 005f21fb: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005f2200: ADD ESP,0x8
// 005f2203: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005f2207: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f220b: PUSH EBX
// 005f220c: ADD EAX,0x158
// 005f2211: PUSH EAX
// 005f2212: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 005f2217: ADD ESP,0x8
// 005f221a: POP EBX
// 005f221b: RET
