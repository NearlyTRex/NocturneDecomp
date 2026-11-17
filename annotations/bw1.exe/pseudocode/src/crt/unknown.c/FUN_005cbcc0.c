// Name: crt_unknown.c_FUN_005cbcc0
// Address: 005cbcc0
// Address Range: [[005cbcc0, 005cbd2b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cbcc0(int param_1)

#include "nocturne.h"

uint FUN_005cbcc0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(param_1);
  if (g_PTR_00626774 != (byte *)0x0) {
    iVar1 = (*(code *)g_PTR_00626774)(param_1);
    if (iVar1 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
      return 1;
    }
  }
  DVar2 = GetFileType(g_SIOControlBlock_PTR_00626838->standard_handles[param_1]);
  if (DVar2 == 2) {
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
    return 1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
  return 0;
}
