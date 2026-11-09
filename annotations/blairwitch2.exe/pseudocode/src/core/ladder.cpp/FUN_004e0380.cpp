// Name: core_ladder.cpp_FUN_004e0380
// Address: 004e0380
// Address Range: [[004e0380, 004e04bc]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_FUN_004e0380(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_FUN_004e0380(CLadder *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1024 [967];
  uint local_f0;
  uint local_e0;
  uint local_d0;
  byte local_cc [48];
  CMatrix3x4f local_9c [48];
  uint local_6c [12];
  uint local_3c;
  uint auStack_38 [4];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x43c != 0) {
    core_xform_cpp_FUN_00591c10(local_cc,&this_ptr->field_0x20,&this_ptr->field_0x30);
    core_xform_cpp_FUN_00591ad0
              (local_9c,(CVector3f *)(*(int *)&this_ptr->field_0x43c + 0x20),
               (CVector3f *)(*(int *)&this_ptr->field_0x43c + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_cc,local_9c);
    puVar2 = local_6c;
    puVar3 = (uint *)&stack0xffffff04;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_24 = local_f0;
    local_20 = local_e0;
    local_1c = local_d0;
    auStack_38[2] = local_f0;
    auStack_38[(uint)bVar4 * -2 + 3] = auStack_38[(uint)bVar4 * -2 + 6];
    auStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         auStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    if ((uint *)&this_ptr->field_0x440 != auStack_38 + 2) {
      *(uint *)&this_ptr->field_0x440 = auStack_38[2];
      *(uint *)&this_ptr->field_0x444 = auStack_38[3];
      *(uint *)&this_ptr->field_0x448 = local_28;
    }
    core_xform_cpp_FUN_00591de0(&stack0xffffff04);
    local_18 = local_3c;
    auStack_38[(uint)bVar4 * -2 + 9] = auStack_38[(uint)bVar4 * -2];
    auStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         auStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if ((uint *)&this_ptr->field_0x44c != auStack_38 + 8) {
      *(uint *)&this_ptr->field_0x44c = local_18;
      *(uint *)&this_ptr->field_0x450 = local_14;
      *(uint *)&this_ptr->field_0x454 = local_10;
      return;
    }
  }
  return;
}
