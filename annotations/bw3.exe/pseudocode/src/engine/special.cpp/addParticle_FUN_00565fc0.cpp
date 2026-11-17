// Name: engine_special.cpp_addParticle_FUN_00565fc0
// Address: 00565fc0
// Address Range: [[00565fc0, 00565fe1]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_addParticle_FUN_00565fc0(void *particle_data,int particle_type)

#include "nocturne.h"

int __cdecl engine_special_cpp_addParticle_FUN_00565fc0(void *particle_data,int particle_type)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_addParticle)(particle_data,particle_type);
  return iVar1;
}
