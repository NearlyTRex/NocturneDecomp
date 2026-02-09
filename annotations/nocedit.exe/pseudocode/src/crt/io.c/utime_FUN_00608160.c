// Name: crt_io.c_utime_FUN_00608160
// Address: 00608160
// Address Range: [[00608160, 006082d5]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_utime_FUN_00608160(char *filename,utimbuf *timestamps)

#include "nocturne.h"

int __cdecl utime(char *filename,utimbuf *timestamps)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  _tm *p_Var3;
  SYSTEMTIME SStack_54;
  SYSTEMTIME SStack_44;
  _FILETIME _Stack_34;
  _FILETIME _Stack_2c;
  _FILETIME _Stack_24;
  utimbuf uStack_1c;
  _FILETIME _Stack_14;
  
  hFile = (*g_CreateFileAFunc)(filename,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = __set_errno();
  }
  else {
    BVar2 = (*g_GetFileTimeFunc)(hFile,&_Stack_24,&_Stack_14,&_Stack_34);
    if (BVar2 == 0) {
      (*g_CloseHandleFunc)(hFile);
      DVar1 = __set_errno();
      return DVar1;
    }
    if (timestamps == (utimbuf *)0x0) {
      uStack_1c.actime = _time((time_t *)0x0);
      timestamps = &uStack_1c;
      uStack_1c.modtime = uStack_1c.actime;
    }
    p_Var3 = _localtime(&timestamps->modtime);
    SStack_54.wYear = (short)p_Var3->tm_year + 0x76c;
    SStack_54.wMonth = (short)p_Var3->tm_mon + 1;
    SStack_54.wDay = (WORD)p_Var3->tm_mday;
    SStack_54.wHour = (WORD)p_Var3->tm_hour;
    SStack_54.wMinute = (WORD)p_Var3->tm_min;
    SStack_54.wSecond = (WORD)p_Var3->tm_sec;
    SStack_44.wMilliseconds = 0;
    SStack_54.wMilliseconds = 0;
    SStack_44.wYear = SStack_54.wYear;
    SStack_44.wMonth = SStack_54.wMonth;
    SStack_44.wDay = SStack_54.wDay;
    SStack_44.wHour = SStack_54.wHour;
    SStack_44.wMinute = SStack_54.wMinute;
    SStack_44.wSecond = SStack_54.wSecond;
    (*g_SystemTimeToFileTimeFunc)(&SStack_54,&_Stack_2c);
    (*g_LocalFileTimeToFileTimeFunc)(&_Stack_2c,&_Stack_34);
    (*g_SystemTimeToFileTimeFunc)(&SStack_44,&_Stack_2c);
    (*g_LocalFileTimeToFileTimeFunc)(&_Stack_2c,&_Stack_14);
    BVar2 = (*g_SetFileTimeFunc)(hFile,&_Stack_24,&_Stack_14,&_Stack_34);
    if (BVar2 == 0) {
      (*g_CloseHandleFunc)(hFile);
      DVar1 = __set_errno();
      return DVar1;
    }
    (*g_CloseHandleFunc)(hFile);
    DVar1 = 0;
  }
  return DVar1;
}
