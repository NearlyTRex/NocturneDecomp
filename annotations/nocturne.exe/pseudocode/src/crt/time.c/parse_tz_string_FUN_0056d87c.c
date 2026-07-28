// Name: crt_time.c_parse_tz_string_FUN_0056d87c
// Address: 0056d87c
// Address Range: [[0056d87c, 0056d99a]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c_parse_tz_string_FUN_0056d87c(char *tz_string)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl parse_tz_string(char *tz_string)

{
  char *pcVar1;
  int local_14;
  
  _DAT_005c1f18 = 0;
  pcVar1 = (char *)parse_timezone_spec
                             (tz_string,&DAT_005c1e08,&DAT_005c1f14);
  if (*pcVar1 == '\0') {
    DAT_005c1e89 = 0;
  }
  else {
    local_14 = DAT_005c1f14 + -0xe10;
    _DAT_005c1f18 = 1;
    pcVar1 = (char *)parse_timezone_spec(pcVar1,&DAT_005c1e89,&local_14);
    DAT_005c1f1c = DAT_005c1f14 - local_14;
    if (*pcVar1 == ',') {
      pcVar1 = (char *)parse_dst_rule(pcVar1 + 1,&DAT_005c1dc0);
    }
    if (*pcVar1 == ',') {
      parse_dst_rule(pcVar1 + 1,&DAT_005c1de4);
      DAT_005c1dec = DAT_005c1dec - DAT_005c1f1c / 0xe10;
      DAT_005c1de8 = DAT_005c1de8 -
                     (int)((longlong)
                           ((ulonglong)(uint)((int)((longlong)DAT_005c1f1c / 0x3c) >> 0x1f) << 0x20
                           | (longlong)DAT_005c1f1c / 0x3c & 0xffffffffU) % 0x3c);
      DAT_005c1de4 = DAT_005c1de4 - DAT_005c1f1c % 0x3c;
    }
  }
  return;
}
