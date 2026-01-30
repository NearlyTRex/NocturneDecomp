// Name: core_drip.cpp_FUN_0048e8d0
// Address: 0048e8d0
// Address Range: [[0048e8d0, 0048e921]]
// Convention: __cdecl
// Signature: int __cdecl core_drip_cpp_FUN_0048e8d0(void)

#include "nocturne.h"

/* Signature: byte actors_other_drip.cpp_FUN_0048e8d0(uint param_1) */

int __cdecl core_drip_cpp_FUN_0048e8d0(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  CDemonActor *in_stack_00000004;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CDripClassInfo.name_hash)
  ;
  fVar1 = pCVar2[2].location.position.y;
  if (fVar1 == 0.0) {
    pCVar2[2].location.position.y = 1.4013e-45;
  }
  else {
    if (fVar1 != 1.4013e-45) {
      pCVar2[2].location.position.y = 0.0;
      return 1;
    }
    pCVar2[2].location.position.y = 2.8026e-45;
  }
  return 1;
}
