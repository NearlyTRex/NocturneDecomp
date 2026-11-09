// Name: support_trstream.cpp_FUN_0057d320
// Address: 0057d320
// Address Range: [[0057d320, 0057d386]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_0057d320(int *param_1,LPCSTR param_2)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057d320(int *param_1,LPCSTR param_2)

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
    support_trstream_cpp_FUN_0057d1d0(param_1);
    return 1;
  }
  (**(code **)(*param_1 + 0x24))(param_1);
  return 0;
}
