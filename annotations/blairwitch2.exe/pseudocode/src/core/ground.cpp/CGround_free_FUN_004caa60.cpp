// Name: core_ground.cpp_CGround_free_FUN_004caa60
// Address: 004caa60
// Address Range: [[004caa60, 004caab8]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_free_FUN_004caa60(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_free_FUN_004caa60(CGround *this_ptr)

{
  CTextureList *pCVar1;
  
  if (*(int *)&this_ptr->field_0x24 == 0) {
    pCVar1 = *(CTextureList **)&this_ptr->field_0x28;
    if (pCVar1 == (CTextureList *)0x0) {
      *(uint *)&this_ptr->field_0x28 = 0;
      return;
    }
  }
  else {
    FUN_005b86a0(*(int *)&this_ptr->field_0x24);
    *(uint *)&this_ptr->field_0x24 = 0;
    pCVar1 = *(CTextureList **)&this_ptr->field_0x28;
    if (pCVar1 == (CTextureList *)0x0) {
      *(uint *)&this_ptr->field_0x28 = 0;
      return;
    }
  }
  pCVar1 = core_texlist_cpp_CTextureList_dtor_FUN_005734a0(pCVar1,0);
  FUN_005b7fdc(pCVar1);
  *(uint *)&this_ptr->field_0x28 = 0;
  return;
}
