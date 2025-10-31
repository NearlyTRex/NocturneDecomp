// Name: core_texlist.cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0
// Address: 005dc6a0
// Address Range: [[005dc6a0, 005dc6b3]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0(CTextureList * this_ptr, uint master_index)

#include "nocturne.h"

void __cdecl
core_texlist_cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0
          (CTextureList *this_ptr,uint master_index)

{
  this_ptr->current_master_selection = master_index & 0xfff;
  return;
}


// Assembly code:
// 005dc6a0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_texlist.cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0
//   XREF to: Stack[0x8] (READ)
// 005dc6a4: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005dc6a8: AND EAX,0xfff
// 005dc6ad: MOV dword ptr [EDX + 0x1a5e8],EAX
// 005dc6b3: RET
