// Name: FUN_0055fd30
// Address: 0055fd30
// Address Range: [[0055fd30, 0055fedb]]
// Convention: unknown
// Signature: void FUN_0055fd30(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055fd30(uint param_1)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1008 [1013];
  uint local_1c;
  uint local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  bVar3 = 0;
  _DAT_02cf5698 = 0;
  _DAT_02cf569c = 0;
  _DAT_02cf56a0 = 0;
  _DAT_02cf568c = 0x501502f9;
  _DAT_02cf5690 = 0x501502f9;
  _DAT_02cf5694 = 0x501502f9;
  FUN_00557100();
  FUN_0055e8b0();
  _DAT_02cf569c = 0;
  FUN_00558860();
  FUN_00558050();
  iVar2 = FUN_005586c0();
  if (iVar2 == 0) {
    return;
  }
  _DAT_02cf5ec8 = 0x3f800000;
  _DAT_02cf5ecc = 0x3f800000;
  _DAT_02cf5ed0 = 0;
  iVar2 = FUN_00556e30();
  if (iVar2 == 0) {
    FUN_00556db0();
  }
  else {
    FUN_00556db0();
    local_8 = FUN_00556d20();
    FUN_00556c90();
  }
  FUN_00555fd0();
  FUN_00555e90();
  _DAT_02cf5ec0 = FUN_005609b0(param_1);
  FUN_00556050();
  if (*(int *)(0x01ED78C8 + 0x15acb8) != 0) {
    fVar1 = *(float *)(0x01ED78C8 + 0x15ac70);
    local_14 = -fVar1;
    local_10 = -*(float *)(0x01ED78C8 + 0x15ac74);
    local_c = -*(float *)(0x01ED78C8 + 0x15ac78);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe4 + ((uint)bVar3 * -2 + 3) * 4);
    *(uint *)((int)&stack0xffffffe4 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 1) * 4) =
         *(uint *)((int)&stack0xffffffe4 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 4) * 4);
    if (&stack0x00000000 != (byte *)0x2cf5f94) {
      _DAT_02cf5f78 = local_1c;
      _DAT_02cf5f7c = local_18;
      _DAT_02cf5f74 = -fVar1;
    }
    _DAT_02cf5f84 = 0xffffffff;
  }
  FUN_004953d0();
  _DAT_02cf5ec4 = 1;
  return;
}
