// Name: core_gore.cpp_CBloodParticle_FUN_004eb9a0
// Address: 004eb9a0
// Address Range: [[004eb9a0, 004eb9cf]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodParticle_FUN_004eb9a0(CBloodParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodParticle_FUN_004eb9a0(CBloodParticle *this_ptr)

{
  int iVar1;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  uint in_stack_00000010;
  
  *(uint *)this_ptr->field1_0x38 = in_stack_00000010;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xf);
  *(int *)(this_ptr->field1_0x38 + 4) = iVar1;
  core_particle_cpp_CParticle_setup_FUN_00545680
            (&this_ptr->base,in_stack_00000008,in_stack_0000000c);
  return;
}
