// Name: crt_time.c_tzset_FUN_006072f8
// Address: 006072f8
// Address Range: [[006071fc, 006072f5] [006072f8, 00607316]]
// Convention: __cdecl
// Signature: void crt_time.c_tzset_FUN_006072f8(void)

#include "nocturne.h"

void __cdecl crt_time_c_tzset_FUN_006072f8(void)

{
  DWORD DVar1;
  int iVar2;
  char *tz_string;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int in_stack_ffffff58;
  wchar_t awStack_a4 [40];
  int iStack_54;
  wchar_t awStack_4c [34];
  LONG LStack_8;
  
  LStack_8 = 0x607302;
  tz_string = crt_env_c_getenv_FUN_006013f0("TZ");
  if (tz_string != (char *)0x0) {
    crt_time_c_parse_tz_string_FUN_0060756c(tz_string);
    return;
  }
  if (((g_TimezoneInitFlags & 1) == 0) || ((g_TimezoneInitFlags & 2) == 0)) {
    g_TimezoneInitFlags = g_TimezoneInitFlags | 2;
    DVar1 = (*PTR_GetTimeZoneInformation_006115c4)((LPTIME_ZONE_INFORMATION)&stack0xffffff50);
    if (DVar1 != 0) {
      if (DVar1 < 2) {
        g_DaylightSavingActive = 0;
      }
      else {
        if (DVar1 != 2) {
          return;
        }
        g_DaylightSavingActive = 1;
        g_DaylightSavingOffset = unaff_EBX * -0x3c;
      }
      g_TimezoneOffset = (iStack_54 + in_stack_ffffff58) * 0x3c;
      iVar2 = crt_string_c_wcstombs_FUN_0060c0c0("EST",awStack_a4,0x80);
      if (iVar2 == -1) {
        "EST"[0] = '\0';
      }
      else {
        DAT_0068513c = 0;
      }
      iVar2 = crt_string_c_wcstombs_FUN_0060c0c0("EDT",awStack_4c,0x80);
      if (iVar2 == -1) {
        "EDT"[0] = '\0';
      }
      else {
        DAT_006851bd = 0;
      }
    }
  }
  return;
}
