// Name: core_spike.cpp_CSpike_setup_FUN_005b8360
// Address: 005b8360
// Address Range: [[005b8360, 005b837c]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_setup_FUN_005b8360(CSpike *this_ptr)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_setup_FUN_005b8360(CSpike *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  float local_2c [3];
  CVector3f local_20;
  CVector3f local_14;
  float local_8;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  local_14.z = this_ptr->extend_distance * this_ptr->param;
  local_14.x = 0.0;
  local_14.y = 0.0;
  local_8 = local_14.z;
  pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                     (&this_ptr->base,&local_20,&local_14);
  fVar1 = (this_ptr->base).location.position.y;
  fVar2 = pCVar5->y;
  fVar3 = (this_ptr->base).location.position.z;
  fVar4 = pCVar5->z;
  if ((float *)this_ptr->unk1 == local_2c) {
    this_ptr->unk6[0] = '\0';
    this_ptr->unk6[1] = '\0';
    this_ptr->unk6[2] = '\0';
    this_ptr->unk6[3] = '\0';
    return;
  }
  *(float *)this_ptr->unk1 = (this_ptr->base).location.position.x - pCVar5->x;
  *(float *)(this_ptr->unk1 + 4) = fVar1 - fVar2;
  *(float *)(this_ptr->unk1 + 8) = fVar3 - fVar4;
  this_ptr->unk6[0] = '\0';
  this_ptr->unk6[1] = '\0';
  this_ptr->unk6[2] = '\0';
  this_ptr->unk6[3] = '\0';
  return;
}
