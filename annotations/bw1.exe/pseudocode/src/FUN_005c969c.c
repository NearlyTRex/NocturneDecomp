// Name: FUN_005c969c
// Address: 005c969c
// Address Range: [[005c969c, 005c97ba]]
// Convention: unknown
// Signature: void FUN_005c969c(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c969c(uint param_1)

{
  char *pcVar1;
  int local_14;
  
  _DAT_0062699c = 0;
  pcVar1 = (char *)FUN_005c9478(param_1,&DAT_0062688c,&DAT_00626998);
  if (*pcVar1 == '\0') {
    DAT_0062690d = 0;
  }
  else {
    local_14 = DAT_00626998 + -0xe10;
    _DAT_0062699c = 1;
    pcVar1 = (char *)FUN_005c9478(pcVar1,&DAT_0062690d,&local_14);
    DAT_006269a0 = DAT_00626998 - local_14;
    if (*pcVar1 == ',') {
      pcVar1 = (char *)FUN_005c9594(pcVar1 + 1,&DAT_00626844);
    }
    if (*pcVar1 == ',') {
      FUN_005c9594(pcVar1 + 1,&DAT_00626868);
      DAT_00626870 = DAT_00626870 - DAT_006269a0 / 0xe10;
      DAT_0062686c = DAT_0062686c -
                     (int)((longlong)
                           ((ulonglong)(uint)((int)((longlong)DAT_006269a0 / 0x3c) >> 0x1f) << 0x20
                           | (longlong)DAT_006269a0 / 0x3c & 0xffffffffU) % 0x3c);
      DAT_00626868 = DAT_00626868 - DAT_006269a0 % 0x3c;
    }
  }
  return;
}
