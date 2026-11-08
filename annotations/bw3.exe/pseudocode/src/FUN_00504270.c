// Name: FUN_00504270
// Address: 00504270
// Address Range: [[00504270, 005043a3]]
// Convention: unknown
// Signature: undefined4 FUN_00504270(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00504270(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0047cfa0(0x01C5B0E4,"?Initializing network..." + 1);
  iVar2 = param_1 + 0x180;
  FUN_0056fc30(iVar2);
  iVar1 = FUN_0056f930(iVar2);
  if (iVar1 == 0) {
    FUN_0047cf40(0x01C5B0E4,"Can't create datagram socket");
    return 0;
  }
  iVar1 = FUN_0056fd60(iVar2,0);
  if (iVar1 == 0) {
    FUN_0047cf40(0x01C5B0E4,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = FUN_0056f970(iVar2,0x1ddf);
  if (iVar1 == 0) {
    FUN_0047cf40(0x01C5B0E4,"Can't bind UDP socket");
    return 0;
  }
  iVar2 = FUN_0056fd00(iVar2,param_1 + *(int *)(param_1 + 0x124) * 0x80 + 0x3c);
  if (iVar2 != 0) {
    FUN_00504c10(param_1);
    _DAT_01da6478 = 1;
    _DAT_01da6474 = FUN_005806a0();
    _DAT_01da6474 = _DAT_01da6474 / 0x12;
    FUN_0047cfa0(0x01C5B0E4,"Initializing network...OK");
    return 1;
  }
  FUN_0047cf40(0x01C5B0E4,"Can't querry back for socket address");
  return 0;
}
