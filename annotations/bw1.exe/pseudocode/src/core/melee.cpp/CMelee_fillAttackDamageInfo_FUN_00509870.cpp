// Name: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_00509870
// Address: 00509870
// Address Range: [[00509870, 005098c3]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_00509870(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_00509870(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  uint uVar1;
  
  core_actor_cpp_FUN_0040aa60(this_ptr,attack_flags,out_damage_info,victim);
  uVar1 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0xec))(this_ptr);
  *(uint *)(out_damage_info + 4) = uVar1;
  *(uint *)(out_damage_info + 0x2c) = *(uint *)&this_ptr->field_0x584;
  *(uint *)(out_damage_info + 0x28) = *(uint *)&this_ptr->field_0x59c;
  return;
}
