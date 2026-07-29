// Name: core_actor.cpp_FUN_0040bce0
// Address: 0040bce0
// Address Range: [[0040bce0, 0040bd3b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_FUN_0040bce0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_FUN_0040bce0(CDemonActor *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim)

{
  CDemonActor *pCVar1;
  
  pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if ((pCVar1 == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) && (attack_flags != 0)) {
    if ((uint)attack_flags < 2) {
      xxx_unk_c_FUN_004940d0(INT_005b9284);
      return;
    }
    if (attack_flags == 2) {
      xxx_unk_c_FUN_004940d0(INT_005b9284);
      return;
    }
  }
  return;
}
