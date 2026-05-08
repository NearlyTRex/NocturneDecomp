// Name: core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
// Address: 00427db0
// MANUAL RECONSTRUCTION
// Address Range: [[00427db0, 00427e15]]
// Convention: __cdecl
// Signature: SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo *this_ptr)

#include "nocturne.h"

SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo *this_ptr)

{
  this_ptr->ammo_type = AMMO_TYPE_GENERIC;
  this_ptr->dismember_prob = 0.0;
  this_ptr->hit_part_index = -1;
  this_ptr->gore_multiplier = 0.0;
  (this_ptr->impact_point).x = 0.0;
  (this_ptr->impact_point).y = 0.0;
  (this_ptr->impact_point).z = 0.0;
  this_ptr->impact_force = 20.0;
  (this_ptr->impact_direction).x = 0.0;
  (this_ptr->impact_direction).y = 0.0;
  (this_ptr->impact_direction).z = 0.0;
  this_ptr->damage_type = DAMAGE_TYPE_IMMUNE;
  this_ptr->attacker = (CDemonActor *)0x0;
  this_ptr->wielder = (CDemonActor *)0x0;
  return this_ptr;
}
