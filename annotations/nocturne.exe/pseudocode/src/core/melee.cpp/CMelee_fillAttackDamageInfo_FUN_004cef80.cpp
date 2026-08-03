// Name: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_004cef80
// Address: 004cef80
// Address Range: [[004cef80, 004cefd3]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_004cef80(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_004cef80(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  float fVar1;
  int unaff_ESI;
  CDemonActor *in_stack_fffffff4;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0
            ((CDemonActor *)this_ptr,attack_flags,out_damage_info,victim);
  fVar1 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                           ((CCharacter *)this_ptr,in_stack_fffffff4,unaff_ESI);
  out_damage_info->damage_amount = fVar1;
  out_damage_info->dismember_prob = this_ptr->dismember_prob;
  out_damage_info->ammo_type = this_ptr->ammo_type;
  return;
}
