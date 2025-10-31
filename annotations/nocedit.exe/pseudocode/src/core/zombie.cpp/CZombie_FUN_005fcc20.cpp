// Name: core_zombie.cpp_CZombie_FUN_005fcc20
// Address: 005fcc20
// Address Range: [[005fcc20, 005fcc4b]]
// Convention: __cdecl
// Signature: void core_zombie.cpp_CZombie_FUN_005fcc20(CZombie * this_ptr, FILE * file_handle)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_FUN_005fcc20(CZombie *this_ptr,FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 005fcc20: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fcc20
// 005fcc21: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005fcc25: PUSH EDX
// 005fcc26: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005fcc2a: PUSH ECX
// 005fcc2b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 005fcc30: ADD ESP,0x8
// 005fcc33: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005fcc37: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fcc3b: PUSH EBX
// 005fcc3c: ADD EAX,0x158
// 005fcc41: PUSH EAX
// 005fcc42: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 005fcc47: ADD ESP,0x8
// 005fcc4a: POP EBX
// 005fcc4b: RET
