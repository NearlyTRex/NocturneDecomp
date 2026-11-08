// Name: FUN_005aa380
// Address: 005aa380
// Address Range: [[005aa380, 005aa3df]]
// Convention: unknown
// Signature: DWORD FUN_005aa380(uint param_1)

#include "nocturne.h"

DWORD FUN_005aa380(uint param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    hFile = *(HANDLE *)(DAT_00607bdc + param_1 * 4);
    (*(code *)PTR_FUN_006079a4)(param_1);
    DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
    (*(code *)PTR_FUN_006079a8)(param_1);
    if (DVar1 == 0xffffffff) {
      FUN_005ab46c();
    }
    return DVar1;
  }
  FUN_005a92c0(4);
  return 0xffffffff;
}
