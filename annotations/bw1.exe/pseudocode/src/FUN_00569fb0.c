// Name: FUN_00569fb0
// Address: 00569fb0
// Address Range: [[00569fb0, 0056a21b]]
// Convention: unknown
// Signature: int FUN_00569fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

int FUN_00569fb0(uint param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  byte bVar7;
  byte auStack_35b0 [2012];
  byte auStack_2dd4 [4800];
  byte auStack_1b14 [2012];
  byte auStack_1338 [728];
  float afStack_1060 [1031];
  uint uStack_44;
  float fStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  int iStack_14;
  
  bVar7 = 0;
  iVar2 = FUN_00524a00(param_1);
  iStack_2c = *(int *)(iVar2 + 0x1c8c + param_4 * 0x120);
  iVar2 = FUN_00569f30(param_1);
  iVar2 = *(int *)(iVar2 + 0x1de78);
  FUN_0056a220(param_1,param_2,param_3,auStack_1b14);
  iVar6 = 0;
  FUN_0056b130(auStack_1b14,param_1);
  iStack_28 = -1;
  fStack_24 = 1e+30;
  if (0 < iStack_2c) {
    do {
      iStack_14 = iVar6;
      FUN_0056a220(param_1,param_4,(float)iVar6,auStack_35b0);
      FUN_0056b130(auStack_35b0,param_1);
      iVar4 = 0;
      fStack_20 = 0.0;
      if (0 < iVar2) {
        fVar1 = 0.0;
        puVar5 = auStack_2dd4;
        puVar3 = auStack_1338;
        do {
          afStack_1060[0x406] = *(float *)(puVar5 + 0xc);
          uStack_1c = *(uint *)(puVar5 + 0x1c);
          uStack_44 = *(uint *)(puVar5 + 0x2c);
          afStack_1060[0x403] = afStack_1060[0x406];
          afStack_1060[0x404] = (float)*(uint *)(puVar5 + 0x1c);
          afStack_1060[0x405] = (float)*(uint *)(puVar5 + 0x2c);
          afStack_1060[0x3fd] = afStack_1060[0x406];
          afStack_1060[(uint)bVar7 * -2 + 0x3fe] = afStack_1060[(uint)bVar7 * -2 + 0x404];
          afStack_1060[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3ff] =
               afStack_1060[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x405];
          fStack_40 = *(float *)(puVar3 + 0xc);
          uStack_3c = *(uint *)(puVar3 + 0x1c);
          uStack_38 = *(uint *)(puVar3 + 0x2c);
          afStack_1060[0x3fa] = fStack_40;
          afStack_1060[0x3fb] = (float)*(uint *)(puVar3 + 0x1c);
          afStack_1060[0x3fc] = (float)*(uint *)(puVar3 + 0x2c);
          afStack_1060[0x400] = fStack_40;
          afStack_1060[(uint)bVar7 * -2 + 0x401] = afStack_1060[(uint)bVar7 * -2 + 0x3fb];
          afStack_1060[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x402] =
               afStack_1060[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3fc];
          puVar3 = puVar3 + 0x30;
          puVar5 = puVar5 + 0x30;
          iVar4 = iVar4 + 1;
          fVar1 = (afStack_1060[0x402] - afStack_1060[0x3ff]) *
                  (afStack_1060[0x402] - afStack_1060[0x3ff]) +
                  (afStack_1060[0x401] - afStack_1060[0x3fe]) *
                  (afStack_1060[0x401] - afStack_1060[0x3fe]) +
                  (afStack_1060[0x400] - afStack_1060[0x3fd]) *
                  (afStack_1060[0x400] - afStack_1060[0x3fd]) + fVar1;
          fStack_20 = fVar1;
        } while (iVar4 < iVar2);
      }
      if (fStack_20 < fStack_24) {
        fStack_24 = fStack_20;
        iStack_28 = iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iStack_2c);
  }
  return iStack_28;
}
