// Name: core_stranger.cpp_FUN_005683d0
// Address: 005683d0
// Address Range: [[005683d0, 005684fa]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_005683d0(CStranger *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_stranger_cpp_FUN_005683d0(CStranger *this_ptr,int hand_index)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1020 [953];
  byte local_98 [48];
  uint local_68 [12];
  uint local_38;
  uint auStack_34 [5];
  uint local_20 [3];
  uint local_14;
  
  bVar5 = 0;
  iVar2 = *(int *)&this_ptr->field_0x25698;
  if (((iVar2 != 0) && (iVar2 != *(int *)&this_ptr->field_0x2620)) &&
     (iVar2 != *(int *)&this_ptr->field_0x2698)) {
    core_stranger_cpp_FUN_00568500(this_ptr,*(uint *)&this_ptr->field_0x25698,hand_index == 0)
    ;
    puVar3 = (uint *)&stack0xfffffed8;
    puVar4 = (uint *)&stack0xffffff38;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_FUN_00591c10(local_98,&this_ptr->field_0x20,&this_ptr->field_0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xffffff38,local_98);
    puVar3 = local_68;
    puVar4 = (uint *)&stack0xffffff08;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = *(int *)&this_ptr->field_0x25698;
    iVar1 = *(int *)(iVar2 + 0x2b0);
    core_xform_cpp_FUN_00591de0(&stack0xffffff08);
    auStack_34[2] = local_38;
    auStack_34[(uint)bVar5 * -2 + 3] = auStack_34[(uint)bVar5 * -2];
    auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    core_xform_cpp_FUN_00592720(&stack0xffffff08,auStack_34 + 2);
    local_20[0] = local_14;
    auStack_34[(uint)bVar5 * -2 + 6] = auStack_34[(uint)bVar5 * -2 + 9];
    auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    (**(code **)(iVar1 + 0x70))(iVar2,auStack_34 + 5);
  }
  return;
}
