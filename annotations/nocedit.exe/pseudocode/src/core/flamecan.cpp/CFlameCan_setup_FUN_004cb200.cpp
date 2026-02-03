// Name: core_flamecan.cpp_CFlameCan_setup_FUN_004cb200
// Address: 004cb200
// Address Range: [[004cb200, 004cb212]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_004cb200(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_004cb200(CFlameCan *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonActor_vtable *pCVar3;
  CBoundingBox3D local_38;
  float fStack_20;
  float fStack_1c;
  float afStack_18 [4];
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  pCVar3 = (this_ptr->base).vtable._ub;
  this_ptr->unk[0x1b4] = '\0';
  this_ptr->unk[0x1b5] = '\0';
  this_ptr->unk[0x1b6] = '\0';
  this_ptr->unk[0x1b7] = '\0';
  (*pCVar3->getBoundingBox)(&this_ptr->base,&local_38);
  *(float *)(this_ptr->unk + 0x20) = (this_ptr->base).location.position.x;
  *(float *)(this_ptr->unk + 0x24) = (this_ptr->base).location.position.y;
  *(float *)(this_ptr->unk + 0x28) = (this_ptr->base).location.position.z;
  *(int *)(this_ptr->unk + 0x2c) = (this_ptr->base).location.area_id;
  *(float *)(this_ptr->unk + 0x24) = (fStack_20 - local_38.max.x) + *(float *)(this_ptr->unk + 0x24)
  ;
  if ((float *)(this_ptr->unk + 0x158) != afStack_18) {
    *(float *)(this_ptr->unk + 0x158) = local_38.max.z - local_38.min.z;
    *(float *)(this_ptr->unk + 0x15c) = fStack_20 - local_38.max.x;
    *(float *)(this_ptr->unk + 0x160) = fStack_1c - local_38.max.y;
  }
  fVar1 = *(float *)(this_ptr->unk + 0x158);
  this_ptr->unk[0x1a8] = '\0';
  this_ptr->unk[0x1a9] = '\0';
  this_ptr->unk[0x1aa] = '\0';
  this_ptr->unk[0x1ab] = '\0';
  fVar1 = fVar1 * (float)2;
  fVar2 = *(float *)(this_ptr->unk + 0x15c);
  this_ptr->unk[0x1ac] = '\0';
  this_ptr->unk[0x1ad] = '\0';
  this_ptr->unk[0x1ae] = '\0';
  this_ptr->unk[0x1af] = '\0';
  if (fVar2 < fVar1) {
    *(float *)(this_ptr->unk + 0x15c) = fVar1;
  }
  this_ptr->unk[0x2a4] = '\0';
  this_ptr->unk[0x2a5] = '\0';
  this_ptr->unk[0x2a6] = '\0';
  this_ptr->unk[0x2a7] = '\0';
  (this_ptr->base).is_transparent = 1;
  return;
}
