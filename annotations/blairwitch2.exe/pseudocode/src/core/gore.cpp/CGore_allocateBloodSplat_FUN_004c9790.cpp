// Name: core_gore.cpp_CGore_allocateBloodSplat_FUN_004c9790
// Address: 004c9790
// Address Range: [[004c9790, 004c97d6]]
// Convention: __cdecl
// Signature: CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004c9790(CGore *this_ptr)

#include "nocturne.h"

CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004c9790(CGore *this_ptr)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = g_BloodSplatIndex + 1;
  pCVar1 = g_BloodSplats + g_BloodSplatIndex;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < g_BloodSplatCount) {
    g_BloodSplatIndex = iVar2;
    return pCVar1;
  }
  g_BloodSplatCount = g_BloodSplatCount + 1;
  g_BloodSplatIndex = iVar2;
  return pCVar1;
}
