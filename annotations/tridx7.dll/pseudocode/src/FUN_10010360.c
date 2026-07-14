// Name: FUN_10010360
// Address: 10010360
// Address Range: [[10010360, 100105ba]]
// Convention: unknown
// Signature: undefined4 FUN_10010360(int *param_1)

#include "nocturne.h"

uint FUN_10010360(int *param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  
  if (DAT_10018524 == 0) {
    return 0;
  }
  iVar2 = param_1[5];
  if ((DAT_100185c0 == iVar2) && (DAT_100185d0 == iVar2)) goto LAB_100104fd;
  if (DAT_102407a0 == 0) {
    FUN_100105c0(1,1,iVar2,4,1,0,0,2,0,0,0);
    uVar6 = 0;
    uVar4 = 0;
    uVar8 = 0;
    iVar2 = param_1[5];
    uVar10 = 2;
    uVar7 = 0;
    uVar5 = 5;
    uVar3 = 10;
LAB_100104f1:
    uVar1 = 1;
    uVar9 = 0;
  }
  else {
    if (DAT_10240840 != 0) {
      uVar6 = 0;
      uVar4 = 0;
      uVar8 = DAT_10240846;
    }
    else {
      uVar6 = DAT_10240844;
      uVar4 = DAT_10240846;
      uVar8 = 0;
    }
    FUN_100105c0(1,DAT_10240840 == 0,iVar2,DAT_10240842,uVar4,uVar6,uVar8,DAT_10240848,DAT_1024084a,
                 DAT_1024084c,DAT_1024084e);
    uVar6 = DAT_102407fa;
    uVar4 = DAT_102407f8;
    uVar8 = DAT_102407f6;
    uVar10 = DAT_102407f4;
    uVar3 = DAT_102407ee;
    if (DAT_102407ec == 0) {
      iVar2 = param_1[5];
      uVar7 = DAT_102407f0;
      uVar5 = DAT_102407f2;
      goto LAB_100104f1;
    }
    iVar2 = param_1[5];
    uVar7 = 0;
    uVar5 = 0;
    uVar1 = 0;
    uVar9 = DAT_102407f2;
  }
  FUN_100105c0(0,uVar1,iVar2,uVar3,uVar5,uVar7,uVar9,uVar10,uVar8,uVar4,uVar6);
LAB_100104fd:
  iVar2 = param_1[7];
  if (DAT_100185c4 < DAT_100185d4) {
    if ((iVar2 < DAT_100185c4) || (DAT_100185d4 < iVar2)) {
      return 0;
    }
    if ((DAT_100185c4 < iVar2) && (iVar2 < DAT_100185d4)) {
      return 1;
    }
  }
  else {
    if (iVar2 < DAT_100185d4) {
      return 1;
    }
    if (DAT_100185c4 < iVar2) {
      return 1;
    }
    if ((DAT_100185d4 < iVar2) && (iVar2 < DAT_100185c4)) {
      return 0;
    }
  }
  iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
  if (param_1[7] == DAT_100185c4) {
    if (iVar2 < DAT_100185c8) {
      return 0;
    }
  }
  else if (DAT_100185d8 <= iVar2) {
    return 0;
  }
  return 1;
}
