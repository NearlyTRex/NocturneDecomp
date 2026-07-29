// Name: core_fire.cpp_CGunFlame_init_FUN_004880d0
// Address: 004880d0
// Address Range: [[004880d0, 00488218]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_init_FUN_004880d0(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_init_FUN_004880d0(CGunFlame *this_ptr)

{
  CCharacter *this_ptr_00;
  CFlameCan *this_ptr_01;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CVector3f local_40 [2];
  CVector3f *local_24;
  int local_20;
  
  iVar4 = 0;
  if (0 < _DAT_01c09e08) {
    local_20 = 0;
    do {
      this_ptr_00 = *(CCharacter **)(&DAT_01c09e0c + local_20);
      if (((this_ptr->flame_type == 2) || (this_ptr_00->show_in_editor != 0)) &&
         (fVar1 = (this_ptr_00->base).location.position.x - (this_ptr->position).x,
         fVar3 = (this_ptr_00->base).location.position.y - (this_ptr->position).y,
         fVar2 = (this_ptr_00->base).location.position.z - (this_ptr->position).z,
         fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= 5.4526381103294656e-315._0_4_)) {
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(&this_ptr_00->model);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                  (&this_ptr_00->base,local_40,&this_ptr->position);
        core_charactr_cpp_FUN_00427730
                  (this_ptr_00,local_40,0,0,1.0,(uint)(this_ptr->flame_type == 2));
      }
      local_20 = local_20 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < _DAT_01c09e08);
  }
  iVar4 = 0;
  if (0 < _DAT_01c09ed4) {
    local_24 = &this_ptr->position;
    iVar5 = 0;
    do {
      this_ptr_01 = *(CFlameCan **)(&DAT_01c09ed8 + iVar5);
      fVar1 = (this_ptr_01->base).location.position.x - local_24->x;
      fVar3 = (this_ptr_01->base).location.position.y - local_24->y;
      fVar2 = (this_ptr_01->base).location.position.z - local_24->z;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= (float)25) {
        core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(this_ptr_01);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < _DAT_01c09ed4);
  }
  return;
}
