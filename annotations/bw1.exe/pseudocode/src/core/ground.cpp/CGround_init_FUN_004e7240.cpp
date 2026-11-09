// Name: core_ground.cpp_CGround_init_FUN_004e7240
// Address: 004e7240
// Address Range: [[004e7240, 004e72d6]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_init_FUN_004e7240(CGround *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ground_cpp_CGround_init_FUN_004e7240(CGround *this_ptr)

{
  void *pvVar1;
  CTextureList *this_ptr_00;
  CTextureList *pCVar2;
  
  core_ground_cpp_CGround_free_FUN_004e72e0(this_ptr);
  pvVar1 = FUN_005c08d0(*(int *)this_ptr * *(int *)&this_ptr->field_0x4 * 4);
  *(void **)&this_ptr->field_0x24 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d1d400 = "..\\core\\ground.cpp";
    _DAT_01d1d404 = 0xd5;
    core_main_c_FUN_005030e0("CGround::init - Out of memory");
  }
  this_ptr_00 = (CTextureList *)FUN_005c0f32(0x6d64);
  pCVar2 = (CTextureList *)0x0;
  if (this_ptr_00 != (CTextureList *)0x0) {
    pCVar2 = core_texlist_cpp_CTextureList_ctor_FUN_005960b0(this_ptr_00);
  }
  *(CTextureList **)&this_ptr->field_0x28 = pCVar2;
  if (pCVar2 != (CTextureList *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\ground.cpp";
  _DAT_01d1d404 = 0xda;
  core_main_c_FUN_005030e0("CGround::init - Out of memory2");
  return;
}
