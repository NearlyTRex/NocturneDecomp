// Name: FUN_00525a80
// Address: 00525a80
// Address Range: [[00525a80, 00525b64]]
// Convention: unknown
// Signature: void FUN_00525a80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00525a80(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    _DAT_01cc4800 = "MbP?..\\sound\\sndmain.cpp" + 4;
    _DAT_01cc4804 = 0xbf0;
    FUN_004c8440("SfxSlot::seek - no sample?!");
  }
  uVar1 = FUN_00525c70(*(uint *)(param_1 + 0x74),*(uint *)(param_1 + 0x60),
                       *(uint *)(param_1 + 100),*(uint *)(param_1 + 0x68),0);
  *(uint *)(param_1 + 0x68) = 0;
  *(ulonglong *)(param_1 + 0x60) = uVar1;
  uVar1 = FUN_00525de0(*(uint *)(param_1 + 0x74),*(uint *)(param_1 + 0x60),
                       *(uint *)(param_1 + 100),*(uint *)(param_1 + 0x68));
  *(ulonglong *)(param_1 + 0x60) = uVar1;
  if (*(int *)(*(int *)(param_1 + 0x74) + 0x134) < 0) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 100);
    return;
  }
  fVar3 = (float10)*(double *)(param_1 + 0x60);
  uVar2 = FUN_00563a30(0);
  FUN_00523d10(uVar2,(int)ROUND(fVar3));
  *(double *)(param_1 + 0x118) = (double)*(int *)(*(int *)(param_1 + 0x74) + 0x140);
  return;
}
