// Name: wincore_windll.cpp_flushParticleList_FUN_005b79c0
// Address: 005b79c0
// Address Range: [[005b79c0, 005b79d2]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_flushParticleList_FUN_005b79c0(void)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_flushParticleList_FUN_005b79c0(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_flushParticleList)();
  return iVar1;
}
