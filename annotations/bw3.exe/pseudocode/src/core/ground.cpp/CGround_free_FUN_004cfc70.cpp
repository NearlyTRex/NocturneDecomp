// Name: core_ground.cpp_CGround_free_FUN_004cfc70
// Address: 004cfc70
// Address Range: [[004cfc70, 004cfcc8]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_free_FUN_004cfc70(CGround *this_ptr)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_free_FUN_004cfc70(CGround *this_ptr)

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
    FUN_005a3770(*(int *)&this_ptr->field_0x24);
    *(uint *)&this_ptr->field_0x24 = 0;
    pCVar1 = *(CTextureList **)&this_ptr->field_0x28;
    if (pCVar1 == (CTextureList *)0x0) {
      *(uint *)&this_ptr->field_0x28 = 0;
      return;
    }
  }
  pCVar1 = core_texlist_cpp_CTextureList_dtor_FUN_005690b0(pCVar1,0);
  FUN_005a30c4(pCVar1);
  *(uint *)&this_ptr->field_0x28 = 0;
  return;
}
