// Name: crt_io.c__utime_00600c1e_FUN_00565dc6
// Address: 00565dc6
// Address Range: [[00565dc6, 00565dca]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__utime_00600c1e_FUN_00565dc6(char *filename,_utimbuf *timestamps)

#include "nocturne.h"

int __cdecl _utime_00600c1e(char *filename,_utimbuf *timestamps)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  _tm *p_Var3;
  SYSTEMTIME SStack_50;
  byte auStack_40 [14];
  WORD WStack_32;
  _FILETIME _Stack_30;
  byte auStack_28 [8];
  FILETIME FStack_20;
  byte auStack_18 [12];
  
  hFile = CreateFileA(filename,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = __set_errno();
  }
  else {
    BVar2 = GetFileTime(hFile,(LPFILETIME)(auStack_28 + 4),(LPFILETIME)(auStack_18 + 4),
                        (LPFILETIME)(auStack_40 + 0xc));
    if (BVar2 == 0) {
      CloseHandle(hFile);
      DVar1 = __set_errno();
      return DVar1;
    }
    if (timestamps == (_utimbuf *)0x0) {
      auStack_18._0_4_ = _time((time_t *)0x0);
      timestamps = (_utimbuf *)auStack_18;
      auStack_18._4_4_ = auStack_18._0_4_;
    }
    p_Var3 = _localtime(&timestamps->modtime);
    SStack_50.wYear = (short)p_Var3->tm_year + 0x76c;
    SStack_50.wMonth = (short)p_Var3->tm_mon + 1;
    SStack_50.wDay = (WORD)p_Var3->tm_mday;
    SStack_50.wHour = (WORD)p_Var3->tm_hour;
    SStack_50.wMinute = (WORD)p_Var3->tm_min;
    SStack_50.wSecond = (WORD)p_Var3->tm_sec;
    WStack_32 = 0;
    SStack_50.wMilliseconds = 0;
    auStack_40._0_2_ = SStack_50.wYear;
    auStack_40._2_2_ = SStack_50.wMonth;
    auStack_40._6_2_ = SStack_50.wDay;
    auStack_40._8_2_ = SStack_50.wHour;
    auStack_40._10_2_ = SStack_50.wMinute;
    auStack_40._12_2_ = SStack_50.wSecond;
    SystemTimeToFileTime(&SStack_50,(LPFILETIME)auStack_28);
    LocalFileTimeToFileTime((FILETIME *)auStack_28,&_Stack_30);
    SystemTimeToFileTime((SYSTEMTIME *)auStack_40,(LPFILETIME)auStack_28);
    LocalFileTimeToFileTime((FILETIME *)auStack_28,(LPFILETIME)(auStack_18 + 8));
    BVar2 = SetFileTime(hFile,&FStack_20,(FILETIME *)(auStack_18 + 8),&_Stack_30);
    if (BVar2 == 0) {
      CloseHandle(hFile);
      DVar1 = __set_errno();
      return DVar1;
    }
    CloseHandle(hFile);
    DVar1 = 0;
  }
  return DVar1;
}
