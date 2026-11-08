// Name: FUN_005216e0
// Address: 005216e0
// Address Range: [[005216e0, 00521839]]
// Convention: unknown
// Signature: void FUN_005216e0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005216e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_18;
  float local_14;
  
  _DAT_01e650f8 = 0;
  if ((0 < param_1[0xb]) && (param_1[0xc] != 0)) {
    if (*(int *)(0x01CB6900 + 0xe0) != 0) {
      param_1[7] = 0;
    }
    iVar3 = 0;
    local_18 = (float)FUN_0042bff0(0x01CB6900);
    _DAT_01e65904 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (param_1[7] == 2)) || (*param_1 != 0)) goto LAB_00521753;
      iVar1 = param_1[0x11];
      iVar2 = FUN_00522350(param_1,&local_18);
      if (iVar2 == 0) goto LAB_00521753;
      if (iVar2 < 0) {
        FUN_0047be40(0x01C25594,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(uint *)(param_1[0xc] + iVar1 * 8),
                     *(uint *)(param_1[0xc] + 4 + iVar1 * 8),&DAT_01e65100);
LAB_005217a5:
        param_1[7] = 2;
      }
      else if (param_1[7] == 1) goto LAB_005217a5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc9);
    if (_DAT_01e65908 == 0) {
      FUN_0047be40(0x01C25594,"!WARNING!  Infinite loop detected in script at line %d",
                   *(uint *)(param_1[0xc] + iVar1 * 8));
      _DAT_01e65908 = 1;
    }
LAB_00521753:
    if (_DAT_01e65904 != 0) {
      FUN_004b8250(0x01CB6900);
      _DAT_01e65904 = 0;
    }
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
      if (0 < iVar3) {
        FUN_00551050(param_1[10]);
        return;
      }
    }
  }
  return;
}
