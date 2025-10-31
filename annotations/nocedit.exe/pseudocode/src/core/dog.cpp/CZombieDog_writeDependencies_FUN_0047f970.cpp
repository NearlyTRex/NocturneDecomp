// Name: core_dog.cpp_CZombieDog_writeDependencies_FUN_0047f970
// Address: 0047f970
// Address Range: [[0047f970, 0047f99b]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_writeDependencies_FUN_0047f970(CZombieDog * this_ptr, FILE * file_handle)
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

void __cdecl
core_dog_cpp_CZombieDog_writeDependencies_FUN_0047f970(CZombieDog *this_ptr,FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 0047f970: PUSH EBX
//   Label: core_dog.cpp_CZombieDog_writeDependencies_FUN_0047f970
// 0047f971: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0047f975: PUSH EDX
// 0047f976: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0047f97a: PUSH ECX
// 0047f97b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 0047f980: ADD ESP,0x8
// 0047f983: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0047f987: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0047f98b: PUSH EBX
// 0047f98c: ADD EAX,0x158
// 0047f991: PUSH EAX
// 0047f992: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 0047f997: ADD ESP,0x8
// 0047f99a: POP EBX
// 0047f99b: RET
