// Name: crt_time.c_mktime_FUN_00600f80
// Address: 00600f80
// Address Range: [[00600f80, 00601132]]
// Convention: __cdecl
// Signature: time_t crt_time.c_mktime_FUN_00600f80(tm * timeptr)

#include "nocturne.h"

time_t __cdecl crt_time_c_mktime_FUN_00600f80(tm *timeptr)

{
  time_t tVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  iVar3 = timeptr->tm_mon % 0xc;
  psVar4 = &g_DaysInMonth_Normal;
  if (timeptr->tm_year < -0xb04815f) {
    tVar1 = -1;
  }
  else {
    iVar5 = timeptr->tm_year + timeptr->tm_mon / 0xc;
    for (; iVar3 < 0; iVar3 = iVar3 + 0xc) {
      iVar5 = iVar5 + -1;
    }
    if (iVar5 < 0) {
      return -1;
    }
    iVar2 = crt_time_c_is_leap_year_FUN_00607820(iVar5 + 0x76c);
    if (iVar2 != 0) {
      psVar4 = &g_DaysInMonth_Leap;
    }
    iVar2 = iVar5 + 3 >> 0x1f;
    iVar3 = (int)psVar4[iVar3] +
            ((iVar5 * 0x16d + ((int)((iVar5 + 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2)) -
            (iVar5 + 99) / 100) + (iVar5 + 299) / 400 + timeptr->tm_mday;
    for (iVar5 = timeptr->tm_sec + (timeptr->tm_min + timeptr->tm_hour * 0x3c) * 0x3c;
        iVar3 = iVar3 + -1, iVar5 < 0; iVar5 = iVar5 + 0x15180) {
    }
    crt_time_c_gmtime_r_FUN_00607690(iVar3,iVar5,0,timeptr);
    crt_time_c_tzset_FUN_006072f8();
    iVar5 = iVar5 + g_TimezoneOffset;
    if (timeptr->tm_isdst < 0) {
      crt_time_c_determine_dst_status_FUN_006079b4(timeptr);
    }
    if (0 < timeptr->tm_isdst) {
      iVar5 = iVar5 - g_DaylightSavingOffset;
    }
    for (; iVar5 < 0; iVar5 = iVar5 + 0x15180) {
      iVar3 = iVar3 + -1;
    }
    if (iVar3 < 0x63de) {
      return -1;
    }
    if (iVar3 == 0x63de) {
      tVar1 = iVar5 + -0x15180;
      if ((g_TimezoneOffset < 1) || (tVar1 < 0)) {
        return -1;
      }
    }
    else {
      tVar1 = iVar5 + (iVar3 + -0x63df) * 0x15180;
    }
  }
  return tVar1;
}
