// Name: __ShrMan
// Address: 10009eb0
// Address Range: [[10009eb0, 10009f5c]]
// Convention: unknown
// Signature: void __ShrMan(uint *param_1,int param_2)

#include "nocturne.h"

/* Library Function - Single Match
void __ShrMan(uint *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = (byte)(param_2 >> 0x1f);
  bVar2 = (((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2;
  iVar6 = 3;
  uVar4 = 0;
  puVar5 = param_1;
  do {
    uVar1 = *puVar5;
    uVar7 = uVar1 >> (bVar2 & 0x1f);
    *puVar5 = uVar7;
    uVar7 = uVar7 | uVar4;
    uVar4 = (uVar1 & ~(-1 << (bVar2 & 0x1f))) << (0x20 - bVar2 & 0x1f);
    iVar6 = iVar6 + -1;
    *puVar5 = uVar7;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  iVar6 = 2;
  puVar5 = param_1 + 2;
  param_1 = param_1 + (2 - iVar3);
  do {
    if (iVar6 < iVar3) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = *param_1;
    }
    param_1 = param_1 + -1;
    puVar5 = puVar5 + -1;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  return;
}
