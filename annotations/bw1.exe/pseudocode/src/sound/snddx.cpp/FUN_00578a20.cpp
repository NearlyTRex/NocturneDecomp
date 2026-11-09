// Name: sound_snddx.cpp_FUN_00578a20
// Address: 00578a20
// Address Range: [[00578a20, 00578a7a]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_00578a20(undefined4 param_1,int param_2)

#include "nocturne.h"

void sound_snddx_cpp_FUN_00578a20(uint param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 * 0x18 + 0x2c81dc4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  *(uint *)(param_2 * 0x18 + 0x2c81dcc) = 0;
  *(uint *)(param_2 * 0x18 + 0x2c81dd0) = 0;
  *(uint *)(param_2 * 0x18 + 0x2c81dd4) = 0;
  *(uint *)(param_2 * 0x18 + 0x2c81dd8) = 0;
  return;
}
