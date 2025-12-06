// Name: crt_time.c_parse_tz_string_FUN_0060756c
// Address: 0060756c
// Address Range: [[0060756c, 0060768a]]
// Convention: __cdecl
// Signature: void crt_time.c_parse_tz_string_FUN_0060756c(char * tz_string)

#include "nocturne.h"

void __cdecl crt_time_c_parse_tz_string_FUN_0060756c(char *tz_string)

{
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  
  g_DaylightSavingActive = 0;
  pcVar1 = crt_time_c_parse_timezone_spec_FUN_00607348(tz_string,"EST",&g_TimezoneOffset);
  if (*pcVar1 == '\0') {
    "EDT"[0] = '\0';
  }
  else {
    g_DaylightSavingActive = 1;
    pcVar1 = crt_time_c_parse_timezone_spec_FUN_00607348
                       (pcVar1,"EDT",(int *)&stack0xfffffff0);
    g_DaylightSavingOffset = g_TimezoneOffset - unaff_EDI;
    if (*pcVar1 == ',') {
      pcVar1 = crt_time_c_parse_dst_rule_FUN_00607464(pcVar1 + 1,&g_DstStartRule);
    }
    if (*pcVar1 == ',') {
      crt_time_c_parse_dst_rule_FUN_00607464(pcVar1 + 1,(dst_rule *)&g_DstTransitionSecond);
      g_DstTransitionHour = g_DstTransitionHour - g_DaylightSavingOffset / 0xe10;
      g_DstTransitionMinute =
           g_DstTransitionMinute -
           (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)g_DaylightSavingOffset / 0x3c) >> 0x1f) << 0x20
                 | (longlong)g_DaylightSavingOffset / 0x3c & 0xffffffffU) % 0x3c);
      g_DstTransitionSecond = g_DstTransitionSecond - g_DaylightSavingOffset % 0x3c;
    }
  }
  return;
}
