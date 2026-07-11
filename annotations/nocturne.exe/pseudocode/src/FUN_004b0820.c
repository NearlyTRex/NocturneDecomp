// Name: FUN_004b0820
// Address: 004b0820
// Address Range: [[004b0820, 004b08ca]]
// Convention: unknown
// Signature: undefined4 FUN_004b0820(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b0820(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_110 [256];
  
  FUN_00564b20(local_110,0xff,param_2);
  iVar3 = 0;
  FUN_00563350(param_2,&DAT_005851d8,&DAT_01c9e038);
  if (0 < _DAT_01c9e038) {
    iVar2 = 0x1c9e03c;
    do {
      iVar3 = iVar3 + 1;
      FUN_004af7c0(iVar2,param_2);
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < _DAT_01c9e038);
  }
  iVar3 = 0;
  uVar1 = FUN_00563350(param_2,&DAT_005851dc,&DAT_01c7ccf0);
  if (0 < _DAT_01c7ccf0) {
    iVar2 = 0x1c7ccf4;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = FUN_004af160(iVar2,param_2);
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < _DAT_01c7ccf0);
  }
  return uVar1;
}
