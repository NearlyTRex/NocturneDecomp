// Name: FUN_0055a1d0
// Address: 0055a1d0
// Address Range: [[0055a1d0, 0055a35f]]
// Convention: unknown
// Signature: void FUN_0055a1d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a1d0(void)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStack_100c [1016];
  uint local_20;
  uint local_1c;
  float local_18;
  float local_14;
  float local_10;
  uint local_c;
  
  bVar3 = 0;
  _DAT_0264b2a8 = 0;
  _DAT_0264b2ac = 0;
  _DAT_0264b2b0 = 0;
  _DAT_0264b29c = 0x501502f9;
  _DAT_0264b2a0 = 0x501502f9;
  _DAT_0264b2a4 = 0x501502f9;
  FUN_00551570();
  FUN_00558d50();
  _DAT_0264b2ac = 0;
  FUN_00552cc0();
  FUN_005524b0();
  iVar2 = FUN_00552b20();
  if (iVar2 == 0) {
    return;
  }
  _DAT_0264bad8 = 0x3f800000;
  _DAT_0264badc = 0x3f800000;
  _DAT_0264bae0 = 0;
  iVar2 = FUN_005512a0();
  if (iVar2 == 0) {
    FUN_00551220();
  }
  else {
    FUN_00551220();
    local_c = FUN_00551190();
    FUN_00551100();
  }
  FUN_00550450();
  FUN_00550310();
  FUN_005504d0();
  if (*(int *)(0x01E661B8 + 0x15acb8) != 0) {
    fVar1 = *(float *)(0x01E661B8 + 0x15ac70);
    local_18 = -fVar1;
    local_14 = -*(float *)(0x01E661B8 + 0x15ac74);
    local_10 = -*(float *)(0x01E661B8 + 0x15ac78);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0x00000000 != (byte *)0x264bba8) {
      _DAT_0264bb88 = local_20;
      _DAT_0264bb8c = local_1c;
      _DAT_0264bb84 = -fVar1;
    }
    _DAT_0264bb94 = 0xffffffff;
  }
  FUN_00491be0();
  _DAT_0264bad4 = 1;
  return;
}
