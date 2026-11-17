// Name: crt_time.c_parse_tz_string_FUN_0056d87c
// Address: 0056d87c
// Address Range: [[0056d87c, 0056d99a]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c_parse_tz_string_FUN_0056d87c(char *tz_string)

#include "nocturne.h"

void __cdecl parse_tz_string(char *tz_string)

{
  char *pcVar1;
  int local_14;
  
  g_INT_005c1f18 = 0;
  pcVar1 = parse_timezone_spec(tz_string,"EST",&g_INT_005c1f14);
  if (*pcVar1 == '\0') {
    "EDT"[0] = '\0';
  }
  else {
    local_14 = g_INT_005c1f14 + -0xe10;
    g_INT_005c1f18 = 1;
    pcVar1 = parse_timezone_spec(pcVar1,"EDT",&local_14);
    g_INT_005c1f1c = g_INT_005c1f14 - local_14;
    if (*pcVar1 == ',') {
      pcVar1 = parse_dst_rule(pcVar1 + 1,&g_dst_rule_005c1dc0);
    }
    if (*pcVar1 == ',') {
      parse_dst_rule(pcVar1 + 1,(dst_rule *)&g_INT_005c1de4);
      g_INT_005c1dec = g_INT_005c1dec - g_INT_005c1f1c / 0xe10;
      g_INT_005c1de8 =
           g_INT_005c1de8 -
           (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)g_INT_005c1f1c / 0x3c) >> 0x1f) << 0x20 |
                 (longlong)g_INT_005c1f1c / 0x3c & 0xffffffffU) % 0x3c);
      g_INT_005c1de4 = g_INT_005c1de4 - g_INT_005c1f1c % 0x3c;
    }
  }
  return;
}
