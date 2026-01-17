// Name: core_fire.cpp_CGunFlame_FUN_004c4c00
// Address: 004c4c00
// Address Range: [[004c4c00, 004c4d48]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_FUN_004c4c00(CGunFlame * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_FUN_004c4c00(CGunFlame *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CVector3f local_40 [2];
  char *local_24;
  int local_20;
  
  iVar5 = 0;
  if (0 < DAT_02d13eb4) {
    local_20 = 0;
    do {
      this_ptr_00 = *(CCharacter **)((int)&DAT_02d13eb8 + local_20);
      if (((*(int *)(this_ptr->field0_0x0 + 0x20) == 2) ||
          (*(int *)(this_ptr_00->field13_0x2620 + 4) != 0)) &&
         (fVar2 = (this_ptr_00->base_actor).location.position.x -
                  ((CVector3f *)(this_ptr->field0_0x0 + 4))->x,
         fVar4 = (this_ptr_00->base_actor).location.position.y -
                 *(float *)(this_ptr->field0_0x0 + 8),
         fVar3 = (this_ptr_00->base_actor).location.position.z -
                 *(float *)(this_ptr->field0_0x0 + 0xc),
         fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= 25.0f)) {
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(&this_ptr_00->model);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (&this_ptr_00->base_actor,local_40,(CVector3f *)(this_ptr->field0_0x0 + 4));
        core_charactr_cpp_CCharacter_FUN_0042b5b0(this_ptr_00);
      }
      local_20 = local_20 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_02d13eb4);
  }
  iVar5 = 0;
  if (0 < DAT_02d13f80) {
    local_24 = this_ptr->field0_0x0 + 4;
    iVar6 = 0;
    do {
      iVar1 = *(int *)((int)&DAT_02d13f84 + iVar6);
      fVar2 = *(float *)(iVar1 + 0x20) - *(float *)local_24;
      fVar4 = *(float *)(iVar1 + 0x24) - *(float *)(local_24 + 4);
      fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(local_24 + 8);
      if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= (float)25) {
        core_flamecan_cpp_FUN_004cb340();
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < DAT_02d13f80);
  }
  return;
}
