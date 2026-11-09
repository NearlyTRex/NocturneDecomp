// Name: crt_unknown.c_FUN_005c1168
// Address: 005c1168
// Address Range: [[005c106c, 005c1165] [005c1168, 005c1186]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c1168(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c1168(void)

{
  DWORD DVar1;
  int iVar2;
  char *pcVar3;
  _TIME_ZONE_INFORMATION local_b4;
  
  pcVar3 = getenv(&DAT_005f1a58);
  if (pcVar3 != (char *)0x0) {
    FUN_005c13dc();
    return;
  }
  if (((DAT_0061f644 & 1) == 0) || ((DAT_0061f644 & 2) == 0)) {
    DAT_0061f644 = DAT_0061f644 | 2;
    DVar1 = GetTimeZoneInformation(&local_b4);
    if (DVar1 != 0) {
      if (DVar1 < 2) {
        _DAT_0061f63c = 0;
      }
      else {
        if (DVar1 != 2) {
          return;
        }
        _DAT_0061f63c = 1;
        DAT_0061f640 = local_b4.DaylightBias * -0x3c;
      }
      DAT_0061f638 = (local_b4.StandardBias + local_b4.Bias) * 0x3c;
      iVar2 = unkafter_morph_cpp_FUN_005c4310(&DAT_0061f52c,local_b4.StandardName,0x80);
      if (iVar2 == -1) {
        DAT_0061f52c = 0;
      }
      else {
        DAT_0061f5ac = 0;
      }
      iVar2 = unkafter_morph_cpp_FUN_005c4310(&DAT_0061f5ad,local_b4.DaylightName,0x80);
      if (iVar2 == -1) {
        DAT_0061f5ad = 0;
      }
      else {
        DAT_0061f62d = 0;
      }
    }
  }
  return;
}
