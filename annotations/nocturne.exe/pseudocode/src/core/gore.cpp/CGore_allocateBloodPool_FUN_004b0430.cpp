// Name: core_gore.cpp_CGore_allocateBloodPool_FUN_004b0430
// Address: 004b0430
// Address Range: [[004b0430, 004b0472]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004b0430(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004b0430(CGore *this_ptr)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = _DAT_01c9e034 + 1;
  pCVar1 = (CBloodPool *)(_DAT_01c9e034 * 0x28 + 0x1c9e03c);
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < _DAT_01c9e038) {
    _DAT_01c9e034 = iVar2;
    return pCVar1;
  }
  _DAT_01c9e038 = _DAT_01c9e038 + 1;
  _DAT_01c9e034 = iVar2;
  return pCVar1;
}
