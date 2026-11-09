// Name: crt_unknown.c_FUN_005be27c
// Address: 005be27c
// Address Range: [[005be27c, 005be2c0]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005be27c(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005be27c(uint param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2b8)();
  iVar3 = 0;
  for (puVar2 = _DAT_02680160; puVar2 != (uint *)0x0; puVar2 = (uint *)*puVar2) {
    iVar1 = puVar2[1];
    if (((*(uint *)(iVar1 + 0xc) & param_1) != 0) &&
       (iVar3 = iVar3 + 1, (*(byte *)(iVar1 + 0xd) & 0x10) != 0)) {
      FUN_005bea80(iVar1);
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
  return iVar3;
}
