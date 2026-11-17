// Name: crt_unknown.c_FUN_005c7510
// Address: 005c7510
// Address Range: [[005c7510, 005c756f]]
// Convention: unknown
// Signature: DWORD crt_unknown_c_FUN_005c7510(uint param_1)

#include "nocturne.h"

DWORD FUN_005c7510(uint param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  
  if ((-1 < (int)param_1) && (param_1 <= g_UINT_006267e0)) {
    hFile = g_SIOControlBlock_PTR_00626838->standard_handles[param_1];
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(param_1);
    DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
    if (DVar1 == 0xffffffff) {
      FUN_005c862c();
    }
    return DVar1;
  }
  setErrno(4);
  return 0xffffffff;
}
