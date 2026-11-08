// Name: FUN_00530530
// Address: 00530530
// Address Range: [[00530530, 00530603]]
// Convention: unknown
// Signature: undefined4 FUN_00530530(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00530530(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  
  if (param_1[0x115] < 0) {
    return 0;
  }
  FUN_00530500(param_1);
  iVar3 = 0;
  param_1[0x11] = param_1[0x115];
  while ((*(int *)(0x01D2130C + 0x24c) != 0 && (*param_1 == 0))) {
    local_c = 0x3e800000;
    iVar1 = param_1[0x11];
    iVar2 = FUN_00529a70(param_1,&local_c);
    if (iVar2 < 0) {
      FUN_0047cf40(0x01C5B0E4,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   *(uint *)(param_1[0xc] + iVar1 * 8),
                   *(uint *)(param_1[0xc] + 4 + iVar1 * 8),&DAT_01ed6810);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      _DAT_01d71de4 = 0x1030;
      _DAT_01d71de0 = "..\\core\\script.cpp";
      FUN_004e4330("Infinite loop detected trying to skip cinematic, at script line %d",
                   *(uint *)(param_1[0xc] + param_1[0x11] * 8));
    }
  }
  return 1;
}
