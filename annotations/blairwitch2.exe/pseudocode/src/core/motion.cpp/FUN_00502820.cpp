// Name: FUN_00502820
// Address: 00502820
// Address Range: [[00502820, 00502c14]]
// Convention: unknown
// Signature: void FUN_00502820(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00502820(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  
  FUN_005027b0(param_1);
  local_24 = -1;
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005b8100(param_2,&DAT_005df720,&local_24);
  if (local_24 < 0) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x80;
    FUN_004e4500("Error reading motion list.");
  }
  if (2 < local_24) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x82;
    FUN_004e4500("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",local_24,2);
  }
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005b8100(param_2,&DAT_005df7d8,param_1);
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = param_1 + 1;
    do {
      FUN_005b8100(param_2,&DAT_005df7dc,piVar2);
      iVar1 = iVar1 + 1;
      piVar2 = (int *)((int)piVar2 + 0x1e);
    } while (iVar1 < *param_1);
  }
  do {
    iVar1 = FUN_005b8180(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  FUN_005b8100(param_2,&DAT_005df7e0,param_1 + 0x709);
  local_1c = 0;
  if (0 < param_1[0x709]) {
    local_20 = param_1 + 0x70a;
    piVar2 = local_20;
LAB_00502933:
    do {
      iVar1 = FUN_005b8180(param_2);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_00502933;
      }
      FUN_005b8100(param_2,"\"%[^\"]\",%f,%d,%d,%d\n",piVar2,piVar2 + 8,piVar2 + 9,piVar2 + 0x18,
                   piVar2 + 0x19);
      do {
        iVar1 = FUN_005b8180(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      FUN_005b8100(param_2,"%d,%d,%f\n",piVar2 + 10,piVar2 + 0xd,piVar2 + 0xe);
      do {
        iVar1 = FUN_005b8180(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      FUN_005b8100(param_2,"%d,%f,%d\n",&local_28,piVar2 + 0xf,piVar2 + 0x10);
      piVar2[0xc] = local_28;
      do {
        iVar1 = FUN_005b8180(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      FUN_005b8100(param_2,"%d,%f\n",piVar2 + 0x14,piVar2 + 0x15);
      do {
        iVar1 = FUN_005b8180(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      FUN_005b8100(param_2,&DAT_005df814,piVar2 + 0x1a);
      if (0 < piVar2[0x1a]) {
        iVar1 = FUN_005b8580(piVar2[0x1a] * 0x18);
        piVar2[0x1b] = iVar1;
        if (iVar1 == 0) {
          _DAT_01d046a0 = "..\\core\\motion.cpp";
          _DAT_01d046a4 = 0xb1;
          FUN_004e4500("Out of memory");
        }
        iVar1 = 0;
        if (0 < piVar2[0x1a]) {
          local_14 = 0;
          do {
            iVar3 = piVar2[0x1b] + local_14;
            FUN_005b8100(param_2,"%d,%d,%d,%f,%f,%d\n",iVar3,&local_28,iVar3 + 8,iVar3 + 0xc,
                         iVar3 + 0x10,iVar3 + 0x14);
            iVar1 = iVar1 + 1;
            *(int *)(iVar3 + 4) = local_28;
            local_14 = local_14 + 0x18;
          } while (iVar1 < piVar2[0x1a]);
        }
      }
      do {
        iVar1 = FUN_005b8180(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      FUN_005b8100(param_2,&DAT_005df84c,piVar2 + 0x1c);
      if (0 < piVar2[0x1c]) {
        local_18 = piVar2 + 0x1d;
        piVar4 = piVar2 + 0x1e;
        do {
          iVar3 = iVar1 * 2;
          iVar1 = iVar1 + 1;
          FUN_005b8100(param_2,"%d,%d\n",local_18 + iVar3,piVar4);
          piVar4 = piVar4 + 2;
        } while (iVar1 < piVar2[0x1c]);
      }
      if (local_24 < 2) {
        piVar2[0x3b] = 0;
      }
      else {
        do {
          iVar1 = FUN_005b8180(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = 0;
        FUN_005b8100(param_2,&DAT_005df857,piVar2 + 0x3b);
        if (0 < piVar2[0x3b]) {
          piVar4 = piVar2 + 0x3c;
          do {
            iVar1 = iVar1 + 1;
            FUN_005b8100(param_2,&DAT_005df85a,piVar4);
            piVar4 = piVar4 + 1;
          } while (iVar1 < piVar2[0x3b]);
        }
        do {
          iVar1 = FUN_005b8180(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
      }
      local_20 = local_20 + 0x46;
      local_1c = local_1c + 1;
      piVar2 = local_20;
    } while (local_1c < param_1[0x709]);
  }
  return;
}
