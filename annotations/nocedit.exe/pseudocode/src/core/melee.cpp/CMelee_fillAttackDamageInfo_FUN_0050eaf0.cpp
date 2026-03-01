// Name: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_0050eaf0
// Address: 0050eaf0
// Address Range: [[0050eaf0, 0050eb43]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_0050eaf0(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_0050eaf0(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  float fVar1;
  int unaff_ESI;
  CDemonActor *in_stack_fffffff4;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
            ((CDemonActor *)this_ptr,attack_flags,out_damage_info,victim);
  fVar1 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                           ((CCharacter *)this_ptr,in_stack_fffffff4,unaff_ESI);
  out_damage_info->damage_amount = fVar1;
  out_damage_info->weapon_damage_modifier = this_ptr->dismember_prob;
  out_damage_info->ammo_type = this_ptr->damage_type;
  return;
}
