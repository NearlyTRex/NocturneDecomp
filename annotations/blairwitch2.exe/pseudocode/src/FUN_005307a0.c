// Name: FUN_005307a0
// Address: 005307a0
// Address Range: [[005307a0, 005308d0]]
// Convention: unknown
// Signature: undefined4 FUN_005307a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005307a0(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte local_110 [256];
  
  iVar6 = 0;
  if (0 < _DAT_01fc8e84) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_0061b73c + iVar5);
      puVar2 = (uint *)((int)&DAT_0061b5bc + iVar5);
      puVar3 = (uint *)(&DAT_01fc8e88 + iVar5);
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      FUN_0044a930(*puVar3,*puVar2,*puVar1,0x80);
    } while (iVar6 < _DAT_01fc8e84);
  }
  iVar5 = 0;
  if (0 < _DAT_01fc9608) {
    iVar6 = iVar6 * 4;
    iVar7 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_0061b73c + iVar6);
      puVar2 = (uint *)((int)&DAT_0061b5bc + iVar6);
      puVar3 = (uint *)(iVar7 + 0x1fc960c);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 1;
      FUN_0044a930(*puVar3,*puVar2,*puVar1,0x80);
    } while (iVar5 < _DAT_01fc9608);
  }
  iVar6 = _DAT_01fc8e84 + _DAT_01fc9608;
  FUN_005b7790(local_110,"%d omni lights",_DAT_01fc9cd4);
  FUN_00401fe0(local_110,(&DAT_0061b5bc)[iVar6],(&DAT_0061b73c)[iVar6]);
  FUN_005b7790(local_110,"%d spot lights",_DAT_01fc8e84);
  uVar4 = FUN_00401fe0(local_110,(&DAT_0061b5bc)[iVar6],(&DAT_0061b73c)[iVar6] + 0xb);
  return uVar4;
}
