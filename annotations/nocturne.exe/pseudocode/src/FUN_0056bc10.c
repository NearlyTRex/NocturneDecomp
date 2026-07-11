// Name: FUN_0056bc10
// Address: 0056bc10
// Address Range: [[0056bc10, 0056bc6f]]
// Convention: unknown
// Signature: DWORD FUN_0056bc10(uint param_1)

#include "nocturne.h"

DWORD FUN_0056bc10(uint param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    hFile = *(HANDLE *)(DAT_005c1f54 + param_1 * 4);
    (*(code *)PTR_FUN_005c1ac0)(param_1);
    DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
    (*(code *)PTR_FUN_005c1ac4)(param_1);
    if (DVar1 == 0xffffffff) {
      FUN_0056c73c();
    }
    return DVar1;
  }
  FUN_00568e80(4);
  return 0xffffffff;
}
