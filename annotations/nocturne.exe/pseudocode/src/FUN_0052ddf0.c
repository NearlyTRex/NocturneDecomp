// Name: FUN_0052ddf0
// Address: 0052ddf0
// Address Range: [[0052ddf0, 0052df86]]
// Convention: unknown
// Signature: void FUN_0052ddf0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ddf0(uint param_1)

{
  int iVar1;
  
  _DAT_02dc9468 = 0;
  _DAT_02dc946c = 0;
  _DAT_02dc9470 = 0;
  _DAT_02dc945c = 0x501502f9;
  _DAT_02dc9460 = 0x501502f9;
  _DAT_02dc9464 = 0x501502f9;
  FUN_005277b0(0,0);
  FUN_0052c9d0();
  _DAT_02dc946c = 0;
  FUN_00528630();
  FUN_00527e40();
  iVar1 = FUN_00528490();
  if (iVar1 == 0) {
    return;
  }
  _DAT_02dc9c98 = 0x3f800000;
  _DAT_02dc9c9c = 0x3f800000;
  _DAT_02dc9ca0 = 0;
  iVar1 = FUN_00527490();
  if (iVar1 == 0) {
    FUN_00527410();
  }
  else {
    FUN_00527410();
    FUN_00527380();
    FUN_005272e0();
  }
  FUN_00526340();
  FUN_005261b0();
  _DAT_02dc9c90 = FUN_0052ea40(param_1);
  FUN_005263c0();
  if (*(int *)(0x01E57284 + 0x15a8c0) != 0) {
    if (&stack0x00000000 != &DAT_02dc9d58) {
      _DAT_02dc9d44 = -*(float *)(0x01E57284 + 0x15a878);
      _DAT_02dc9d48 = -*(float *)(0x01E57284 + 0x15a87c);
      _DAT_02dc9d4c = -*(float *)(0x01E57284 + 0x15a880);
    }
    _DAT_02dc9d54 = 0xffffffff;
  }
  FUN_00480eb0();
  _DAT_02dc9c94 = 1;
  return;
}
