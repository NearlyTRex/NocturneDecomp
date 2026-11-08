// Name: FUN_005aba00
// Address: 005aba00
// Address Range: [[005aba00, 005aba8a]]
// Convention: unknown
// Signature: int FUN_005aba00(int param_1)

#include "nocturne.h"

int FUN_005aba00(int param_1)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_006079d4)();
  iVar2 = 0;
  if (0 < DAT_00607be0) {
    iVar1 = 0;
    do {
      if (*(int *)(DAT_00607bdc + iVar1) == 0) {
        *(int *)(DAT_00607bdc + iVar1) = param_1;
        (*(code *)PTR_FUN_006079d8)();
        return iVar2;
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar1 < DAT_00607be0 * 4);
  }
  DAT_00607bdc = FUN_005a3e50(DAT_00607bdc,(DAT_00607be0 + 1) * 4);
  iVar2 = DAT_00607be0 * 4;
  DAT_00607be0 = DAT_00607be0 + 1;
  *(int *)(DAT_00607bdc + iVar2) = param_1;
  (*(code *)PTR_FUN_006079d8)();
  return DAT_00607be0 + -1;
}
