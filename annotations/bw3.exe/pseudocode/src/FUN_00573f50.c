// Name: FUN_00573f50
// Address: 00573f50
// Address Range: [[00573f50, 00573fbd]]
// Convention: unknown
// Signature: undefined4 FUN_00573f50(int *param_1,LPCSTR param_2,int param_3)

#include "nocturne.h"

uint FUN_00573f50(int *param_1,LPCSTR param_2,int param_3)

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
    FUN_00573e00(param_1);
    param_1[10] = param_3;
    return 1;
  }
  (**(code **)(*param_1 + 0x24))(param_1);
  return 0;
}
