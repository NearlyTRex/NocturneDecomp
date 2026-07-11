// Name: FUN_00525f50
// Address: 00525f50
// Address Range: [[00525f50, 00525fb3]]
// Convention: unknown
// Signature: void FUN_00525f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00525f50(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74 * 0x6c;
  *(uint *)(iVar1 + 0x2dc1b7c) = param_1;
  *(uint *)(iVar1 + 0x2dc1b80) = param_2;
  *(uint *)(iVar1 + 0x2dc1b84) = param_3;
  *(uint *)(iVar1 + 0x2dc1b88) = param_4;
  *(uint *)(iVar1 + 0x2dc1b8c) = param_5;
  *(uint *)(iVar1 + 0x2dc1b90) = param_6;
  *(uint *)(iVar1 + 0x2dc1b94) = 0;
  *(uint *)(iVar1 + 0x2dc1b98) = 0;
  return;
}
