// Name: engine_special.cpp_addParticle_FUN_005b7990
// Address: 005b7990
// Address Range: [[005b7990, 005b79b1]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_addParticle_FUN_005b7990(void *particle_data,int particle_type)

#include "nocturne.h"

int __cdecl engine_special_cpp_addParticle_FUN_005b7990(void *particle_data,int particle_type)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_addParticle)(particle_data,particle_type);
  return iVar1;
}
