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
  
  iVar2 = g_INT_01cbcaf4 + 1;
  pCVar1 = g_CBloodSplat_ARRAY_01cbcafc + g_INT_01cbcaf4;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < g_INT_01cbcaf8) {
    g_INT_01cbcaf4 = iVar2;
    return pCVar1;
  }
  g_INT_01cbcaf8 = g_INT_01cbcaf8 + 1;
  g_INT_01cbcaf4 = iVar2;
  return pCVar1;
}
