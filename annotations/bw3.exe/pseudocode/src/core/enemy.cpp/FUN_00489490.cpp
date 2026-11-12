// Name: core_enemy.cpp_FUN_00489490
// Address: 00489490
// Address Range: [[00489490, 00489527]]
// Convention: unknown
// Signature: undefined4 core_enemy_cpp_FUN_00489490(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_enemy_cpp_FUN_00489490(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  EBloodType blood_type;
  CVector3f CStack_20;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0xcde4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x104))(iVar1,param_2,param_3,param_4,&CStack_20);
    if (0.0 < *(float *)(param_4 + 4)) {
      fVar2 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_005bdc5f * (float10)_DAT_005bdc67;
      blood_type = BLOOD_TYPE_RED;
      round();
      iStack_14 = (int)ROUND(fVar2);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
                (g_CGorePtr,&CStack_20,(CVector3f *)0x0,iStack_14,blood_type);
      return 1;
    }
  }
  return 0;
}
