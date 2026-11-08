// Name: FUN_00529b30
// Address: 00529b30
// Address Range: [[00529b30, 00529c03]]
// Convention: unknown
// Signature: undefined4 FUN_00529b30(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00529b30(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  
  if (param_1[0x115] < 0) {
    return 0;
  }
  FUN_00529b00(param_1);
  iVar3 = 0;
  param_1[0x11] = param_1[0x115];
  while ((*(int *)(0x01CB6900 + 0x244) != 0 && (*param_1 == 0))) {
    local_c = 0x3e800000;
    iVar1 = param_1[0x11];
    iVar2 = FUN_00522350(param_1,&local_c);
    if (iVar2 < 0) {
      FUN_0047be40(0x01C25594,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   *(uint *)(param_1[0xc] + iVar1 * 8),
                   *(uint *)(param_1[0xc] + 4 + iVar1 * 8),&DAT_01e65100);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      _DAT_01d046a4 = 0x1192;
      _DAT_01d046a0 = "..\\core\\script.cpp";
      FUN_004e4500("Infinite loop detected trying to skip cinematic, at script line %d",
                   *(uint *)(param_1[0xc] + param_1[0x11] * 8));
    }
  }
  return 1;
}
