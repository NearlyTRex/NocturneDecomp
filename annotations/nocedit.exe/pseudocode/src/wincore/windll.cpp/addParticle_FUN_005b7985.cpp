// Name: wincore_windll.cpp_addParticle_FUN_005b7985
// Address: 005b7985
// Address Range: [[005b7985, 005b79b1]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_addParticle_FUN_005b7985(void *particle_data,int particle_type)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_addParticle_FUN_005b7985(void *particle_data,int particle_type)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_addParticle)(particle_data,particle_type);
  return iVar1;
}
