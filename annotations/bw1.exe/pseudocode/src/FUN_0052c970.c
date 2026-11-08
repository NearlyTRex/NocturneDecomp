// Name: FUN_0052c970
// Address: 0052c970
// Address Range: [[0052c970, 0052caaa]]
// Convention: unknown
// Signature: undefined4 FUN_0052c970(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052c970(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00494400(0x01C3EB54,"Initializing network...");
  iVar2 = param_1 + 0x178;
  FUN_0059cc40(iVar2);
  iVar1 = FUN_0059c940(iVar2);
  if (iVar1 == 0) {
    FUN_004943a0(0x01C3EB54,"Can't create datagram socket");
    return 0;
  }
  iVar1 = FUN_0059cd70(iVar2,0);
  if (iVar1 == 0) {
    FUN_004943a0(0x01C3EB54,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = FUN_0059c980(iVar2,0x1ddf);
  if (iVar1 == 0) {
    FUN_004943a0(0x01C3EB54,"Can't bind UDP socket");
    return 0;
  }
  iVar2 = FUN_0059cd10(iVar2,*(int *)(param_1 + 0x11c) * 0x7c + param_1 + 0x3c);
  if (iVar2 != 0) {
    FUN_0052d300(param_1);
    _DAT_01d51da0 = 1;
    _DAT_01d51d9c = FUN_005b2420();
    _DAT_01d51d9c = _DAT_01d51d9c / 0x12;
    FUN_00494400(0x01C3EB54,"Initializing network...OK");
    return 1;
  }
  FUN_004943a0(0x01C3EB54,"Can't querry back for socket address");
  return 0;
}
