// Name: core_gore.cpp_CGore_allocateBloodPool_FUN_004edde0
// Address: 004edde0
// Address Range: [[004edde0, 004ede22]]
// Convention: __cdecl
// Signature: CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004edde0(CGore *this_ptr)

#include "nocturne.h"

CBloodPool * __cdecl core_gore_cpp_CGore_allocateBloodPool_FUN_004edde0(CGore *this_ptr)

{
  CBloodPool *pCVar1;
  int iVar2;
  
  iVar2 = g_BloodPoolIndex + 1;
  pCVar1 = g_BloodPools + g_BloodPoolIndex;
  if (0x1f < iVar2) {
    iVar2 = 0;
  }
  if (0x1f < g_BloodPoolCount) {
    g_BloodPoolIndex = iVar2;
    return pCVar1;
  }
  g_BloodPoolCount = g_BloodPoolCount + 1;
  g_BloodPoolIndex = iVar2;
  return pCVar1;
}
