// Name: FUN_005bf250
// Address: 005bf250
// Address Range: [[005bf250, 005bf2af]]
// Convention: unknown
// Signature: DWORD FUN_005bf250(uint param_1)

#include "nocturne.h"

DWORD FUN_005bf250(uint param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    hFile = *(HANDLE *)(DAT_0061f4d8 + param_1 * 4);
    (*(code *)PTR_FUN_0061f2a8)(param_1);
    DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
    (*(code *)PTR_FUN_0061f2ac)(param_1);
    if (DVar1 == 0xffffffff) {
      FUN_005c036c();
    }
    return DVar1;
  }
  FUN_005be180(4);
  return 0xffffffff;
}
