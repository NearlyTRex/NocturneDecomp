// Name: core_gore.cpp_FUN_004edde0
// Address: 004edde0
// Address Range: [[004edde0, 004ede22]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_FUN_004edde0(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004edde0() */

CBloodPool * __cdecl core_gore_cpp_FUN_004edde0(void)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = DAT_02da871c + 1;
  pCVar1 = DAT_02da8724 + DAT_02da871c;
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < DAT_02da8720) {
    DAT_02da871c = iVar2;
    return pCVar1;
  }
  DAT_02da8720 = DAT_02da8720 + 1;
  DAT_02da871c = iVar2;
  return pCVar1;
}
