// Name: FUN_005656a4
// Address: 005656a4
// Address Range: [[005656a4, 00565722]]
// Convention: unknown
// Signature: int FUN_005656a4(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005656a4(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  (*(code *)PTR_FUN_005c1ad0)();
  for (puVar2 = _DAT_02de4e20; puVar2 != (uint *)0x0; puVar2 = (uint *)*puVar2) {
    iVar1 = puVar2[1];
    if (param_1 == iVar1) {
      if ((*(byte *)(iVar1 + 0xc) & 3) != 0) {
        FUN_005634b0(iVar1,1);
      }
      (*(code *)PTR_FUN_005c1ad4)();
      return param_1;
    }
  }
  puVar2 = (uint *)&DAT_02de4e24;
  do {
    puVar3 = puVar2;
    puVar2 = (uint *)*puVar3;
    if (puVar2 == (uint *)0x0) {
      FUN_00568e80(4);
      (*(code *)PTR_FUN_005c1ad4)();
      return 0;
    }
  } while (param_1 != puVar2[1]);
  *puVar3 = *puVar2;
  *puVar2 = _DAT_02de4e20;
  _DAT_02de4e20 = puVar2;
  (*(code *)PTR_FUN_005c1ad4)();
  return param_1;
}
