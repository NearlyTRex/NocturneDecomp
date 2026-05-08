// Name: core_particle.cpp_CParticle_setup_FUN_00545680
// Address: 00545680
// MANUAL RECONSTRUCTION
// Address Range: [[00545680, 0054575d]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_setup_FUN_00545680(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_particle_cpp_CParticle_setup_FUN_00545680(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  this_ptr->gravity_acceleration = -32.0;
  if (this_ptr != (CParticle *)position) {
    this_ptr->position = *position;
  }
  if (velocity != (CVector3f *)0x0) {
    if (&this_ptr->velocity != velocity) {
      this_ptr->velocity = *velocity;
    }
    this_ptr->lifetime_remaining = 5.0;
    this_ptr->was_in_solid = 0;
    return;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.7853982,1.5707964);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
  fVar3 = (float10)fcos((float10)fVar2);
  fVar4 = (float10)fcos((float10)fVar1);
  fVar5 = (float10)fsin((float10)fVar2);
  fVar6 = (float10)fsin((float10)fVar1);
  fVar7 = (float10)10.0f;
  (this_ptr->velocity).y = (float)(fVar6 * fVar7);
  (this_ptr->velocity).x = (float)(fVar3 * fVar7 * fVar4);
  (this_ptr->velocity).z = (float)(fVar5 * fVar7 * fVar4);
  this_ptr->lifetime_remaining = 5.0;
  this_ptr->was_in_solid = 0;
  return;
}
