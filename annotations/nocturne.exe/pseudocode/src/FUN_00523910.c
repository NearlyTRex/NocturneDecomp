// Name: FUN_00523910
// Address: 00523910
// Address Range: [[00523910, 00523a55]]
// Convention: unknown
// Signature: undefined4 FUN_00523910(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00523910(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_00523b20(param_1);
  FUN_00523b70(param_1);
  iVar5 = FUN_005284f0();
  if (iVar5 == 0) {
    iVar5 = FUN_00525c40(param_1);
    FUN_00521ca0(iVar5 * *(int *)(param_1 + 0x138));
    iVar5 = FUN_00525c40(param_1);
    iVar5 = FUN_00564a70(*(uint *)(param_1 + 0x120),iVar5 * *(int *)(param_1 + 0x138));
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x120) = iVar5;
      return 1;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x108);
    uVar2 = *(uint *)(param_1 + 0x10c);
    uVar3 = *(uint *)(param_1 + 0x138);
    uVar4 = *(uint *)(param_1 + 0x104);
    if (_DAT_02dc8318 != (int *)0x0) {
      do {
        iVar5 = (**(code **)(*_DAT_02dc8318 + 0x2c))(_DAT_02dc8318,uVar4,uVar1,uVar2,uVar3);
        if (iVar5 != 0) goto LAB_005239c5;
        iVar7 = 0;
        iVar5 = _DAT_02dc1ed8;
        do {
          iVar5 = iVar5 + 1;
          if (0x3f < iVar5) {
            iVar5 = 0;
          }
          iVar6 = iVar5 * 0x168;
          if (((*(int *)(iVar6 + 0x2dc2008) == 0) && (*(int *)(iVar6 + 0x2dc200c) != 0)) &&
             (*(int *)(iVar6 + 0x2dc2004) == 0)) {
            FUN_00523a60(iVar6 + 0x2dc1edc);
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x40);
      } while (iVar7 < 0x40);
      FUN_00529980("?allocateHwSample - failed\n" + 1);
    }
    iVar5 = 0;
LAB_005239c5:
    *(int *)(param_1 + 0x130) = iVar5;
    if (iVar5 != 0) {
      return 1;
    }
  }
  return 0;
}
