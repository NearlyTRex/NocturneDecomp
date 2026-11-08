// Name: FUN_00417400
// Address: 00417400
// Address Range: [[00417400, 00417604]]
// Convention: unknown
// Signature: void FUN_00417400(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417400(uint param_1)

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
  iVar3 = FUN_00488fd0(param_1);
  iVar3 = FUN_005a30d7(iVar3 + 0xd0f0,0x14,0x5dc830);
  *(byte ***)(iVar3 + -0xcf9c) = &PTR_FUN_005dc154;
  FUN_0054eae0(iVar3 + -0xcf98,0x5b6d7a);
  *(uint *)(iVar3 + -0x9e84) = 0x3f19999a;
  *(uint *)(iVar3 + -0x9e80) = 0x3f666666;
  pcVar5 = "boneguydie";
  *(uint *)(iVar3 + -0xcff4) = 1;
  pcVar6 = (char *)(iVar3 + -0x74);
  *(uint *)(iVar3 + -0xc) = 0;
  uVar4 = _DAT_005dc13c;
  *(uint *)(iVar3 + -0xa950) = 3;
  uVar2 = _DAT_005dc140;
  *(uint *)(iVar3 + -0x10) = 0x41200000;
  *(uint *)(iVar3 + -0x9e7c) = uVar4;
  *(uint *)(iVar3 + -0x9e78) = uVar2;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + -8) = 0;
  FUN_005a28f0(iVar3,0,0x5a0);
  uVar4 = FUN_0040cea0(0,0xff);
  *(uint *)(iVar3 + -0x94) = 0;
  *(uint *)(iVar3 + -0x90) = 0;
  *(uint *)(iVar3 + -0x8c) = 0;
  *(uint *)(iVar3 + -0x298) = 0x40c00000;
  *(uint *)(iVar3 + -0xabc4) = 0x3f490fdb;
  *(uint *)(iVar3 + -4) = 0;
  *(uint *)(iVar3 + -0x7c) = 0;
  *(uint *)(iVar3 + -0x9c) = uVar4;
  uStack_28 = FUN_0040ce40(0,0x437f0000);
  uStack_10 = uStack_28;
  uStack_24 = FUN_0040ce40(0,0x42200000);
  uStack_10 = uStack_24;
  uStack_20 = FUN_0040ce40(0x42d40000,0x43800000);
  uStack_10 = uStack_20;
  FUN_00417240(&stack0xffffffd8);
  fStack_34 = fStack_1c;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar7 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  fVar8 = (float10)_DAT_005b6d92;
  fVar9 = (float10)fStack_34 * fVar8;
  fVar10 = (float10)fStack_30 * fVar8;
  fVar8 = (float10)fStack_2c * fVar8;
  *(uint *)(iVar3 + -0x9e8c) = 0;
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  *(int *)(iVar3 + -0xcfe8) = (int)ROUND(fVar9);
  *(int *)(iVar3 + -0xcfe4) = (int)ROUND(fVar10);
  *(int *)(iVar3 + -0xcfe0) = (int)ROUND(fVar8);
  return;
}
