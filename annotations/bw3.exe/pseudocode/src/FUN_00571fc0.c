// Name: FUN_00571fc0
// Address: 00571fc0
// Address Range: [[00571fc0, 0057218a]]
// Convention: unknown
// Signature: bool FUN_00571fc0(undefined4 *param_1,int param_2)

#include "nocturne.h"

bool FUN_00571fc0(uint *param_1,int param_2)

{
  byte *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  FUN_005a28f0(param_2,0,0x2b8);
  if (param_1 == (uint *)0x0) {
    return false;
  }
  FUN_005a4ee0(param_2,*param_1,0x7f);
  iVar6 = 0;
  iStack_10 = 0;
  iStack_8 = param_2 + 0x84;
  do {
    while( true ) {
      piVar2 = (int *)(param_1[1] + iStack_10);
      if (*piVar2 == 0) goto LAB_00572023;
      iStack_10 = iStack_10 + 4;
      FUN_005a4ee0(iStack_8,*piVar2,0x7f);
      iVar5 = FUN_005a3d00(iStack_8,param_2);
      if (iVar5 != 0) break;
LAB_005720bb:
      if (3 < iVar6) goto LAB_00572023;
    }
    iVar4 = 0;
    iVar5 = param_2 + 0x84;
    if (0 < iVar6) {
      do {
        iVar3 = FUN_005a3d00(iStack_8,iVar5);
        if (iVar3 == 0) break;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x80;
      } while (iVar4 < iVar6);
    }
    if (iVar4 < iVar6) goto LAB_005720bb;
    iStack_8 = iStack_8 + 0x80;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
LAB_00572023:
  *(int *)(param_2 + 0x80) = iVar6;
  if ((*(short *)(param_1 + 2) == 2) && (*(short *)((int)param_1 + 10) == 4)) {
    iVar6 = 0;
    iStack_c = 0;
    iStack_14 = param_2 + 0x288;
    do {
      puVar1 = *(byte **)(param_1[3] + iStack_c);
      if (puVar1 == (byte *)0x0) break;
      iStack_c = iStack_c + 4;
      iVar5 = 0;
      FUN_0056f630(iStack_14,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
      if (0 < iVar6) {
        iVar4 = param_2;
        do {
          if (*(int *)(iVar6 * 4 + param_2 + 0x288) == *(int *)(iVar4 + 0x288)) break;
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar5 < iVar6);
      }
      if (iVar6 <= iVar5) {
        iStack_14 = iStack_14 + 4;
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < 0xc);
    *(int *)(param_2 + 0x284) = iVar6;
  }
  return 0 < *(int *)(param_2 + 0x284);
}
