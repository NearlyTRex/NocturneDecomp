// Name: crt_unknown.c_FUN_005aeb30
// Address: 005aeb30
// Address Range: [[005aeb30, 005aeb9b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005aeb30(int param_1)

#include "nocturne.h"

uint FUN_005aeb30(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(param_1);
  if (g_PTR_00607b18 != (byte *)0x0) {
    iVar1 = (*(code *)g_PTR_00607b18)(param_1);
    if (iVar1 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1);
      return 1;
    }
  }
  DVar2 = GetFileType(g_SIOControlBlock_PTR_00607bdc->standard_handles[param_1]);
  if (DVar2 == 2) {
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1);
    return 1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1);
  return 0;
}
