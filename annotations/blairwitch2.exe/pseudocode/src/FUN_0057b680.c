// Name: FUN_0057b680
// Address: 0057b680
// Address Range: [[0057b680, 0057b770]]
// Convention: unknown
// Signature: uint FUN_0057b680(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0057b680(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint local_c;
  
  if (*(int *)(param_1 + 0xa10) < *(int *)(param_1 + 0xa14)) {
    bVar1 = *(byte *)(param_1 + 0x610 + *(int *)(param_1 + 0xa10));
    *(int *)(param_1 + 0xa10) = *(int *)(param_1 + 0xa10) + 1;
    return (uint)bVar1;
  }
  *(uint *)(param_1 + 0xa14) = 0;
  *(uint *)(param_1 + 0xa10) = 0;
  local_c = 4;
  iVar2 = FUN_00579090(param_1 + 0xd2c);
  if (iVar2 != 0) {
    local_c = FUN_00579150(param_1 + 0xd2c);
  }
  if ((local_c & 4) == 0) {
    iVar2 = FUN_00579240(param_1 + 0xd2c,param_1 + 0x610,0x200,0);
    if (iVar2 == -2) {
      if (param_2 != 0) {
        return 0xfffffffe;
      }
    }
    else if (-1 < iVar2) {
      *(int *)(param_1 + 0xa14) = iVar2;
      return 0xffffffff;
    }
  }
  FUN_005b7790(param_1 + 0xa18,"Error receiving %s from %s",param_1 + 0x500,param_1 + 0x400);
  *(uint *)(param_1 + 0xd28) = 0xfffffffb;
  return 0xfffffffd;
}
