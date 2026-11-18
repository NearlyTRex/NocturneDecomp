// Name: crt_unknown.c_FUN_005c9428
// Address: 005c9428
// Address Range: [[005c932c, 005c9425] [005c9428, 005c9446]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c9428(void)

#include "nocturne.h"

void FUN_005c9428(void)

{
  DWORD DVar1;
  int iVar2;
  char *pcVar3;
  _TIME_ZONE_INFORMATION local_b4;
  
  pcVar3 = getenv("TZ");
  if (pcVar3 != (char *)0x0) {
    FUN_005c969c();
    return;
  }
  if (((g_TimezoneInitFlags & 1) == 0) || ((g_TimezoneInitFlags & 2) == 0)) {
    g_TimezoneInitFlags = g_TimezoneInitFlags | 2;
    DVar1 = GetTimeZoneInformation(&local_b4);
    if (DVar1 != 0) {
      if (DVar1 < 2) {
        g_DaylightSavingActive = 0;
      }
      else {
        if (DVar1 != 2) {
          return;
        }
        g_DaylightSavingActive = 1;
        g_DaylightSavingOffset = local_b4.DaylightBias * -0x3c;
      }
      g_TimezoneOffset = (local_b4.StandardBias + local_b4.Bias) * 0x3c;
      iVar2 = FUN_005cc610("EST",local_b4.StandardName,0x80);
      if (iVar2 == -1) {
        "EST"[0] = '\0';
      }
      else {
        DAT_0062690c = 0;
      }
      iVar2 = FUN_005cc610("EDT",local_b4.DaylightName,0x80);
      if (iVar2 == -1) {
        "EDT"[0] = '\0';
      }
      else {
        DAT_0062698d = 0;
      }
    }
  }
  return;
}
