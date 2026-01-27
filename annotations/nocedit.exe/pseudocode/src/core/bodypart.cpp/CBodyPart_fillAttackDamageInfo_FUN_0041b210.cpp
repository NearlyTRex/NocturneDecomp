// Name: core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210
// Address: 0041b210
// Address Range: [[0041b210, 0041b23f]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210(CBodyPart * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)

#include "nocturne.h"

void __cdecl
core_bodypart_cpp_CBodyPart_fillAttackDamageInfo_FUN_0041b210
          (CBodyPart *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  float fVar1;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
            (&this_ptr->base,attack_flags,out_damage_info,victim);
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,15.0);
  out_damage_info->weapon_damage_modifier = 0.02;
  out_damage_info->damage_amount = fVar1;
  return;
}
