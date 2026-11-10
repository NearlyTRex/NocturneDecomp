// Name: core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aa60
// Address: 0040aa60
// Address Range: [[0040aa60, 0040aa9f]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aa60(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aa60(CDemonActor *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  CDemonActor *pCVar1;
  
  *(uint *)(out_damage_info + 4) = 0x40a00000;
  *(uint *)(out_damage_info + 0x30) = 0x67;
  *(uint *)(out_damage_info + 0x2c) = 0x3e4ccccd;
  *(uint *)(out_damage_info + 8) = 0x3ecccccd;
  *(CDemonActor **)(out_damage_info + 0x34) = this_ptr;
  pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  *(CDemonActor **)(out_damage_info + 0x38) = pCVar1;
  return;
}
