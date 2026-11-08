// Name: FUN_005373e0
// Address: 005373e0
// Address Range: [[005373e0, 00537510]]
// Convention: unknown
// Signature: undefined4 FUN_005373e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005373e0(void)

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
  if (0 < _DAT_0203a598) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_00603cbc + iVar5);
      puVar2 = (uint *)((int)&DAT_00603b3c + iVar5);
      puVar3 = (uint *)(&DAT_0203a59c + iVar5);
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      FUN_0045ce40(*puVar3,*puVar2,*puVar1,0x80);
    } while (iVar6 < _DAT_0203a598);
  }
  iVar5 = 0;
  if (0 < _DAT_0203ad1c) {
    iVar6 = iVar6 * 4;
    iVar7 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_00603cbc + iVar6);
      puVar2 = (uint *)((int)&DAT_00603b3c + iVar6);
      puVar3 = (uint *)(iVar7 + 0x203ad20);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 1;
      FUN_0045ce40(*puVar3,*puVar2,*puVar1,0x80);
    } while (iVar5 < _DAT_0203ad1c);
  }
  iVar6 = _DAT_0203a598 + _DAT_0203ad1c;
  FUN_005a28c0(local_110,"%d omni lights",_DAT_0203b3e8);
  FUN_00401fe0(local_110,(&DAT_00603b3c)[iVar6],(&DAT_00603cbc)[iVar6]);
  FUN_005a28c0(local_110,"%d spot lights",_DAT_0203a598);
  uVar4 = FUN_00401fe0(local_110,(&DAT_00603b3c)[iVar6],(&DAT_00603cbc)[iVar6] + 0xb);
  return uVar4;
}
