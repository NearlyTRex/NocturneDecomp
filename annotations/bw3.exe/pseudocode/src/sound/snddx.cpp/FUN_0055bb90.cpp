// Name: sound_snddx.cpp_FUN_0055bb90
// Address: 0055bb90
// Address Range: [[0055bb90, 0055bbea]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_0055bb90(undefined4 param_1,int param_2)

#include "nocturne.h"

void sound_snddx_cpp_FUN_0055bb90(uint param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 * 0x18 + 0x2cf49f4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  *(uint *)(param_2 * 0x18 + 0x2cf49fc) = 0;
  *(uint *)(param_2 * 0x18 + 0x2cf4a00) = 0;
  *(uint *)(param_2 * 0x18 + 0x2cf4a04) = 0;
  *(uint *)(param_2 * 0x18 + 0x2cf4a08) = 0;
  return;
}
