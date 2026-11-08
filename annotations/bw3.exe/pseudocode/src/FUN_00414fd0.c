// Name: FUN_00414fd0
// Address: 00414fd0
// Address Range: [[00414fd0, 00415349]]
// Convention: unknown
// Signature: void FUN_00414fd0(int param_1)

#include "nocturne.h"

void FUN_00414fd0(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_18;
  int iStack_14;
  
  FUN_0040c280(param_1);
  FUN_0040b8b0(param_1 + 0x174,"vertexCount");
  FUN_0040b8b0(param_1 + 0x180,"triCount");
  FUN_0040b8b0(param_1 + 0x18c,"textureCount");
  if (DAT_007df9b8 == 1) {
    iVar6 = 0;
    FUN_00414910(param_1,*(uint *)(param_1 + 0x174),*(uint *)(param_1 + 0x180));
    if (0 < *(int *)(param_1 + 0x174)) {
      iVar4 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x178) + iVar4;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0xc;
        FUN_005a3230(DAT_007df9b4,"%d,%d,%d\n",iVar5,iVar5 + 4,iVar5 + 8);
      } while (iVar6 < *(int *)(param_1 + 0x174));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x180)) {
      iStack_18 = 0;
      iVar4 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x184) + iVar4;
        iVar6 = iVar6 + 1;
        FUN_005a3230(DAT_007df9b4,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                     *(int *)(param_1 + 0x188) + iStack_18,iVar5 + 0x18,iVar5 + 0x1c,iVar5 + 0x20,
                     iVar5 + 0x24,iVar5 + 0x28,iVar5 + 0x2c,iVar5 + 0x30,iVar5 + 0x34,iVar5 + 0x38);
        *(uint *)(iVar5 + 4) = 3;
        iVar4 = iVar4 + 0x3c;
        iStack_18 = iStack_18 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x180));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x18c)) {
      iVar4 = param_1 + 0x198;
      do {
        iVar6 = iVar6 + 1;
        FUN_005a3230(DAT_007df9b4," \"%[^\"]\"\n",iVar4);
        iVar4 = iVar4 + 0x18;
      } while (iVar6 < *(int *)(param_1 + 0x18c));
    }
    FUN_004157c0(param_1);
  }
  else {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x174)) {
      iVar4 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x178);
        puVar2 = (uint *)(iVar5 + 8 + iVar4);
        puVar3 = (uint *)(iVar5 + 4 + iVar4);
        puVar1 = (uint *)(iVar5 + iVar4);
        iVar4 = iVar4 + 0xc;
        iVar6 = iVar6 + 1;
        FUN_005a3140(DAT_007df9b4,"\t%d,%d,%d\n",*puVar1,*puVar3,*puVar2);
      } while (iVar6 < *(int *)(param_1 + 0x174));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x180)) {
      iStack_14 = 0;
      iVar4 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x184) + iStack_14;
        FUN_005a3140(DAT_007df9b4,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                     *(uint *)(iVar4 + *(int *)(param_1 + 0x188)),
                     *(uint *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x1c),
                     *(uint *)(iVar5 + 0x20),*(uint *)(iVar5 + 0x24),
                     *(uint *)(iVar5 + 0x28),*(uint *)(iVar5 + 0x2c),
                     *(uint *)(iVar5 + 0x30),*(uint *)(iVar5 + 0x34),
                     *(uint *)(iVar5 + 0x38));
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + 1;
        iStack_14 = iStack_14 + 0x3c;
      } while (iVar6 < *(int *)(param_1 + 0x180));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x18c)) {
      iVar4 = param_1 + 0x198;
      do {
        iVar6 = iVar6 + 1;
        FUN_005a3140(DAT_007df9b4,"\t\"%s\"\n",iVar4);
        iVar4 = iVar4 + 0x18;
      } while (iVar6 < *(int *)(param_1 + 0x18c));
    }
  }
  if (1 < 0x00000006) {
    FUN_0040be30(param_1 + 0xcd0,"simBox");
    FUN_0040b930(param_1 + 0xf2c,"carriedByActor");
  }
  if (2 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0xcb8,"bloodType");
    FUN_0040b8b0(param_1 + 0xcb0,"dontUseNormals");
    FUN_0040b8b0(param_1 + 0xcb4,"transparentGeometryFlag");
  }
  if (3 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0x158,"renderInBackground");
  }
  if (4 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0xcc4,"dontPickMeUp");
  }
  if (5 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0xcc8,"dontGoIntoBackground");
    return;
  }
  return;
}
