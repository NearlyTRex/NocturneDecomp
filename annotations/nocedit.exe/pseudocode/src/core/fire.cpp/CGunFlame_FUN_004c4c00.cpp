// Name: core_fire.cpp_CGunFlame_FUN_004c4c00
// Address: 004c4c00
// Address Range: [[004c4c00, 004c4d48]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_FUN_004c4c00(CGunFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_FUN_004c4c00(CGunFlame *this_ptr)

{
  CCharacter *this_ptr_00;
  CFlameCan *this_ptr_01;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CVector3f local_40 [2];
  char *local_24;
  int local_20;
  
  iVar4 = 0;
  if (0 < DAT_02d13eb4) {
    local_20 = 0;
    do {
      this_ptr_00 = *(CCharacter **)((int)&DAT_02d13eb8 + local_20);
      if (((*(int *)(this_ptr->unk + 0x20) == 2) || (this_ptr_00->show_in_editor != 0)) &&
         (fVar1 = (this_ptr_00->base).location.position.x - ((CVector3f *)(this_ptr->unk + 4))->x,
         fVar3 = (this_ptr_00->base).location.position.y - *(float *)(this_ptr->unk + 8),
         fVar2 = (this_ptr_00->base).location.position.z - *(float *)(this_ptr->unk + 0xc),
         fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= 25.0f)) {
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(&this_ptr_00->model);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (&this_ptr_00->base,local_40,(CVector3f *)(this_ptr->unk + 4));
        core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
                  (this_ptr_00,local_40,0,0.0,0x3f800000,(uint)(*(int *)(this_ptr->unk + 0x20) == 2)
                  );
      }
      local_20 = local_20 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_02d13eb4);
  }
  iVar4 = 0;
  if (0 < DAT_02d13f80) {
    local_24 = this_ptr->unk + 4;
    iVar5 = 0;
    do {
      this_ptr_01 = *(CFlameCan **)((int)&DAT_02d13f84 + iVar5);
      fVar1 = (this_ptr_01->base).location.position.x - *(float *)local_24;
      fVar3 = (this_ptr_01->base).location.position.y - *(float *)(local_24 + 4);
      fVar2 = (this_ptr_01->base).location.position.z - *(float *)(local_24 + 8);
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= (float)25) {
        core_flamecan_cpp_CFlameCan_FUN_004cb340(this_ptr_01);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < DAT_02d13f80);
  }
  return;
}
