// Name: FUN_0043f330
// Address: 0043f330
// Address Range: [[0043f330, 0043f602]]
// Convention: unknown
// Signature: int FUN_0043f330(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043f330(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  byte local_3c [24];
  byte auStack_24 [24];
  int iStack_c;
  
  FUN_00409f20(param_1);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_3c,0);
  iStack_c = FUN_0041ceb0(uVar2);
  uVar2 = DAT_005ae704;
  if (iStack_c == 0) goto LAB_0043f5f0;
  *(uint *)(param_1 + 0x65b28) = 1;
  iVar3 = FUN_00461090(uVar2);
  if (((iVar3 != 0) && (*(int *)(param_1 + 0x178) != 0)) && (*(int *)(param_1 + 0x65b2c) == 0)) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_24);
    FUN_0041dcc0(uVar2);
    FUN_00409f60(param_1);
    return 1;
  }
  FUN_00461010(DAT_005ae704,*(uint *)(param_1 + 0x174));
  iVar3 = 0;
  FUN_00461eb0(DAT_005ae704,param_1 + 0x15c);
  pfVar5 = (float *)(param_1 + 0x200);
  piVar4 = (int *)(param_1 + 0x1c72c);
  if (0 < *(int *)(param_1 + 0x1fc)) {
    do {
      *piVar4 = (int)ROUND(*pfVar5 * _DAT_0059bc70);
      piVar4[1] = (int)ROUND(pfVar5[1] * _DAT_0059bc70);
      piVar4[2] = (int)ROUND(pfVar5[2] * _DAT_0059bc70);
      iVar3 = iVar3 + 1;
      pfVar5 = pfVar5 + 0x1d;
      piVar4 = piVar4 + 3;
    } while (iVar3 < *(int *)(param_1 + 0x1fc));
  }
  FUN_0050c200(0x01E57284,*(uint *)(param_1 + 0x1fc),(int *)(param_1 + 0x1c72c));
  FUN_00460fb0(DAT_005ae704,1);
  bVar1 = 0 < _DAT_01c039c0;
  if (*(int *)(param_1 + 0x178) == 0) {
    bVar1 = true;
LAB_0043f474:
    iVar3 = param_1 + 0x1f60c;
    FUN_0050c2d0(0x01E57284,*(uint *)(param_1 + 0x1fc),
                 *(int *)(param_1 + 0x1c724) * *(int *)(param_1 + 0x1c728) * 2,iVar3,
                 param_1 + 0x1c72c,4,0);
    if (*(int *)(param_1 + 0x174) < 0xfde9) {
      for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x1c724) * *(int *)(param_1 + 0x1c728) * 2;
          iVar6 = iVar6 + 1) {
        FUN_00460370(DAT_005ae704,iVar3);
        iVar3 = iVar3 + 0x48;
      }
    }
    else {
      FUN_0050ddd0(0x01E57284,iVar3,*(int *)(param_1 + 0x1c724) * *(int *)(param_1 + 0x1c728) * 2,
                   0xffffffff);
    }
  }
  else if (_DAT_01c039c0 < 0) goto LAB_0043f474;
  if (bVar1) {
    iVar3 = param_1 + 0x4288c;
    FUN_0050c2d0(0x01E57284,*(uint *)(param_1 + 0x1fc),
                 *(int *)(param_1 + 0x1c724) * *(int *)(param_1 + 0x1c728) * 2,iVar3,
                 param_1 + 0x1c72c,4,0);
    if (*(int *)(param_1 + 0x174) < 0xfde9) {
      for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x1c724) * *(int *)(param_1 + 0x1c728) * 2;
          iVar6 = iVar6 + 1) {
        FUN_00460370(DAT_005ae704,iVar3);
        iVar3 = iVar3 + 0x48;
      }
    }
    else {
      FUN_0050ddd0(0x01E57284,iVar3,*(int *)(param_1 + 0x1c724) * *(int *)(param_1 + 0x1c728) * 2,
                   0xffffffff);
    }
  }
  FUN_00460fb0(DAT_005ae704,0);
LAB_0043f5f0:
  FUN_00409f60(param_1);
  return iStack_c;
}
