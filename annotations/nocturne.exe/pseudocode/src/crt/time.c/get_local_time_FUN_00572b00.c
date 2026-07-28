// Name: crt_time.c_get_local_time_FUN_00572b00
// Address: 00572b00
// Address Range: [[00572b00, 00572b64]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_time_c_get_local_time_FUN_00572b00(_tm *tm_output)

#include "nocturne.h"

int __watcallStack get_local_time(_tm *tm_output)

{
  _SYSTEMTIME _Stack_14;
  
  GetLocalTime(&_Stack_14);
  tm_output->tm_year = _Stack_14.wYear - 0x76c;
  tm_output->tm_mon = _Stack_14.wMonth - 1;
  tm_output->tm_mday = (uint)_Stack_14.wDay;
  tm_output->tm_hour = (uint)_Stack_14.wHour;
  tm_output->tm_min = (uint)_Stack_14.wMinute;
  tm_output->tm_isdst = -1;
  tm_output->tm_sec = (uint)_Stack_14.wSecond;
  return (uint)_Stack_14.wMilliseconds;
}
