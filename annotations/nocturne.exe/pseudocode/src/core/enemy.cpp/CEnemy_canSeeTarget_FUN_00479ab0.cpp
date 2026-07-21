// Name: core_enemy.cpp_CEnemy_canSeeTarget_FUN_00479ab0
// Address: 00479ab0
// Address Range: [[00479ab0, 00479b5a]]
// Convention: __cdecl
// Signature: bool __cdecl core_enemy_cpp_CEnemy_canSeeTarget_FUN_00479ab0(int param_1,int param_2)

#include "nocturne.h"

bool __cdecl core_enemy_cpp_CEnemy_canSeeTarget_FUN_00479ab0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte auStack_5c [24];
  byte auStack_44 [12];
  byte auStack_38 [12];
  byte local_2c [12];
  byte auStack_20 [12];
  byte auStack_14 [12];
  
  if (param_2 == 0) {
    return false;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x138))(param_1,local_2c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_38,uVar1);
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,auStack_5c);
  uVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_2,auStack_14,auStack_38);
  uVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041e160(auStack_5c,auStack_20,uVar1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,auStack_44,uVar1);
  iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
                    (0x01E57284,auStack_38,auStack_44);
  return iVar2 == 0;
}
