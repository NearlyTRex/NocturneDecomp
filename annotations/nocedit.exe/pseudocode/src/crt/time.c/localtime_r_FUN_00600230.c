// Name: crt_time.c_localtime_r_FUN_00600230
// Address: 00600230
// Address Range: [[00600230, 00600285]]
// Convention: __cdecl
// Signature: _tm * __cdecl crt_time_c_localtime_r_FUN_00600230(time_t *timer,_tm *result)

#include "nocturne.h"

_tm * __cdecl localtime_r(time_t *timer,_tm *result)

{
  time_t tVar1;
  int iVar2;
  
  tzset();
  tVar1 = *timer;
  gmtime_r(0x63df,tVar1,g_TimezoneOffset,result);
  iVar2 = determine_dst_status(result);
  if (iVar2 != 0) {
    gmtime_r(0x63df,tVar1,g_TimezoneOffset - g_DaylightSavingOffset,result);
  }
  return result;
}
