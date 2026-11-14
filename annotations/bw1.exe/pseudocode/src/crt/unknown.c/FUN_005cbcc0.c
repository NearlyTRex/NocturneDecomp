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
  if (DAT_00626774 != (code *)0x0) {
    iVar1 = (*DAT_00626774)(param_1);
    if (iVar1 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
      return 1;
    }
  }
  DVar2 = GetFileType(*(HANDLE *)(DAT_00626838 + param_1 * 4));
  if (DVar2 == 2) {
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
    return 1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
  return 0;
}
