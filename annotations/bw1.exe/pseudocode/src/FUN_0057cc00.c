// Name: FUN_0057cc00
// Address: 0057cc00
// Address Range: [[0057cc00, 0057cdab]]
// Convention: unknown
// Signature: void FUN_0057cc00(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057cc00(uint param_1)

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
  _DAT_02c82a78 = 0;
  _DAT_02c82a7c = 0;
  _DAT_02c82a80 = 0;
  _DAT_02c82a6c = 0x501502f9;
  _DAT_02c82a70 = 0x501502f9;
  _DAT_02c82a74 = 0x501502f9;
  FUN_00573fa0();
  FUN_0057b780();
  _DAT_02c82a7c = 0;
  FUN_005756f0();
  FUN_00574ee0();
  iVar2 = FUN_00575550();
  if (iVar2 == 0) {
    return;
  }
  _DAT_02c832a8 = 0x3f800000;
  _DAT_02c832ac = 0x3f800000;
  _DAT_02c832b0 = 0;
  iVar2 = FUN_00573cd0();
  if (iVar2 == 0) {
    FUN_00573c50();
  }
  else {
    FUN_00573c50();
    local_8 = FUN_00573bc0();
    FUN_00573b30();
  }
  FUN_00572ac0();
  FUN_00572980();
  _DAT_02c832a0 = FUN_0057d880(param_1);
  FUN_00572b40();
  if (*(int *)(0x01E82168 + 0x15acb8) != 0) {
    fVar1 = *(float *)(0x01E82168 + 0x15ac70);
    local_14 = -fVar1;
    local_10 = -*(float *)(0x01E82168 + 0x15ac74);
    local_c = -*(float *)(0x01E82168 + 0x15ac78);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe4 + ((uint)bVar3 * -2 + 3) * 4);
    *(uint *)((int)&stack0xffffffe4 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 1) * 4) =
         *(uint *)((int)&stack0xffffffe4 + ((uint)bVar3 * -2 + (uint)bVar3 * -2 + 4) * 4);
    if (&stack0x00000000 != &DAT_02c83374) {
      _DAT_02c83358 = local_1c;
      _DAT_02c8335c = local_18;
      _DAT_02c83354 = -fVar1;
    }
    _DAT_02c83364 = 0xffffffff;
  }
  FUN_004aa550();
  _DAT_02c832a4 = 1;
  return;
}
