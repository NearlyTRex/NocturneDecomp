// Name: FUN_005aeb30
// Address: 005aeb30
// Address Range: [[005aeb30, 005aeb9b]]
// Convention: unknown
// Signature: undefined4 FUN_005aeb30(int param_1)

#include "nocturne.h"

uint FUN_005aeb30(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  (*(code *)PTR_FUN_006079a4)(param_1);
  if (DAT_00607b18 != (code *)0x0) {
    iVar1 = (*DAT_00607b18)(param_1);
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_006079a8)(param_1);
      return 1;
    }
  }
  DVar2 = GetFileType(*(HANDLE *)(DAT_00607bdc + param_1 * 4));
  if (DVar2 == 2) {
    (*(code *)PTR_FUN_006079a8)(param_1);
    return 1;
  }
  (*(code *)PTR_FUN_006079a8)(param_1);
  return 0;
}
