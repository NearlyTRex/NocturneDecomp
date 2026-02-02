// Name: core_tvbat.cpp_FUN_005e5130
// Address: 005e5130
// Address Range: [[005e5130, 005e519d]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_FUN_005e5130(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_tvbat.cpp_FUN_005e5130(uint param_1, uint param_2)
    */

void __cdecl core_tvbat_cpp_FUN_005e5130(void)

{
  float fVar1;
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  
  fVar1 = (in_stack_00000004->base).hit_points - in_stack_00000008->damage_amount;
  (in_stack_00000004->base).hit_points = fVar1;
  if (0.0 < fVar1) {
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
    return;
  }
  (in_stack_00000004->base).hit_points = 0.0;
  core_gore_cpp_FUN_004edbb0();
  in_stack_00000004[1].base.model.transformed_vertices[1].z = 1.4013e-45;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}
