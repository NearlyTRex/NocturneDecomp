// Name: core_gore.cpp_CGore_allocateBloodSplat_FUN_004ce900
// Address: 004ce900
// Address Range: [[004ce900, 004ce948]]
// Convention: __cdecl
// Signature: CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004ce900(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004ce900(CGore *this_ptr)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = _DAT_01d276b4 + 1;
  pCVar1 = (CBloodSplat *)(_DAT_01d276b4 * 0x48 + 0x1d276bc);
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < _DAT_01d276b8) {
    _DAT_01d276b4 = iVar2;
    return pCVar1;
  }
  _DAT_01d276b8 = _DAT_01d276b8 + 1;
  _DAT_01d276b4 = iVar2;
  return pCVar1;
}
