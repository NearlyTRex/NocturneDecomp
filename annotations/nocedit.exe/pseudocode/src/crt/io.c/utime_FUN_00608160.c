// Name: crt_io.c_utime_FUN_00608160
// Address: 00608160
// Address Range: [[00608160, 006082d5]]
// Convention: __cdecl
// Signature: int crt_io.c_utime_FUN_00608160(char * filename, utimbuf * timestamps)

#include "nocturne.h"

int __cdecl crt_io_c_utime_FUN_00608160(char *filename,utimbuf *timestamps)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  tm *ptVar3;
  SYSTEMTIME SStack_54;
  SYSTEMTIME SStack_44;
  _FILETIME _Stack_34;
  _FILETIME _Stack_2c;
  _FILETIME _Stack_24;
  utimbuf uStack_1c;
  _FILETIME _Stack_14;
  
  hFile = (*PTR_CreateFileA_00611510)
                    (filename,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
  }
  else {
    BVar2 = (*PTR_GetFileTime_00611598)(hFile,&_Stack_24,&_Stack_14,&_Stack_34);
    if (BVar2 == 0) {
      (*CloseHandle)(hFile);
      DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar1;
    }
    if (timestamps == (utimbuf *)0x0) {
      uStack_1c.actime = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
      timestamps = &uStack_1c;
      uStack_1c.modtime = uStack_1c.actime;
    }
    ptVar3 = crt_time_c_localtime_FUN_00600288(&timestamps->modtime);
    SStack_54.wYear = (short)ptVar3->tm_year + 0x76c;
    SStack_54.wMonth = (short)ptVar3->tm_mon + 1;
    SStack_54.wDay = (WORD)ptVar3->tm_mday;
    SStack_54.wHour = (WORD)ptVar3->tm_hour;
    SStack_54.wMinute = (WORD)ptVar3->tm_min;
    SStack_54.wSecond = (WORD)ptVar3->tm_sec;
    SStack_44.wMilliseconds = 0;
    SStack_54.wMilliseconds = 0;
    SStack_44.wYear = SStack_54.wYear;
    SStack_44.wMonth = SStack_54.wMonth;
    SStack_44.wDay = SStack_54.wDay;
    SStack_44.wHour = SStack_54.wHour;
    SStack_44.wMinute = SStack_54.wMinute;
    SStack_44.wSecond = SStack_54.wSecond;
    (*PTR_SystemTimeToFileTime_00611648)(&SStack_54,&_Stack_2c);
    (*PTR_LocalFileTimeToFileTime_006115ec)(&_Stack_2c,&_Stack_34);
    (*PTR_SystemTimeToFileTime_00611648)(&SStack_44,&_Stack_2c);
    (*PTR_LocalFileTimeToFileTime_006115ec)(&_Stack_2c,&_Stack_14);
    BVar2 = (*PTR_SetFileTime_00611630)(hFile,&_Stack_24,&_Stack_14,&_Stack_34);
    if (BVar2 == 0) {
      (*CloseHandle)(hFile);
      DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar1;
    }
    (*CloseHandle)(hFile);
    DVar1 = 0;
  }
  return DVar1;
}
