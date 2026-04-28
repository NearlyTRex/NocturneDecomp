// Name: core_fire.cpp_CSmokeParticle_process_FUN_004bf390
// Address: 004bf390
// MANUAL RECONSTRUCTION
// Address Range: [[004bf390, 004bf4bb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004bf390(CSmokeParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004bf390(CSmokeParticle *this_ptr)

{
  float fVar1;
  float fVar5;
  float fVar4;
  CDemonSet *pCVar4;
  float fVar2;
  float fVar3;
  CVector3f *pCVar1;
  
  fVar3 = g_CGamePtr->delta_time_float;
  this_ptr->age = fVar3 * 30.0f + this_ptr->age;
  if (this_ptr->age >= 40.0f) {
    this_ptr->active = 0;
    return;
  }
  (this_ptr->position).y =
       fVar3 * this_ptr->vertical_accel * this_ptr->drag_factor + (this_ptr->position).y;
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-1.0,1.0);
  (this_ptr->position).x = fVar5 * fVar3 + (this_ptr->position).x;
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-1.0,1.0);
  (this_ptr->position).z = fVar4 * fVar3 + (this_ptr->position).z;
  fVar4 = (this_ptr->wind_influence).y;
  fVar2 = (this_ptr->wind_influence).z;
  pCVar1 = &this_ptr->position;
  pCVar1->x = pCVar1->x + (this_ptr->wind_influence).x * fVar3;
  (this_ptr->position).y = (this_ptr->position).y + fVar4 * fVar3;
  pCVar4 = g_CDemonSetPtr;
  (this_ptr->position).z = (this_ptr->position).z + fVar2 * fVar3;
  fVar4 = (pCVar4->active_fog).scroll.y;
  fVar1 = (pCVar4->active_fog).scroll.z;
  pCVar1->x = pCVar1->x + (pCVar4->active_fog).scroll.x * fVar3;
  (this_ptr->position).y = (this_ptr->position).y + fVar4 * fVar3;
  (this_ptr->position).z = (this_ptr->position).z + fVar1 * fVar3;
  return;
}
