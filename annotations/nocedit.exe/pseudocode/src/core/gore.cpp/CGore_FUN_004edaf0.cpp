// Name: core_gore.cpp_CGore_FUN_004edaf0
// Address: 004edaf0
// Address Range: [[004edaf0, 004edb36]]
// Convention: __cdecl
// Signature: CBloodSplat * __cdecl core_gore_cpp_CGore_FUN_004edaf0(CGore *this_ptr)

#include "nocturne.h"

CBloodSplat * __cdecl core_gore_cpp_CGore_FUN_004edaf0(CGore *this_ptr)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = DAT_02d873d4 + 1;
  pCVar1 = DAT_02d873dc + DAT_02d873d4;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < INT_02d873d8) {
    DAT_02d873d4 = iVar2;
    return pCVar1;
  }
  INT_02d873d8 = INT_02d873d8 + 1;
  DAT_02d873d4 = iVar2;
  return pCVar1;
}
