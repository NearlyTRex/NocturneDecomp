// Name: core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004af900
// Address: 004af900
// Address Range: [[004af900, 004af94f]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004af900(CGabriella *this_ptr)

#include "nocturne.h"

float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004af900(CGabriella *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    ((this_ptr->base).base.carry_hands[0].carry_actor,DAT_007bcc84);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x7d4) == 2 || (*(int *)(iVar1 + 0x7d4) == 3)))) {
    return -1.0471976;
  }
  return -1.5629814;
}
