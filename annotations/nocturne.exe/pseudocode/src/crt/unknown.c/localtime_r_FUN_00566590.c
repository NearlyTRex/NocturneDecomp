// Name: crt_unknown.c_localtime_r_FUN_00566590
// Address: 00566590
// Address Range: [[00566590, 005665e5]]
// Convention: __cdecl
// Signature: _tm * __cdecl crt_unknown_c_localtime_r_FUN_00566590(time_t *timer,_tm *result)

#include "nocturne.h"

_tm * __cdecl localtime_r(time_t *timer,_tm *result)

{
  time_t tVar1;
  int iVar2;
  
  tzset();
  tVar1 = *timer;
  gmtime_r(0x63df,tVar1,DAT_005c1f14,result);
  iVar2 = determine_dst_status(result);
  if (iVar2 != 0) {
    gmtime_r(0x63df,tVar1,DAT_005c1f14 - DAT_005c1f1c,result);
  }
  return result;
}
