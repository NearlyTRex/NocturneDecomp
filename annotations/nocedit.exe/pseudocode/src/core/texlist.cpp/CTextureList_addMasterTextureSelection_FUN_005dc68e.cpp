// Name: core_texlist.cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e
// Address: 005dc68e
// Address Range: [[005dc68e, 005dc69f]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e(CTextureList * this_ptr)
// Function calls:
//   core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0

#include "nocturne.h"

void __cdecl
core_texlist_cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e(CTextureList *this_ptr)

{
  core_texlist_cpp_CTextureList_addTextureSelection_FUN_005dc5e0(this_ptr,(char *)0x0);
  return;
}


// Assembly code:
// 005dc68e: MOV EBX,EBX
//   Label: core_texlist.cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e
// 005dc690: PUSH 0x0
// 005dc692: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dc696: PUSH EDX
// 005dc697: CALL core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0
//   XREF to: 005dc5e0 (UNCONDITIONAL_CALL)
// 005dc69c: ADD ESP,0x8
// 005dc69f: RET
