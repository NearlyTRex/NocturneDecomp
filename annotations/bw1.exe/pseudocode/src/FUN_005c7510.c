// Name: FUN_005c7510
// Address: 005c7510
// Address Range: [[005c7510, 005c756f]]
// Convention: unknown
// Signature: DWORD FUN_005c7510(uint param_1)

#include "nocturne.h"

DWORD FUN_005c7510(uint param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    hFile = *(HANDLE *)(DAT_00626838 + param_1 * 4);
    (*(code *)PTR_FUN_00626600)(param_1);
    DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
    (*(code *)PTR_FUN_00626604)(param_1);
    if (DVar1 == 0xffffffff) {
      FUN_005c862c();
    }
    return DVar1;
  }
  FUN_005c6450(4);
  return 0xffffffff;
}
