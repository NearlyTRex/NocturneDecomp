// Name: core_tentacle.cpp_CTentacle_FUN_005dbcc0
// Address: 005dbcc0
// Address Range: [[005dbcc0, 005dbceb]]
// Convention: __cdecl
// Signature: void core_tentacle.cpp_CTentacle_FUN_005dbcc0(CTentacle * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_FUN_005dbcc0(CTentacle *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0
            ((CDemonActor *)this_ptr,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 005dbcc0: PUSH EBX
//   Label: core_tentacle.cpp_CTentacle_FUN_005dbcc0
// 005dbcc1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dbcc5: PUSH EDX
// 005dbcc6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005dbcca: PUSH ECX
// 005dbccb: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005dbcd0: ADD ESP,0x8
// 005dbcd3: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dbcd7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dbcdb: PUSH EBX
// 005dbcdc: ADD EAX,0x158
// 005dbce1: PUSH EAX
// 005dbce2: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 005dbce7: ADD ESP,0x8
// 005dbcea: POP EBX
// 005dbceb: RET
