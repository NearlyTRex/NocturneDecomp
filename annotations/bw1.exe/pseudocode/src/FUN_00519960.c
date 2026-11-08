// Name: FUN_00519960
// Address: 00519960
// Address Range: [[00519960, 00519b9c]]
// Convention: unknown
// Signature: undefined4 FUN_00519960(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00519960(int param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *local_14;
  
  _DAT_01d2c5d0 = *(int *)(param_2 + 4);
  iVar3 = 0;
  if (0 < _DAT_01d2c5d0) {
    pfVar2 = (float *)&DAT_01d2c5d4;
    iVar4 = param_2;
    do {
      piVar1 = (int *)(iVar4 + 0x18);
      iVar4 = iVar4 + 4;
      piVar1 = (int *)(*DAT_00612560 + *piVar1 * 0x30);
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)*piVar1 * _DAT_00603ce8;
      pfVar2[1] = (float)piVar1[1] * _DAT_00603ce8;
      pfVar2[2] = (float)piVar1[2] * _DAT_00603ce8;
      pfVar2 = pfVar2 + 3;
    } while (iVar3 < *(int *)(param_2 + 4));
  }
  FUN_005186c0(param_1 + 0x98,&DAT_01d2c5d4,_DAT_01d2c5d0,&DAT_01d2c758,&DAT_01d2c754);
  if ((((2 < _DAT_01d2c754) &&
       (FUN_005186c0(param_1 + 0xa8,&DAT_01d2c758,_DAT_01d2c754,&DAT_01d2c5d4,&DAT_01d2c5d0),
       2 < _DAT_01d2c5d0)) &&
      (FUN_005186c0(param_1 + 0xb8,&DAT_01d2c5d4,_DAT_01d2c5d0,&DAT_01d2c758,&DAT_01d2c754),
      2 < _DAT_01d2c754)) &&
     ((FUN_005186c0(param_1 + 200,&DAT_01d2c758,_DAT_01d2c754,&DAT_01d2c5d4,&DAT_01d2c5d0),
      2 < _DAT_01d2c5d0 &&
      (FUN_005186c0(param_1 + 0xd8,&DAT_01d2c5d4,_DAT_01d2c5d0,&DAT_01d2c758,&DAT_01d2c754),
      2 < _DAT_01d2c754)))) {
    *(int *)(param_1 + 0xec) = _DAT_01d2c754;
    *(uint *)(param_1 + 0xf0) = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0xf4) = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xf8) = *(uint *)(param_2 + 0x10);
    *(uint *)(param_1 + 0xfc) = *(uint *)(param_2 + 0x14);
    iVar3 = 0;
    if (0 < _DAT_01d2c754) {
      local_14 = (float *)&DAT_01d2c758;
      iVar4 = 0xea000;
      do {
        piVar1 = (int *)(*DAT_00612560 + iVar4);
        *piVar1 = (int)ROUND(*local_14 * _DAT_00603ce0);
        piVar1[1] = (int)ROUND(local_14[1] * _DAT_00603ce0);
        piVar1[2] = (int)ROUND(local_14[2] * _DAT_00603ce0);
        *(uint *)(iVar4 + 0x10 + *DAT_00612560) = 0xffffffff;
        *(int *)(param_1 + 0x100) = iVar3 + 0x4e00;
        FUN_00507b30(iVar3 + 0x4e00);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x30;
        local_14 = local_14 + 3;
        param_1 = param_1 + 4;
      } while (iVar3 < _DAT_01d2c754);
    }
    return 1;
  }
  return 0;
}
