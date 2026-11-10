// Name: core_ground.cpp_CGround_free_FUN_004cfc70
// Address: 004cfc70
// Address Range: [[004cfc70, 004cfcc8]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_free_FUN_004cfc70(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_free_FUN_004cfc70(CGround *this_ptr)

{
  CTextureList *pCVar1;
  
  if (this_ptr->terrain_data == (SGroundCell *)0x0) {
    pCVar1 = this_ptr->texture_list;
    if (pCVar1 == (CTextureList *)0x0) {
      this_ptr->texture_list = (CTextureList *)0x0;
      return;
    }
  }
  else {
    FUN_005a3770(this_ptr->terrain_data);
    this_ptr->terrain_data = (SGroundCell *)0x0;
    pCVar1 = this_ptr->texture_list;
    if (pCVar1 == (CTextureList *)0x0) {
      this_ptr->texture_list = (CTextureList *)0x0;
      return;
    }
  }
  pCVar1 = core_texlist_cpp_CTextureList_dtor_FUN_005690b0(pCVar1,0);
  FUN_005a30c4(pCVar1);
  this_ptr->texture_list = (CTextureList *)0x0;
  return;
}
