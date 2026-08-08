// Name: engine_special.cpp_flushParticleList_FUN_00532930
// Address: 00532930
// Address Range: [[00532930, 00532942]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_flushParticleList_FUN_00532930(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_flushParticleList_FUN_00532930(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_flushParticleList)();
  return iVar1;
}
