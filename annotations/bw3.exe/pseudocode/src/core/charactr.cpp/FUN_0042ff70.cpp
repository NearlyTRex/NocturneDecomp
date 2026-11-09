// Name: core_charactr.cpp_FUN_0042ff70
// Address: 0042ff70
// Address Range: [[0042ff70, 0042ffda]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042ff70(int param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042ff70(int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"glass-1.wav@2.0");
  if (*(char *)(param_1 + 0x24a8) != '\0') {
    core_skeleton_cpp_FUN_0054f7f0
              ((CDeformableModelInstance *)(param_1 + 0x158),(CVector3f *)(param_1 + 0x20),
               (CVector3f *)(param_1 + 0x30),0);
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CEnemyClassInfo.name_hash);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x70) = 2;
    return;
  }
  core_enemy_cpp_FUN_00489c90(iVar1);
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
