// Name: core_fire.cpp_CGunFlame_init_FUN_004b2980
// Address: 004b2980
// Address Range: [[004b2980, 004b2aef]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_init_FUN_004b2980(CGunFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_init_FUN_004b2980(CGunFlame *this_ptr)

{
  CCharacter *this_ptr_00;
  CFlameCan *this_ptr_01;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1038 [1012];
  CVector3f local_50;
  float local_44;
  uint auStack_40 [7];
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  
  bVar5 = 0;
  local_1c = 0;
  if (0 < _DAT_01c58768) {
    local_18 = (float *)&this_ptr->field_0x4;
    local_20 = 0;
    do {
      this_ptr_00 = *(CCharacter **)(&DAT_01c5876c + local_20);
      if (((*(int *)&this_ptr->field_0x20 == 2) || (this_ptr_00->gun_flame_ignitable != 0)) &&
         (fVar1 = (this_ptr_00->base).location.position.x - *local_18,
         fVar3 = (this_ptr_00->base).location.position.y - local_18[1],
         fVar2 = (this_ptr_00->base).location.position.z - local_18[2],
         fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= _DAT_005df4d4)) {
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(&this_ptr_00->model);
        core_actor_cpp_FUN_00408bb0(this_ptr_00,local_18);
        local_50.x = local_44;
        *(uint *)((int)&local_50 + (uint)bVar5 * -8 + 4) = auStack_40[(uint)bVar5 * -2];
        *(uint *)((int)&local_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             auStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
                  (this_ptr_00,&local_50,0,0,1.0,(uint)(*(int *)&this_ptr->field_0x20 == 2));
      }
      local_20 = local_20 + 4;
      local_1c = local_1c + 1;
    } while (local_1c < _DAT_01c58768);
  }
  iVar4 = 0;
  if (0 < _DAT_01c58834) {
    local_24 = 0;
    do {
      this_ptr_01 = *(CFlameCan **)(&DAT_01c58838 + local_24);
      fVar1 = (this_ptr_01->base).location.position.x - *(float *)&this_ptr->field_0x4;
      fVar3 = (this_ptr_01->base).location.position.y - *(float *)&this_ptr->field_0x8;
      fVar2 = (this_ptr_01->base).location.position.z - *(float *)&this_ptr->field_0xc;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= (float)_DAT_005df4dc) {
        core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr_01);
      }
      local_24 = local_24 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < _DAT_01c58834);
  }
  return;
}
