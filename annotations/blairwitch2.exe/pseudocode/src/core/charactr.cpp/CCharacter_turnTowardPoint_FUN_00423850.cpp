// Name: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
// Address: 00423850
// Address Range: [[00423850, 004238f9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter *this_ptr,CVector3f *target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter *this_ptr,CVector3f *target)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint auStackY_1038 [1016];
  uint local_50;
  uint local_44;
  uint local_40;
  uint local_38;
  uint local_2c;
  
  bVar4 = 0;
  core_actor_cpp_FUN_00408de0(this_ptr,target);
  local_38 = local_2c;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  core_vecdir_cpp_FUN_005838f0(&stack0xffffffc8);
  local_44 = local_50;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffb4 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fVar1 = *(float *)&this_ptr->field_0x2598;
  fVar2 = (float)core_actor_cpp_FUN_0040d0c0(local_40);
  fVar3 = -fVar1;
  if ((fVar3 <= fVar2) && (fVar3 = fVar1, fVar2 <= fVar1)) {
    fVar3 = fVar2;
  }
  *(float *)&this_ptr->field_0x2578 = fVar3;
  return;
}
