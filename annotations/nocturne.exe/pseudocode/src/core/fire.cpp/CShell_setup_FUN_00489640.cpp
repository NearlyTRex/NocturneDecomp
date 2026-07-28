// Name: core_fire.cpp_CShell_setup_FUN_00489640
// Address: 00489640
// Address Range: [[00489640, 004896cb]]
// Convention: unknown
// Signature: void core_fire_cpp_CShell_setup_FUN_00489640(CParticle *param_1,CVector3f *param_2,CParticle *param_3,CVector3f *param_4,float param_5)

#include "nocturne.h"

void core_fire_cpp_CShell_setup_FUN_00489640(CParticle *param_1,CVector3f *param_2,CParticle *param_3,CVector3f *param_4,float param_5)

{
  float fVar1;
  
  core_particle_cpp_CParticle_setup_FUN_004ef040(param_1,param_2,param_4);
  if (param_1 + 1 != param_3) {
    param_1[1].position.x = (param_3->position).x;
    param_1[1].position.y = (param_3->position).y;
    param_1[1].position.z = (param_3->position).z;
  }
  param_1[1].gravity_acceleration = param_5;
  fVar1 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0c90fdb,0x40c90fdb);
  param_1[1].velocity.x = fVar1;
  fVar1 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0490fdb,0x40490fdb);
  param_1[1].lifetime_remaining = 0.0;
  param_1->lifetime_remaining = 3.0;
  param_1[1].velocity.y = fVar1;
  return;
}
