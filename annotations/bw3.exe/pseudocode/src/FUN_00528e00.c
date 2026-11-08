// Name: FUN_00528e00
// Address: 00528e00
// Address Range: [[00528e00, 00528f59]]
// Convention: unknown
// Signature: void FUN_00528e00(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00528e00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_18;
  float local_14;
  
  _DAT_01ed6808 = 0;
  if ((0 < param_1[0xb]) && (param_1[0xc] != 0)) {
    if (*(int *)(0x01D2130C + 0xe8) != 0) {
      param_1[7] = 0;
    }
    iVar3 = 0;
    local_18 = (float)FUN_00434b00(0x01D2130C);
    _DAT_01ed7014 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (param_1[7] == 2)) || (*param_1 != 0)) goto LAB_00528e73;
      iVar1 = param_1[0x11];
      iVar2 = FUN_00529a70(param_1,&local_18);
      if (iVar2 == 0) goto LAB_00528e73;
      if (iVar2 < 0) {
        FUN_0047cf40(0x01C5B0E4,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(uint *)(param_1[0xc] + iVar1 * 8),
                     *(uint *)(param_1[0xc] + 4 + iVar1 * 8),&DAT_01ed6810);
LAB_00528ec5:
        param_1[7] = 2;
      }
      else if (param_1[7] == 1) goto LAB_00528ec5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x60f);
    if (_DAT_01ed7018 == 0) {
      FUN_0047cf40(0x01C5B0E4,"!WARNING!  Infinite loop detected in script at line %d",
                   *(uint *)(param_1[0xc] + iVar1 * 8));
      _DAT_01ed7018 = 1;
    }
LAB_00528e73:
    if (_DAT_01ed7014 != 0) {
      FUN_004ba490(0x01D2130C);
      _DAT_01ed7014 = 0;
    }
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (0 < iVar3) {
        FUN_00556be0(param_1[10]);
        return;
      }
    }
  }
  return;
}
