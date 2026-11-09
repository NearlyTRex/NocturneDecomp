// Name: core_gore.cpp_CGore_allocateBloodSplat_FUN_004e5fa0
// Address: 004e5fa0
// Address Range: [[004e5fa0, 004e5fe6]]
// Convention: __cdecl
// Signature: CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004e5fa0(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004e5fa0(CGore *this_ptr)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = _DAT_01cd56ac + 1;
  pCVar1 = (CBloodSplat *)(_DAT_01cd56ac * 0x44 + 0x1cd56b4);
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < _DAT_01cd56b0) {
    _DAT_01cd56ac = iVar2;
    return pCVar1;
  }
  _DAT_01cd56b0 = _DAT_01cd56b0 + 1;
  _DAT_01cd56ac = iVar2;
  return pCVar1;
}
