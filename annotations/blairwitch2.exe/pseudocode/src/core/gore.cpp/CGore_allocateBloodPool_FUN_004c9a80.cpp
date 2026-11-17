// Name: core_gore.cpp_CGore_allocateBloodPool_FUN_004c9a80
// Address: 004c9a80
// Address Range: [[004c9a80, 004c9ac2]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004c9a80(CGore *this_ptr)

#include "nocturne.h"

CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004c9a80(CGore *this_ptr)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01cdde3c + 1;
  pCVar1 = g_CBloodPool_ARRAY_01cdde44 + g_INT_01cdde3c;
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < g_INT_01cdde40) {
    g_INT_01cdde3c = iVar2;
    return pCVar1;
  }
  g_INT_01cdde40 = g_INT_01cdde40 + 1;
  g_INT_01cdde3c = iVar2;
  return pCVar1;
}
