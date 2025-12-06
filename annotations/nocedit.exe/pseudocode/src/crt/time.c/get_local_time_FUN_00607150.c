// Name: crt_time.c_get_local_time_FUN_00607150
// Address: 00607150
// Address Range: [[00607150, 006071b4]]
// Convention: __watcallStack
// Signature: void crt_time.c_get_local_time_FUN_00607150(tm * tm_output)

#include "nocturne.h"

void __watcallStack crt_time_c_get_local_time_FUN_00607150(tm *tm_output)

{
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  ushort unaff_retaddr;
  _SYSTEMTIME _Stack_14;
  
  (*PTR_GetLocalTime_006115a8)(&_Stack_14);
  tm_output->tm_year = _Stack_14.wHour - 0x76c;
  tm_output->tm_mon = _Stack_14.wMinute - 1;
  tm_output->tm_mday = (uint)_Stack_14.wMilliseconds;
  tm_output->tm_hour = unaff_EBX & 0xffff;
  tm_output->tm_min = unaff_EBX >> 0x10;
  tm_output->tm_isdst = -1;
  tm_output->tm_sec = (uint)unaff_retaddr;
  return;
}
