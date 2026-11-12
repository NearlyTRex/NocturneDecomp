// Name: core_crate.cpp_CCrate_setup_FUN_00439dc0
// Address: 00439dc0
// Address Range: [[00439dc0, 00439e9c]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_setup_FUN_00439dc0(CCrate *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_crate_cpp_CCrate_setup_FUN_00439dc0(CCrate *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  CBoundingBox3D *in_stack_ffffffbc;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  uint auStack_24 [6];
  
  bVar6 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffffbc);
  puVar4 = auStack_24;
  puVar5 = (uint *)&stack0xffffffbc;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fVar1 = (fStack_30 - fStack_3c) * (float)_DAT_005ce1cb;
  fVar2 = (fStack_28 - fStack_34) * (float)_DAT_005ce1cb;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  this_ptr->ground_check_radius = fVar2;
  (this_ptr->cached_position).x = -9999.9;
  (this_ptr->cached_position).y = -9999.9;
  (this_ptr->cached_position).z = -9999.9;
  (this_ptr->cached_orientation).vec.x = -9999.9;
  (this_ptr->cached_orientation).vec.z = -9999.9;
  (this_ptr->cached_orientation).vec.y = -9999.9;
  this_ptr->cached_ground_height = 9999.9;
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
