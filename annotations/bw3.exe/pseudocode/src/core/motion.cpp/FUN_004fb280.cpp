// Name: FUN_004fb280
// Address: 004fb280
// Address Range: [[004fb280, 004fb6ad]]
// Convention: unknown
// Signature: void FUN_004fb280(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fb280(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  
  FUN_004fb210(param_1);
  local_24 = -1;
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005a3230(param_2,&DAT_005c974c,&local_24);
  if (local_24 < 0) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x81;
    FUN_004e4330("Error reading motion list.");
  }
  if (3 < local_24) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x83;
    FUN_004e4330("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",local_24,3);
  }
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  FUN_005a3230(param_2,&DAT_005c9804,param_1);
  if (0 < *param_1) {
    piVar4 = param_1 + 1;
    do {
      FUN_005a3230(param_2,&DAT_005c9808,piVar4);
      iVar1 = iVar1 + 1;
      piVar4 = (int *)((int)piVar4 + 0x1e);
    } while (iVar1 < *param_1);
  }
  do {
    iVar1 = FUN_005a32b0(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005a3230(param_2,&DAT_005c980c,param_1 + 0x709);
  local_1c = 0;
  if (0 < param_1[0x709]) {
    local_20 = param_1 + 0x70a;
    piVar4 = local_20;
LAB_004fb383:
    do {
      iVar1 = FUN_005a32b0(param_2);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_004fb383;
      }
      FUN_005a3230(param_2,"\"%[^\"]\",%f,%d,%d,%d\n",piVar4,piVar4 + 8,piVar4 + 9,piVar4 + 0x18,
                   piVar4 + 0x19);
      do {
        iVar1 = FUN_005a32b0(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      FUN_005a3230(param_2,"%d,%d,%f\n",piVar4 + 10,piVar4 + 0xd,piVar4 + 0xe);
      do {
        iVar1 = FUN_005a32b0(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      FUN_005a3230(param_2,"%d,%f,%d\n",&local_28,piVar4 + 0xf,piVar4 + 0x10);
      piVar4[0xc] = local_28;
      do {
        iVar1 = FUN_005a32b0(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      FUN_005a3230(param_2,"%d,%f\n",piVar4 + 0x14,piVar4 + 0x15);
      if (local_24 < 3) {
        piVar4[0x1a] = 1;
        piVar4[0x1b] = piVar4[0x19];
      }
      else {
        do {
          iVar1 = FUN_005a32b0(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        FUN_005a3230(param_2,"%d,%d\n",piVar4 + 0x1a,piVar4 + 0x1b);
      }
      do {
        iVar1 = FUN_005a32b0(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      FUN_005a3230(param_2,&DAT_005c9847,piVar4 + 0x1c);
      if (0 < piVar4[0x1c]) {
        iVar1 = FUN_005a3650(piVar4[0x1c] * 0x18);
        piVar4[0x1d] = iVar1;
        if (iVar1 == 0) {
          _DAT_01d71de0 = "..\\core\\motion.cpp";
          _DAT_01d71de4 = 0xc0;
          FUN_004e4330("Out of memory");
        }
        local_14 = 0;
        if (0 < piVar4[0x1c]) {
          iVar1 = 0;
          do {
            iVar2 = piVar4[0x1d] + iVar1;
            FUN_005a3230(param_2,"%d,%d,%d,%f,%f,%d\n",iVar2,&local_28,iVar2 + 8,iVar2 + 0xc,
                         iVar2 + 0x10,iVar2 + 0x14);
            *(int *)(iVar2 + 4) = local_28;
            iVar1 = iVar1 + 0x18;
            local_14 = local_14 + 1;
          } while (local_14 < piVar4[0x1c]);
        }
      }
      do {
        iVar1 = FUN_005a32b0(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      FUN_005a3230(param_2,&DAT_005c987f,piVar4 + 0x1e);
      if (0 < piVar4[0x1e]) {
        local_18 = piVar4 + 0x1f;
        piVar3 = piVar4 + 0x20;
        do {
          iVar2 = iVar1 * 2;
          iVar1 = iVar1 + 1;
          FUN_005a3230(param_2,"%d,%d\n",local_18 + iVar2,piVar3);
          piVar3 = piVar3 + 2;
        } while (iVar1 < piVar4[0x1e]);
      }
      if (local_24 < 2) {
        piVar4[0x3d] = 0;
      }
      else {
        do {
          iVar1 = FUN_005a32b0(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = 0;
        FUN_005a3230(param_2,&DAT_005c988a,piVar4 + 0x3d);
        if (0 < piVar4[0x3d]) {
          piVar3 = piVar4 + 0x3e;
          do {
            iVar1 = iVar1 + 1;
            FUN_005a3230(param_2,&DAT_005c988d,piVar3);
            piVar3 = piVar3 + 1;
          } while (iVar1 < piVar4[0x3d]);
        }
        do {
          iVar1 = FUN_005a32b0(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
      }
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
      piVar4 = local_20;
    } while (local_1c < param_1[0x709]);
  }
  return;
}
