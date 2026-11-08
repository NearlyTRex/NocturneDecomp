// Name: FUN_00551a50
// Address: 00551a50
// Address Range: [[00551a50, 00551b80]]
// Convention: unknown
// Signature: undefined4 FUN_00551a50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00551a50(void)

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
  if (0 < _DAT_01fe4e38) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_00622dac + iVar5);
      puVar2 = (uint *)((int)&DAT_00622c2c + iVar5);
      puVar3 = (uint *)(&DAT_01fe4e3c + iVar5);
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 1;
      FUN_00463130(*puVar3,*puVar2,*puVar1,0x80);
    } while (iVar6 < _DAT_01fe4e38);
  }
  iVar5 = 0;
  if (0 < _DAT_01fe55bc) {
    iVar6 = iVar6 * 4;
    iVar7 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_00622dac + iVar6);
      puVar2 = (uint *)((int)&DAT_00622c2c + iVar6);
      puVar3 = (uint *)(iVar7 + 0x1fe55c0);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 1;
      FUN_00463130(*puVar3,*puVar2,*puVar1,0x80);
    } while (iVar5 < _DAT_01fe55bc);
  }
  iVar6 = _DAT_01fe4e38 + _DAT_01fe55bc;
  FUN_005bfb40(local_110,"%d omni lights",_DAT_01fe5c88);
  FUN_00401fe0(local_110,(&DAT_00622c2c)[iVar6],(&DAT_00622dac)[iVar6]);
  FUN_005bfb40(local_110,"%d spot lights",_DAT_01fe4e38);
  uVar4 = FUN_00401fe0(local_110,(&DAT_00622c2c)[iVar6],(&DAT_00622dac)[iVar6] + 0xb);
  return uVar4;
}
