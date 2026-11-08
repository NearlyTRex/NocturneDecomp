// Name: FUN_005c9428
// Address: 005c9428
// Address Range: [[005c932c, 005c9425] [005c9428, 005c9446]]
// Convention: unknown
// Signature: void FUN_005c9428(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c9428(void)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_b4;
  
  iVar2 = FUN_005c3050();
  if (iVar2 != 0) {
    FUN_005c969c();
    return;
  }
  if (((DAT_006269a4 & 1) == 0) || ((DAT_006269a4 & 2) == 0)) {
    DAT_006269a4 = DAT_006269a4 | 2;
    DVar1 = GetTimeZoneInformation(&local_b4);
    if (DVar1 != 0) {
      if (DVar1 < 2) {
        _DAT_0062699c = 0;
      }
      else {
        if (DVar1 != 2) {
          return;
        }
        _DAT_0062699c = 1;
        DAT_006269a0 = local_b4.DaylightBias * -0x3c;
      }
      DAT_00626998 = (local_b4.StandardBias + local_b4.Bias) * 0x3c;
      iVar2 = FUN_005cc610(&DAT_0062688c,local_b4.StandardName,0x80);
      if (iVar2 == -1) {
        DAT_0062688c = 0;
      }
      else {
        DAT_0062690c = 0;
      }
      iVar2 = FUN_005cc610(&DAT_0062690d,local_b4.DaylightName,0x80);
      if (iVar2 == -1) {
        DAT_0062690d = 0;
      }
      else {
        DAT_0062698d = 0;
      }
    }
  }
  return;
}
