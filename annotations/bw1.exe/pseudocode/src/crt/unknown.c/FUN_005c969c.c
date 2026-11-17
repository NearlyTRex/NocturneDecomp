// Name: crt_unknown.c_FUN_005c969c
// Address: 005c969c
// Address Range: [[005c969c, 005c97ba]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c969c(undefined4 param_1)

#include "nocturne.h"

void FUN_005c969c(uint param_1)

{
  char *pcVar1;
  int local_14;
  
  g_INT_0062699c = 0;
  pcVar1 = (char *)FUN_005c9478(param_1,"EST",&g_INT_00626998);
  if (*pcVar1 == '\0') {
    "EDT"[0] = '\0';
  }
  else {
    local_14 = g_INT_00626998 + -0xe10;
    g_INT_0062699c = 1;
    pcVar1 = (char *)FUN_005c9478(pcVar1,"EDT",&local_14);
    g_INT_006269a0 = g_INT_00626998 - local_14;
    if (*pcVar1 == ',') {
      pcVar1 = (char *)FUN_005c9594(pcVar1 + 1,&g_dst_rule_00626844);
    }
    if (*pcVar1 == ',') {
      FUN_005c9594(pcVar1 + 1,&g_INT_00626868);
      g_INT_00626870 = g_INT_00626870 - g_INT_006269a0 / 0xe10;
      g_INT_0062686c =
           g_INT_0062686c -
           (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)g_INT_006269a0 / 0x3c) >> 0x1f) << 0x20 |
                 (longlong)g_INT_006269a0 / 0x3c & 0xffffffffU) % 0x3c);
      g_INT_00626868 = g_INT_00626868 - g_INT_006269a0 % 0x3c;
    }
  }
  return;
}
