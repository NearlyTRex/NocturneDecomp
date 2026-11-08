// Name: FUN_0041b750
// Address: 0041b750
// Address Range: [[0041b750, 0041b936]]
// Convention: unknown
// Signature: void FUN_0041b750(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b750(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_101c [1015];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  float fStack_1c;
  uint uStack_10;
  
  bVar7 = 0;
  iVar3 = FUN_004a0410(param_1);
  iVar3 = FUN_005c0357(iVar3 + 0xc2e8,0x14,0x5fcd90);
  *(byte ***)(iVar3 + -0xc194) = &PTR_FUN_005fcc44;
  FUN_00569f50(iVar3 + -0xc190,0x5d4599);
  *(uint *)(iVar3 + -0x92fc) = 0x3f19999a;
  *(uint *)(iVar3 + -0x92f8) = 0x3f666666;
  pcVar5 = "boneguydie";
  *(uint *)(iVar3 + -0xc1ec) = 1;
  pcVar6 = (char *)(iVar3 + -0x6c);
  *(uint *)(iVar3 + 0x5a0) = 0;
  uVar4 = _DAT_005fcc30;
  *(uint *)(iVar3 + -0x9b48) = 2;
  uVar2 = _DAT_005fcc34;
  *(uint *)(iVar3 + -8) = 0x41200000;
  *(uint *)(iVar3 + -0x92f4) = uVar4;
  *(uint *)(iVar3 + -0x92f0) = uVar2;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + -4) = 0;
  FUN_005bfb70(iVar3,0,0x5a0);
  uVar4 = FUN_0040cc60(0,0xff);
  *(uint *)(iVar3 + -0x7c) = 0;
  *(uint *)(iVar3 + -0x78) = 0;
  *(uint *)(iVar3 + -0x74) = 0;
  *(uint *)(iVar3 + -0x8c) = 0x40c00000;
  *(uint *)(iVar3 + -0x9dbc) = 0x3f490fdb;
  *(uint *)(iVar3 + -0x80) = uVar4;
  uStack_28 = FUN_0040cc00(0,0x437f0000);
  uStack_10 = uStack_28;
  uStack_24 = FUN_0040cc00(0,0x42200000);
  uStack_10 = uStack_24;
  uStack_20 = FUN_0040cc00(0x42d40000,0x43800000);
  uStack_10 = uStack_20;
  FUN_0041b590(&stack0xffffffd8);
  fStack_34 = fStack_1c;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar7 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  fVar8 = (float10)_DAT_005d45b1;
  fVar9 = (float10)fStack_34 * fVar8;
  fVar10 = (float10)fStack_30 * fVar8;
  fVar8 = (float10)fStack_2c * fVar8;
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  *(int *)(iVar3 + -0xc1e0) = (int)ROUND(fVar9);
  *(int *)(iVar3 + -0xc1dc) = (int)ROUND(fVar10);
  *(int *)(iVar3 + -0xc1d8) = (int)ROUND(fVar8);
  return;
}
