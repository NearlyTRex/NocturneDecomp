// Name: crt_unknown.c_FUN_005a93bc
// Address: 005a93bc
// Address Range: [[005a93bc, 005a9400]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005a93bc(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a93bc(uint param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b4)();
  iVar3 = 0;
  for (puVar2 = _DAT_02d252a0; puVar2 != (uint *)0x0; puVar2 = (uint *)*puVar2) {
    iVar1 = puVar2[1];
    if (((*(uint *)(iVar1 + 0xc) & param_1) != 0) &&
       (iVar3 = iVar3 + 1, (*(byte *)(iVar1 + 0xd) & 0x10) != 0)) {
      FUN_005a9bc0(iVar1);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
  return iVar3;
}
