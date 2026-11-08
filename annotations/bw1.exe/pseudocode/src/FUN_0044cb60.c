// Name: FUN_0044cb60
// Address: 0044cb60
// Address Range: [[0044cb60, 0044cc28]]
// Convention: unknown
// Signature: void FUN_0044cb60(undefined4 param_1)

#include "nocturne.h"

void FUN_0044cb60(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  
  if (DAT_007ddbb0 == 0) {
    FUN_00454830(param_1,0x10000);
    DAT_007ddbb0 = 1;
  }
  iVar6 = DAT_0061b49c;
  if (0x1e0 < DAT_0061b49c) {
    iVar6 = 0x1e0;
  }
  FUN_0044cc30(param_1,iVar6);
  FUN_00453600(param_1);
  iVar6 = 0;
  local_18 = 0x40;
  local_14 = 0;
  do {
    iVar2 = 0;
    iVar4 = iVar6 << 6;
    do {
      iVar1 = (iVar2 + (iVar2 >> 0x1f) * -0x10) - (uint)((iVar2 >> 0x1f) << 3 < 0);
      iVar3 = iVar1 >> 0x1f;
      iVar5 = iVar4 + 1;
      iVar2 = iVar2 + local_14;
      *(char *)(iVar4 + 0x1341200) =
           (char)((int)(((iVar1 >> 4) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
      iVar4 = iVar5;
    } while (iVar5 != local_18);
    iVar6 = iVar6 + 1;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x40;
  } while (iVar6 < 0x40);
  return;
}
