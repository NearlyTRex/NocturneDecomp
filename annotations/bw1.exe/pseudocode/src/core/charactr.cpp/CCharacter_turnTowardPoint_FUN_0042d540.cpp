// Name: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_0042d540
// Address: 0042d540
// Address Range: [[0042d540, 0042d5e9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_0042d540(CCharacter *this_ptr,CVector3f *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_0042d540(CCharacter *this_ptr,CVector3f *target)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float afStackY_1038 [1016];
  uint local_50;
  uint local_44;
  float local_40;
  float local_38;
  CVector3f local_2c [2];
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(&this_ptr->base,target,local_2c);
  local_38 = local_2c[0].x;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)((int)local_2c + (uint)bVar4 * -8 + 4);
  *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffffc8);
  local_44 = local_50;
  *(uint *)((int)local_2c + (uint)bVar4 * -8 + -0x14) =
       *(uint *)(&stack0xffffffb4 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fVar1 = this_ptr->turn_speed;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_40);
  fVar3 = -fVar1;
  if ((fVar3 <= fVar2) && (fVar3 = fVar1, fVar2 <= fVar1)) {
    fVar3 = fVar2;
  }
  this_ptr->turn_angle_accumulator = fVar3;
  return;
}
