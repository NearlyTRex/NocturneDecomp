// Name: crt_unknown.c_FUN_005c13dc
// Address: 005c13dc
// Address Range: [[005c13dc, 005c14fa]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c13dc(undefined4 param_1)

#include "nocturne.h"

void FUN_005c13dc(uint param_1)

{
  char *pcVar1;
  int local_14;
  
  g_INT_0061f63c = 0;
  pcVar1 = (char *)FUN_005c11b8(param_1,"EST",&g_INT_0061f638);
  if (*pcVar1 == '\0') {
    "EDT"[0] = '\0';
  }
  else {
    local_14 = g_INT_0061f638 + -0xe10;
    g_INT_0061f63c = 1;
    pcVar1 = (char *)FUN_005c11b8(pcVar1,"EDT",&local_14);
    g_INT_0061f640 = g_INT_0061f638 - local_14;
    if (*pcVar1 == ',') {
      pcVar1 = (char *)FUN_005c12d4(pcVar1 + 1,&g_dst_rule_0061f4e4);
    }
    if (*pcVar1 == ',') {
      FUN_005c12d4(pcVar1 + 1,&g_INT_0061f508);
      g_INT_0061f510 = g_INT_0061f510 - g_INT_0061f640 / 0xe10;
      g_INT_0061f50c =
           g_INT_0061f50c -
           (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)g_INT_0061f640 / 0x3c) >> 0x1f) << 0x20 |
                 (longlong)g_INT_0061f640 / 0x3c & 0xffffffffU) % 0x3c);
      g_INT_0061f508 = g_INT_0061f508 - g_INT_0061f640 % 0x3c;
    }
  }
  return;
}
