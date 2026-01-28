// Name: core_gore.cpp_FUN_004edaf0
// Address: 004edaf0
// Address Range: [[004edaf0, 004edb36]]
// Convention: unknown
// Signature: CBloodSplat * core_gore_cpp_FUN_004edaf0(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004edaf0() */

CBloodSplat * core_gore_cpp_FUN_004edaf0(void)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = DAT_02d873d4 + 1;
  pCVar1 = DAT_02d873dc + DAT_02d873d4;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < DAT_02d873d8) {
    DAT_02d873d4 = iVar2;
    return pCVar1;
  }
  DAT_02d873d8 = DAT_02d873d8 + 1;
  DAT_02d873d4 = iVar2;
  return pCVar1;
}
