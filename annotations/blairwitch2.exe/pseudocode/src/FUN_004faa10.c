// Name: FUN_004faa10
// Address: 004faa10
// Address Range: [[004faa10, 004fac4c]]
// Convention: unknown
// Signature: undefined4 FUN_004faa10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004faa10(int param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *local_14;
  
  _DAT_01d17fc0 = *(int *)(param_2 + 4);
  iVar3 = 0;
  if (0 < _DAT_01d17fc0) {
    pfVar2 = (float *)&DAT_01d17fc4;
    iVar4 = param_2;
    do {
      piVar1 = (int *)(iVar4 + 0x18);
      iVar4 = iVar4 + 4;
      piVar1 = (int *)(*DAT_0060b280 + *piVar1 * 0x30);
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)*piVar1 * _DAT_005fa1b8;
      pfVar2[1] = (float)piVar1[1] * _DAT_005fa1b8;
      pfVar2[2] = (float)piVar1[2] * _DAT_005fa1b8;
      pfVar2 = pfVar2 + 3;
    } while (iVar3 < *(int *)(param_2 + 4));
  }
  FUN_004f9770(param_1 + 0x98,&DAT_01d17fc4,_DAT_01d17fc0,&DAT_01d18148,&DAT_01d18144);
  if ((((2 < _DAT_01d18144) &&
       (FUN_004f9770(param_1 + 0xa8,&DAT_01d18148,_DAT_01d18144,&DAT_01d17fc4,&DAT_01d17fc0),
       2 < _DAT_01d17fc0)) &&
      (FUN_004f9770(param_1 + 0xb8,&DAT_01d17fc4,_DAT_01d17fc0,&DAT_01d18148,&DAT_01d18144),
      2 < _DAT_01d18144)) &&
     ((FUN_004f9770(param_1 + 200,&DAT_01d18148,_DAT_01d18144,&DAT_01d17fc4,&DAT_01d17fc0),
      2 < _DAT_01d17fc0 &&
      (FUN_004f9770(param_1 + 0xd8,&DAT_01d17fc4,_DAT_01d17fc0,&DAT_01d18148,&DAT_01d18144),
      2 < _DAT_01d18144)))) {
    *(int *)(param_1 + 0xec) = _DAT_01d18144;
    *(uint *)(param_1 + 0xf0) = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0xf4) = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xf8) = *(uint *)(param_2 + 0x10);
    *(uint *)(param_1 + 0xfc) = *(uint *)(param_2 + 0x14);
    iVar3 = 0;
    if (0 < _DAT_01d18144) {
      local_14 = (float *)&DAT_01d18148;
      iVar4 = 0xea000;
      do {
        piVar1 = (int *)(*DAT_0060b280 + iVar4);
        *piVar1 = (int)ROUND(*local_14 * _DAT_005fa1b0);
        piVar1[1] = (int)ROUND(local_14[1] * _DAT_005fa1b0);
        piVar1[2] = (int)ROUND(local_14[2] * _DAT_005fa1b0);
        *(uint *)(iVar4 + 0x10 + *DAT_0060b280) = 0xffffffff;
        *(int *)(param_1 + 0x100) = iVar3 + 0x4e00;
        FUN_004e8e90(iVar3 + 0x4e00);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x30;
        local_14 = local_14 + 3;
        param_1 = param_1 + 4;
      } while (iVar3 < _DAT_01d18144);
    }
    return 1;
  }
  return 0;
}
