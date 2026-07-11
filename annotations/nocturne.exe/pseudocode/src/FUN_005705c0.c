// Name: FUN_005705c0
// Address: 005705c0
// Address Range: [[005705c0, 0057062b]]
// Convention: unknown
// Signature: undefined4 FUN_005705c0(int param_1)

#include "nocturne.h"

uint FUN_005705c0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  (*(code *)PTR_FUN_005c1ac0)(param_1);
  if (DAT_005c1d54 != (code *)0x0) {
    iVar1 = (*DAT_005c1d54)(param_1);
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_005c1ac4)(param_1);
      return 1;
    }
  }
  DVar2 = GetFileType(*(HANDLE *)(DAT_005c1f54 + param_1 * 4));
  if (DVar2 == 2) {
    (*(code *)PTR_FUN_005c1ac4)(param_1);
    return 1;
  }
  (*(code *)PTR_FUN_005c1ac4)(param_1);
  return 0;
}
