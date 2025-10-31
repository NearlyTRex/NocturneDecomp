// Name: core_armour.cpp_CArmour_FUN_004124d0
// Address: 004124d0
// Address Range: [[004124d0, 004124fb]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_FUN_004124d0(CArmour * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_FUN_004124d0(CArmour *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 004124d0: PUSH EBX
//   Label: core_armour.cpp_CArmour_FUN_004124d0
// 004124d1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004124d5: PUSH EDX
// 004124d6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004124da: PUSH ECX
// 004124db: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004124e0: ADD ESP,0x8
// 004124e3: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004124e7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004124eb: PUSH EBX
// 004124ec: ADD EAX,0x158
// 004124f1: PUSH EAX
// 004124f2: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 004124f7: ADD ESP,0x8
// 004124fa: POP EBX
// 004124fb: RET
