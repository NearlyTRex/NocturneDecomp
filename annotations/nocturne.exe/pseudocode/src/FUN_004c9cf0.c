// Name: FUN_004c9cf0
// Address: 004c9cf0
// Address Range: [[004c9cf0, 004c9dfd]]
// Convention: unknown
// Signature: void FUN_004c9cf0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004c9cf0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b45b0(param_1 + 0x20,0x41f00000);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      FUN_004cac90(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_004cb900(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      FUN_004cb2d0(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_004cb010(param_1,iVar1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_004ca640(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      FUN_004cb980(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if ((uint *)(param_1 + 0x13c0) != (uint *)(param_1 + 0x1360)) {
      *(uint *)(param_1 + 0x13c0) = *(uint *)(param_1 + 0x1360);
      *(uint *)(param_1 + 0x13c4) = *(uint *)(param_1 + 0x1364);
      *(uint *)(param_1 + 0x13c8) = *(uint *)(param_1 + 0x1368);
    }
    *(byte *)(param_1 + 0x13c7) = *(byte *)(param_1 + 0x13c7) ^ 0x80;
    FUN_0044d7a0(param_1 + 0x136c,param_1 + 0x1360);
    FUN_0044d7a0(param_1 + 0x13cc,param_1 + 0x13c0);
    FUN_0049b240(0x01C775EC,param_1 + 0x1360,0x3c8efa35);
  }
  return;
}
