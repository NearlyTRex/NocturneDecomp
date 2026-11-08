// Name: FUN_0040e2b0
// Address: 0040e2b0
// Address Range: [[0040e2b0, 0040e39f]]
// Convention: unknown
// Signature: void FUN_0040e2b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e2b0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  float afStackY_1024 [1012];
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  bVar3 = 0;
  iVar1 = FUN_004625a0(param_1 + 0x158);
  fStack_18 = param_2 * _DAT_005b611d;
  iVar1 = *(int *)(iVar1 + 0x100) + -1;
  fVar2 = (float)FUN_0040ce40(0x3f733333,0x3f866666);
  iStack_10 = iVar1;
  fStack_14 = (float)iVar1;
  fVar2 = fVar2 * fStack_18 + *(float *)(param_1 + 0x31c);
  *(float *)(param_1 + 0x31c) = fVar2;
  if (fStack_14 <= fVar2) {
    *(float *)(param_1 + 0x31c) = *(float *)(param_1 + 0x31c) - fStack_14;
  }
  uStack_30 = *(uint *)(param_1 + 0x20);
  fStack_2c = *(float *)(param_1 + 0x24) + _DAT_005b6121;
  uStack_28 = *(uint *)(param_1 + 0x28);
  uStack_3c = *(uint *)(param_1 + 0x20);
  (&stack0xffffffc8)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&stack0xffffffdc != &stack0xffffffc4) {
    uStack_24 = uStack_3c;
    fStack_20 = fStack_38;
    uStack_1c = uStack_34;
  }
  FUN_004a3af0(0x01C73654,&stack0xffffffdc,&DAT_02cfd900,1,0,4);
  return;
}
