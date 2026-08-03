// Name: core_gore.cpp_CGore_allocateBloodSplat_FUN_004b0140
// Address: 004b0140
// Address Range: [[004b0140, 004b0186]]
// Convention: __cdecl
// Signature: CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004b0140(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004b0140(CGore *this_ptr)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = _DAT_01c7ccec + 1;
  pCVar1 = g_CBloodSplat_ARRAY_01c7ccf4 + _DAT_01c7ccec;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < _DAT_01c7ccf0) {
    _DAT_01c7ccec = iVar2;
    return pCVar1;
  }
  _DAT_01c7ccf0 = _DAT_01c7ccf0 + 1;
  _DAT_01c7ccec = iVar2;
  return pCVar1;
}
