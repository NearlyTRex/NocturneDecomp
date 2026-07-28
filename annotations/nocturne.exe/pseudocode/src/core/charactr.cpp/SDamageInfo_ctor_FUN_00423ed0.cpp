// Name: core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
// Address: 00423ed0
// Address Range: [[00423ed0, 00423f35]]
// Convention: __cdecl
// Signature: SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo *this_ptr)

#include "nocturne.h"

SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo *this_ptr)

{
  this_ptr->ammo_type = AMMO_TYPE_GENERIC;
  this_ptr->dismember_prob = 0.0;
  this_ptr->hit_part_index = -1;
  this_ptr->gore_multiplier = 0.0;
  (this_ptr->impact_point).z = 0.0;
  (this_ptr->impact_point).y = (this_ptr->impact_point).z;
  (this_ptr->impact_point).x = (this_ptr->impact_point).y;
  this_ptr->impact_force = 20.0;
  (this_ptr->impact_direction).z = 0.0;
  (this_ptr->impact_direction).y = (this_ptr->impact_direction).z;
  (this_ptr->impact_direction).x = (this_ptr->impact_direction).y;
  this_ptr->damage_type = DAMAGE_TYPE_IMMUNE;
  this_ptr->attacker = (CDemonActor *)0x0;
  this_ptr->wielder = (CDemonActor *)0x0;
  return this_ptr;
}
