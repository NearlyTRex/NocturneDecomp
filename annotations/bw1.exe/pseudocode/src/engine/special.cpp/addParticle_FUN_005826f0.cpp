// Name: engine_special.cpp_addParticle_FUN_005826f0
// Address: 005826f0
// Address Range: [[005826f0, 00582711]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_addParticle_FUN_005826f0(void *particle_data,int particle_type)

#include "nocturne.h"

int __cdecl engine_special_cpp_addParticle_FUN_005826f0(void *particle_data,int particle_type)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c833d8)(particle_data,particle_type);
  return iVar1;
}
