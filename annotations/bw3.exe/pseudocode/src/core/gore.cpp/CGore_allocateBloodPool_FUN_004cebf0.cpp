// Name: core_gore.cpp_CGore_allocateBloodPool_FUN_004cebf0
// Address: 004cebf0
// Address Range: [[004cebf0, 004cec37]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004cebf0(CGore *this_ptr)

#include "nocturne.h"

CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004cebf0(CGore *this_ptr)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01d4a93c + 1;
  pCVar1 = g_CBloodPool_ARRAY_01d4a944 + g_INT_01d4a93c;
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < g_INT_01d4a940) {
    g_INT_01d4a93c = iVar2;
    return pCVar1;
  }
  g_INT_01d4a940 = g_INT_01d4a940 + 1;
  g_INT_01d4a93c = iVar2;
  return pCVar1;
}
