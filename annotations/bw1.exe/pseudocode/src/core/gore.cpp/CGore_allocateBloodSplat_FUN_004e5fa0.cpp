// Name: core_gore.cpp_CGore_allocateBloodSplat_FUN_004e5fa0
// Address: 004e5fa0
// Address Range: [[004e5fa0, 004e5fe6]]
// Convention: __cdecl
// Signature: CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004e5fa0(CGore *this_ptr)

#include "nocturne.h"

CBloodSplat * __cdecl core_gore_cpp_CGore_allocateBloodSplat_FUN_004e5fa0(CGore *this_ptr)

{
  CBloodSplat *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01cd56ac + 1;
  pCVar1 = g_CBloodSplat_ARRAY_01cd56b4 + g_INT_01cd56ac;
  if (1999 < iVar2) {
    iVar2 = 0;
  }
  if (1999 < g_INT_01cd56b0) {
    g_INT_01cd56ac = iVar2;
    return pCVar1;
  }
  g_INT_01cd56b0 = g_INT_01cd56b0 + 1;
  g_INT_01cd56ac = iVar2;
  return pCVar1;
}
