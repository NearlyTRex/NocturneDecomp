// Name: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041af50
// Address: 0041af50
// Address Range: [[0041af50, 0041af9a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_0041af50(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_0041af50(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  uint uVar1;
  
  core_actor_cpp_FUN_0040aa60(this_ptr,attack_flags,out_damage_info,victim);
  uVar1 = core_actor_cpp_FUN_0040cc00(0x40a00000,0x41700000);
  *(uint *)(out_damage_info + 0x2c) = 0x3ca3d70a;
  *(uint *)(out_damage_info + 4) = uVar1;
  return;
}
