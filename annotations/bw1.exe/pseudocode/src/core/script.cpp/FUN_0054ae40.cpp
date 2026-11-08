// Name: FUN_0054ae40
// Address: 0054ae40
// Address Range: [[0054ae40, 0054af13]]
// Convention: unknown
// Signature: undefined4 FUN_0054ae40(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0054ae40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  
  if (param_1[0x115] < 0) {
    return 0;
  }
  FUN_0054ae10(param_1);
  iVar3 = 0;
  param_1[0x11] = param_1[0x115];
  while ((*(int *)(0x01CCF390 + 0x244) != 0 && (*param_1 == 0))) {
    local_c = 0x3e800000;
    iVar1 = param_1[0x11];
    iVar2 = FUN_00544460(param_1,&local_c);
    if (iVar2 < 0) {
      FUN_004943a0(0x01C3EB54,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   *(uint *)(param_1[0xc] + iVar1 * 8),
                   *(uint *)(param_1[0xc] + 4 + iVar1 * 8),&DAT_01e810b0);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      _DAT_01d1d404 = 0x102a;
      _DAT_01d1d400 = "..\\core\\script.cpp";
      FUN_005030e0("Infinite loop detected trying to skip cinematic, at script line %d",
                   *(uint *)(param_1[0xc] + param_1[0x11] * 8));
    }
  }
  return 1;
}
