// Name: FUN_004fe5b0
// Address: 004fe5b0
// Address Range: [[004fe5b0, 004fe709]]
// Convention: unknown
// Signature: void FUN_004fe5b0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fe5b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_18;
  float local_14;
  
  _DAT_01e56418 = 0;
  if ((0 < param_1[10]) && (param_1[0xb] != 0)) {
    if (*(int *)(0x01C775EC + 0xcc) != 0) {
      param_1[6] = 0;
    }
    iVar3 = 0;
    local_18 = (float)FUN_0042b5c0(0x01C775EC);
    _DAT_01e56c24 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (param_1[6] == 2)) || (*param_1 != 0)) goto LAB_004fe623;
      iVar1 = param_1[0x10];
      iVar2 = FUN_004ff2c0(param_1,&local_18);
      if (iVar2 == 0) goto LAB_004fe623;
      if (iVar2 < 0) {
        FUN_0046fcd0(0x01BCD074,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(uint *)(param_1[0xb] + iVar1 * 8),
                     *(uint *)(param_1[0xb] + 4 + iVar1 * 8),&DAT_01e56420);
LAB_004fe675:
        param_1[6] = 2;
      }
      else if (param_1[6] == 1) goto LAB_004fe675;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc9);
    if (_DAT_01e56c28 == 0) {
      FUN_0046fcd0(0x01BCD074,"!WARNING!  Infinite loop detected in script at line %d",
                   *(uint *)(param_1[0xb] + iVar1 * 8));
      _DAT_01e56c28 = 1;
    }
LAB_004fe623:
    if (_DAT_01e56c24 != 0) {
      FUN_0049f8c0(0x01C775EC);
      _DAT_01e56c24 = 0;
    }
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
      if (0 < iVar3) {
        FUN_00527230(param_1[9]);
        return;
      }
    }
  }
  return;
}
