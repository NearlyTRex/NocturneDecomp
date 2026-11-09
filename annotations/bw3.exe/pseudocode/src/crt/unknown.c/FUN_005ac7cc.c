// Name: crt_unknown.c_FUN_005ac7cc
// Address: 005ac7cc
// Address Range: [[005ac7cc, 005ac8ea]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ac7cc(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ac7cc(uint param_1)

{
  char *pcVar1;
  int local_14;
  
  _DAT_00607d40 = 0;
  pcVar1 = (char *)FUN_005ac5a8(param_1,&DAT_00607c30,&DAT_00607d3c);
  if (*pcVar1 == '\0') {
    DAT_00607cb1 = 0;
  }
  else {
    local_14 = DAT_00607d3c + -0xe10;
    _DAT_00607d40 = 1;
    pcVar1 = (char *)FUN_005ac5a8(pcVar1,&DAT_00607cb1,&local_14);
    DAT_00607d44 = DAT_00607d3c - local_14;
    if (*pcVar1 == ',') {
      pcVar1 = (char *)FUN_005ac6c4(pcVar1 + 1,&DAT_00607be8);
    }
    if (*pcVar1 == ',') {
      FUN_005ac6c4(pcVar1 + 1,&DAT_00607c0c);
      DAT_00607c14 = DAT_00607c14 - DAT_00607d44 / 0xe10;
      DAT_00607c10 = DAT_00607c10 -
                     (int)((longlong)
                           ((ulonglong)(uint)((int)((longlong)DAT_00607d44 / 0x3c) >> 0x1f) << 0x20
                           | (longlong)DAT_00607d44 / 0x3c & 0xffffffffU) % 0x3c);
      DAT_00607c0c = DAT_00607c0c - DAT_00607d44 % 0x3c;
    }
  }
  return;
}
