// Name: core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620
// Address: 0041b620
// Address Range: [[0041b620, 0041b633]]
// Convention: __cdecl
// Signature: SBodyPartFire * core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620(SBodyPartFire * this_ptr)

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_ctor_FUN_0041b620(SBodyPartFire *this_ptr)

{
  CFlame *pCVar1;
  
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0((CFlame *)(this_ptr->field0_0x0 + 0xc));
  return (SBodyPartFire *)(pCVar1[-1].field12_0x290 + 8);
}
