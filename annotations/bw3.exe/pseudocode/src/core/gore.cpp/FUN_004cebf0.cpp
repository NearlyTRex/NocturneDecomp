// Name: core_gore.cpp_FUN_004cebf0
// Address: 004cebf0
// Address Range: [[004cebf0, 004cec37]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_FUN_004cebf0(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBloodPool * __cdecl core_gore_cpp_FUN_004cebf0(CGore *this_ptr)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = _DAT_01d4a93c + 1;
  pCVar1 = (CBloodPool *)(_DAT_01d4a93c * 0x2c + 0x1d4a944);
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < _DAT_01d4a940) {
    _DAT_01d4a93c = iVar2;
    return pCVar1;
  }
  _DAT_01d4a940 = _DAT_01d4a940 + 1;
  _DAT_01d4a93c = iVar2;
  return pCVar1;
}
