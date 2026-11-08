// Name: FUN_005a0f60
// Address: 005a0f60
// Address Range: [[005a0f60, 005a0fcd]]
// Convention: unknown
// Signature: undefined4 FUN_005a0f60(int *param_1,LPCSTR param_2,int param_3)

#include "nocturne.h"

uint FUN_005a0f60(int *param_1,LPCSTR param_2,int param_3)

{
  HANDLE hFile;
  DWORD DVar1;
  
  (**(code **)(*param_1 + 0x24))(param_1);
  param_1[4] = 0;
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  param_1[1] = (int)hFile;
  if (hFile == (HANDLE)0x0) {
    return 0;
  }
  DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
  param_1[2] = DVar1;
  if (-1 < (int)DVar1) {
    FUN_005a0e10(param_1);
    param_1[10] = param_3;
    return 1;
  }
  (**(code **)(*param_1 + 0x24))(param_1);
  return 0;
}
