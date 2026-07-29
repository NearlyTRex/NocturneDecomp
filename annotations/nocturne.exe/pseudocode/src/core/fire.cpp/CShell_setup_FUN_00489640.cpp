// Name: core_fire.cpp_CShell_setup_FUN_00489640
// Address: 00489640
// Address Range: [[00489640, 004896cb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_setup_FUN_00489640(CShell *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_setup_FUN_00489640(CShell *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  float fVar1;
  
  core_particle_cpp_CParticle_setup_FUN_004ef040(&this_ptr->base,position,velocity);
  if (&this_ptr->euler_angles != euler_angles) {
    (this_ptr->euler_angles).x = euler_angles->x;
    (this_ptr->euler_angles).y = euler_angles->y;
    (this_ptr->euler_angles).z = euler_angles->z;
  }
  this_ptr->model_ptr = model_ptr;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-6.2831855,6.2831855);
  (this_ptr->angular_velocity).x = fVar1;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-3.1415927,3.1415927);
  this_ptr->bounce_count = 0;
  (this_ptr->base).lifetime_remaining = 3.0;
  (this_ptr->angular_velocity).y = fVar1;
  return;
}
