// Name: shape_edittool.cpp_CInputString_init_FUN_0047ba60
// Address: 0047ba60
// Address Range: [[0047ba60, 0047bae9]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_init_FUN_0047ba60(CInputString *this_ptr,char *source_string,int max_length,int mask_mode)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_init_FUN_0047ba60(CInputString *this_ptr,char *source_string,int max_length,int mask_mode)

{
  CInputString CVar1;
  uint uVar2;
  CInputString *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  *(int *)(this_ptr + 300) = max_length;
  if (299 < (uint)max_length) {
    *(uint *)(this_ptr + 300) = 299;
  }
  memset(this_ptr,0,300);
  if (source_string == (char *)0x0) {
    *(uint *)(this_ptr + 0x130) = 0;
  }
  else {
    _strncpy((char *)this_ptr,source_string,*(SIZE_T *)(this_ptr + 300));
    uVar2 = 0xffffffff;
    pCVar3 = this_ptr;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      CVar1 = *pCVar3;
      pCVar3 = pCVar3 + (uint)bVar4 * -2 + 1;
    } while (CVar1 != (CInputString)0x0);
    *(uint *)(this_ptr + 0x130) = ~uVar2 - 1;
  }
  *(uint *)(this_ptr + 0x138) = 0;
  *(uint *)(this_ptr + 0x134) = *(uint *)(this_ptr + 0x130);
  *(int *)(this_ptr + 0x13c) = mask_mode;
  return;
}
