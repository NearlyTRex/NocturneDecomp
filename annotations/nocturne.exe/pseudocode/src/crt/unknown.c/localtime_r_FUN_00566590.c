// Name: crt_unknown.c_localtime_r_FUN_00566590
// Address: 00566590
// Address Range: [[00566590, 005665e5]]
// Convention: __cdecl
// Signature: _tm * __cdecl crt_unknown_c_localtime_r_FUN_00566590(time_t *timer,_tm *result)

#include "nocturne.h"

_tm * __cdecl localtime_r(time_t *timer,_tm *result)

{
  time_t seconds;
  int iVar1;
  
  tzset();
  seconds = *timer;
  gmtime_r(0x63df,seconds,DAT_005c1f14,result);
  iVar1 = determine_dst_status(result);
  if (iVar1 != 0) {
    gmtime_r(0x63df,seconds,DAT_005c1f14 - DAT_005c1f1c,result);
  }
  return result;
}
