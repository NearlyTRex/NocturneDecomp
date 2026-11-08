// Name: FUN_004d1e10
// Address: 004d1e10
// Address Range: [[004d1e10, 004d1f04]]
// Convention: unknown
// Signature: void FUN_004d1e10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d1e10(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  
  uStack_30 = *(uint *)(param_1 + 0x20);
  fStack_2c = *(float *)(param_1 + 0x24) + 1.0;
  uStack_28 = *(uint *)(param_1 + 0x28);
  if (&uStack_24 != &uStack_30) {
    uStack_24 = uStack_30;
    fStack_20 = fStack_2c;
    uStack_1c = uStack_28;
  }
  FUN_004a3af0(0x01C73654,&uStack_24,&DAT_02cfd900,1,0,3);
  iVar2 = FUN_004625a0(param_1 + 0x158);
  fStack_18 = param_2 * _DAT_005c4a89;
  iVar2 = *(int *)(iVar2 + 0x100);
  fVar3 = (float)FUN_0040ce40(0x3f733333,0x3f866666);
  fVar1 = (float)(iVar2 + -1);
  fVar3 = fVar3 * fStack_18 + *(float *)(param_1 + 0x2dc);
  *(float *)(param_1 + 0x2dc) = fVar3;
  if (fVar3 < fVar1) {
    return;
  }
  *(float *)(param_1 + 0x2dc) = *(float *)(param_1 + 0x2dc) - fVar1;
  return;
}
