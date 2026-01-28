// Name: crt_time.c_filetime_to_time_t_FUN_00609da0
// Address: 00609da0
// Address Range: [[00609da0, 00609e65]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c_filetime_to_time_t_FUN_00609da0(FILETIME *filetime)

#include "nocturne.h"

time_t __cdecl crt_time_c_filetime_to_time_t_FUN_00609da0(FILETIME *filetime)

{
  BOOL BVar1;
  time_t tVar2;
  tm tStack_40;
  _SYSTEMTIME _Stack_1c;
  _FILETIME local_c;
  
  if ((filetime->dwLowDateTime == 0) && (filetime->dwHighDateTime == 0)) {
    return -1;
  }
  BVar1 = (*g_FileTimeToLocalFileTimeFunc)(filetime,&local_c);
  if (BVar1 == 0) {
    return -1;
  }
  BVar1 = (*g_FileTimeToSystemTimeFunc)(&local_c,&_Stack_1c);
  if (BVar1 == 0) {
    return -1;
  }
  tStack_40.tm_year = _Stack_1c.wYear - 0x76c;
  tStack_40.tm_mon = _Stack_1c.wMonth - 1;
  tStack_40.tm_mday = (int)_Stack_1c.wDay;
  tStack_40.tm_hour = (int)_Stack_1c.wHour;
  tStack_40.tm_min = (int)_Stack_1c.wMinute;
  tStack_40.tm_sec = (int)_Stack_1c.wSecond;
  tStack_40.tm_wday = (int)_Stack_1c.wDayOfWeek;
  tStack_40.tm_yday = -1;
  tStack_40.tm_isdst = -1;
  tVar2 = crt_time_c_mktime_FUN_00600f80(&tStack_40);
  return tVar2;
}
