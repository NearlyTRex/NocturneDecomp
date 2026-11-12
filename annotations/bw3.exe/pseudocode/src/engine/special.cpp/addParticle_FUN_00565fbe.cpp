// Name: engine_special.cpp_addParticle_FUN_00565fbe
// Address: 00565fbe
// Address Range: [[00565fbe, 00565fe1]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_addParticle_FUN_00565fbe(void *particle_data,int particle_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_addParticle_FUN_00565fbe(void *particle_data,int particle_type)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6034)(particle_data,particle_type);
  return iVar1;
}
