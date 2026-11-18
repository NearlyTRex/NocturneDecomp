// Name: engine_special.cpp_addParticle_FUN_0055fc9e
// Address: 0055fc9e
// Address Range: [[0055fc9e, 0055fcc1]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_addParticle_FUN_0055fc9e(void *particle_data,int particle_type)

#include "nocturne.h"

int __cdecl engine_special_cpp_addParticle_FUN_0055fc9e(void *particle_data,int particle_type)

{
  int iVar1;
  
  if (g_INT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc08)(particle_data,particle_type);
  return iVar1;
}
