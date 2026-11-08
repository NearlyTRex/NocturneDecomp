// Name: FUN_005c13dc
// Address: 005c13dc
// Address Range: [[005c13dc, 005c14fa]]
// Convention: unknown
// Signature: void FUN_005c13dc(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c13dc(uint param_1)

{
  char *pcVar1;
  int local_14;
  
  _DAT_0061f63c = 0;
  pcVar1 = (char *)FUN_005c11b8(param_1,&DAT_0061f52c,&DAT_0061f638);
  if (*pcVar1 == '\0') {
    DAT_0061f5ad = 0;
  }
  else {
    local_14 = DAT_0061f638 + -0xe10;
    _DAT_0061f63c = 1;
    pcVar1 = (char *)FUN_005c11b8(pcVar1,&DAT_0061f5ad,&local_14);
    DAT_0061f640 = DAT_0061f638 - local_14;
    if (*pcVar1 == ',') {
      pcVar1 = (char *)FUN_005c12d4(pcVar1 + 1,&DAT_0061f4e4);
    }
    if (*pcVar1 == ',') {
      FUN_005c12d4(pcVar1 + 1,&DAT_0061f508);
      DAT_0061f510 = DAT_0061f510 - DAT_0061f640 / 0xe10;
      DAT_0061f50c = DAT_0061f50c -
                     (int)((longlong)
                           ((ulonglong)(uint)((int)((longlong)DAT_0061f640 / 0x3c) >> 0x1f) << 0x20
                           | (longlong)DAT_0061f640 / 0x3c & 0xffffffffU) % 0x3c);
      DAT_0061f508 = DAT_0061f508 - DAT_0061f640 % 0x3c;
    }
  }
  return;
}
