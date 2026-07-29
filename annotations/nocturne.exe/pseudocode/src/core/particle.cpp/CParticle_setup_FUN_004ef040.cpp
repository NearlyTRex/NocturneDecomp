// Name: core_particle.cpp_CParticle_setup_FUN_004ef040
// Address: 004ef040
// Address Range: [[004ef040, 004ef11d]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_setup_FUN_004ef040(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_particle_cpp_CParticle_setup_FUN_004ef040(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)

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
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  if (velocity != (CVector3f *)0x0) {
    if (&this_ptr->velocity != velocity) {
      (this_ptr->velocity).x = velocity->x;
      (this_ptr->velocity).y = velocity->y;
      (this_ptr->velocity).z = velocity->z;
    }
    this_ptr->lifetime_remaining = 5.0;
    this_ptr->was_in_solid = 0;
    return;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.7853982,1.5707964);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,6.2831855);
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
