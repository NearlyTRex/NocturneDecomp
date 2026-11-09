// Name: core_enemy.cpp_FUN_004a0980
// Address: 004a0980
// Address Range: [[004a0980, 004a0aa6]]
// Convention: unknown
// Signature: bool core_enemy_cpp_FUN_004a0980(int param_1,int param_2)

#include "nocturne.h"

bool core_enemy_cpp_FUN_004a0980(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1068 [1001];
  CDemonSet *this_ptr;
  CVector3f *start_pos;
  CVector3f *end_pos;
  CVector3f CStack_80;
  uint local_74;
  uint auStack_70 [5];
  CVector3f CStack_5c;
  uint local_50;
  uint auStack_4c [5];
  uint uStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  uint uStack_14;
  uint auStack_10 [2];
  
  bVar4 = 0;
  if (param_2 == 0) {
    return false;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x140))(param_1);
  puVar2 = &local_74;
  local_74 = local_50;
  auStack_70[(uint)bVar4 * -2] = auStack_4c[(uint)bVar4 * -2];
  auStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       auStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408b40(param_1,puVar2);
  CStack_2c._0_4_ = CStack_80._0_4_;
  *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
  puVar2 = (uint *)&stack0xffffff68;
  puVar3 = (uint *)&stack0xffffff50;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_actor_cpp_FUN_00408bb0(param_2,&CStack_2c);
  puVar2 = auStack_70 + 2;
  auStack_70[2] = uStack_38;
  auStack_70[(uint)bVar4 * -2 + 3] = auStack_4c[(uint)bVar4 * -2 + 6];
  auStack_70[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_box_cpp_FUN_00421af0(&stack0xffffff50,puVar2);
  puVar2 = auStack_4c + 2;
  auStack_4c[2] = uStack_14;
  auStack_4c[(uint)bVar4 * -2 + 3] = auStack_10[(uint)bVar4 * -2];
  auStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_10[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408b40(param_2,puVar2);
  end_pos = &CStack_5c;
  start_pos = &CStack_2c;
  CStack_5c._0_4_ = CStack_20._0_4_;
  *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_20 + (uint)bVar4 * -8 + 4);
  this_ptr = g_CDemonSetPtr;
  *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  iVar1 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0(this_ptr,start_pos,end_pos);
  return iVar1 == 0;
}
