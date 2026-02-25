// Name: core_melee.cpp_CMelee_getPropertyList_FUN_0050ecf0
// Address: 0050ecf0
// Address Range: [[0050ecf0, 0050edec]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_getPropertyList_FUN_0050ecf0(CMelee *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_getPropertyList_FUN_0050ecf0(CMelee *this_ptr,CActorPropertyList *property_list)

{
  core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addFlags_FUN_0040e6a0
            (property_list,"Allowed attack types",&this_ptr->allowed_attack_types);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Attack strength lo",&this_ptr->strength_lo,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Attack strength hi",&this_ptr->strength_hi,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Can attach light",&(this_ptr->base).can_attach_light);
  core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
            (property_list,"Dismember prob 0.0 to 1.0",&this_ptr->dismember_prob,0.0,1.0,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Can go in inventory",&this_ptr->can_go_in_inventory);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Damage type",9,g_MeleeDamageTypePairs,&this_ptr->damage_type);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"thrustHitCharacterSound",this_ptr->thrust_hit_character_sound);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"swingHitCharacterSound",this_ptr->swing_hit_character_sound);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"hitOtherSound",this_ptr->hit_other_sound);
  return;
}
