// Name: FUN_005a6bc0
// Address: 005a6bc0
// Address Range: [[005a6bc0, 005a6ce3]]
// Convention: unknown
// Signature: undefined4 FUN_005a6bc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a6bc0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_10;
  
  if ((DAT_026686f8 & 1) == 0) {
    DAT_026686f8 = DAT_026686f8 | 1;
  }
  uStack_24 = *(uint *)(param_1 + 0x20);
  uStack_20 = *(uint *)(param_1 + 0x24);
  uStack_1c = *(uint *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x844) != 0) {
    FUN_005306e0(0x01E661B8,0x26686b8);
    *(uint *)(param_1 + 0x844) = 0;
  }
  FUN_00448810(0x26686b8,&uStack_24);
  fVar3 = (float10)*(float *)(param_1 + 0x828);
  fVar4 = fVar3 * (float10)_DAT_005f071d;
  FUN_005b7ff0();
  iStack_10 = (int)ROUND(fVar4);
  fVar4 = (float10)iStack_10 * (float10)*(float *)(param_1 + 0x830);
  FUN_005b7ff0();
  _DAT_026686f4 = (int)ROUND(fVar4);
  iVar1 = (_DAT_026686f4 + (_DAT_026686f4 >> 0x1f) * -0x100) -
          (uint)((_DAT_026686f4 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  DAT_026686d4 = (byte)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  iStack_10 = _DAT_026686f4;
  FUN_00448860(0x26686b8,(float)(fVar3 * (float10)_DAT_005f0725));
  _DAT_026686d8 = 1;
  FUN_00530750(0x01E661B8,0x26686b8);
  *(uint *)(param_1 + 0x844) = 1;
  return *(uint *)(param_1 + 0x6d0);
}
