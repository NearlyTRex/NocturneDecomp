// Name: FUN_0059ed90
// Address: 0059ed90
// Address Range: [[0059ed90, 0059ee53]]
// Convention: unknown
// Signature: undefined4 FUN_0059ed90(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0059ed90(int param_1,int param_2)

{
  int iVar1;
  uint local_c;
  
  *(uint *)(param_1 + 0xa14) = 0;
  *(uint *)(param_1 + 0xa10) = 0;
  local_c = 4;
  iVar1 = FUN_0059c970(param_1 + 0xd2c);
  if (iVar1 != 0) {
    local_c = FUN_0059ca30(param_1 + 0xd2c);
  }
  if ((local_c & 4) == 0) {
    iVar1 = FUN_0059cb20(param_1 + 0xd2c,param_1 + 0x610,0x200,0);
    if (iVar1 == -2) {
      if (param_2 != 0) {
        return 0xfffffffe;
      }
    }
    else if (-1 < iVar1) {
      *(int *)(param_1 + 0xa14) = iVar1;
      return 0xfffffffc;
    }
  }
  FUN_005bfb40(param_1 + 0xa18,"Error receiving %s from %s",param_1 + 0x500,param_1 + 0x400);
  *(uint *)(param_1 + 0xd28) = 0xfffffffb;
  return 0xfffffffd;
}
