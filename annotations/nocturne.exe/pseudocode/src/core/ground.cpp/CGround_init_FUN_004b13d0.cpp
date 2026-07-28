// Name: core_ground.cpp_CGround_init_FUN_004b13d0
// Address: 004b13d0
// Address Range: [[004b13d0, 004b1466]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_init_FUN_004b13d0(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_init_FUN_004b13d0(CGround *this_ptr)

{
  SGroundCell *pSVar1;
  CTextureList *this_ptr_00;
  CTextureList *pCVar2;
  
  core_ground_cpp_CGround_free_FUN_004b1470(this_ptr);
  pSVar1 = (SGroundCell *)malloc(this_ptr->width * this_ptr->height * 4);
  this_ptr->terrain_data = pSVar1;
  if (pSVar1 == (SGroundCell *)0x0) {
    PTR_01cc4800 = "..\\core\\ground.cpp";
    INT_01cc4804 = 0xd3;
    core_main_c_FUN_004c8440("CGround::init - Out of memory");
  }
  this_ptr_00 = (CTextureList *)FUN_0056497c(0x6d64);
  pCVar2 = (CTextureList *)0x0;
  if (this_ptr_00 != (CTextureList *)0x0) {
    pCVar2 = core_texlist_cpp_CTextureList_ctor_FUN_00544930(this_ptr_00);
  }
  this_ptr->texture_list = pCVar2;
  if (pCVar2 != (CTextureList *)0x0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\ground.cpp";
  INT_01cc4804 = 0xd8;
  core_main_c_FUN_004c8440("CGround::init - Out of memory2");
  return;
}
