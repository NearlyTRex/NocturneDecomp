// Name: core_texlist.cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0
// Address: 005dc6a0
// Address Range: [[005dc6a0, 005dc6b3]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0(CTextureList *this_ptr,uint master_index)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0(CTextureList *this_ptr,uint master_index)

{
  this_ptr->current_master_selection = master_index & 0xfff;
  return;
}
