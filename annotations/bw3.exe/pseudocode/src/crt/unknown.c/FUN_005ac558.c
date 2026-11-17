// Name: crt_unknown.c_FUN_005ac558
// Address: 005ac558
// Address Range: [[005ac45c, 005ac555] [005ac558, 005ac576]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ac558(void)

#include "nocturne.h"

void FUN_005ac558(void)

{
  DWORD DVar1;
  int iVar2;
  char *pcVar3;
  _TIME_ZONE_INFORMATION local_b4;
  
  pcVar3 = getenv("TZ");
  if (pcVar3 != (char *)0x0) {
    FUN_005ac7cc();
    return;
  }
  if (((g_BYTE_00607d48 & 1) == 0) || ((g_BYTE_00607d48 & 2) == 0)) {
    g_BYTE_00607d48 = g_BYTE_00607d48 | 2;
    DVar1 = GetTimeZoneInformation(&local_b4);
    if (DVar1 != 0) {
      if (DVar1 < 2) {
        g_INT_00607d40 = 0;
      }
      else {
        if (DVar1 != 2) {
          return;
        }
        g_INT_00607d40 = 1;
        g_INT_00607d44 = local_b4.DaylightBias * -0x3c;
      }
      g_INT_00607d3c = (local_b4.StandardBias + local_b4.Bias) * 0x3c;
      iVar2 = FUN_005af1d0("EST",local_b4.StandardName,0x80);
      if (iVar2 == -1) {
        "EST"[0] = '\0';
      }
      else {
        DAT_00607cb0 = 0;
      }
      iVar2 = FUN_005af1d0("EDT",local_b4.DaylightName,0x80);
      if (iVar2 == -1) {
        "EDT"[0] = '\0';
      }
      else {
        DAT_00607d31 = 0;
      }
    }
  }
  return;
}
