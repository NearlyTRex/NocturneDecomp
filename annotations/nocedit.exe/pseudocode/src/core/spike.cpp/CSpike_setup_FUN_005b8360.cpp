// Name: core_spike.cpp_CSpike_setup_FUN_005b8360
// Address: 005b8360
// Address Range: [[005b8360, 005b840f]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_setup_FUN_005b8360(CSpike *this_ptr)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_setup_FUN_005b8360(CSpike *this_ptr)

{
  CVector3f *pCVar5;
  float local_2c [3];
  CVector3f local_20;
  CVector3f local_14;
  float local_8;
  float fVar1;
  float fVar3;
  float fVar2;
  float fVar4;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  local_14.z = this_ptr->extend_distance * this_ptr->param;
  local_14.x = 0.0;
  local_14.y = 0.0;
  pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (&this_ptr->base,&local_20,&local_14);
  fVar1 = (this_ptr->base).location.position.y;
  fVar2 = pCVar5->y;
  fVar3 = (this_ptr->base).location.position.z;
  fVar4 = pCVar5->z;
  if (&this_ptr->base_position == (CVector3f *)local_2c) {
    this_ptr->wait_timer = 0.0;
    return;
  }
  (this_ptr->base_position).x = (this_ptr->base).location.position.x - pCVar5->x;
  (this_ptr->base_position).y = fVar1 - fVar2;
  (this_ptr->base_position).z = fVar3 - fVar4;
  this_ptr->wait_timer = 0.0;
  return;
}
