// Name: crt_time.c_tzset_FUN_006072f8
// Address: 006072f8
// Address Range: [[006071fc, 006072f5] [006072f8, 00607316]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c_tzset_FUN_006072f8(void)

#include "nocturne.h"

void __cdecl tzset(void)

{
  DWORD DVar1;
  int iVar2;
  char *tz_string;
  _TIME_ZONE_INFORMATION _Stack_b4;
  
  tz_string = getenv("TZ");
  if (tz_string != (char *)0x0) {
    parse_tz_string(tz_string);
    return;
  }
  if (((g_TimezoneInitFlags & 1) == 0) || ((g_TimezoneInitFlags & 2) == 0)) {
    g_TimezoneInitFlags = g_TimezoneInitFlags | 2;
    DVar1 = (*g_GetTimeZoneInformationFunc)(&_Stack_b4);
    if (DVar1 != 0) {
      if (DVar1 < 2) {
        g_DaylightSavingActive = 0;
      }
      else {
        if (DVar1 != 2) {
          return;
        }
        g_DaylightSavingActive = 1;
        g_DaylightSavingOffset = _Stack_b4.DaylightBias * -0x3c;
      }
      g_TimezoneOffset = (_Stack_b4.StandardBias + _Stack_b4.Bias) * 0x3c;
      iVar2 = wcstombs("EST",_Stack_b4.StandardName,0x80);
      if (iVar2 == -1) {
        "EST"[0] = '\0';
      }
      else {
        DAT_0068513c = 0;
      }
      iVar2 = wcstombs("EDT",_Stack_b4.DaylightName,0x80);
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
