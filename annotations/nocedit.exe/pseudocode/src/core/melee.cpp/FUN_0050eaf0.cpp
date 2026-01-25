// Name: core_melee.cpp_FUN_0050eaf0
// Address: 0050eaf0
// Address Range: [[0050eaf0, 0050eb43]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050eaf0()

#include "nocturne.h"

/* Signature: byte actors_weapon_melee.cpp_FUN_0050eaf0(uint param_1, uint
   param_2, uint param_3, uint param_4) */

void core_melee_cpp_FUN_0050eaf0(void)

{
  float fVar1;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  SDamageInfo *in_stack_0000000c;
  CDemonActor *in_stack_00000010;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  fVar1 = (float)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc6)();
  in_stack_0000000c->damage_amount = fVar1;
  in_stack_0000000c->weapon_damage_modifier = in_stack_00000004[4].location.position.y;
  in_stack_0000000c->ammo_type = (int)in_stack_00000004[4].orient_matrix.m[0].x;
  return;
}
