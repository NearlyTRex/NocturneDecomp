// Name: core_bodypart.cpp_SBodyPartFire_ctor_FUN_004180a0
// Address: 004180a0
// Address Range: [[004180a0, 004180b3]]
// Convention: unknown
// Signature: int * core_bodypart_cpp_SBodyPartFire_ctor_FUN_004180a0(int param_1)

#include "nocturne.h"

int * core_bodypart_cpp_SBodyPartFire_ctor_FUN_004180a0(int param_1)

{
  CFlame *pCVar1;
  
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_0048cf60((CFlame *)(param_1 + 0xc));
  return &pCVar1[-1].do_visibility_check;
}
