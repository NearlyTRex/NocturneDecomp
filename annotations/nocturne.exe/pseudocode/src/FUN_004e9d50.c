// Name: FUN_004e9d50
// Address: 004e9d50
// Address Range: [[004e9d50, 004e9e8a]]
// Convention: unknown
// Signature: undefined4 FUN_004e9d50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e9d50(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0046fff0(0x01BCD074,"?Initializing network..." + 1);
  iVar2 = param_1 + 0x170;
  FUN_00549110(iVar2);
  iVar1 = FUN_00548f30(iVar2);
  if (iVar1 == 0) {
    FUN_0046fcd0(0x01BCD074,"Can't create datagram socket");
    return 0;
  }
  iVar1 = FUN_00549240(iVar2,0);
  if (iVar1 == 0) {
    FUN_0046fcd0(0x01BCD074,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = FUN_00548f70(iVar2,0x1ddf);
  if (iVar1 == 0) {
    FUN_0046fcd0(0x01BCD074,"Can't bind UDP socket");
    return 0;
  }
  iVar2 = FUN_005491e0(iVar2,*(int *)(param_1 + 0x114) * 0x78 + param_1 + 0x3c);
  if (iVar2 != 0) {
    FUN_004ea6e0(param_1);
    _DAT_01cea3f8 = 1;
    _DAT_01cea3f4 = FUN_00558a30();
    _DAT_01cea3f4 = _DAT_01cea3f4 / 0x12;
    FUN_0046fff0(0x01BCD074,"Initializing network...OK");
    return 1;
  }
  FUN_0046fcd0(0x01BCD074,"Can't querry back for socket address");
  return 0;
}
