// Name: core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
// Address: 004b5d00
// Address Range: [[004b5d00, 004b5e87]]
// Convention: unknown
// Signature: int core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte auStack_a8 [120];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int local_1c;
  float fStack_18;
  float *local_14;
  
  *param_2 = 9999.9;
  iVar3 = 0;
  local_14 = (float *)(param_1 + 0x20);
  local_1c = 0;
  for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x150bf4); iVar4 = iVar4 + 1) {
    iVar1 = *(int *)(iVar3 + 0x150bf8 + 0x01E57284);
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar1,_DAT_02dd11c8);
    if (iVar2 == 0) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar1,_DAT_01ccdc10);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 0xbd48) == 0)) {
        iVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x104))(iVar1);
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x68))(iVar1);
          if (iVar2 == 0) {
            __arrinit(auStack_a8,10,&DAT_005993b0);
            iVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x4c))(iVar1,auStack_a8);
            if (0 < iVar2) {
              fStack_30 = *local_14 - *(float *)(iVar1 + 0x20);
              fStack_2c = (local_14[1] - *(float *)(iVar1 + 0x24)) * (float)2;
              fStack_28 = local_14[2] - *(float *)(iVar1 + 0x28);
              fStack_18 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
              if (fStack_18 < *param_2) {
                *param_2 = fStack_18;
                local_1c = iVar1;
              }
            }
          }
        }
      }
    }
    iVar3 = iVar3 + 4;
  }
  if (local_1c == 0) {
    return 0;
  }
  *param_2 = SQRT(*param_2);
  return local_1c;
}
