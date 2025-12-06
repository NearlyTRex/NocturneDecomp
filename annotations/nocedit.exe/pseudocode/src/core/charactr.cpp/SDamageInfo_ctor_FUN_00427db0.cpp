// Name: core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
// Address: 00427db0
// Address Range: [[00427db0, 00427e15]]
// Convention: __cdecl
// Signature: SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)

#include "nocturne.h"

SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo *this_ptr)

{
  this_ptr->ammo_type = 0;
  this_ptr->weapon_damage_modifier = 0.0;
  this_ptr->field0_0x0 = -1;
  this_ptr->damage_flags = 0;
  (this_ptr->impact_point).z = 0.0;
  (this_ptr->impact_point).y = (this_ptr->impact_point).z;
  (this_ptr->impact_point).x = (this_ptr->impact_point).y;
  this_ptr->impact_force = 20.0;
  (this_ptr->impact_direction).z = 0.0;
  (this_ptr->impact_direction).y = (this_ptr->impact_direction).z;
  (this_ptr->impact_direction).x = (this_ptr->impact_direction).y;
  this_ptr->damage_type = 100;
  this_ptr->attacker = (CDemonActor *)0x0;
  this_ptr->wielder = (CDemonActor *)0x0;
  return this_ptr;
}
