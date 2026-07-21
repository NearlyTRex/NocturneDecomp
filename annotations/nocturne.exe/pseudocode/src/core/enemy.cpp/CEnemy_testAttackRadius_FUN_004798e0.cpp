// Name: core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
// Address: 004798e0
// Address Range: [[004798e0, 00479987]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(int param_1,uint *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uStack_28;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  
  iVar1 = *(int *)(param_1 + 0xbca4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14c) + 0xf8))(iVar1,param_2,param_3,param_4);
    uStack_28 = (double)*(float *)(param_4 + 4);
    if (0.0 < uStack_28) {
      uStack_20 = *param_2;
      uVar5 = 0;
      uVar2 = param_2[1];
      uVar4 = 0x479951;
      fVar3 = (float10)round
                                 ((float10)*(float *)(param_4 + 4) * (float10)_DAT_0057f33f *
                                  (float10)_DAT_0057f347);
      iStack_18 = (int)ROUND(fVar3);
      uStack_1c = param_2[2];
      uStack_20 = uVar2;
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                (0x01C78C7C,(int)&uStack_28 + 4,0,iStack_18,uVar4,uVar5);
      return 1;
    }
  }
  return 0;
}
