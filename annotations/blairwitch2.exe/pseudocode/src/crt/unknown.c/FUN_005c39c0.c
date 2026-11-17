// Name: crt_unknown.c_FUN_005c39c0
// Address: 005c39c0
// Address Range: [[005c39c0, 005c3a2b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c39c0(int param_1)

#include "nocturne.h"

uint FUN_005c39c0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(param_1);
  if (g_PTR_0061f414 != (byte *)0x0) {
    iVar1 = (*(code *)g_PTR_0061f414)(param_1);
    if (iVar1 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(param_1);
      return 1;
    }
  }
  DVar2 = GetFileType(g_SIOControlBlock_PTR_0061f4d8->standard_handles[param_1]);
  if (DVar2 == 2) {
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(param_1);
    return 1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(param_1);
  return 0;
}
