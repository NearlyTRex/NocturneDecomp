// Name: FUN_0043b4c0
// Address: 0043b4c0
// Address Range: [[0043b4c0, 0043b562]]
// Convention: unknown
// Signature: void FUN_0043b4c0(undefined4 param_1)

#include "nocturne.h"

void FUN_0043b4c0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_18;
  uint local_14;
  
  FUN_00443180(param_1,0x10000);
  iVar1 = DAT_006141bc;
  if (0x1e0 < DAT_006141bc) {
    iVar1 = 0x1e0;
  }
  FUN_0043b570(param_1,iVar1);
  FUN_00441f40(param_1);
  iVar1 = 0;
  local_18 = 0x40;
  local_14 = 0;
  do {
    iVar3 = 0;
    iVar5 = iVar1 << 6;
    do {
      iVar2 = (iVar3 + (iVar3 >> 0x1f) * -0x10) - (uint)((iVar3 >> 0x1f) << 3 < 0);
      iVar4 = iVar2 >> 0x1f;
      iVar6 = iVar5 + 1;
      iVar3 = iVar3 + local_14;
      *(char *)(iVar5 + 0x1325d00) =
           (char)((int)(((iVar2 >> 4) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
      iVar5 = iVar6;
    } while (iVar6 != local_18);
    iVar1 = iVar1 + 1;
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x40;
  } while (iVar1 < 0x40);
  return;
}
