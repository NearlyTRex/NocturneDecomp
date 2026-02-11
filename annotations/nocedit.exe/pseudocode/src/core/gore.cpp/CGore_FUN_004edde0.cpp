// Name: core_gore.cpp_CGore_FUN_004edde0
// Address: 004edde0
// Address Range: [[004edde0, 004ede22]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_CGore_FUN_004edde0(CGore *ptr)

#include "nocturne.h"

CBloodPool * __cdecl core_gore_cpp_CGore_FUN_004edde0(CGore *ptr)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = DAT_02da871c + 1;
  pCVar1 = DAT_02da8724 + DAT_02da871c;
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < INT_02da8720) {
    DAT_02da871c = iVar2;
    return pCVar1;
  }
  INT_02da8720 = INT_02da8720 + 1;
  DAT_02da871c = iVar2;
  return pCVar1;
}
