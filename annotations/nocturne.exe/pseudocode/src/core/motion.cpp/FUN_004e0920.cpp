// Name: FUN_004e0920
// Address: 004e0920
// Address Range: [[004e0920, 004e0d19]]
// Convention: unknown
// Signature: void FUN_004e0920(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e0920(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  
  local_34 = -1;
  do {
    iVar2 = FUN_00564570(param_2);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_00563350(param_2,&DAT_0058adcd,&local_34);
  if (local_34 < 0) {
    _DAT_01cc4800 = "..\\core\\motion.cpp";
    _DAT_01cc4804 = 0x5b;
    FUN_004c8440("Error reading motion list.");
  }
  if (2 < local_34) {
    _DAT_01cc4800 = "..\\core\\motion.cpp";
    _DAT_01cc4804 = 0x5d;
    FUN_004c8440("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",local_34,2);
  }
  do {
    iVar2 = FUN_00564570(param_2);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  FUN_00563350(param_2,&DAT_0058ae85,param_1);
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      FUN_00563350(param_2,&DAT_0058ae89,piVar3);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)((int)piVar3 + 0x1e);
    } while (iVar2 < *param_1);
  }
  do {
    iVar2 = FUN_00564570(param_2);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_00563350(param_2,&DAT_0058ae8d,param_1 + 0x259);
  local_28 = 0;
  if (0 < param_1[0x259]) {
    local_2c = param_1 + 0x25a;
    piVar3 = local_2c;
LAB_004e0a23:
    do {
      iVar2 = FUN_00564570(param_2);
      if (-1 < iVar2) {
        if (iVar2 != 10) goto LAB_004e0a23;
      }
      FUN_00563350(param_2,"\"%[^\"]\",%f,%d,%d,%d\n",piVar3,piVar3 + 8,piVar3 + 9,piVar3 + 0x18
                   ,piVar3 + 0x19);
      do {
        iVar2 = FUN_00564570(param_2);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      FUN_00563350(param_2,"%d,%d,%f\n",piVar3 + 10,piVar3 + 0xd,piVar3 + 0xe);
      do {
        iVar2 = FUN_00564570(param_2);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      FUN_00563350(param_2,"%d,%f,%d\n",&local_38,piVar3 + 0xf,piVar3 + 0x10);
      piVar3[0xc] = local_38;
      do {
        iVar2 = FUN_00564570(param_2);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      FUN_00563350(param_2,"%d,%f\n",piVar3 + 0x14,piVar3 + 0x15);
      do {
        iVar2 = FUN_00564570(param_2);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      iVar2 = 0;
      FUN_00563350(param_2,&DAT_0058aec1,piVar3 + 0x1a);
      if (0 < piVar3[0x1a]) {
        local_24 = piVar3 + 0x1b;
        local_1c = piVar3 + 0x1d;
        local_14 = piVar3 + 0x1e;
        local_18 = piVar3 + 0x1f;
        piVar4 = piVar3 + 0x20;
        do {
          local_30 = local_24 + iVar2 * 6;
          FUN_00563350(param_2,"%d,%d,%d,%f,%f,%d\n",local_30,&local_38,local_1c,local_14,
                       local_18,piVar4);
          iVar2 = iVar2 + 1;
          local_14 = local_14 + 6;
          local_30[1] = local_38;
          local_1c = local_1c + 6;
          local_18 = local_18 + 6;
          piVar4 = piVar4 + 6;
        } while (iVar2 < piVar3[0x1a]);
      }
      do {
        iVar2 = FUN_00564570(param_2);
        if (iVar2 < 0) break;
      } while (iVar2 != 10);
      iVar2 = 0;
      FUN_00563350(param_2,&DAT_0058aed8,piVar3 + 0x129);
      if (0 < piVar3[0x129]) {
        local_20 = piVar3 + 0x12a;
        piVar4 = piVar3 + 299;
        do {
          iVar1 = iVar2 * 2;
          iVar2 = iVar2 + 1;
          FUN_00563350(param_2,"%d,%d\n",local_20 + iVar1,piVar4);
          piVar4 = piVar4 + 2;
        } while (iVar2 < piVar3[0x129]);
      }
      if (local_34 < 2) {
        piVar3[0x148] = 0;
      }
      else {
        do {
          iVar2 = FUN_00564570(param_2);
          if (iVar2 < 0) break;
        } while (iVar2 != 10);
        iVar2 = 0;
        FUN_00563350(param_2,&DAT_0058aee3,piVar3 + 0x148);
        if (0 < piVar3[0x148]) {
          piVar4 = piVar3 + 0x149;
          do {
            iVar2 = iVar2 + 1;
            FUN_00563350(param_2,&DAT_0058aee6,piVar4);
            piVar4 = piVar4 + 1;
          } while (iVar2 < piVar3[0x148]);
        }
        do {
          iVar2 = FUN_00564570(param_2);
          if (iVar2 < 0) break;
        } while (iVar2 != 10);
      }
      local_2c = local_2c + 0x153;
      local_28 = local_28 + 1;
      piVar3 = local_2c;
    } while (local_28 < param_1[0x259]);
  }
  return;
}
