// Name: core_stranger.cpp_FUN_0058aeb0
// Address: 0058aeb0
// Address Range: [[0058aeb0, 0058afda]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0058aeb0(CStranger *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_stranger_cpp_FUN_0058aeb0(CStranger *this_ptr,int hand_index)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1020 [953];
  CMatrix3x4f local_98 [48];
  uint local_68 [12];
  uint local_38;
  uint auStack_34 [5];
  uint local_20 [3];
  uint local_14;
  
  bVar5 = 0;
  iVar2 = *(int *)&this_ptr->field_0x20004;
  if (((iVar2 != 0) && (iVar2 != *(int *)&this_ptr->field_0x25b0)) &&
     (iVar2 != *(int *)&this_ptr->field_0x2628)) {
    core_stranger_cpp_FUN_0058afe0(this_ptr,*(uint *)&this_ptr->field_0x20004,hand_index == 0)
    ;
    puVar3 = (uint *)&stack0xfffffed8;
    puVar4 = (uint *)&stack0xffffff38;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_FUN_005b5760
              (local_98,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&stack0xffffff38,local_98);
    puVar3 = local_68;
    puVar4 = (uint *)&stack0xffffff08;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = *(int *)&this_ptr->field_0x20004;
    iVar1 = *(int *)(iVar2 + 0x154);
    core_xform_cpp_FUN_005b5930(&stack0xffffff08);
    auStack_34[2] = local_38;
    auStack_34[(uint)bVar5 * -2 + 3] = auStack_34[(uint)bVar5 * -2];
    auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_005b6270(&stack0xffffff08,auStack_34 + 2);
    local_20[0] = local_14;
    auStack_34[(uint)bVar5 * -2 + 6] = auStack_34[(uint)bVar5 * -2 + 9];
    auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    (**(code **)(iVar1 + 0x68))(iVar2,auStack_34 + 5);
  }
  return;
}
