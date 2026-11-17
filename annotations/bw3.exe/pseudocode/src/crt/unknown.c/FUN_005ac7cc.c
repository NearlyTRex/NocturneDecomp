// Name: crt_unknown.c_FUN_005ac7cc
// Address: 005ac7cc
// Address Range: [[005ac7cc, 005ac8ea]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ac7cc(undefined4 param_1)

#include "nocturne.h"

void FUN_005ac7cc(uint param_1)

{
  char *pcVar1;
  int local_14;
  
  g_DaylightSavingActive = 0;
  pcVar1 = (char *)FUN_005ac5a8(param_1,"EST",&g_TimezoneOffset);
  if (*pcVar1 == '\0') {
    "EDT"[0] = '\0';
  }
  else {
    local_14 = g_TimezoneOffset + -0xe10;
    g_DaylightSavingActive = 1;
    pcVar1 = (char *)FUN_005ac5a8(pcVar1,"EDT",&local_14);
    g_DaylightSavingOffset = g_TimezoneOffset - local_14;
    if (*pcVar1 == ',') {
      pcVar1 = (char *)FUN_005ac6c4(pcVar1 + 1,&g_DstStartRule);
    }
    if (*pcVar1 == ',') {
      FUN_005ac6c4(pcVar1 + 1,&g_DstTransitionSecond);
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
