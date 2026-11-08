// Name: FUN_00529750
// Address: 00529750
// Address Range: [[00529750, 00529909]]
// Convention: unknown
// Signature: float FUN_00529750(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00529750(int param_1,uint param_2,uint param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  float local_28;
  uint local_24;
  uint uStack_20;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  local_18 = 0;
  if (*(float *)(param_1 + 0x450) < 0.0) {
    iVar2 = FUN_005ba8cc(param_3,&DAT_005e4d9b,&local_28);
    if (iVar2 != 1) {
      local_28 = (float)FUN_0055af90(0x0264B290,param_3);
      local_14 = local_28;
      if (local_28 < 0.0) {
        FUN_00480e70(0x1e65910,param_3);
        uVar4 = 0xffffffff;
        pcVar5 = param_4;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        local_24 = ~uVar4 - 1;
        uStack_20 = 0;
        local_28 = (float)((float10)local_24 * (float10)_DAT_005e4da3 + (float10)_DAT_005e4dab);
      }
      if (_DAT_01e650f8 == 0) {
        local_18 = 1;
      }
    }
  }
  else {
    local_28 = *(float *)(param_1 + 0x450);
  }
  iVar2 = FUN_00521290(param_2,DAT_007bdc94,&DAT_007bdc5c);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    if (_DAT_01e6590c != 0) {
      return 0.0;
    }
    return -1.0;
  }
  *(int *)(param_1 + 8) = iVar2;
  if ((*(int *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 4) != *(int *)(param_1 + 0xc))) {
    *(uint *)(param_1 + 0x10) = 1;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 4);
  }
  if (_DAT_01e650f8 == 0) {
    pcVar5 = (char *)(param_1 + 0x50);
    do {
      cVar1 = *param_4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_4[1];
      param_4 = param_4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (*(int *)(param_1 + 4) != 0) {
      *(float *)(*(int *)(param_1 + 4) + 0x2820) = local_28;
    }
    if (local_18 != 0) {
      FUN_00550450();
      FUN_00550310(2);
      uVar3 = FUN_0055ae30(0x0264B290,param_1,param_3);
      *(uint *)(param_1 + 0x28) = uVar3;
      FUN_005504d0();
    }
  }
  return local_28;
}
