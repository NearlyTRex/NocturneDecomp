// Name: core_gore.cpp_CGore_allocateBloodPool_FUN_004e6290
// Address: 004e6290
// Address Range: [[004e6290, 004e62d2]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004e6290(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004e6290(CGore *this_ptr)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = _DAT_01cf69f4 + 1;
  pCVar1 = (CBloodPool *)(_DAT_01cf69f4 * 0x28 + 0x1cf69fc);
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < _DAT_01cf69f8) {
    _DAT_01cf69f4 = iVar2;
    return pCVar1;
  }
  _DAT_01cf69f8 = _DAT_01cf69f8 + 1;
  _DAT_01cf69f4 = iVar2;
  return pCVar1;
}
