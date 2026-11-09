// Name: crt_unknown.c_FUN_005a3660
// Address: 005a3660
// Address Range: [[005a3660, 005a376d]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005a3660(uint param_1)

#include "nocturne.h"

int FUN_005a3660(uint param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iStack_28;
  uint local_24;
  
  if ((param_1 == 0) || (0xffffffd4 < param_1)) {
    return 0;
  }
  local_24 = param_1 + 0xb & 0xfffffff8;
  if (local_24 < 0x10) {
    local_24 = 0x10;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079bc)();
  iStack_28 = 0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if (DAT_006075cc < local_24) {
        uVar4 = DAT_006075c8;
        if (DAT_006075c8 == 0) {
          DAT_006075cc = DAT_006075c8;
          uVar4 = DAT_006075c4;
        }
      }
      else {
        DAT_006075cc = 0;
        uVar4 = DAT_006075c4;
      }
      for (; uVar4 != 0; uVar4 = *(uint *)(uVar4 + 8)) {
        uVar1 = *(uint *)(uVar4 + 0x14);
        DAT_006075c8 = uVar4;
        if ((param_1 <= uVar1) && (iStack_28 = FUN_005a9510(), iStack_28 != 0))
        goto LAB_005a3750;
        if (DAT_006075cc < uVar1) {
          DAT_006075cc = uVar1;
        }
      }
      if ((bVar2) || (iVar3 = FUN_005a9818(param_1), iVar3 == 0)) break;
      bVar2 = true;
    }
    iVar3 = FUN_005a9880(param_1);
    if (iVar3 == 0) break;
    bVar2 = false;
  }
LAB_005a3750:
  DAT_02d258e0 = 0;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079c4)();
  return iStack_28;
}
