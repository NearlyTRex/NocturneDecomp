// Name: core_fire.cpp_CGunFlame_init_FUN_004c4c00
// Address: 004c4c00
// Address Range: [[004c4c00, 004c4d48]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_init_FUN_004c4c00(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_init_FUN_004c4c00(CGunFlame *this_ptr)

{
  CCharacter *this_ptr_02;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar4;
  int iVar5;
  CVector3f local_40 [2];
  CVector3f *local_24;
  int local_20;
  CCharacter *this_ptr_00;
  float fVar2;
  float fVar1;
  float fVar3;
  CFlameCan *this_ptr_01;
  
  iVar4 = 0;
  if (0 < g_CharactersOnFireCount) {
    local_20 = 0;
    do {
      this_ptr_02 = *(CCharacter **)((int)g_CharactersOnFire + local_20);
      if (((this_ptr->flame_type == 2) || (this_ptr_02->show_in_editor != 0)) &&
         (fVar4 = (this_ptr_02->base).location.position.x - (this_ptr->position).x,
         fVar6 = (this_ptr_02->base).location.position.y - (this_ptr->position).y,
         fVar5 = (this_ptr_02->base).location.position.z - (this_ptr->position).z,
         fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4 <= 25.0f)) {
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(&this_ptr_02->model);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (&this_ptr_02->base,local_40,&this_ptr->position);
        core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
                  (this_ptr_02,local_40,0,0.0,0x3f800000,(uint)(this_ptr->flame_type == 2));
      }
      local_20 = local_20 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < g_CharactersOnFireCount);
  }
  iVar7 = 0;
  if (0 < g_FlameCanCount) {
    iVar5 = 0;
    do {
      this_ptr_01 = *(CFlameCan **)((int)g_FlameCans + iVar5);
      fVar1 = (this_ptr_01->base).location.position.x - (this_ptr->position).x;
      fVar3 = (this_ptr_01->base).location.position.y - (this_ptr->position).y;
      fVar2 = (this_ptr_01->base).location.position.z - (this_ptr->position).z;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= (float)25) {
        core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(this_ptr_01);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar7 < g_FlameCanCount);
  }
  return;
}
