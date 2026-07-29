// Name: core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_00497810
// Address: 00497810
// Address Range: [[00497810, 0049785f]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_00497810(CGabriella *this_ptr)

#include "nocturne.h"

float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_00497810(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     ((this_ptr->base).base.carry_hands[0].carry_actor,
                      g_CLightActorActorType_00764a9c.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && ((pCVar1[4].dead2 == 2 || (pCVar1[4].dead2 == 3)))) {
    return -1.0471976;
  }
  return -1.5629814;
}
