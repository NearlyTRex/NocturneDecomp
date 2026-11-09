// Name: engine_texture.cpp_FUN_005739b0
// Address: 005739b0
// Address Range: [[005739b0, 00573a55]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_FUN_005739b0(CTextureCache *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_FUN_005739b0(CTextureCache *this_ptr)

{
  code *pcVar1;
  CTextureCache *pCVar2;
  
  *(uint *)(this_ptr + 0x18008) = 0;
  pCVar2 = this_ptr + 4;
  *(uint *)(this_ptr + 0x18004) = 0;
  do {
    if (*(int *)(pCVar2 + 0x44) != 0) {
      FUN_005b86a0(*(int *)(pCVar2 + 0x44));
    }
    if (*(int *)(pCVar2 + 0x48) != 0) {
      FUN_005b86a0(*(int *)(pCVar2 + 0x48));
    }
    if (*(int *)(pCVar2 + 0x4c) != 0) {
      FUN_005b86a0(*(int *)(pCVar2 + 0x4c));
    }
    if (*(int *)(pCVar2 + 0x50) != 0) {
      FUN_005b86a0(*(int *)(pCVar2 + 0x50));
    }
    pCVar2 = pCVar2 + 0x60;
  } while (pCVar2 != this_ptr + 0x18004);
  memset(this_ptr + 4,0,0x18000);
  pcVar1 = _DAT_0264bcbc;
  *(uint *)this_ptr = 0;
  if (pcVar1 == (code *)0x0) {
    return;
  }
  (*_DAT_0264bcbc)();
  return;
}
