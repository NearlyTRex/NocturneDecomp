// Name: core_fire.cpp_FUN_004c6170
// Address: 004c6170
// Address Range: [[004c6170, 004c61bc]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004c6170(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_004c6170(void)

{
  float fVar1;
  CParticle *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CParticle *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  float in_stack_00000014;
  
  core_particle_cpp_CParticle_setup_FUN_00545680
            (in_stack_00000004,in_stack_00000008,in_stack_00000010);
  if (in_stack_00000004 + 1 != in_stack_0000000c) {
    in_stack_00000004[1].position.x = (in_stack_0000000c->position).x;
    in_stack_00000004[1].position.y = (in_stack_0000000c->position).y;
    in_stack_00000004[1].position.z = (in_stack_0000000c->position).z;
  }
  in_stack_00000004[1].gravity_acceleration = in_stack_00000014;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-6.2831855,6.2831855);
  in_stack_00000004[1].velocity.x = fVar1;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
  in_stack_00000004[1].lifetime_remaining = 0.0;
  in_stack_00000004->lifetime_remaining = 3.0;
  in_stack_00000004[1].velocity.y = fVar1;
  return;
}
