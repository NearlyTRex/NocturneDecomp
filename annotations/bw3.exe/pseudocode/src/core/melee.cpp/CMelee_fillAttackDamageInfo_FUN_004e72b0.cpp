// Name: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_004e72b0
// Address: 004e72b0
// Address Range: [[004e72b0, 004e7303]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_004e72b0(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_004e72b0(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  int iVar1;
  int unaff_ESI;
  CDemonActor *in_stack_fffffff4;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0
            ((CDemonActor *)this_ptr,attack_flags,out_damage_info,victim);
  iVar1 = (*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                    ((CCharacter *)this_ptr,in_stack_fffffff4,unaff_ESI);
  *(int *)(out_damage_info + 4) = iVar1;
  *(float *)(out_damage_info + 0x2c) = this_ptr->dismember_prob;
  *(EAmmoType *)(out_damage_info + 0x28) = this_ptr->ammo_type;
  return;
}
