// Name: FUN_004f5130
// Address: 004f5130
// Address Range: [[004f5130, 004f536c]]
// Convention: unknown
// Signature: undefined4 FUN_004f5130(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f5130(int param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *local_14;
  
  _DAT_01d80d50 = *(int *)(param_2 + 4);
  iVar3 = 0;
  if (0 < _DAT_01d80d50) {
    pfVar2 = (float *)&DAT_01d80d54;
    iVar4 = param_2;
    do {
      piVar1 = (int *)(iVar4 + 0x18);
      iVar4 = iVar4 + 4;
      piVar1 = (int *)(*DAT_005f2afc + *piVar1 * 0x30);
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)*piVar1 * _DAT_005e29c8;
      pfVar2[1] = (float)piVar1[1] * _DAT_005e29c8;
      pfVar2[2] = (float)piVar1[2] * _DAT_005e29c8;
      pfVar2 = pfVar2 + 3;
    } while (iVar3 < *(int *)(param_2 + 4));
  }
  FUN_004f3e90(param_1 + 0x98,&DAT_01d80d54,_DAT_01d80d50,&DAT_01d80ed8,&DAT_01d80ed4);
  if ((((2 < _DAT_01d80ed4) &&
       (FUN_004f3e90(param_1 + 0xa8,&DAT_01d80ed8,_DAT_01d80ed4,&DAT_01d80d54,&DAT_01d80d50),
       2 < _DAT_01d80d50)) &&
      (FUN_004f3e90(param_1 + 0xb8,&DAT_01d80d54,_DAT_01d80d50,&DAT_01d80ed8,&DAT_01d80ed4),
      2 < _DAT_01d80ed4)) &&
     ((FUN_004f3e90(param_1 + 200,&DAT_01d80ed8,_DAT_01d80ed4,&DAT_01d80d54,&DAT_01d80d50),
      2 < _DAT_01d80d50 &&
      (FUN_004f3e90(param_1 + 0xd8,&DAT_01d80d54,_DAT_01d80d50,&DAT_01d80ed8,&DAT_01d80ed4),
      2 < _DAT_01d80ed4)))) {
    *(int *)(param_1 + 0xec) = _DAT_01d80ed4;
    *(uint *)(param_1 + 0xf0) = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0xf4) = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xf8) = *(uint *)(param_2 + 0x10);
    *(uint *)(param_1 + 0xfc) = *(uint *)(param_2 + 0x14);
    iVar3 = 0;
    if (0 < _DAT_01d80ed4) {
      local_14 = (float *)&DAT_01d80ed8;
      iVar4 = 0x124980;
      do {
        piVar1 = (int *)(*DAT_005f2afc + iVar4);
        *piVar1 = (int)ROUND(*local_14 * _DAT_005e29c0);
        piVar1[1] = (int)ROUND(local_14[1] * _DAT_005e29c0);
        piVar1[2] = (int)ROUND(local_14[2] * _DAT_005e29c0);
        *(uint *)(iVar4 + 0x10 + *DAT_005f2afc) = 0xffffffff;
        *(int *)(param_1 + 0x100) = iVar3 + 0x6188;
        FUN_004e5570(iVar3 + 0x6188);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x30;
        local_14 = local_14 + 3;
        param_1 = param_1 + 4;
      } while (iVar3 < _DAT_01d80ed4);
    }
    return 1;
  }
  return 0;
}
