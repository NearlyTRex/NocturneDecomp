// Name: crt_time.c_localtime_r_FUN_00600230
// Address: 00600230
// Address Range: [[00600230, 00600285]]
// Convention: __cdecl
// Signature: tm * crt_time.c_localtime_r_FUN_00600230(time_t * timer, tm * result)

#include "nocturne.h"

tm * __cdecl crt_time_c_localtime_r_FUN_00600230(time_t *timer,tm *result)

{
  time_t tVar1;
  int iVar2;
  
  crt_time_c_tzset_FUN_006072f8();
  tVar1 = *timer;
  crt_time_c_gmtime_r_FUN_00607690(0x63df,tVar1,g_TimezoneOffset,result);
  iVar2 = crt_time_c_determine_dst_status_FUN_006079b4(result);
  if (iVar2 != 0) {
    crt_time_c_gmtime_r_FUN_00607690(0x63df,tVar1,g_TimezoneOffset - g_DaylightSavingOffset,result);
  }
  return result;
}
