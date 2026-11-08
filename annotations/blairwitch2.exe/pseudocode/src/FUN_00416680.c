// Name: FUN_00416680
// Address: 00416680
// Address Range: [[00416680, 004166ea]]
// Convention: unknown
// Signature: void FUN_00416680(int param_1,int param_2)

#include "nocturne.h"

void FUN_00416680(int param_1,int param_2)

{
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  *(uint *)(param_1 + 0x133c) = 0;
  FUN_004178c0(param_1);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x10d0) = 0x41200000;
    return;
  }
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0x4116cbe4;
  FUN_005b4610(param_1 + 0x10e0,param_2,&uStack_10);
  *(uint *)(param_1 + 0x10d0) = 0x41200000;
  return;
}
