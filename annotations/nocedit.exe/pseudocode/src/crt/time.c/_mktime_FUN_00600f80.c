// Name: crt_time.c__mktime_FUN_00600f80
// Address: 00600f80
// Address Range: [[00600f80, 00601132]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c__mktime_FUN_00600f80(_tm *timeptr)

#include "nocturne.h"

time_t __cdecl _mktime(_tm *timeptr)

{
  time_t tVar1;
  int iVar2;
  int iVar3;
  int iVar1;
  int iVar4;
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
    iVar2 = is_leap_year(iVar5 + 0x76c);
    if (iVar2 != 0) {
      psVar4 = &g_DaysInMonth_Leap;
    }
    iVar1 = iVar5 + 3 >> 0x1f;
    iVar1 = (int)psVar4[iVar3] +
            ((iVar5 * 0x16d + ((int)((iVar5 + 3 + iVar1 * -4) - (uint)(iVar1 << 1 < 0)) >> 2)) -
            (iVar5 + 99) / 100) + (iVar5 + 299) / 400 + timeptr->tm_mday;
    for (iVar4 = timeptr->tm_sec + (timeptr->tm_min + timeptr->tm_hour * 0x3c) * 0x3c;
        iVar1 = iVar1 + -1, iVar4 < 0; iVar4 = iVar4 + 0x15180) {
    }
    gmtime_r(iVar1,iVar4,0,timeptr);
    tzset();
    iVar4 = iVar4 + g_TimezoneOffset;
    if (timeptr->tm_isdst < 0) {
      determine_dst_status(timeptr);
    }
    if (0 < timeptr->tm_isdst) {
      iVar4 = iVar4 - g_DaylightSavingOffset;
    }
    for (; iVar4 < 0; iVar4 = iVar4 + 0x15180) {
      iVar1 = iVar1 + -1;
    }
    if (iVar1 < 0x63de) {
      return -1;
    }
    if (iVar1 == 0x63de) {
      tVar1 = iVar4 + -0x15180;
      if ((g_TimezoneOffset < 1) || (tVar1 < 0)) {
        return -1;
      }
    }
    else {
      tVar1 = iVar4 + (iVar1 + -0x63df) * 0x15180;
    }
  }
  return tVar1;
}
