// Name: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041af50
// Address: 0041af50
// Address Range: [[0041af50, 0041af9a]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_0041af50(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_0041af50(CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  float fVar1;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aa60
            (&this_ptr->base,attack_flags,out_damage_info,victim);
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,15.0);
  out_damage_info->dismember_prob = 0.02;
  out_damage_info->damage_amount = fVar1;
  return;
}
