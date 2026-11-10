// Name: crt_unknown.c_FUN_005ac558
// Address: 005ac558
// Address Range: [[005ac45c, 005ac555] [005ac558, 005ac576]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ac558(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ac558(void)

{
  DWORD DVar1;
  int iVar2;
  char *pcVar3;
  _TIME_ZONE_INFORMATION local_b4;
  
  pcVar3 = getenv(&DAT_005da8bc);
  if (pcVar3 != (char *)0x0) {
    FUN_005ac7cc();
    return;
  }
  if (((DAT_00607d48 & 1) == 0) || ((DAT_00607d48 & 2) == 0)) {
    DAT_00607d48 = DAT_00607d48 | 2;
    DVar1 = GetTimeZoneInformation(&local_b4);
    if (DVar1 != 0) {
      if (DVar1 < 2) {
        _DAT_00607d40 = 0;
      }
      else {
        if (DVar1 != 2) {
          return;
        }
        _DAT_00607d40 = 1;
        DAT_00607d44 = local_b4.DaylightBias * -0x3c;
      }
      DAT_00607d3c = (local_b4.StandardBias + local_b4.Bias) * 0x3c;
      iVar2 = FUN_005af1d0(&DAT_00607c30,local_b4.StandardName,0x80);
      if (iVar2 == -1) {
        DAT_00607c30 = 0;
      }
      else {
        DAT_00607cb0 = 0;
      }
      iVar2 = FUN_005af1d0(&DAT_00607cb1,local_b4.DaylightName,0x80);
      if (iVar2 == -1) {
        DAT_00607cb1 = 0;
      }
      else {
        DAT_00607d31 = 0;
      }
    }
  }
  return;
}
