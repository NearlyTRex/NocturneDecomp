// Name: core_gore.cpp_FUN_004eb9a0
// Address: 004eb9a0
// Address Range: [[004eb9a0, 004eb9cf]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004eb9a0()

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004eb9a0(uint param_1, uint param_2,
   uint param_3, uint param_4) */

void core_gore_cpp_FUN_004eb9a0(void)

{
  float fVar1;
  CParticle *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float in_stack_00000010;
  
  in_stack_00000004[1].position.x = in_stack_00000010;
  fVar1 = (float)core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xf);
  in_stack_00000004[1].position.y = fVar1;
  core_particle_cpp_CParticle_setup_FUN_00545680
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}
