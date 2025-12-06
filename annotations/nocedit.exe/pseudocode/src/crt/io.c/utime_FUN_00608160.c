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
  BADSPACEBASE *in_ESP;
  DWORD in_stack_0000001c;
  DWORD in_stack_00000020;
  uint uStack00000024;
  uint uStack00000030;
  uint uStack_18;
  
  hFile = (*PTR_CreateFileA_00611510)
                    (filename,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
  }
  else {
    BVar2 = (*PTR_GetFileTime_00611598)
                      (hFile,(LPFILETIME)&stack0xfffffffc,(LPFILETIME)&stack0x0000000c,
                       (LPFILETIME)&stack0xffffffec);
    if (BVar2 == 0) {
      (*CloseHandle)(hFile);
      DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar1;
    }
    if (timestamps == (utimbuf *)0x0) {
      in_stack_0000001c = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
      timestamps = (utimbuf *)&stack0x0000001c;
      in_stack_00000020 = in_stack_0000001c;
    }
    ptVar3 = crt_time_c_localtime_FUN_00600288(&timestamps->modtime);
    uStack_18._2_2_ = (short)ptVar3->tm_mon + 1;
    uStack_18._0_2_ = (short)ptVar3->tm_year + 0x76c;
    (*PTR_SystemTimeToFileTime_00611648)((SYSTEMTIME *)&uStack_18,(LPFILETIME)&stack0x00000010);
    uStack_18._0_2_ = 0x8274;
    uStack_18._2_2_ = 0x60;
    (*PTR_LocalFileTimeToFileTime_006115ec)
              ((FILETIME *)&stack0x0000001c,(LPFILETIME)&stack0x00000014);
    (*PTR_SystemTimeToFileTime_00611648)
              ((SYSTEMTIME *)&stack0x00000010,(LPFILETIME)&stack0x00000028);
    (*PTR_LocalFileTimeToFileTime_006115ec)
              ((FILETIME *)&stack0x00000034,(LPFILETIME)&stack0x0000004c);
    BVar2 = (*PTR_SetFileTime_00611630)
                      (hFile,(FILETIME *)&stack0x00000048,(FILETIME *)&stack0x00000058,
                       (FILETIME *)&stack0x00000038);
    if (BVar2 == 0) {
      uStack00000024 = 0x6082b9;
      (*CloseHandle)(hFile);
      uStack00000030 = 0x6082be;
      DVar1 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar1;
    }
    uStack00000024 = 0x6082cd;
    (*CloseHandle)(hFile);
    DVar1 = 0;
  }
  return DVar1;
}
