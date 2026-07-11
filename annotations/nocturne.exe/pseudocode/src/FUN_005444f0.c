// Name: FUN_005444f0
// Address: 005444f0
// Address Range: [[005444f0, 005445ba]]
// Convention: unknown
// Signature: undefined4 FUN_005444f0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005444f0(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint local_14;
  
  iVar6 = 0;
  local_14 = 0;
  do {
    if (*(int *)(0x01E57284 + 0x14ecb0) <= local_14) {
      return 0;
    }
    iVar1 = *(int *)(iVar6 + 0x14ecb4 + 0x01E57284);
    if (iVar1 != param_1) {
      iVar5 = FUN_0040d7e0(iVar1,param_2);
      if (iVar5 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
        fVar3 = (*(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24)) * (float)_DAT_005965e8;
        fVar4 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
        if (SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) < *(float *)(param_1 + 0xbc9c)) {
          *(int *)(param_1 + 0xbca4) = iVar1;
          return 1;
        }
      }
    }
    local_14 = local_14 + 1;
    iVar6 = iVar6 + 4;
  } while( true );
}
