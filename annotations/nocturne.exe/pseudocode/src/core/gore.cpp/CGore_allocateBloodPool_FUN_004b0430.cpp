// Name: core_gore.cpp_CGore_allocateBloodPool_FUN_004b0430
// Address: 004b0430
// Address Range: [[004b0430, 004b0472]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004b0430(CGore *this_ptr)

#include "nocturne.h"

CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004b0430(CGore *this_ptr)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01c9e034 + 1;
  pCVar1 = g_CBloodPool_ARRAY_01c9e03c + g_INT_01c9e034;
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < g_INT_01c9e038) {
    g_INT_01c9e034 = iVar2;
    return pCVar1;
  }
  g_INT_01c9e038 = g_INT_01c9e038 + 1;
  g_INT_01c9e034 = iVar2;
  return pCVar1;
}
