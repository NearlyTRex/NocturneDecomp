// Name: FUN_00429170
// Address: 00429170
// Address Range: [[00429170, 004291ec]]
// Convention: unknown
// Signature: void FUN_00429170(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_00429170(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  byte local_1c [12];
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = param_1 + 0x24a4 + param_2 * 0x44;
  if (*(int *)(iVar2 + 8) != 0) {
    puVar1 = (uint *)0x0;
    if (param_3 != 0) {
      puVar1 = (uint *)FUN_0040a200(param_1,local_1c,param_3);
      if (&local_10 != puVar1) {
        local_10 = *puVar1;
        local_c = puVar1[1];
        local_8 = puVar1[2];
      }
      puVar1 = &local_10;
    }
    (**(code **)(*(int *)(*(int *)(iVar2 + 8) + 0x14c) + 0x84))(*(int *)(iVar2 + 8),puVar1);
    *(uint *)(iVar2 + 8) = 0;
  }
  return;
}
