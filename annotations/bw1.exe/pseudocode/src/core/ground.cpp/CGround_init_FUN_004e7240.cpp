// Name: core_ground.cpp_CGround_init_FUN_004e7240
// Address: 004e7240
// Address Range: [[004e7240, 004e72d6]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_init_FUN_004e7240(CGround *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ground_cpp_CGround_init_FUN_004e7240(CGround *this_ptr)

{
  SGroundCell *pSVar1;
  CTextureList *this_ptr_00;
  CTextureList *pCVar2;
  
  core_ground_cpp_CGround_free_FUN_004e72e0(this_ptr);
  pSVar1 = FUN_005c08d0(this_ptr->width * this_ptr->height * 4);
  this_ptr->terrain_data = pSVar1;
  if (pSVar1 == (SGroundCell *)0x0) {
    _DAT_01d1d400 = "..\\core\\ground.cpp";
    _DAT_01d1d404 = 0xd5;
    core_main_c_FUN_005030e0("CGround::init - Out of memory");
  }
  this_ptr_00 = (CTextureList *)debugAllocTracked1(0x6d64);
  pCVar2 = (CTextureList *)0x0;
  if (this_ptr_00 != (CTextureList *)0x0) {
    pCVar2 = core_texlist_cpp_CTextureList_ctor_FUN_005960b0(this_ptr_00);
  }
  this_ptr->texture_list = pCVar2;
  if (pCVar2 != (CTextureList *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\ground.cpp";
  _DAT_01d1d404 = 0xda;
  core_main_c_FUN_005030e0("CGround::init - Out of memory2");
  return;
}
