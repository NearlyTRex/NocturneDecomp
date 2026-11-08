// Name: FUN_00525f00
// Address: 00525f00
// Address Range: [[00525f00, 00525fde]]
// Convention: unknown
// Signature: uint FUN_00525f00(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00525f00(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte local_14;
  
  uVar3 = 0;
  *(uint *)(param_1 + 0x1314) = *(int *)(param_1 + 0x1314) + param_2;
  while (0 < (int)param_2) {
    if (*(int *)(param_1 + 0x531c) == 0) {
      *(uint *)(param_1 + 0x531c) = 8;
      uVar2 = *(int *)(param_1 + 0x1318) + 1;
      *(uint *)(param_1 + 0x1318) = uVar2;
      if (*(uint *)(param_1 + 0x1310) < uVar2) {
        _DAT_01d1d400 = "..\\sound\\mp3.cpp";
        _DAT_01d1d404 = 0x30a;
        FUN_005030e0("Buffer overflow!!  File: %s",&DAT_01d404c8);
      }
    }
    uVar2 = *(uint *)(param_1 + 0x531c);
    if (param_2 < uVar2) {
      uVar2 = param_2;
    }
    param_2 = param_2 - uVar2;
    iVar1 = *(int *)(param_1 + 0x531c) - uVar2;
    local_14 = (byte)iVar1;
    uVar3 = uVar3 | ((*(uint *)(param_1 + 0x131c + (*(uint *)(param_1 + 0x1318) & 0xfff) * 4) &
                     *(uint *)(&DAT_006206b0 + *(int *)(param_1 + 0x531c) * 4)) >> (local_14 & 0x1f)
                    ) << ((byte)param_2 & 0x1f);
    *(int *)(param_1 + 0x531c) = iVar1;
  }
  return uVar3;
}
