// Name: FUN_0056d608
// Address: 0056d608
// Address Range: [[0056d50c, 0056d605] [0056d608, 0056d626]]
// Convention: unknown
// Signature: void FUN_0056d608(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056d608(void)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_b4;
  
  iVar2 = FUN_00566e10();
  if (iVar2 != 0) {
    FUN_0056d87c();
    return;
  }
  if (((DAT_005c1f20 & 1) == 0) || ((DAT_005c1f20 & 2) == 0)) {
    DAT_005c1f20 = DAT_005c1f20 | 2;
    DVar1 = GetTimeZoneInformation(&local_b4);
    if (DVar1 != 0) {
      if (DVar1 < 2) {
        _DAT_005c1f18 = 0;
      }
      else {
        if (DVar1 != 2) {
          return;
        }
        _DAT_005c1f18 = 1;
        DAT_005c1f1c = local_b4.DaylightBias * -0x3c;
      }
      DAT_005c1f14 = (local_b4.StandardBias + local_b4.Bias) * 0x3c;
      iVar2 = FUN_00570bd0(&DAT_005c1e08,local_b4.StandardName,0x80);
      if (iVar2 == -1) {
        DAT_005c1e08 = 0;
      }
      else {
        DAT_005c1e88 = 0;
      }
      iVar2 = FUN_00570bd0(&DAT_005c1e89,local_b4.DaylightName,0x80);
      if (iVar2 == -1) {
        DAT_005c1e89 = 0;
      }
      else {
        DAT_005c1f09 = 0;
      }
    }
  }
  return;
}
