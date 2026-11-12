// Name: core_doc.cpp_CDoc_getCarryLightIntensity_FUN_0046c980
// Address: 0046c980
// Address Range: [[0046c980, 0046c9cf]]
// Convention: __cdecl
// Signature: float __cdecl core_doc_cpp_CDoc_getCarryLightIntensity_FUN_0046c980(CDoc *this_ptr)

#include "nocturne.h"

float __cdecl core_doc_cpp_CDoc_getCarryLightIntensity_FUN_0046c980(CDoc *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                     ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007c5330);
  if ((pCVar1 != (CDemonActor *)0x0) &&
     ((pCVar1[4].blood_effect_color == 2 || (pCVar1[4].blood_effect_color == 3)))) {
    return -1.0471976;
  }
  return -1.5629814;
}
