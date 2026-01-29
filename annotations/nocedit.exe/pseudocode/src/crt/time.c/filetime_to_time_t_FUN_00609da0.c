// Name: crt_time.c_filetime_to_time_t_FUN_00609da0
// Address: 00609da0
// Address Range: [[00609da0, 00609e65]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c_filetime_to_time_t_FUN_00609da0(FILETIME *filetime)

#include "nocturne.h"

time_t __cdecl filetime_to_time_t(FILETIME *filetime)

{
  BOOL BVar1;
  time_t tVar2;
  _tm _Stack_40;
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
  _Stack_40.tm_year = _Stack_1c.wYear - 0x76c;
  _Stack_40.tm_mon = _Stack_1c.wMonth - 1;
  _Stack_40.tm_mday = (int)_Stack_1c.wDay;
  _Stack_40.tm_hour = (int)_Stack_1c.wHour;
  _Stack_40.tm_min = (int)_Stack_1c.wMinute;
  _Stack_40.tm_sec = (int)_Stack_1c.wSecond;
  _Stack_40.tm_wday = (int)_Stack_1c.wDayOfWeek;
  _Stack_40.tm_yday = -1;
  _Stack_40.tm_isdst = -1;
  tVar2 = _mktime(&_Stack_40);
  return tVar2;
}
