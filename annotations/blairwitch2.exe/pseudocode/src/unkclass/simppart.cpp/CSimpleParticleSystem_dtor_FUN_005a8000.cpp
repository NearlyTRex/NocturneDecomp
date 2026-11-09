// Name: unkclass_simppart.cpp_CSimpleParticleSystem_dtor_FUN_005a8000
// Address: 005a8000
// Address Range: [[005a8000, 005a8026]]
// Convention: unknown
// Signature: CSimpleParticleSystem * unkclass_simppart_cpp_CSimpleParticleSystem_dtor_FUN_005a8000(CSimpleParticleSystem *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSimpleParticleSystem * unkclass_simppart_cpp_CSimpleParticleSystem_dtor_FUN_005a8000(CSimpleParticleSystem *this_ptr,uint flags)

{
  *(uint *)&this_ptr->field_0x40 = 0x6002e4;
  if (*(int *)&this_ptr->field_0x38 == 0) {
    return this_ptr;
  }
  FUN_005b86a0(*(uint *)&this_ptr->field_0x3c);
  return this_ptr;
}
