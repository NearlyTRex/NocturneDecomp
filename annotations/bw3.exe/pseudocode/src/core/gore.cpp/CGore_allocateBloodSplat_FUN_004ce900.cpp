// Name: core_gore.cpp_CGore_allocateBloodSplat_FUN_004ce900
// Address: 004ce900
// Address Range: [[004ce900, 004ce948]]
// Convention: __cdecl
// Signature: CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004ce900(CGore *this_ptr)

#include "nocturne.h"

CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004ce900(CGore *this_ptr)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01d276b4 + 1;
  pCVar1 = g_CBloodSplat_ARRAY_01d276bc + g_INT_01d276b4;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < g_INT_01d276b8) {
    g_INT_01d276b4 = iVar2;
    return pCVar1;
  }
  g_INT_01d276b8 = g_INT_01d276b8 + 1;
  g_INT_01d276b4 = iVar2;
  return pCVar1;
}
