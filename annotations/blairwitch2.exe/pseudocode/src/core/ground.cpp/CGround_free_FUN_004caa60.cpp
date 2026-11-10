// Name: core_ground.cpp_CGround_free_FUN_004caa60
// Address: 004caa60
// Address Range: [[004caa60, 004caab8]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_free_FUN_004caa60(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_free_FUN_004caa60(CGround *this_ptr)

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
    FUN_005b86a0(this_ptr->terrain_data);
    this_ptr->terrain_data = (SGroundCell *)0x0;
    pCVar1 = this_ptr->texture_list;
    if (pCVar1 == (CTextureList *)0x0) {
      this_ptr->texture_list = (CTextureList *)0x0;
      return;
    }
  }
  pCVar1 = core_texlist_cpp_CTextureList_dtor_FUN_005734a0(pCVar1,0);
  FUN_005b7fdc(pCVar1);
  this_ptr->texture_list = (CTextureList *)0x0;
  return;
}
