// Name: FUN_005437f0
// Address: 005437f0
// Address Range: [[005437f0, 00543949]]
// Convention: unknown
// Signature: void FUN_005437f0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005437f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_18;
  float local_14;
  
  _DAT_01e810a8 = 0;
  if ((0 < param_1[0xb]) && (param_1[0xc] != 0)) {
    if (*(int *)(0x01CCF390 + 0xe0) != 0) {
      param_1[7] = 0;
    }
    iVar3 = 0;
    local_18 = (float)FUN_004355d0(0x01CCF390);
    _DAT_01e818b4 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (param_1[7] == 2)) || (*param_1 != 0)) goto LAB_00543863;
      iVar1 = param_1[0x11];
      iVar2 = FUN_00544460(param_1,&local_18);
      if (iVar2 == 0) goto LAB_00543863;
      if (iVar2 < 0) {
        FUN_004943a0(0x01C3EB54,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(uint *)(param_1[0xc] + iVar1 * 8),
                     *(uint *)(param_1[0xc] + 4 + iVar1 * 8),&DAT_01e810b0);
LAB_005438b5:
        param_1[7] = 2;
      }
      else if (param_1[7] == 1) goto LAB_005438b5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x60f);
    if (_DAT_01e818b8 == 0) {
      FUN_004943a0(0x01C3EB54,"!WARNING!  Infinite loop detected in script at line %d",
                   *(uint *)(param_1[0xc] + iVar1 * 8));
      _DAT_01e818b8 = 1;
    }
LAB_00543863:
    if (_DAT_01e818b4 != 0) {
      FUN_004d19d0(0x01CCF390);
      _DAT_01e818b4 = 0;
    }
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (0 < iVar3) {
        FUN_00573a80(param_1[10]);
        return;
      }
    }
  }
  return;
}
