// Name: FUN_0056cb60
// Address: 0056cb60
// Address Range: [[0056cb60, 0056ccd5]]
// Convention: unknown
// Signature: undefined4 FUN_0056cb60(LPCSTR param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_0056cb60(LPCSTR param_1,uint *param_2)

{
  HANDLE hFile;
  uint uVar1;
  BOOL BVar2;
  WORD *pWVar3;
  SYSTEMTIME SStack_54;
  SYSTEMTIME SStack_44;
  _FILETIME _Stack_34;
  _FILETIME _Stack_2c;
  _FILETIME _Stack_24;
  uint uStack_1c;
  uint uStack_18;
  _FILETIME _Stack_14;
  
  hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    uVar1 = FUN_0056c73c();
  }
  else {
    BVar2 = GetFileTime(hFile,&_Stack_24,&_Stack_14,&_Stack_34);
    if (BVar2 == 0) {
      CloseHandle(hFile);
      uVar1 = FUN_0056c73c();
      return uVar1;
    }
    if (param_2 == (uint *)0x0) {
      uStack_1c = FUN_00570a30(0);
      param_2 = &uStack_1c;
      uStack_18 = uStack_1c;
    }
    pWVar3 = (WORD *)FUN_005665e8(param_2 + 1);
    SStack_54.wYear = pWVar3[10] + 0x76c;
    SStack_54.wMonth = pWVar3[8] + 1;
    SStack_54.wDay = pWVar3[6];
    SStack_54.wHour = pWVar3[4];
    SStack_54.wMinute = pWVar3[2];
    SStack_54.wSecond = *pWVar3;
    SStack_44.wMilliseconds = 0;
    SStack_54.wMilliseconds = 0;
    SStack_44.wYear = SStack_54.wYear;
    SStack_44.wMonth = SStack_54.wMonth;
    SStack_44.wDay = SStack_54.wDay;
    SStack_44.wHour = SStack_54.wHour;
    SStack_44.wMinute = SStack_54.wMinute;
    SStack_44.wSecond = SStack_54.wSecond;
    SystemTimeToFileTime(&SStack_54,&_Stack_2c);
    LocalFileTimeToFileTime(&_Stack_2c,&_Stack_34);
    SystemTimeToFileTime(&SStack_44,&_Stack_2c);
    LocalFileTimeToFileTime(&_Stack_2c,&_Stack_14);
    BVar2 = SetFileTime(hFile,&_Stack_24,&_Stack_14,&_Stack_34);
    if (BVar2 == 0) {
      CloseHandle(hFile);
      uVar1 = FUN_0056c73c();
      return uVar1;
    }
    CloseHandle(hFile);
    uVar1 = 0;
  }
  return uVar1;
}
