// Name: core_enemy.cpp_CEnemy_getTargetPoint_FUN_00479a30
// Address: 00479a30
// Address Range: [[00479a30, 00479aae]]
// Convention: unknown
// Signature: float * core_enemy_cpp_CEnemy_getTargetPoint_FUN_00479a30(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_enemy_cpp_CEnemy_getTargetPoint_FUN_00479a30(int param_1,float *param_2)

{
  float fVar1;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&fStack_30);
  fVar1 = _DAT_0057f35f;
  *param_2 = (fStack_30 + fStack_24) * _DAT_0057f35f;
  param_2[1] = (fStack_2c + fStack_20) * fVar1;
  param_2[2] = fVar1 * (fStack_28 + fStack_1c);
  param_2[1] = fStack_20 - (fStack_20 - fStack_2c) * (float)_DAT_0057f367;
  return param_2;
}
