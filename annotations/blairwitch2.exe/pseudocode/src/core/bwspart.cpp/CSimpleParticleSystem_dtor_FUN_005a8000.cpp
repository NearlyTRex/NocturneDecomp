// Name: core_bwspart.cpp_CSimpleParticleSystem_dtor_FUN_005a8000
// Address: 005a8000
// Address Range: [[005a8000, 005a8026]]
// Convention: __cdecl
// Signature: CSimpleParticleSystem * __cdecl core_bwspart_cpp_CSimpleParticleSystem_dtor_FUN_005a8000(CSimpleParticleSystem *this_ptr,uint flags)

#include "nocturne.h"

CSimpleParticleSystem * __cdecl core_bwspart_cpp_CSimpleParticleSystem_dtor_FUN_005a8000(CSimpleParticleSystem *this_ptr,uint flags)

{
  this_ptr->vtable = &g_PTR_006002e4;
  if (this_ptr->standalone == 0) {
    return this_ptr;
  }
  debugFree(this_ptr->particles);
  return this_ptr;
}
