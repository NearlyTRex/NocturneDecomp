// Name: core_ground.cpp_CGround_free_FUN_004b1470
// Address: 004b1470
// Address Range: [[004b1470, 004b14c8]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_free_FUN_004b1470(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_free_FUN_004b1470(CGround *this_ptr)

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
    free(this_ptr->terrain_data);
    this_ptr->terrain_data = (SGroundCell *)0x0;
    pCVar1 = this_ptr->texture_list;
    if (pCVar1 == (CTextureList *)0x0) {
      this_ptr->texture_list = (CTextureList *)0x0;
      return;
    }
  }
  pCVar1 = core_texlist_cpp_CTextureList_dtor_FUN_00544940(pCVar1,0);
  operator_delete(pCVar1);
  this_ptr->texture_list = (CTextureList *)0x0;
  return;
}
