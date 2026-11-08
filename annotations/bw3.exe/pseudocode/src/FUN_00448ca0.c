// Name: FUN_00448ca0
// Address: 00448ca0
// Address Range: [[00448ca0, 00448d68]]
// Convention: unknown
// Signature: void FUN_00448ca0(undefined4 param_1)

#include "nocturne.h"

void FUN_00448ca0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  
  if (DAT_007fa460 == 0) {
    FUN_00450980(param_1,0x10000);
    DAT_007fa460 = 1;
  }
  iVar6 = DAT_005fba1c;
  if (0x1e0 < DAT_005fba1c) {
    iVar6 = 0x1e0;
  }
  FUN_00448d70(param_1,iVar6);
  FUN_0044f740(param_1);
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
      *(char *)(iVar4 + 0x135dab0) =
           (char)((int)(((iVar1 >> 4) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
      iVar4 = iVar5;
    } while (iVar5 != local_18);
    iVar6 = iVar6 + 1;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x40;
  } while (iVar6 < 0x40);
  return;
}
