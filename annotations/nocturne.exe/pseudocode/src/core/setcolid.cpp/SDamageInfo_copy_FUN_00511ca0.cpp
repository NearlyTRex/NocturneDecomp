// Name: core_setcolid.cpp_SDamageInfo_copy_FUN_00511ca0
// Address: 00511ca0
// Address Range: [[00511ca0, 00511d1c]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_SDamageInfo_copy_FUN_00511ca0(SDamageInfo *this_ptr,SDamageInfo *other)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_SDamageInfo_copy_FUN_00511ca0(SDamageInfo *this_ptr,SDamageInfo *other)

{
  this_ptr->hit_part_index = other->hit_part_index;
  this_ptr->damage_amount = other->damage_amount;
  this_ptr->gore_multiplier = other->gore_multiplier;
  (this_ptr->impact_point).x = (other->impact_point).x;
  (this_ptr->impact_point).y = (other->impact_point).y;
  (this_ptr->impact_point).z = (other->impact_point).z;
  this_ptr->impact_force = other->impact_force;
  (this_ptr->impact_direction).x = (other->impact_direction).x;
  (this_ptr->impact_direction).y = (other->impact_direction).y;
  (this_ptr->impact_direction).z = (other->impact_direction).z;
  this_ptr->ammo_type = other->ammo_type;
  this_ptr->dismember_prob = other->dismember_prob;
  this_ptr->damage_type = other->damage_type;
  this_ptr->attacker = other->attacker;
  this_ptr->wielder = other->wielder;
  return;
}
