// Name: core_enemy.cpp_FUN_00489600
// Address: 00489600
// Address Range: [[00489600, 00489726]]
// Convention: unknown
// Signature: bool core_enemy_cpp_FUN_00489600(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

bool core_enemy_cpp_FUN_00489600(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1068 [1001];
  CDemonSet *this_ptr;
  CVector3f *start_pos;
  byte *puVar5;
  CVector3f *end_pos;
  uint auStack_b0 [6];
  uint auStack_98 [6];
  float fStack_80;
  uint auStack_7c [2];
  uint local_74;
  uint auStack_70 [2];
  uint uStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  uint local_50;
  uint auStack_4c [5];
  uint uStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  uint auStack_1c [5];
  
  bVar4 = 0;
  if (param_2 == 0) {
    return false;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x140))(param_1);
  puVar5 = (byte *)&local_74;
  local_74 = local_50;
  *(uint *)((int)auStack_70 + (uint)bVar4 * 0xfffffff8) = auStack_4c[(uint)bVar4 * -2];
  *(uint *)((int)auStack_70 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       auStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408b80(param_1,puVar5);
  CStack_2c.x = fStack_80;
  *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)auStack_7c + (uint)bVar4 * 0xfffffff8);
  *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       auStack_7c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
  (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
  puVar2 = auStack_98;
  puVar3 = auStack_b0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_actor_cpp_FUN_00408bf0(param_2,&CStack_2c);
  puVar5 = (byte *)&uStack_68;
  uStack_68 = uStack_38;
  *(uint *)((int)afStack_64 + (uint)bVar4 * 0xfffffff8) = auStack_4c[(uint)bVar4 * -2 + 6];
  *(uint *)((int)afStack_64 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       auStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_box_cpp_FUN_0041ee30(auStack_b0,puVar5);
  puVar2 = auStack_4c + 2;
  auStack_4c[2] = auStack_1c[2];
  auStack_4c[(uint)bVar4 * -2 + 3] = auStack_1c[(uint)bVar4 * -2 + 3];
  auStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_actor_cpp_FUN_00408b80(param_2,puVar2);
  end_pos = &CStack_5c;
  start_pos = &CStack_2c;
  CStack_5c.x = fStack_20;
  *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + 4) = auStack_1c[(uint)bVar4 * -2];
  this_ptr = g_CDemonSetPtr;
  *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  iVar1 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0053cca0(this_ptr,start_pos,end_pos);
  return iVar1 == 0;
}
