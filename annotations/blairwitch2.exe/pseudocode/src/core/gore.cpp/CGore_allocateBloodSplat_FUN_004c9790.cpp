// Name: core_gore.cpp_CGore_allocateBloodSplat_FUN_004c9790
// Address: 004c9790
// Address Range: [[004c9790, 004c97d6]]
// Convention: __cdecl
// Signature: CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004c9790(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004c9790(CGore *this_ptr)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = _DAT_01cbcaf4 + 1;
  pCVar1 = (CBloodSplat *)(_DAT_01cbcaf4 * 0x44 + 0x1cbcafc);
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < _DAT_01cbcaf8) {
    _DAT_01cbcaf4 = iVar2;
    return pCVar1;
  }
  _DAT_01cbcaf8 = _DAT_01cbcaf8 + 1;
  _DAT_01cbcaf4 = iVar2;
  return pCVar1;
}
