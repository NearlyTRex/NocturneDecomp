// Name: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_00417ad0
// Address: 00417ad0
// Address Range: [[00417ad0, 00417b1a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00417ad0(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_00417ad0(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  uint uVar1;
  
  core_actor_cpp_FUN_0040ad50(this_ptr,attack_flags,out_damage_info,victim);
  uVar1 = core_actor_cpp_FUN_0040cf60(0x40a00000,0x41700000);
  *(uint *)(out_damage_info + 0x2c) = 0x3ca3d70a;
  *(uint *)(out_damage_info + 4) = uVar1;
  return;
}
