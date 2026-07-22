// Name: core_enemy.cpp_CEnemy_testAttackLine_FUN_00479990
// Address: 00479990
// Address Range: [[00479990, 00479a27]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_00479990(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

uint __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_00479990(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uStack_28;
  byte local_20 [8];
  int iStack_18;
  
  iVar1 = *(int *)(param_1 + 0xbca4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14c) + 0xfc))(iVar1,param_2,param_3,param_4,local_20);
    uStack_28 = (double)*(float *)(param_4 + 4);
    if (0.0 < uStack_28) {
      uVar4 = 0;
      uVar3 = 0x4799fe;
      fVar2 = (float10)round
                                 ((float10)*(float *)(param_4 + 4) * (float10)1.2 *
                                  (float10)0.25);
      iStack_18 = (int)ROUND(fVar2);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                (0x01C78C7C,(int)&uStack_28 + 4,0,iStack_18,uVar3,uVar4);
      return 1;
    }
  }
  return 0;
}
