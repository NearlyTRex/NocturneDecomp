// Name: FUN_00415f50
// Address: 00415f50
// Address Range: [[00415f50, 004162a9]]
// Convention: unknown
// Signature: int FUN_00415f50(int param_1)

#include "nocturne.h"

int FUN_00415f50(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_18;
  int iStack_14;
  
  FUN_0040c330(param_1);
  FUN_0040b960(param_1 + 0x2d0,"vertexCount");
  FUN_0040b960(param_1 + 0x2dc,"triCount");
  iVar4 = FUN_0040b960(param_1 + 0x2e8,"textureCount");
  if (DAT_007bc038 == 1) {
    FUN_00415890(param_1,*(uint *)(param_1 + 0x2d0),*(uint *)(param_1 + 0x2dc));
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2d0)) {
      iVar5 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x2d4) + iVar5;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0xc;
        FUN_005b8100(DAT_007bc034,"%d,%d,%d\n",iVar6,iVar6 + 4,iVar6 + 8);
      } while (iVar4 < *(int *)(param_1 + 0x2d0));
    }
    iStack_14 = 0;
    if (0 < *(int *)(param_1 + 0x2dc)) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x2e0) + iVar4;
        iVar4 = iVar4 + 0x3c;
        FUN_005b8100(DAT_007bc034,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",*(int *)(param_1 + 0x2e4) + iVar5,
                     iVar6 + 0x18,iVar6 + 0x1c,iVar6 + 0x20,iVar6 + 0x24,iVar6 + 0x28,iVar6 + 0x2c,
                     iVar6 + 0x30,iVar6 + 0x34,iVar6 + 0x38);
        iVar5 = iVar5 + 4;
        *(uint *)(iVar6 + 4) = 3;
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < *(int *)(param_1 + 0x2dc));
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2e8)) {
      iVar5 = param_1 + 0x2f4;
      do {
        iVar4 = iVar4 + 1;
        FUN_005b8100(DAT_007bc034," \"%[^\"]\"\n",iVar5);
        iVar5 = iVar5 + 0x18;
      } while (iVar4 < *(int *)(param_1 + 0x2e8));
    }
    iVar4 = FUN_00416700(param_1);
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x2d0)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x2d4);
        iVar4 = iVar6 + 8;
        iVar2 = iVar6 + 4;
        puVar1 = (uint *)(iVar6 + iVar3);
        iVar6 = iVar6 + 0xc;
        iVar5 = iVar5 + 1;
        FUN_005b8010(DAT_007bc034,"\t%d,%d,%d\n",*puVar1,*(uint *)(iVar2 + iVar3),
                     *(uint *)(iVar4 + iVar3));
        iVar4 = *(int *)(param_1 + 0x2d0);
      } while (iVar5 < iVar4);
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x2dc)) {
      iStack_18 = 0;
      iVar6 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x2e0) + iStack_18;
        iVar4 = FUN_005b8010(DAT_007bc034,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                             *(uint *)(iVar6 + *(int *)(param_1 + 0x2e4)),
                             *(uint *)(iVar4 + 0x18),*(uint *)(iVar4 + 0x1c),
                             *(uint *)(iVar4 + 0x20),*(uint *)(iVar4 + 0x24),
                             *(uint *)(iVar4 + 0x28),*(uint *)(iVar4 + 0x2c),
                             *(uint *)(iVar4 + 0x30),*(uint *)(iVar4 + 0x34),
                             *(uint *)(iVar4 + 0x38));
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
        iStack_18 = iStack_18 + 0x3c;
      } while (iVar5 < *(int *)(param_1 + 0x2dc));
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x2e8)) {
      iVar6 = param_1 + 0x2f4;
      do {
        iVar5 = iVar5 + 1;
        iVar4 = FUN_005b8010(DAT_007bc034,"\t\"%s\"\n",iVar6);
        iVar6 = iVar6 + 0x18;
      } while (iVar5 < *(int *)(param_1 + 0x2e8));
    }
  }
  if (1 < 0x00000005) {
    FUN_0040bee0(param_1 + 0x10e0,"simBox");
    iVar4 = FUN_0040b9e0(param_1 + 0x133c,"carriedByActor");
  }
  if (2 < 0x00000005) {
    FUN_0040b960(param_1 + 0x10cc,"bloodType");
    FUN_0040b960(param_1 + 0x10c4,"dontUseNormals");
    iVar4 = FUN_0040b960(param_1 + 0x10c8,"transparentGeometryFlag");
  }
  if (3 < 0x00000005) {
    iVar4 = FUN_0040b960(param_1 + 0x2b4,"renderInBackground");
  }
  if (4 < 0x00000005) {
    iVar4 = FUN_0040b960(param_1 + 0x10d8,"dontPickMeUp");
    return iVar4;
  }
  return iVar4;
}
