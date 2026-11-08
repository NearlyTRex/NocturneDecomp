// Name: FUN_0050b790
// Address: 0050b790
// Address Range: [[0050b790, 0050b8c3]]
// Convention: unknown
// Signature: undefined4 FUN_0050b790(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0050b790(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0047be90(0x01C25594,"?Initializing network..." + 1);
  iVar2 = param_1 + 0x180;
  FUN_00579360(iVar2);
  iVar1 = FUN_00579060(iVar2);
  if (iVar1 == 0) {
    FUN_0047be40(0x01C25594,"Can't create datagram socket");
    return 0;
  }
  iVar1 = FUN_00579490(iVar2,0);
  if (iVar1 == 0) {
    FUN_0047be40(0x01C25594,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = FUN_005790a0(iVar2,0x1ddf);
  if (iVar1 == 0) {
    FUN_0047be40(0x01C25594,"Can't bind UDP socket");
    return 0;
  }
  iVar2 = FUN_00579430(iVar2,param_1 + *(int *)(param_1 + 0x124) * 0x80 + 0x3c);
  if (iVar2 != 0) {
    FUN_0050c130(param_1);
    _DAT_01d34e38 = 1;
    _DAT_01d34e34 = FUN_0058e9e0();
    _DAT_01d34e34 = _DAT_01d34e34 / 0x12;
    FUN_0047be90(0x01C25594,"Initializing network...OK");
    return 1;
  }
  FUN_0047be40(0x01C25594,"Can't querry back for socket address");
  return 0;
}
