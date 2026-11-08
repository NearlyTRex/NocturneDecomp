// Name: FUN_005ad940
// Address: 005ad940
// Address Range: [[005ad940, 005ad9e1]]
// Convention: unknown
// Signature: void FUN_005ad940(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ad940(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  uint uStack_1c;
  float fStack_18;
  uint uStack_14;
  int iStack_10;
  
  uStack_1c = *(uint *)(param_1 + 0x20);
  uStack_14 = *(uint *)(param_1 + 0x28);
  fStack_18 = *(float *)(param_1 + 0x24) + _DAT_005f0eef;
  fVar3 = ((float10)1 - (float10)*(float *)(param_1 + 0x7e8) / (float10)*(float *)(param_1 + 0x7dc))
          * (float10)_DAT_005f0ef3;
  FUN_005b7ff0(param_1 + 0x7f4,&uStack_1c);
  iStack_10 = (int)ROUND(fVar3);
  FUN_00448810();
  *(int *)(param_1 + 0x830) = iStack_10;
  iVar1 = (iStack_10 + (iStack_10 >> 0x1f) * -0x100) - (uint)((iStack_10 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x810) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  FUN_00448860(param_1 + 0x7f4,0x40a00000);
  *(uint *)(param_1 + 0x814) = 2;
  return;
}
