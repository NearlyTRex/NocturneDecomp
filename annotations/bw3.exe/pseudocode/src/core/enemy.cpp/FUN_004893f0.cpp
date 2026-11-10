// Name: core_enemy.cpp_FUN_004893f0
// Address: 004893f0
// Address Range: [[004893f0, 00489489]]
// Convention: unknown
// Signature: undefined4 core_enemy_cpp_FUN_004893f0(int param_1,float *param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_enemy_cpp_FUN_004893f0(int param_1,float *param_2,uint param_3,int param_4)

{
  byte bVar1;
  float10 fVar2;
  float afStackY_1008 [1011];
  CVector3f *direction;
  int iVar3;
  EBloodType blood_type;
  CVector3f CStack_20;
  int iStack_14;
  
  bVar1 = 0;
  iVar3 = *(int *)(param_1 + 0xcde4);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x100))(iVar3,param_2,param_3,param_4);
    if (0.0 < *(float *)(param_4 + 4)) {
      fVar2 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_005bdc4f * (float10)_DAT_005bdc57;
      blood_type = BLOOD_TYPE_RED;
      round();
      iVar3 = (int)ROUND(fVar2);
      direction = (CVector3f *)0x0;
      CStack_20.x = *param_2;
      iStack_14 = iVar3;
      *(float *)((int)&CStack_20 + (uint)bVar1 * -8 + 4) = param_2[(uint)bVar1 * -2 + 1];
      *(float *)((int)&CStack_20 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
           (param_2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1];
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_20,direction,iVar3,blood_type);
      return 1;
    }
  }
  return 0;
}
