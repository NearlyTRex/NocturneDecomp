// Name: core_fire.cpp_CShell_setup_FUN_004a0960
// Address: 004a0960
// Address Range: [[004a0960, 004a09eb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_setup_FUN_004a0960(CShell *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_setup_FUN_004a0960(CShell *this_ptr,CVector3f *position,CVector3f *euler_angles,CVector3f *velocity,CKeyFramedModel *model_ptr)

{
  float fVar1;
  
  core_particle_cpp_CParticle_setup_FUN_00509e40((CParticle *)this_ptr,position,velocity);
  if (&this_ptr->euler_angles != euler_angles) {
    (this_ptr->euler_angles).x = euler_angles->x;
    (this_ptr->euler_angles).y = euler_angles->y;
    (this_ptr->euler_angles).z = euler_angles->z;
  }
  this_ptr->model_ptr = model_ptr;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-6.2831855,6.2831855);
  (this_ptr->angular_velocity).x = fVar1;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.1415927,3.1415927);
  this_ptr->bounce_count = 0;
  *(uint *)&this_ptr->field_0x24 = 0x40400000;
  (this_ptr->angular_velocity).y = fVar1;
  return;
}
